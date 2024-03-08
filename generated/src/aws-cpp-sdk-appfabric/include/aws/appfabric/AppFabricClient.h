/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appfabric/AppFabricServiceClientModel.h>

namespace Aws
{
namespace AppFabric
{
  /**
   * <p>Amazon Web Services AppFabric quickly connects software as a service (SaaS)
   * applications across your organization. This allows IT and security teams to
   * easily manage and secure applications using a standard schema, and employees can
   * complete everyday tasks faster using generative artificial intelligence (AI).
   * You can use these APIs to complete AppFabric tasks, such as setting up audit log
   * ingestions or viewing user access. For more information about AppFabric,
   * including the required permissions to use the service, see the <a
   * href="https://docs.aws.amazon.com/appfabric/latest/adminguide/">Amazon Web
   * Services AppFabric Administration Guide</a>. For more information about using
   * the Command Line Interface (CLI) to manage your AppFabric resources, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/appfabric/index.html">AppFabric
   * section of the CLI Reference</a>.</p>
   */
  class AWS_APPFABRIC_API AppFabricClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppFabricClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppFabricClientConfiguration ClientConfigurationType;
      typedef AppFabricEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppFabricClient(const Aws::AppFabric::AppFabricClientConfiguration& clientConfiguration = Aws::AppFabric::AppFabricClientConfiguration(),
                        std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppFabricClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppFabric::AppFabricClientConfiguration& clientConfiguration = Aws::AppFabric::AppFabricClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppFabricClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppFabric::AppFabricClientConfiguration& clientConfiguration = Aws::AppFabric::AppFabricClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppFabricClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppFabricClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppFabricClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppFabricClient();

        /**
         * <p>Gets user access details in a batch request.</p> <p>This action polls data
         * from the tasks that are kicked off by the <code>StartUserAccessTasks</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/BatchGetUserAccessTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetUserAccessTasksOutcome BatchGetUserAccessTasks(const Model::BatchGetUserAccessTasksRequest& request) const;

        /**
         * A Callable wrapper for BatchGetUserAccessTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetUserAccessTasksRequestT = Model::BatchGetUserAccessTasksRequest>
        Model::BatchGetUserAccessTasksOutcomeCallable BatchGetUserAccessTasksCallable(const BatchGetUserAccessTasksRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::BatchGetUserAccessTasks, request);
        }

        /**
         * An Async wrapper for BatchGetUserAccessTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetUserAccessTasksRequestT = Model::BatchGetUserAccessTasksRequest>
        void BatchGetUserAccessTasksAsync(const BatchGetUserAccessTasksRequestT& request, const BatchGetUserAccessTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::BatchGetUserAccessTasks, request, handler, context);
        }

        /**
         * <p>Establishes a connection between Amazon Web Services AppFabric and an
         * application, which allows AppFabric to call the APIs of the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ConnectAppAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::ConnectAppAuthorizationOutcome ConnectAppAuthorization(const Model::ConnectAppAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for ConnectAppAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConnectAppAuthorizationRequestT = Model::ConnectAppAuthorizationRequest>
        Model::ConnectAppAuthorizationOutcomeCallable ConnectAppAuthorizationCallable(const ConnectAppAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::ConnectAppAuthorization, request);
        }

        /**
         * An Async wrapper for ConnectAppAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConnectAppAuthorizationRequestT = Model::ConnectAppAuthorizationRequest>
        void ConnectAppAuthorizationAsync(const ConnectAppAuthorizationRequestT& request, const ConnectAppAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::ConnectAppAuthorization, request, handler, context);
        }

        /**
         * <p>Creates an app authorization within an app bundle, which allows AppFabric to
         * connect to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/CreateAppAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppAuthorizationOutcome CreateAppAuthorization(const Model::CreateAppAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for CreateAppAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppAuthorizationRequestT = Model::CreateAppAuthorizationRequest>
        Model::CreateAppAuthorizationOutcomeCallable CreateAppAuthorizationCallable(const CreateAppAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::CreateAppAuthorization, request);
        }

        /**
         * An Async wrapper for CreateAppAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppAuthorizationRequestT = Model::CreateAppAuthorizationRequest>
        void CreateAppAuthorizationAsync(const CreateAppAuthorizationRequestT& request, const CreateAppAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::CreateAppAuthorization, request, handler, context);
        }

        /**
         * <p>Creates an app bundle to collect data from an application using
         * AppFabric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/CreateAppBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppBundleOutcome CreateAppBundle(const Model::CreateAppBundleRequest& request) const;

        /**
         * A Callable wrapper for CreateAppBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppBundleRequestT = Model::CreateAppBundleRequest>
        Model::CreateAppBundleOutcomeCallable CreateAppBundleCallable(const CreateAppBundleRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::CreateAppBundle, request);
        }

        /**
         * An Async wrapper for CreateAppBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppBundleRequestT = Model::CreateAppBundleRequest>
        void CreateAppBundleAsync(const CreateAppBundleRequestT& request, const CreateAppBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::CreateAppBundle, request, handler, context);
        }

        /**
         * <p>Creates a data ingestion for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/CreateIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestionOutcome CreateIngestion(const Model::CreateIngestionRequest& request) const;

        /**
         * A Callable wrapper for CreateIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIngestionRequestT = Model::CreateIngestionRequest>
        Model::CreateIngestionOutcomeCallable CreateIngestionCallable(const CreateIngestionRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::CreateIngestion, request);
        }

        /**
         * An Async wrapper for CreateIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIngestionRequestT = Model::CreateIngestionRequest>
        void CreateIngestionAsync(const CreateIngestionRequestT& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::CreateIngestion, request, handler, context);
        }

        /**
         * <p>Creates an ingestion destination, which specifies how an application's
         * ingested data is processed by Amazon Web Services AppFabric and where it's
         * delivered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/CreateIngestionDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestionDestinationOutcome CreateIngestionDestination(const Model::CreateIngestionDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateIngestionDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIngestionDestinationRequestT = Model::CreateIngestionDestinationRequest>
        Model::CreateIngestionDestinationOutcomeCallable CreateIngestionDestinationCallable(const CreateIngestionDestinationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::CreateIngestionDestination, request);
        }

        /**
         * An Async wrapper for CreateIngestionDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIngestionDestinationRequestT = Model::CreateIngestionDestinationRequest>
        void CreateIngestionDestinationAsync(const CreateIngestionDestinationRequestT& request, const CreateIngestionDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::CreateIngestionDestination, request, handler, context);
        }

        /**
         * <p>Deletes an app authorization. You must delete the associated ingestion before
         * you can delete an app authorization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/DeleteAppAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppAuthorizationOutcome DeleteAppAuthorization(const Model::DeleteAppAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppAuthorizationRequestT = Model::DeleteAppAuthorizationRequest>
        Model::DeleteAppAuthorizationOutcomeCallable DeleteAppAuthorizationCallable(const DeleteAppAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::DeleteAppAuthorization, request);
        }

        /**
         * An Async wrapper for DeleteAppAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppAuthorizationRequestT = Model::DeleteAppAuthorizationRequest>
        void DeleteAppAuthorizationAsync(const DeleteAppAuthorizationRequestT& request, const DeleteAppAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::DeleteAppAuthorization, request, handler, context);
        }

        /**
         * <p>Deletes an app bundle. You must delete all associated app authorizations
         * before you can delete an app bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/DeleteAppBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppBundleOutcome DeleteAppBundle(const Model::DeleteAppBundleRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppBundleRequestT = Model::DeleteAppBundleRequest>
        Model::DeleteAppBundleOutcomeCallable DeleteAppBundleCallable(const DeleteAppBundleRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::DeleteAppBundle, request);
        }

        /**
         * An Async wrapper for DeleteAppBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppBundleRequestT = Model::DeleteAppBundleRequest>
        void DeleteAppBundleAsync(const DeleteAppBundleRequestT& request, const DeleteAppBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::DeleteAppBundle, request, handler, context);
        }

        /**
         * <p>Deletes an ingestion. You must stop (disable) the ingestion and you must
         * delete all associated ingestion destinations before you can delete an app
         * ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/DeleteIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIngestionOutcome DeleteIngestion(const Model::DeleteIngestionRequest& request) const;

        /**
         * A Callable wrapper for DeleteIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIngestionRequestT = Model::DeleteIngestionRequest>
        Model::DeleteIngestionOutcomeCallable DeleteIngestionCallable(const DeleteIngestionRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::DeleteIngestion, request);
        }

        /**
         * An Async wrapper for DeleteIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIngestionRequestT = Model::DeleteIngestionRequest>
        void DeleteIngestionAsync(const DeleteIngestionRequestT& request, const DeleteIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::DeleteIngestion, request, handler, context);
        }

        /**
         * <p>Deletes an ingestion destination.</p> <p>This deletes the association between
         * an ingestion and it's destination. It doesn't delete previously ingested data or
         * the storage destination, such as the Amazon S3 bucket where the data is
         * delivered. If the ingestion destination is deleted while the associated
         * ingestion is enabled, the ingestion will fail and is eventually
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/DeleteIngestionDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIngestionDestinationOutcome DeleteIngestionDestination(const Model::DeleteIngestionDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIngestionDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIngestionDestinationRequestT = Model::DeleteIngestionDestinationRequest>
        Model::DeleteIngestionDestinationOutcomeCallable DeleteIngestionDestinationCallable(const DeleteIngestionDestinationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::DeleteIngestionDestination, request);
        }

        /**
         * An Async wrapper for DeleteIngestionDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIngestionDestinationRequestT = Model::DeleteIngestionDestinationRequest>
        void DeleteIngestionDestinationAsync(const DeleteIngestionDestinationRequestT& request, const DeleteIngestionDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::DeleteIngestionDestination, request, handler, context);
        }

        /**
         * <p>Returns information about an app authorization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/GetAppAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppAuthorizationOutcome GetAppAuthorization(const Model::GetAppAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for GetAppAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppAuthorizationRequestT = Model::GetAppAuthorizationRequest>
        Model::GetAppAuthorizationOutcomeCallable GetAppAuthorizationCallable(const GetAppAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::GetAppAuthorization, request);
        }

        /**
         * An Async wrapper for GetAppAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppAuthorizationRequestT = Model::GetAppAuthorizationRequest>
        void GetAppAuthorizationAsync(const GetAppAuthorizationRequestT& request, const GetAppAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::GetAppAuthorization, request, handler, context);
        }

        /**
         * <p>Returns information about an app bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/GetAppBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppBundleOutcome GetAppBundle(const Model::GetAppBundleRequest& request) const;

        /**
         * A Callable wrapper for GetAppBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppBundleRequestT = Model::GetAppBundleRequest>
        Model::GetAppBundleOutcomeCallable GetAppBundleCallable(const GetAppBundleRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::GetAppBundle, request);
        }

        /**
         * An Async wrapper for GetAppBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppBundleRequestT = Model::GetAppBundleRequest>
        void GetAppBundleAsync(const GetAppBundleRequestT& request, const GetAppBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::GetAppBundle, request, handler, context);
        }

        /**
         * <p>Returns information about an ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/GetIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIngestionOutcome GetIngestion(const Model::GetIngestionRequest& request) const;

        /**
         * A Callable wrapper for GetIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIngestionRequestT = Model::GetIngestionRequest>
        Model::GetIngestionOutcomeCallable GetIngestionCallable(const GetIngestionRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::GetIngestion, request);
        }

        /**
         * An Async wrapper for GetIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIngestionRequestT = Model::GetIngestionRequest>
        void GetIngestionAsync(const GetIngestionRequestT& request, const GetIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::GetIngestion, request, handler, context);
        }

        /**
         * <p>Returns information about an ingestion destination.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/GetIngestionDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIngestionDestinationOutcome GetIngestionDestination(const Model::GetIngestionDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetIngestionDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIngestionDestinationRequestT = Model::GetIngestionDestinationRequest>
        Model::GetIngestionDestinationOutcomeCallable GetIngestionDestinationCallable(const GetIngestionDestinationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::GetIngestionDestination, request);
        }

        /**
         * An Async wrapper for GetIngestionDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIngestionDestinationRequestT = Model::GetIngestionDestinationRequest>
        void GetIngestionDestinationAsync(const GetIngestionDestinationRequestT& request, const GetIngestionDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::GetIngestionDestination, request, handler, context);
        }

        /**
         * <p>Returns a list of all app authorizations configured for an app
         * bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ListAppAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppAuthorizationsOutcome ListAppAuthorizations(const Model::ListAppAuthorizationsRequest& request) const;

        /**
         * A Callable wrapper for ListAppAuthorizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppAuthorizationsRequestT = Model::ListAppAuthorizationsRequest>
        Model::ListAppAuthorizationsOutcomeCallable ListAppAuthorizationsCallable(const ListAppAuthorizationsRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::ListAppAuthorizations, request);
        }

        /**
         * An Async wrapper for ListAppAuthorizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppAuthorizationsRequestT = Model::ListAppAuthorizationsRequest>
        void ListAppAuthorizationsAsync(const ListAppAuthorizationsRequestT& request, const ListAppAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::ListAppAuthorizations, request, handler, context);
        }

        /**
         * <p>Returns a list of app bundles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ListAppBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppBundlesOutcome ListAppBundles(const Model::ListAppBundlesRequest& request) const;

        /**
         * A Callable wrapper for ListAppBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppBundlesRequestT = Model::ListAppBundlesRequest>
        Model::ListAppBundlesOutcomeCallable ListAppBundlesCallable(const ListAppBundlesRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::ListAppBundles, request);
        }

        /**
         * An Async wrapper for ListAppBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppBundlesRequestT = Model::ListAppBundlesRequest>
        void ListAppBundlesAsync(const ListAppBundlesRequestT& request, const ListAppBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::ListAppBundles, request, handler, context);
        }

        /**
         * <p>Returns a list of all ingestion destinations configured for an
         * ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ListIngestionDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionDestinationsOutcome ListIngestionDestinations(const Model::ListIngestionDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListIngestionDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngestionDestinationsRequestT = Model::ListIngestionDestinationsRequest>
        Model::ListIngestionDestinationsOutcomeCallable ListIngestionDestinationsCallable(const ListIngestionDestinationsRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::ListIngestionDestinations, request);
        }

        /**
         * An Async wrapper for ListIngestionDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngestionDestinationsRequestT = Model::ListIngestionDestinationsRequest>
        void ListIngestionDestinationsAsync(const ListIngestionDestinationsRequestT& request, const ListIngestionDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::ListIngestionDestinations, request, handler, context);
        }

        /**
         * <p>Returns a list of all ingestions configured for an app bundle.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ListIngestions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionsOutcome ListIngestions(const Model::ListIngestionsRequest& request) const;

        /**
         * A Callable wrapper for ListIngestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngestionsRequestT = Model::ListIngestionsRequest>
        Model::ListIngestionsOutcomeCallable ListIngestionsCallable(const ListIngestionsRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::ListIngestions, request);
        }

        /**
         * An Async wrapper for ListIngestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngestionsRequestT = Model::ListIngestionsRequest>
        void ListIngestionsAsync(const ListIngestionsRequestT& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::ListIngestions, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts (enables) an ingestion, which collects data from an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/StartIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::StartIngestionOutcome StartIngestion(const Model::StartIngestionRequest& request) const;

        /**
         * A Callable wrapper for StartIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartIngestionRequestT = Model::StartIngestionRequest>
        Model::StartIngestionOutcomeCallable StartIngestionCallable(const StartIngestionRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::StartIngestion, request);
        }

        /**
         * An Async wrapper for StartIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartIngestionRequestT = Model::StartIngestionRequest>
        void StartIngestionAsync(const StartIngestionRequestT& request, const StartIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::StartIngestion, request, handler, context);
        }

        /**
         * <p>Starts the tasks to search user access status for a specific email
         * address.</p> <p>The tasks are stopped when the user access status data is found.
         * The tasks are terminated when the API calls to the application time
         * out.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/StartUserAccessTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::StartUserAccessTasksOutcome StartUserAccessTasks(const Model::StartUserAccessTasksRequest& request) const;

        /**
         * A Callable wrapper for StartUserAccessTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartUserAccessTasksRequestT = Model::StartUserAccessTasksRequest>
        Model::StartUserAccessTasksOutcomeCallable StartUserAccessTasksCallable(const StartUserAccessTasksRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::StartUserAccessTasks, request);
        }

        /**
         * An Async wrapper for StartUserAccessTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartUserAccessTasksRequestT = Model::StartUserAccessTasksRequest>
        void StartUserAccessTasksAsync(const StartUserAccessTasksRequestT& request, const StartUserAccessTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::StartUserAccessTasks, request, handler, context);
        }

        /**
         * <p>Stops (disables) an ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/StopIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::StopIngestionOutcome StopIngestion(const Model::StopIngestionRequest& request) const;

        /**
         * A Callable wrapper for StopIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopIngestionRequestT = Model::StopIngestionRequest>
        Model::StopIngestionOutcomeCallable StopIngestionCallable(const StopIngestionRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::StopIngestion, request);
        }

        /**
         * An Async wrapper for StopIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopIngestionRequestT = Model::StopIngestionRequest>
        void StopIngestionAsync(const StopIngestionRequestT& request, const StopIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::StopIngestion, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an app authorization within an app bundle, which allows AppFabric to
         * connect to an application.</p> <p>If the app authorization was in a
         * <code>connected</code> state, updating the app authorization will set it back to
         * a <code>PendingConnect</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/UpdateAppAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppAuthorizationOutcome UpdateAppAuthorization(const Model::UpdateAppAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppAuthorizationRequestT = Model::UpdateAppAuthorizationRequest>
        Model::UpdateAppAuthorizationOutcomeCallable UpdateAppAuthorizationCallable(const UpdateAppAuthorizationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::UpdateAppAuthorization, request);
        }

        /**
         * An Async wrapper for UpdateAppAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppAuthorizationRequestT = Model::UpdateAppAuthorizationRequest>
        void UpdateAppAuthorizationAsync(const UpdateAppAuthorizationRequestT& request, const UpdateAppAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::UpdateAppAuthorization, request, handler, context);
        }

        /**
         * <p>Updates an ingestion destination, which specifies how an application's
         * ingested data is processed by Amazon Web Services AppFabric and where it's
         * delivered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/UpdateIngestionDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIngestionDestinationOutcome UpdateIngestionDestination(const Model::UpdateIngestionDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateIngestionDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIngestionDestinationRequestT = Model::UpdateIngestionDestinationRequest>
        Model::UpdateIngestionDestinationOutcomeCallable UpdateIngestionDestinationCallable(const UpdateIngestionDestinationRequestT& request) const
        {
            return SubmitCallable(&AppFabricClient::UpdateIngestionDestination, request);
        }

        /**
         * An Async wrapper for UpdateIngestionDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIngestionDestinationRequestT = Model::UpdateIngestionDestinationRequest>
        void UpdateIngestionDestinationAsync(const UpdateIngestionDestinationRequestT& request, const UpdateIngestionDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppFabricClient::UpdateIngestionDestination, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppFabricEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppFabricClient>;
      void init(const AppFabricClientConfiguration& clientConfiguration);

      AppFabricClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppFabricEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppFabric
} // namespace Aws
