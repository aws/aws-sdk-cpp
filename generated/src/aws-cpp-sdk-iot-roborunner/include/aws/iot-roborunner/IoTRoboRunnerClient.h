/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-roborunner/IoTRoboRunnerServiceClientModel.h>

namespace Aws
{
namespace IoTRoboRunner
{
  /**
   * <p>An example service, deployed with the Octane Service creator, which will echo
   * the string</p>
   */
  class AWS_IOTROBORUNNER_API IoTRoboRunnerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTRoboRunnerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTRoboRunnerClientConfiguration ClientConfigurationType;
      typedef IoTRoboRunnerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTRoboRunnerClient(const Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration& clientConfiguration = Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration(),
                            std::shared_ptr<IoTRoboRunnerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTRoboRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<IoTRoboRunnerEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration& clientConfiguration = Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTRoboRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<IoTRoboRunnerEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration& clientConfiguration = Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTRoboRunnerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTRoboRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTRoboRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTRoboRunnerClient();

        /**
         * <p>Grants permission to create a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDestinationOutcome CreateDestination(const Model::CreateDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDestinationRequestT = Model::CreateDestinationRequest>
        Model::CreateDestinationOutcomeCallable CreateDestinationCallable(const CreateDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::CreateDestination, request);
        }

        /**
         * An Async wrapper for CreateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDestinationRequestT = Model::CreateDestinationRequest>
        void CreateDestinationAsync(const CreateDestinationRequestT& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::CreateDestination, request, handler, context);
        }

        /**
         * <p>Grants permission to create a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSiteRequestT = Model::CreateSiteRequest>
        Model::CreateSiteOutcomeCallable CreateSiteCallable(const CreateSiteRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::CreateSite, request);
        }

        /**
         * An Async wrapper for CreateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSiteRequestT = Model::CreateSiteRequest>
        void CreateSiteAsync(const CreateSiteRequestT& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::CreateSite, request, handler, context);
        }

        /**
         * <p>Grants permission to create a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerOutcome CreateWorker(const Model::CreateWorkerRequest& request) const;

        /**
         * A Callable wrapper for CreateWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkerRequestT = Model::CreateWorkerRequest>
        Model::CreateWorkerOutcomeCallable CreateWorkerCallable(const CreateWorkerRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::CreateWorker, request);
        }

        /**
         * An Async wrapper for CreateWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkerRequestT = Model::CreateWorkerRequest>
        void CreateWorkerAsync(const CreateWorkerRequestT& request, const CreateWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::CreateWorker, request, handler, context);
        }

        /**
         * <p>Grants permission to create a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerFleetOutcome CreateWorkerFleet(const Model::CreateWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkerFleetRequestT = Model::CreateWorkerFleetRequest>
        Model::CreateWorkerFleetOutcomeCallable CreateWorkerFleetCallable(const CreateWorkerFleetRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::CreateWorkerFleet, request);
        }

        /**
         * An Async wrapper for CreateWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkerFleetRequestT = Model::CreateWorkerFleetRequest>
        void CreateWorkerFleetAsync(const CreateWorkerFleetRequestT& request, const CreateWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::CreateWorkerFleet, request, handler, context);
        }

        /**
         * <p>Grants permission to delete a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const DeleteDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::DeleteDestination, request);
        }

        /**
         * An Async wrapper for DeleteDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        void DeleteDestinationAsync(const DeleteDestinationRequestT& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::DeleteDestination, request, handler, context);
        }

        /**
         * <p>Grants permission to delete a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSiteRequestT = Model::DeleteSiteRequest>
        Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const DeleteSiteRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::DeleteSite, request);
        }

        /**
         * An Async wrapper for DeleteSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSiteRequestT = Model::DeleteSiteRequest>
        void DeleteSiteAsync(const DeleteSiteRequestT& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::DeleteSite, request, handler, context);
        }

        /**
         * <p>Grants permission to delete a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerOutcome DeleteWorker(const Model::DeleteWorkerRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkerRequestT = Model::DeleteWorkerRequest>
        Model::DeleteWorkerOutcomeCallable DeleteWorkerCallable(const DeleteWorkerRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::DeleteWorker, request);
        }

        /**
         * An Async wrapper for DeleteWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkerRequestT = Model::DeleteWorkerRequest>
        void DeleteWorkerAsync(const DeleteWorkerRequestT& request, const DeleteWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::DeleteWorker, request, handler, context);
        }

        /**
         * <p>Grants permission to delete a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerFleetOutcome DeleteWorkerFleet(const Model::DeleteWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkerFleetRequestT = Model::DeleteWorkerFleetRequest>
        Model::DeleteWorkerFleetOutcomeCallable DeleteWorkerFleetCallable(const DeleteWorkerFleetRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::DeleteWorkerFleet, request);
        }

        /**
         * An Async wrapper for DeleteWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkerFleetRequestT = Model::DeleteWorkerFleetRequest>
        void DeleteWorkerFleetAsync(const DeleteWorkerFleetRequestT& request, const DeleteWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::DeleteWorkerFleet, request, handler, context);
        }

        /**
         * <p>Grants permission to get a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDestinationRequestT = Model::GetDestinationRequest>
        Model::GetDestinationOutcomeCallable GetDestinationCallable(const GetDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::GetDestination, request);
        }

        /**
         * An Async wrapper for GetDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDestinationRequestT = Model::GetDestinationRequest>
        void GetDestinationAsync(const GetDestinationRequestT& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::GetDestination, request, handler, context);
        }

        /**
         * <p>Grants permission to get a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteOutcome GetSite(const Model::GetSiteRequest& request) const;

        /**
         * A Callable wrapper for GetSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSiteRequestT = Model::GetSiteRequest>
        Model::GetSiteOutcomeCallable GetSiteCallable(const GetSiteRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::GetSite, request);
        }

        /**
         * An Async wrapper for GetSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSiteRequestT = Model::GetSiteRequest>
        void GetSiteAsync(const GetSiteRequestT& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::GetSite, request, handler, context);
        }

        /**
         * <p>Grants permission to get a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkerOutcome GetWorker(const Model::GetWorkerRequest& request) const;

        /**
         * A Callable wrapper for GetWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkerRequestT = Model::GetWorkerRequest>
        Model::GetWorkerOutcomeCallable GetWorkerCallable(const GetWorkerRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::GetWorker, request);
        }

        /**
         * An Async wrapper for GetWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkerRequestT = Model::GetWorkerRequest>
        void GetWorkerAsync(const GetWorkerRequestT& request, const GetWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::GetWorker, request, handler, context);
        }

        /**
         * <p>Grants permission to get a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkerFleetOutcome GetWorkerFleet(const Model::GetWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for GetWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkerFleetRequestT = Model::GetWorkerFleetRequest>
        Model::GetWorkerFleetOutcomeCallable GetWorkerFleetCallable(const GetWorkerFleetRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::GetWorkerFleet, request);
        }

        /**
         * An Async wrapper for GetWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkerFleetRequestT = Model::GetWorkerFleetRequest>
        void GetWorkerFleetAsync(const GetWorkerFleetRequestT& request, const GetWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::GetWorkerFleet, request, handler, context);
        }

        /**
         * <p>Grants permission to list destinations</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDestinationsOutcome ListDestinations(const Model::ListDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDestinationsRequestT = Model::ListDestinationsRequest>
        Model::ListDestinationsOutcomeCallable ListDestinationsCallable(const ListDestinationsRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::ListDestinations, request);
        }

        /**
         * An Async wrapper for ListDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDestinationsRequestT = Model::ListDestinationsRequest>
        void ListDestinationsAsync(const ListDestinationsRequestT& request, const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::ListDestinations, request, handler, context);
        }

        /**
         * <p>Grants permission to list sites</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSitesOutcome ListSites(const Model::ListSitesRequest& request) const;

        /**
         * A Callable wrapper for ListSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSitesRequestT = Model::ListSitesRequest>
        Model::ListSitesOutcomeCallable ListSitesCallable(const ListSitesRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::ListSites, request);
        }

        /**
         * An Async wrapper for ListSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSitesRequestT = Model::ListSitesRequest>
        void ListSitesAsync(const ListSitesRequestT& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::ListSites, request, handler, context);
        }

        /**
         * <p>Grants permission to list worker fleets</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListWorkerFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkerFleetsOutcome ListWorkerFleets(const Model::ListWorkerFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkerFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkerFleetsRequestT = Model::ListWorkerFleetsRequest>
        Model::ListWorkerFleetsOutcomeCallable ListWorkerFleetsCallable(const ListWorkerFleetsRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::ListWorkerFleets, request);
        }

        /**
         * An Async wrapper for ListWorkerFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkerFleetsRequestT = Model::ListWorkerFleetsRequest>
        void ListWorkerFleetsAsync(const ListWorkerFleetsRequestT& request, const ListWorkerFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::ListWorkerFleets, request, handler, context);
        }

        /**
         * <p>Grants permission to list workers</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListWorkers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkersOutcome ListWorkers(const Model::ListWorkersRequest& request) const;

        /**
         * A Callable wrapper for ListWorkers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkersRequestT = Model::ListWorkersRequest>
        Model::ListWorkersOutcomeCallable ListWorkersCallable(const ListWorkersRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::ListWorkers, request);
        }

        /**
         * An Async wrapper for ListWorkers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkersRequestT = Model::ListWorkersRequest>
        void ListWorkersAsync(const ListWorkersRequestT& request, const ListWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::ListWorkers, request, handler, context);
        }

        /**
         * <p>Grants permission to update a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const UpdateDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::UpdateDestination, request);
        }

        /**
         * An Async wrapper for UpdateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        void UpdateDestinationAsync(const UpdateDestinationRequestT& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::UpdateDestination, request, handler, context);
        }

        /**
         * <p>Grants permission to update a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSiteRequestT = Model::UpdateSiteRequest>
        Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const UpdateSiteRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::UpdateSite, request);
        }

        /**
         * An Async wrapper for UpdateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSiteRequestT = Model::UpdateSiteRequest>
        void UpdateSiteAsync(const UpdateSiteRequestT& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::UpdateSite, request, handler, context);
        }

        /**
         * <p>Grants permission to update a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkerOutcome UpdateWorker(const Model::UpdateWorkerRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkerRequestT = Model::UpdateWorkerRequest>
        Model::UpdateWorkerOutcomeCallable UpdateWorkerCallable(const UpdateWorkerRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::UpdateWorker, request);
        }

        /**
         * An Async wrapper for UpdateWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkerRequestT = Model::UpdateWorkerRequest>
        void UpdateWorkerAsync(const UpdateWorkerRequestT& request, const UpdateWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::UpdateWorker, request, handler, context);
        }

        /**
         * <p>Grants permission to update a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkerFleetOutcome UpdateWorkerFleet(const Model::UpdateWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkerFleetRequestT = Model::UpdateWorkerFleetRequest>
        Model::UpdateWorkerFleetOutcomeCallable UpdateWorkerFleetCallable(const UpdateWorkerFleetRequestT& request) const
        {
            return SubmitCallable(&IoTRoboRunnerClient::UpdateWorkerFleet, request);
        }

        /**
         * An Async wrapper for UpdateWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkerFleetRequestT = Model::UpdateWorkerFleetRequest>
        void UpdateWorkerFleetAsync(const UpdateWorkerFleetRequestT& request, const UpdateWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTRoboRunnerClient::UpdateWorkerFleet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTRoboRunnerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTRoboRunnerClient>;
      void init(const IoTRoboRunnerClientConfiguration& clientConfiguration);

      IoTRoboRunnerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTRoboRunnerEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTRoboRunner
} // namespace Aws
