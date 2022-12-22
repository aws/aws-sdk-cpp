/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/simspaceweaver/SimSpaceWeaverServiceClientModel.h>

namespace Aws
{
namespace SimSpaceWeaver
{
  /**
   * <p>Amazon Web Services SimSpace Weaver (SimSpace Weaver) is a managed service
   * that you can use to build and operate large-scale spatial simulations in the
   * Amazon Web Services Cloud. For example, you can create a digital twin of a city,
   * crowd simulations with millions of people and objects, and
   * massilvely-multiplayer games with hundreds of thousands of connected players.
   * For more information about SimSpace Weaver, see the <i> <a
   * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/">Amazon Web
   * Services SimSpace Weaver User Guide</a> </i>.</p> <p>This API reference
   * describes the API operations and data types that you can use to communicate
   * directly with SimSpace Weaver.</p> <p>SimSpace Weaver also provides the SimSpace
   * Weaver app SDK, which you use for app development. The SimSpace Weaver app SDK
   * API reference is included in the SimSpace Weaver app SDK documentation, which is
   * part of the SimSpace Weaver app SDK distributable package.</p>
   */
  class AWS_SIMSPACEWEAVER_API SimSpaceWeaverClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SimSpaceWeaverClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration = Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration(),
                             std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider = Aws::MakeShared<SimSpaceWeaverEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider = Aws::MakeShared<SimSpaceWeaverEndpointProvider>(ALLOCATION_TAG),
                             const Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration = Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SimSpaceWeaverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider = Aws::MakeShared<SimSpaceWeaverEndpointProvider>(ALLOCATION_TAG),
                             const Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration = Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SimSpaceWeaverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SimSpaceWeaverClient();

        /**
         * <p>Deletes the instance of the given custom app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all SimSpace Weaver resources assigned to the given simulation.</p>
         *  <p>Your simulation uses resources in other Amazon Web Services services.
         * This API operation doesn't delete resources in other Amazon Web Services
         * services.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DeleteSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSimulationOutcome DeleteSimulation(const Model::DeleteSimulationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSimulationOutcomeCallable DeleteSimulationCallable(const Model::DeleteSimulationRequest& request) const;

        /**
         * An Async wrapper for DeleteSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSimulationAsync(const Model::DeleteSimulationRequest& request, const DeleteSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the state of the given custom app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * A Callable wrapper for DescribeApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request) const;

        /**
         * An Async wrapper for DescribeApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current state of the given simulation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DescribeSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationOutcome DescribeSimulation(const Model::DescribeSimulationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationOutcomeCallable DescribeSimulationCallable(const Model::DescribeSimulationRequest& request) const;

        /**
         * An Async wrapper for DescribeSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationAsync(const Model::DescribeSimulationRequest& request, const DescribeSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all custom apps or service apps for the given simulation and
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SimSpace Weaver simulations in the Amazon Web Services account used
         * to make the API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/ListSimulations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationsOutcome ListSimulations(const Model::ListSimulationsRequest& request) const;

        /**
         * A Callable wrapper for ListSimulations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationsOutcomeCallable ListSimulationsCallable(const Model::ListSimulationsRequest& request) const;

        /**
         * An Async wrapper for ListSimulations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationsAsync(const Model::ListSimulationsRequest& request, const ListSimulationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on a SimSpace Weaver resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/ListTagsForResource">AWS
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
         * <p>Starts a custom app with the configuration specified in the simulation
         * schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StartApp">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppOutcome StartApp(const Model::StartAppRequest& request) const;

        /**
         * A Callable wrapper for StartApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAppOutcomeCallable StartAppCallable(const Model::StartAppRequest& request) const;

        /**
         * An Async wrapper for StartApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAppAsync(const Model::StartAppRequest& request, const StartAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the simulation clock.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StartClock">AWS
         * API Reference</a></p>
         */
        virtual Model::StartClockOutcome StartClock(const Model::StartClockRequest& request) const;

        /**
         * A Callable wrapper for StartClock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartClockOutcomeCallable StartClockCallable(const Model::StartClockRequest& request) const;

        /**
         * An Async wrapper for StartClock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartClockAsync(const Model::StartClockRequest& request, const StartClockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a simulation with the given name and schema.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StartSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSimulationOutcome StartSimulation(const Model::StartSimulationRequest& request) const;

        /**
         * A Callable wrapper for StartSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSimulationOutcomeCallable StartSimulationCallable(const Model::StartSimulationRequest& request) const;

        /**
         * An Async wrapper for StartSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSimulationAsync(const Model::StartSimulationRequest& request, const StartSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the given custom app and shuts down all of its allocated compute
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StopApp">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAppOutcome StopApp(const Model::StopAppRequest& request) const;

        /**
         * A Callable wrapper for StopApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAppOutcomeCallable StopAppCallable(const Model::StopAppRequest& request) const;

        /**
         * An Async wrapper for StopApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAppAsync(const Model::StopAppRequest& request, const StopAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the simulation clock.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StopClock">AWS
         * API Reference</a></p>
         */
        virtual Model::StopClockOutcome StopClock(const Model::StopClockRequest& request) const;

        /**
         * A Callable wrapper for StopClock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopClockOutcomeCallable StopClockCallable(const Model::StopClockRequest& request) const;

        /**
         * An Async wrapper for StopClock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopClockAsync(const Model::StopClockRequest& request, const StopClockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the given simulation.</p>  <p>You can't restart a simulation
         * after you stop it. If you need to restart a simulation, you must stop it, delete
         * it, and start a new instance of it.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StopSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSimulationOutcome StopSimulation(const Model::StopSimulationRequest& request) const;

        /**
         * A Callable wrapper for StopSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopSimulationOutcomeCallable StopSimulationCallable(const Model::StopSimulationRequest& request) const;

        /**
         * An Async wrapper for StopSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSimulationAsync(const Model::StopSimulationRequest& request, const StopSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a SimSpace Weaver resource. For more information about tags, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/TagResource">AWS
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
         * <p>Removes tags from a SimSpace Weaver resource. For more information about
         * tags, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/UntagResource">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SimSpaceWeaverEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SimSpaceWeaverClient>;
      void init(const SimSpaceWeaverClientConfiguration& clientConfiguration);

      SimSpaceWeaverClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SimSpaceWeaverEndpointProviderBase> m_endpointProvider;
  };

} // namespace SimSpaceWeaver
} // namespace Aws
