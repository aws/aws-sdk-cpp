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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef FinspaceClientConfiguration ClientConfigurationType;
      typedef FinspaceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration(),
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
                       const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Create a new FinSpace environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::CreateEnvironment, request, handler, context);
        }

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
         * <p>Delete an FinSpace environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::DeleteEnvironment, request, handler, context);
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
         * <p>Returns the FinSpace environment object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::GetEnvironment, request, handler, context);
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
         * <p>A list of all of your FinSpace environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::ListEnvironments, request, handler, context);
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
         * <p>Update your FinSpace environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&FinspaceClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FinspaceClient::UpdateEnvironment, request, handler, context);
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
