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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTRoboRunnerClient(const Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration& clientConfiguration = Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration(),
                            std::shared_ptr<IoTRoboRunnerEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTRoboRunnerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTRoboRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<IoTRoboRunnerEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTRoboRunnerEndpointProvider>(ALLOCATION_TAG),
                            const Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration& clientConfiguration = Aws::IoTRoboRunner::IoTRoboRunnerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTRoboRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<IoTRoboRunnerEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTRoboRunnerEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CreateDestinationOutcomeCallable CreateDestinationCallable(const Model::CreateDestinationRequest& request) const;

        /**
         * An Async wrapper for CreateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDestinationAsync(const Model::CreateDestinationRequest& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to create a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSiteOutcomeCallable CreateSiteCallable(const Model::CreateSiteRequest& request) const;

        /**
         * An Async wrapper for CreateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSiteAsync(const Model::CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to create a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerOutcome CreateWorker(const Model::CreateWorkerRequest& request) const;

        /**
         * A Callable wrapper for CreateWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkerOutcomeCallable CreateWorkerCallable(const Model::CreateWorkerRequest& request) const;

        /**
         * An Async wrapper for CreateWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkerAsync(const Model::CreateWorkerRequest& request, const CreateWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to create a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CreateWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerFleetOutcome CreateWorkerFleet(const Model::CreateWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkerFleetOutcomeCallable CreateWorkerFleetCallable(const Model::CreateWorkerFleetRequest& request) const;

        /**
         * An Async wrapper for CreateWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkerFleetAsync(const Model::CreateWorkerFleetRequest& request, const CreateWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to delete a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const Model::DeleteDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDestinationAsync(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to delete a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const Model::DeleteSiteRequest& request) const;

        /**
         * An Async wrapper for DeleteSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSiteAsync(const Model::DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to delete a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerOutcome DeleteWorker(const Model::DeleteWorkerRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkerOutcomeCallable DeleteWorkerCallable(const Model::DeleteWorkerRequest& request) const;

        /**
         * An Async wrapper for DeleteWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkerAsync(const Model::DeleteWorkerRequest& request, const DeleteWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to delete a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/DeleteWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerFleetOutcome DeleteWorkerFleet(const Model::DeleteWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkerFleetOutcomeCallable DeleteWorkerFleetCallable(const Model::DeleteWorkerFleetRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkerFleetAsync(const Model::DeleteWorkerFleetRequest& request, const DeleteWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to get a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDestinationOutcomeCallable GetDestinationCallable(const Model::GetDestinationRequest& request) const;

        /**
         * An Async wrapper for GetDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDestinationAsync(const Model::GetDestinationRequest& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to get a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteOutcome GetSite(const Model::GetSiteRequest& request) const;

        /**
         * A Callable wrapper for GetSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSiteOutcomeCallable GetSiteCallable(const Model::GetSiteRequest& request) const;

        /**
         * An Async wrapper for GetSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSiteAsync(const Model::GetSiteRequest& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to get a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkerOutcome GetWorker(const Model::GetWorkerRequest& request) const;

        /**
         * A Callable wrapper for GetWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkerOutcomeCallable GetWorkerCallable(const Model::GetWorkerRequest& request) const;

        /**
         * An Async wrapper for GetWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkerAsync(const Model::GetWorkerRequest& request, const GetWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to get a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/GetWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkerFleetOutcome GetWorkerFleet(const Model::GetWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for GetWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkerFleetOutcomeCallable GetWorkerFleetCallable(const Model::GetWorkerFleetRequest& request) const;

        /**
         * An Async wrapper for GetWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkerFleetAsync(const Model::GetWorkerFleetRequest& request, const GetWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to list destinations</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDestinationsOutcome ListDestinations(const Model::ListDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDestinationsOutcomeCallable ListDestinationsCallable(const Model::ListDestinationsRequest& request) const;

        /**
         * An Async wrapper for ListDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDestinationsAsync(const Model::ListDestinationsRequest& request, const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to list sites</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSitesOutcome ListSites(const Model::ListSitesRequest& request) const;

        /**
         * A Callable wrapper for ListSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSitesOutcomeCallable ListSitesCallable(const Model::ListSitesRequest& request) const;

        /**
         * An Async wrapper for ListSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSitesAsync(const Model::ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to list worker fleets</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListWorkerFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkerFleetsOutcome ListWorkerFleets(const Model::ListWorkerFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkerFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkerFleetsOutcomeCallable ListWorkerFleetsCallable(const Model::ListWorkerFleetsRequest& request) const;

        /**
         * An Async wrapper for ListWorkerFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkerFleetsAsync(const Model::ListWorkerFleetsRequest& request, const ListWorkerFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to list workers</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/ListWorkers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkersOutcome ListWorkers(const Model::ListWorkersRequest& request) const;

        /**
         * A Callable wrapper for ListWorkers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkersOutcomeCallable ListWorkersCallable(const Model::ListWorkersRequest& request) const;

        /**
         * An Async wrapper for ListWorkers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkersAsync(const Model::ListWorkersRequest& request, const ListWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to update a destination</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const Model::UpdateDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDestinationAsync(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to update a site</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const Model::UpdateSiteRequest& request) const;

        /**
         * An Async wrapper for UpdateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSiteAsync(const Model::UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to update a worker</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkerOutcome UpdateWorker(const Model::UpdateWorkerRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkerOutcomeCallable UpdateWorkerCallable(const Model::UpdateWorkerRequest& request) const;

        /**
         * An Async wrapper for UpdateWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkerAsync(const Model::UpdateWorkerRequest& request, const UpdateWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permission to update a worker fleet</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/UpdateWorkerFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkerFleetOutcome UpdateWorkerFleet(const Model::UpdateWorkerFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkerFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkerFleetOutcomeCallable UpdateWorkerFleetCallable(const Model::UpdateWorkerFleetRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkerFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkerFleetAsync(const Model::UpdateWorkerFleetRequest& request, const UpdateWorkerFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
