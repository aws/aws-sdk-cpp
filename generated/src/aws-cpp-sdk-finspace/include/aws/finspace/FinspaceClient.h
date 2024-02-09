/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/finspace/FinspaceServiceClientModel.h>

namespace Aws
{
namespace finspace
{
  /**
   * <p>The FinSpace management service provides the APIs for managing FinSpace
   * environments.</p>
   */
  class AWS_FINSPACE_API FinspaceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FinspaceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FinspaceClientConfiguration ClientConfigurationType;
      typedef FinspaceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration(),
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FinspaceClient();

        /**
         * <p> Creates a changeset for a kdb database. A changeset allows you to add and
         * delete existing files by using an ordered list of change requests.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxChangesetOutcome CreateKxChangeset(const Model::CreateKxChangesetRequest& request) const;

        /**
         * A Callable wrapper for CreateKxChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxChangesetRequestT = Model::CreateKxChangesetRequest>
        Model::CreateKxChangesetOutcomeCallable CreateKxChangesetCallable(const CreateKxChangesetRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxChangeset, request);
        }

        /**
         * An Async wrapper for CreateKxChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxChangesetRequestT = Model::CreateKxChangesetRequest>
        void CreateKxChangesetAsync(const CreateKxChangesetRequestT& request, const CreateKxChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxChangeset, request, handler, context);
        }

        /**
         * <p>Creates a new kdb cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxClusterOutcome CreateKxCluster(const Model::CreateKxClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateKxCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxClusterRequestT = Model::CreateKxClusterRequest>
        Model::CreateKxClusterOutcomeCallable CreateKxClusterCallable(const CreateKxClusterRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxCluster, request);
        }

        /**
         * An Async wrapper for CreateKxCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxClusterRequestT = Model::CreateKxClusterRequest>
        void CreateKxClusterAsync(const CreateKxClusterRequestT& request, const CreateKxClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxCluster, request, handler, context);
        }

        /**
         * <p>Creates a new kdb database in the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxDatabaseOutcome CreateKxDatabase(const Model::CreateKxDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateKxDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxDatabaseRequestT = Model::CreateKxDatabaseRequest>
        Model::CreateKxDatabaseOutcomeCallable CreateKxDatabaseCallable(const CreateKxDatabaseRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxDatabase, request);
        }

        /**
         * An Async wrapper for CreateKxDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxDatabaseRequestT = Model::CreateKxDatabaseRequest>
        void CreateKxDatabaseAsync(const CreateKxDatabaseRequestT& request, const CreateKxDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxDatabase, request, handler, context);
        }

        /**
         * <p> Creates a snapshot of kdb database with tiered storage capabilities and a
         * pre-warmed cache, ready for mounting on kdb clusters. Dataviews are only
         * available for clusters running on a scaling group. They are not supported on
         * dedicated clusters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxDataview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxDataviewOutcome CreateKxDataview(const Model::CreateKxDataviewRequest& request) const;

        /**
         * A Callable wrapper for CreateKxDataview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxDataviewRequestT = Model::CreateKxDataviewRequest>
        Model::CreateKxDataviewOutcomeCallable CreateKxDataviewCallable(const CreateKxDataviewRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxDataview, request);
        }

        /**
         * An Async wrapper for CreateKxDataview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxDataviewRequestT = Model::CreateKxDataviewRequest>
        void CreateKxDataviewAsync(const CreateKxDataviewRequestT& request, const CreateKxDataviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxDataview, request, handler, context);
        }

        /**
         * <p>Creates a managed kdb environment for the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxEnvironmentOutcome CreateKxEnvironment(const Model::CreateKxEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateKxEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxEnvironmentRequestT = Model::CreateKxEnvironmentRequest>
        Model::CreateKxEnvironmentOutcomeCallable CreateKxEnvironmentCallable(const CreateKxEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxEnvironment, request);
        }

        /**
         * An Async wrapper for CreateKxEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxEnvironmentRequestT = Model::CreateKxEnvironmentRequest>
        void CreateKxEnvironmentAsync(const CreateKxEnvironmentRequestT& request, const CreateKxEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxEnvironment, request, handler, context);
        }

        /**
         * <p>Creates a new scaling group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxScalingGroupOutcome CreateKxScalingGroup(const Model::CreateKxScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateKxScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxScalingGroupRequestT = Model::CreateKxScalingGroupRequest>
        Model::CreateKxScalingGroupOutcomeCallable CreateKxScalingGroupCallable(const CreateKxScalingGroupRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxScalingGroup, request);
        }

        /**
         * An Async wrapper for CreateKxScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxScalingGroupRequestT = Model::CreateKxScalingGroupRequest>
        void CreateKxScalingGroupAsync(const CreateKxScalingGroupRequestT& request, const CreateKxScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxScalingGroup, request, handler, context);
        }

        /**
         * <p>Creates a user in FinSpace kdb environment with an associated IAM
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxUserOutcome CreateKxUser(const Model::CreateKxUserRequest& request) const;

        /**
         * A Callable wrapper for CreateKxUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxUserRequestT = Model::CreateKxUserRequest>
        Model::CreateKxUserOutcomeCallable CreateKxUserCallable(const CreateKxUserRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxUser, request);
        }

        /**
         * An Async wrapper for CreateKxUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxUserRequestT = Model::CreateKxUserRequest>
        void CreateKxUserAsync(const CreateKxUserRequestT& request, const CreateKxUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxUser, request, handler, context);
        }

        /**
         * <p> Creates a new volume with a specific amount of throughput and storage
         * capacity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateKxVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKxVolumeOutcome CreateKxVolume(const Model::CreateKxVolumeRequest& request) const;

        /**
         * A Callable wrapper for CreateKxVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKxVolumeRequestT = Model::CreateKxVolumeRequest>
        Model::CreateKxVolumeOutcomeCallable CreateKxVolumeCallable(const CreateKxVolumeRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateKxVolume, request);
        }

        /**
         * An Async wrapper for CreateKxVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKxVolumeRequestT = Model::CreateKxVolumeRequest>
        void CreateKxVolumeAsync(const CreateKxVolumeRequestT& request, const CreateKxVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateKxVolume, request, handler, context);
        }

        /**
         * <p>Deletes a kdb cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxClusterOutcome DeleteKxCluster(const Model::DeleteKxClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxClusterRequestT = Model::DeleteKxClusterRequest>
        Model::DeleteKxClusterOutcomeCallable DeleteKxClusterCallable(const DeleteKxClusterRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxCluster, request);
        }

        /**
         * An Async wrapper for DeleteKxCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxClusterRequestT = Model::DeleteKxClusterRequest>
        void DeleteKxClusterAsync(const DeleteKxClusterRequestT& request, const DeleteKxClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxCluster, request, handler, context);
        }

        /**
         * <p>Deletes the specified database and all of its associated data. This action is
         * irreversible. You must copy any data out of the database before deleting it if
         * the data is to be retained.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxDatabaseOutcome DeleteKxDatabase(const Model::DeleteKxDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxDatabaseRequestT = Model::DeleteKxDatabaseRequest>
        Model::DeleteKxDatabaseOutcomeCallable DeleteKxDatabaseCallable(const DeleteKxDatabaseRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxDatabase, request);
        }

        /**
         * An Async wrapper for DeleteKxDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxDatabaseRequestT = Model::DeleteKxDatabaseRequest>
        void DeleteKxDatabaseAsync(const DeleteKxDatabaseRequestT& request, const DeleteKxDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxDatabase, request, handler, context);
        }

        /**
         * <p> Deletes the specified dataview. Before deleting a dataview, make sure that
         * it is not in use by any cluster. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxDataview">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxDataviewOutcome DeleteKxDataview(const Model::DeleteKxDataviewRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxDataview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxDataviewRequestT = Model::DeleteKxDataviewRequest>
        Model::DeleteKxDataviewOutcomeCallable DeleteKxDataviewCallable(const DeleteKxDataviewRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxDataview, request);
        }

        /**
         * An Async wrapper for DeleteKxDataview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxDataviewRequestT = Model::DeleteKxDataviewRequest>
        void DeleteKxDataviewAsync(const DeleteKxDataviewRequestT& request, const DeleteKxDataviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxDataview, request, handler, context);
        }

        /**
         * <p>Deletes the kdb environment. This action is irreversible. Deleting a kdb
         * environment will remove all the associated data and any services running in it.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxEnvironmentOutcome DeleteKxEnvironment(const Model::DeleteKxEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxEnvironmentRequestT = Model::DeleteKxEnvironmentRequest>
        Model::DeleteKxEnvironmentOutcomeCallable DeleteKxEnvironmentCallable(const DeleteKxEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteKxEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxEnvironmentRequestT = Model::DeleteKxEnvironmentRequest>
        void DeleteKxEnvironmentAsync(const DeleteKxEnvironmentRequestT& request, const DeleteKxEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxEnvironment, request, handler, context);
        }

        /**
         * <p> Deletes the specified scaling group. This action is irreversible. You cannot
         * delete a scaling group until all the clusters running on it have been
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxScalingGroupOutcome DeleteKxScalingGroup(const Model::DeleteKxScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxScalingGroupRequestT = Model::DeleteKxScalingGroupRequest>
        Model::DeleteKxScalingGroupOutcomeCallable DeleteKxScalingGroupCallable(const DeleteKxScalingGroupRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxScalingGroup, request);
        }

        /**
         * An Async wrapper for DeleteKxScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxScalingGroupRequestT = Model::DeleteKxScalingGroupRequest>
        void DeleteKxScalingGroupAsync(const DeleteKxScalingGroupRequestT& request, const DeleteKxScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxScalingGroup, request, handler, context);
        }

        /**
         * <p>Deletes a user in the specified kdb environment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxUserOutcome DeleteKxUser(const Model::DeleteKxUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxUserRequestT = Model::DeleteKxUserRequest>
        Model::DeleteKxUserOutcomeCallable DeleteKxUserCallable(const DeleteKxUserRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxUser, request);
        }

        /**
         * An Async wrapper for DeleteKxUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxUserRequestT = Model::DeleteKxUserRequest>
        void DeleteKxUserAsync(const DeleteKxUserRequestT& request, const DeleteKxUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxUser, request, handler, context);
        }

        /**
         * <p> Deletes a volume. You can only delete a volume if it's not attached to a
         * cluster or a dataview. When a volume is deleted, any data on the volume is lost.
         * This action is irreversible. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteKxVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKxVolumeOutcome DeleteKxVolume(const Model::DeleteKxVolumeRequest& request) const;

        /**
         * A Callable wrapper for DeleteKxVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKxVolumeRequestT = Model::DeleteKxVolumeRequest>
        Model::DeleteKxVolumeOutcomeCallable DeleteKxVolumeCallable(const DeleteKxVolumeRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteKxVolume, request);
        }

        /**
         * An Async wrapper for DeleteKxVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKxVolumeRequestT = Model::DeleteKxVolumeRequest>
        void DeleteKxVolumeAsync(const DeleteKxVolumeRequestT& request, const DeleteKxVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteKxVolume, request, handler, context);
        }

        /**
         * <p>Returns information about a kdb changeset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxChangeset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxChangesetOutcome GetKxChangeset(const Model::GetKxChangesetRequest& request) const;

        /**
         * A Callable wrapper for GetKxChangeset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxChangesetRequestT = Model::GetKxChangesetRequest>
        Model::GetKxChangesetOutcomeCallable GetKxChangesetCallable(const GetKxChangesetRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxChangeset, request);
        }

        /**
         * An Async wrapper for GetKxChangeset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxChangesetRequestT = Model::GetKxChangesetRequest>
        void GetKxChangesetAsync(const GetKxChangesetRequestT& request, const GetKxChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxChangeset, request, handler, context);
        }

        /**
         * <p>Retrieves information about a kdb cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxClusterOutcome GetKxCluster(const Model::GetKxClusterRequest& request) const;

        /**
         * A Callable wrapper for GetKxCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxClusterRequestT = Model::GetKxClusterRequest>
        Model::GetKxClusterOutcomeCallable GetKxClusterCallable(const GetKxClusterRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxCluster, request);
        }

        /**
         * An Async wrapper for GetKxCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxClusterRequestT = Model::GetKxClusterRequest>
        void GetKxClusterAsync(const GetKxClusterRequestT& request, const GetKxClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxCluster, request, handler, context);
        }

        /**
         * <p>Retrieves a connection string for a user to connect to a kdb cluster. You
         * must call this API using the same role that you have defined while creating a
         * user. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxConnectionString">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxConnectionStringOutcome GetKxConnectionString(const Model::GetKxConnectionStringRequest& request) const;

        /**
         * A Callable wrapper for GetKxConnectionString that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxConnectionStringRequestT = Model::GetKxConnectionStringRequest>
        Model::GetKxConnectionStringOutcomeCallable GetKxConnectionStringCallable(const GetKxConnectionStringRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxConnectionString, request);
        }

        /**
         * An Async wrapper for GetKxConnectionString that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxConnectionStringRequestT = Model::GetKxConnectionStringRequest>
        void GetKxConnectionStringAsync(const GetKxConnectionStringRequestT& request, const GetKxConnectionStringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxConnectionString, request, handler, context);
        }

        /**
         * <p>Returns database information for the specified environment ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxDatabaseOutcome GetKxDatabase(const Model::GetKxDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetKxDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxDatabaseRequestT = Model::GetKxDatabaseRequest>
        Model::GetKxDatabaseOutcomeCallable GetKxDatabaseCallable(const GetKxDatabaseRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxDatabase, request);
        }

        /**
         * An Async wrapper for GetKxDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxDatabaseRequestT = Model::GetKxDatabaseRequest>
        void GetKxDatabaseAsync(const GetKxDatabaseRequestT& request, const GetKxDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxDatabase, request, handler, context);
        }

        /**
         * <p> Retrieves details of the dataview. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxDataview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxDataviewOutcome GetKxDataview(const Model::GetKxDataviewRequest& request) const;

        /**
         * A Callable wrapper for GetKxDataview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxDataviewRequestT = Model::GetKxDataviewRequest>
        Model::GetKxDataviewOutcomeCallable GetKxDataviewCallable(const GetKxDataviewRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxDataview, request);
        }

        /**
         * An Async wrapper for GetKxDataview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxDataviewRequestT = Model::GetKxDataviewRequest>
        void GetKxDataviewAsync(const GetKxDataviewRequestT& request, const GetKxDataviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxDataview, request, handler, context);
        }

        /**
         * <p>Retrieves all the information for the specified kdb
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxEnvironmentOutcome GetKxEnvironment(const Model::GetKxEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetKxEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxEnvironmentRequestT = Model::GetKxEnvironmentRequest>
        Model::GetKxEnvironmentOutcomeCallable GetKxEnvironmentCallable(const GetKxEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxEnvironment, request);
        }

        /**
         * An Async wrapper for GetKxEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxEnvironmentRequestT = Model::GetKxEnvironmentRequest>
        void GetKxEnvironmentAsync(const GetKxEnvironmentRequestT& request, const GetKxEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxEnvironment, request, handler, context);
        }

        /**
         * <p> Retrieves details of a scaling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxScalingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxScalingGroupOutcome GetKxScalingGroup(const Model::GetKxScalingGroupRequest& request) const;

        /**
         * A Callable wrapper for GetKxScalingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxScalingGroupRequestT = Model::GetKxScalingGroupRequest>
        Model::GetKxScalingGroupOutcomeCallable GetKxScalingGroupCallable(const GetKxScalingGroupRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxScalingGroup, request);
        }

        /**
         * An Async wrapper for GetKxScalingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxScalingGroupRequestT = Model::GetKxScalingGroupRequest>
        void GetKxScalingGroupAsync(const GetKxScalingGroupRequestT& request, const GetKxScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxScalingGroup, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified kdb user.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxUserOutcome GetKxUser(const Model::GetKxUserRequest& request) const;

        /**
         * A Callable wrapper for GetKxUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxUserRequestT = Model::GetKxUserRequest>
        Model::GetKxUserOutcomeCallable GetKxUserCallable(const GetKxUserRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxUser, request);
        }

        /**
         * An Async wrapper for GetKxUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxUserRequestT = Model::GetKxUserRequest>
        void GetKxUserAsync(const GetKxUserRequestT& request, const GetKxUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxUser, request, handler, context);
        }

        /**
         * <p> Retrieves the information about the volume. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetKxVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKxVolumeOutcome GetKxVolume(const Model::GetKxVolumeRequest& request) const;

        /**
         * A Callable wrapper for GetKxVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKxVolumeRequestT = Model::GetKxVolumeRequest>
        Model::GetKxVolumeOutcomeCallable GetKxVolumeCallable(const GetKxVolumeRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetKxVolume, request);
        }

        /**
         * An Async wrapper for GetKxVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKxVolumeRequestT = Model::GetKxVolumeRequest>
        void GetKxVolumeAsync(const GetKxVolumeRequestT& request, const GetKxVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetKxVolume, request, handler, context);
        }

        /**
         * <p>Returns a list of all the changesets for a database.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxChangesets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxChangesetsOutcome ListKxChangesets(const Model::ListKxChangesetsRequest& request) const;

        /**
         * A Callable wrapper for ListKxChangesets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxChangesetsRequestT = Model::ListKxChangesetsRequest>
        Model::ListKxChangesetsOutcomeCallable ListKxChangesetsCallable(const ListKxChangesetsRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxChangesets, request);
        }

        /**
         * An Async wrapper for ListKxChangesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxChangesetsRequestT = Model::ListKxChangesetsRequest>
        void ListKxChangesetsAsync(const ListKxChangesetsRequestT& request, const ListKxChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxChangesets, request, handler, context);
        }

        /**
         * <p>Lists all the nodes in a kdb cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxClusterNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxClusterNodesOutcome ListKxClusterNodes(const Model::ListKxClusterNodesRequest& request) const;

        /**
         * A Callable wrapper for ListKxClusterNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxClusterNodesRequestT = Model::ListKxClusterNodesRequest>
        Model::ListKxClusterNodesOutcomeCallable ListKxClusterNodesCallable(const ListKxClusterNodesRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxClusterNodes, request);
        }

        /**
         * An Async wrapper for ListKxClusterNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxClusterNodesRequestT = Model::ListKxClusterNodesRequest>
        void ListKxClusterNodesAsync(const ListKxClusterNodesRequestT& request, const ListKxClusterNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxClusterNodes, request, handler, context);
        }

        /**
         * <p>Returns a list of clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxClustersOutcome ListKxClusters(const Model::ListKxClustersRequest& request) const;

        /**
         * A Callable wrapper for ListKxClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxClustersRequestT = Model::ListKxClustersRequest>
        Model::ListKxClustersOutcomeCallable ListKxClustersCallable(const ListKxClustersRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxClusters, request);
        }

        /**
         * An Async wrapper for ListKxClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxClustersRequestT = Model::ListKxClustersRequest>
        void ListKxClustersAsync(const ListKxClustersRequestT& request, const ListKxClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of all the databases in the kdb environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxDatabasesOutcome ListKxDatabases(const Model::ListKxDatabasesRequest& request) const;

        /**
         * A Callable wrapper for ListKxDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxDatabasesRequestT = Model::ListKxDatabasesRequest>
        Model::ListKxDatabasesOutcomeCallable ListKxDatabasesCallable(const ListKxDatabasesRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxDatabases, request);
        }

        /**
         * An Async wrapper for ListKxDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxDatabasesRequestT = Model::ListKxDatabasesRequest>
        void ListKxDatabasesAsync(const ListKxDatabasesRequestT& request, const ListKxDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxDatabases, request, handler, context);
        }

        /**
         * <p> Returns a list of all the dataviews in the database.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxDataviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxDataviewsOutcome ListKxDataviews(const Model::ListKxDataviewsRequest& request) const;

        /**
         * A Callable wrapper for ListKxDataviews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxDataviewsRequestT = Model::ListKxDataviewsRequest>
        Model::ListKxDataviewsOutcomeCallable ListKxDataviewsCallable(const ListKxDataviewsRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxDataviews, request);
        }

        /**
         * An Async wrapper for ListKxDataviews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxDataviewsRequestT = Model::ListKxDataviewsRequest>
        void ListKxDataviewsAsync(const ListKxDataviewsRequestT& request, const ListKxDataviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxDataviews, request, handler, context);
        }

        /**
         * <p>Returns a list of kdb environments created in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxEnvironmentsOutcome ListKxEnvironments(const Model::ListKxEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListKxEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxEnvironmentsRequestT = Model::ListKxEnvironmentsRequest>
        Model::ListKxEnvironmentsOutcomeCallable ListKxEnvironmentsCallable(const ListKxEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxEnvironments, request);
        }

        /**
         * An Async wrapper for ListKxEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxEnvironmentsRequestT = Model::ListKxEnvironmentsRequest>
        void ListKxEnvironmentsAsync(const ListKxEnvironmentsRequestT& request, const ListKxEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxEnvironments, request, handler, context);
        }

        /**
         * <p> Returns a list of scaling groups in a kdb environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxScalingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxScalingGroupsOutcome ListKxScalingGroups(const Model::ListKxScalingGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListKxScalingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxScalingGroupsRequestT = Model::ListKxScalingGroupsRequest>
        Model::ListKxScalingGroupsOutcomeCallable ListKxScalingGroupsCallable(const ListKxScalingGroupsRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxScalingGroups, request);
        }

        /**
         * An Async wrapper for ListKxScalingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxScalingGroupsRequestT = Model::ListKxScalingGroupsRequest>
        void ListKxScalingGroupsAsync(const ListKxScalingGroupsRequestT& request, const ListKxScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxScalingGroups, request, handler, context);
        }

        /**
         * <p>Lists all the users in a kdb environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxUsersOutcome ListKxUsers(const Model::ListKxUsersRequest& request) const;

        /**
         * A Callable wrapper for ListKxUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxUsersRequestT = Model::ListKxUsersRequest>
        Model::ListKxUsersOutcomeCallable ListKxUsersCallable(const ListKxUsersRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxUsers, request);
        }

        /**
         * An Async wrapper for ListKxUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxUsersRequestT = Model::ListKxUsersRequest>
        void ListKxUsersAsync(const ListKxUsersRequestT& request, const ListKxUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxUsers, request, handler, context);
        }

        /**
         * <p> Lists all the volumes in a kdb environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListKxVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKxVolumesOutcome ListKxVolumes(const Model::ListKxVolumesRequest& request) const;

        /**
         * A Callable wrapper for ListKxVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKxVolumesRequestT = Model::ListKxVolumesRequest>
        Model::ListKxVolumesOutcomeCallable ListKxVolumesCallable(const ListKxVolumesRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListKxVolumes, request);
        }

        /**
         * An Async wrapper for ListKxVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKxVolumesRequestT = Model::ListKxVolumesRequest>
        void ListKxVolumesAsync(const ListKxVolumesRequestT& request, const ListKxVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListKxVolumes, request, handler, context);
        }

        /**
         * <p>A list of all tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to a FinSpace resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from a FinSpace resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Allows you to update code configuration on a running cluster. By using this
         * API you can update the code, the initialization script path, and the command
         * line arguments for a specific cluster. The configuration that you want to update
         * will override any existing configurations on the cluster. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxClusterCodeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxClusterCodeConfigurationOutcome UpdateKxClusterCodeConfiguration(const Model::UpdateKxClusterCodeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxClusterCodeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxClusterCodeConfigurationRequestT = Model::UpdateKxClusterCodeConfigurationRequest>
        Model::UpdateKxClusterCodeConfigurationOutcomeCallable UpdateKxClusterCodeConfigurationCallable(const UpdateKxClusterCodeConfigurationRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxClusterCodeConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateKxClusterCodeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxClusterCodeConfigurationRequestT = Model::UpdateKxClusterCodeConfigurationRequest>
        void UpdateKxClusterCodeConfigurationAsync(const UpdateKxClusterCodeConfigurationRequestT& request, const UpdateKxClusterCodeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxClusterCodeConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the databases mounted on a kdb cluster, which includes the
         * <code>changesetId</code> and all the dbPaths to be cached. This API does not
         * allow you to change a database name or add a database if you created a cluster
         * without one. </p> <p>Using this API you can point a cluster to a different
         * changeset and modify a list of partitions being cached.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxClusterDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxClusterDatabasesOutcome UpdateKxClusterDatabases(const Model::UpdateKxClusterDatabasesRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxClusterDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxClusterDatabasesRequestT = Model::UpdateKxClusterDatabasesRequest>
        Model::UpdateKxClusterDatabasesOutcomeCallable UpdateKxClusterDatabasesCallable(const UpdateKxClusterDatabasesRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxClusterDatabases, request);
        }

        /**
         * An Async wrapper for UpdateKxClusterDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxClusterDatabasesRequestT = Model::UpdateKxClusterDatabasesRequest>
        void UpdateKxClusterDatabasesAsync(const UpdateKxClusterDatabasesRequestT& request, const UpdateKxClusterDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxClusterDatabases, request, handler, context);
        }

        /**
         * <p>Updates information for the given kdb database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxDatabaseOutcome UpdateKxDatabase(const Model::UpdateKxDatabaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxDatabaseRequestT = Model::UpdateKxDatabaseRequest>
        Model::UpdateKxDatabaseOutcomeCallable UpdateKxDatabaseCallable(const UpdateKxDatabaseRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxDatabase, request);
        }

        /**
         * An Async wrapper for UpdateKxDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxDatabaseRequestT = Model::UpdateKxDatabaseRequest>
        void UpdateKxDatabaseAsync(const UpdateKxDatabaseRequestT& request, const UpdateKxDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxDatabase, request, handler, context);
        }

        /**
         * <p> Updates the specified dataview. The dataviews get automatically updated when
         * any new changesets are ingested. Each update of the dataview creates a new
         * version, including changeset details and cache configurations</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxDataview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxDataviewOutcome UpdateKxDataview(const Model::UpdateKxDataviewRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxDataview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxDataviewRequestT = Model::UpdateKxDataviewRequest>
        Model::UpdateKxDataviewOutcomeCallable UpdateKxDataviewCallable(const UpdateKxDataviewRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxDataview, request);
        }

        /**
         * An Async wrapper for UpdateKxDataview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxDataviewRequestT = Model::UpdateKxDataviewRequest>
        void UpdateKxDataviewAsync(const UpdateKxDataviewRequestT& request, const UpdateKxDataviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxDataview, request, handler, context);
        }

        /**
         * <p>Updates information for the given kdb environment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxEnvironmentOutcome UpdateKxEnvironment(const Model::UpdateKxEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxEnvironmentRequestT = Model::UpdateKxEnvironmentRequest>
        Model::UpdateKxEnvironmentOutcomeCallable UpdateKxEnvironmentCallable(const UpdateKxEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateKxEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxEnvironmentRequestT = Model::UpdateKxEnvironmentRequest>
        void UpdateKxEnvironmentAsync(const UpdateKxEnvironmentRequestT& request, const UpdateKxEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxEnvironment, request, handler, context);
        }

        /**
         * <p>Updates environment network to connect to your internal network by using a
         * transit gateway. This API supports request to create a transit gateway
         * attachment from FinSpace VPC to your transit gateway ID and create a custom
         * Route-53 outbound resolvers.</p> <p>Once you send a request to update a network,
         * you cannot change it again. Network update might require termination of any
         * clusters that are running in the existing network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxEnvironmentNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxEnvironmentNetworkOutcome UpdateKxEnvironmentNetwork(const Model::UpdateKxEnvironmentNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxEnvironmentNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxEnvironmentNetworkRequestT = Model::UpdateKxEnvironmentNetworkRequest>
        Model::UpdateKxEnvironmentNetworkOutcomeCallable UpdateKxEnvironmentNetworkCallable(const UpdateKxEnvironmentNetworkRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxEnvironmentNetwork, request);
        }

        /**
         * An Async wrapper for UpdateKxEnvironmentNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxEnvironmentNetworkRequestT = Model::UpdateKxEnvironmentNetworkRequest>
        void UpdateKxEnvironmentNetworkAsync(const UpdateKxEnvironmentNetworkRequestT& request, const UpdateKxEnvironmentNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxEnvironmentNetwork, request, handler, context);
        }

        /**
         * <p>Updates the user details. You can only update the IAM role associated with a
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxUserOutcome UpdateKxUser(const Model::UpdateKxUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxUserRequestT = Model::UpdateKxUserRequest>
        Model::UpdateKxUserOutcomeCallable UpdateKxUserCallable(const UpdateKxUserRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxUser, request);
        }

        /**
         * An Async wrapper for UpdateKxUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxUserRequestT = Model::UpdateKxUserRequest>
        void UpdateKxUserAsync(const UpdateKxUserRequestT& request, const UpdateKxUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxUser, request, handler, context);
        }

        /**
         * <p> Updates the throughput or capacity of a volume. During the update process,
         * the filesystem might be unavailable for a few minutes. You can retry any
         * operations after the update is complete. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateKxVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKxVolumeOutcome UpdateKxVolume(const Model::UpdateKxVolumeRequest& request) const;

        /**
         * A Callable wrapper for UpdateKxVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKxVolumeRequestT = Model::UpdateKxVolumeRequest>
        Model::UpdateKxVolumeOutcomeCallable UpdateKxVolumeCallable(const UpdateKxVolumeRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateKxVolume, request);
        }

        /**
         * An Async wrapper for UpdateKxVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKxVolumeRequestT = Model::UpdateKxVolumeRequest>
        void UpdateKxVolumeAsync(const UpdateKxVolumeRequestT& request, const UpdateKxVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateKxVolume, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FinspaceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FinspaceClient>;
      void init(const FinspaceClientConfiguration& clientConfiguration);

      FinspaceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FinspaceEndpointProviderBase> m_endpointProvider;
  };

} // namespace finspace
} // namespace Aws
