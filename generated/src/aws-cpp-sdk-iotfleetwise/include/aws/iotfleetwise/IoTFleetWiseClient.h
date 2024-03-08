/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleetwise/IoTFleetWiseServiceClientModel.h>

namespace Aws
{
namespace IoTFleetWise
{
  /**
   * <p>Amazon Web Services IoT FleetWise is a fully managed service that you can use
   * to collect, model, and transfer vehicle data to the Amazon Web Services cloud at
   * scale. With Amazon Web Services IoT FleetWise, you can standardize all of your
   * vehicle data models, independent of the in-vehicle communication architecture,
   * and define data collection rules to transfer only high-value data to the cloud.
   * </p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/">What is
   * Amazon Web Services IoT FleetWise?</a> in the <i>Amazon Web Services IoT
   * FleetWise Developer Guide</i>.</p>
   */
  class AWS_IOTFLEETWISE_API IoTFleetWiseClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTFleetWiseClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTFleetWiseClientConfiguration ClientConfigurationType;
      typedef IoTFleetWiseEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetWiseClient(const Aws::IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration = Aws::IoTFleetWise::IoTFleetWiseClientConfiguration(),
                           std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetWiseClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration = Aws::IoTFleetWise::IoTFleetWiseClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTFleetWiseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration = Aws::IoTFleetWise::IoTFleetWiseClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetWiseClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetWiseClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTFleetWiseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTFleetWiseClient();

        /**
         * <p> Adds, or associates, a vehicle with a fleet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/AssociateVehicleFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVehicleFleetOutcome AssociateVehicleFleet(const Model::AssociateVehicleFleetRequest& request) const;

        /**
         * A Callable wrapper for AssociateVehicleFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateVehicleFleetRequestT = Model::AssociateVehicleFleetRequest>
        Model::AssociateVehicleFleetOutcomeCallable AssociateVehicleFleetCallable(const AssociateVehicleFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::AssociateVehicleFleet, request);
        }

        /**
         * An Async wrapper for AssociateVehicleFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateVehicleFleetRequestT = Model::AssociateVehicleFleetRequest>
        void AssociateVehicleFleetAsync(const AssociateVehicleFleetRequestT& request, const AssociateVehicleFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::AssociateVehicleFleet, request, handler, context);
        }

        /**
         * <p> Creates a group, or batch, of vehicles. </p>  <p> You must specify a
         * decoder manifest and a vehicle model (model manifest) for each vehicle. </p>
         *  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/create-vehicles-cli.html">Create
         * multiple vehicles (AWS CLI)</a> in the <i>Amazon Web Services IoT FleetWise
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/BatchCreateVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateVehicleOutcome BatchCreateVehicle(const Model::BatchCreateVehicleRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateVehicleRequestT = Model::BatchCreateVehicleRequest>
        Model::BatchCreateVehicleOutcomeCallable BatchCreateVehicleCallable(const BatchCreateVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::BatchCreateVehicle, request);
        }

        /**
         * An Async wrapper for BatchCreateVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateVehicleRequestT = Model::BatchCreateVehicleRequest>
        void BatchCreateVehicleAsync(const BatchCreateVehicleRequestT& request, const BatchCreateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::BatchCreateVehicle, request, handler, context);
        }

        /**
         * <p> Updates a group, or batch, of vehicles.</p>  <p> You must specify a
         * decoder manifest and a vehicle model (model manifest) for each vehicle. </p>
         *  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/update-vehicles-cli.html">Update
         * multiple vehicles (AWS CLI)</a> in the <i>Amazon Web Services IoT FleetWise
         * Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/BatchUpdateVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateVehicleOutcome BatchUpdateVehicle(const Model::BatchUpdateVehicleRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateVehicleRequestT = Model::BatchUpdateVehicleRequest>
        Model::BatchUpdateVehicleOutcomeCallable BatchUpdateVehicleCallable(const BatchUpdateVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::BatchUpdateVehicle, request);
        }

        /**
         * An Async wrapper for BatchUpdateVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateVehicleRequestT = Model::BatchUpdateVehicleRequest>
        void BatchUpdateVehicleAsync(const BatchUpdateVehicleRequestT& request, const BatchUpdateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::BatchUpdateVehicle, request, handler, context);
        }

        /**
         * <p>Creates an orchestration of data collection rules. The Amazon Web Services
         * IoT FleetWise Edge Agent software running in vehicles uses campaigns to decide
         * how to collect and transfer data to the cloud. You create campaigns in the
         * cloud. After you or your team approve campaigns, Amazon Web Services IoT
         * FleetWise automatically deploys them to vehicles. </p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/campaigns.html">Collect
         * and transfer data with campaigns</a> in the <i>Amazon Web Services IoT FleetWise
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const CreateCampaignRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::CreateCampaign, request);
        }

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        void CreateCampaignAsync(const CreateCampaignRequestT& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::CreateCampaign, request, handler, context);
        }

        /**
         * <p>Creates the decoder manifest associated with a model manifest. To create a
         * decoder manifest, the following must be true:</p> <ul> <li> <p>Every signal
         * decoder has a unique name.</p> </li> <li> <p>Each signal decoder is associated
         * with a network interface.</p> </li> <li> <p>Each network interface has a unique
         * ID.</p> </li> <li> <p>The signal decoders are specified in the model
         * manifest.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDecoderManifestOutcome CreateDecoderManifest(const Model::CreateDecoderManifestRequest& request) const;

        /**
         * A Callable wrapper for CreateDecoderManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDecoderManifestRequestT = Model::CreateDecoderManifestRequest>
        Model::CreateDecoderManifestOutcomeCallable CreateDecoderManifestCallable(const CreateDecoderManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::CreateDecoderManifest, request);
        }

        /**
         * An Async wrapper for CreateDecoderManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDecoderManifestRequestT = Model::CreateDecoderManifestRequest>
        void CreateDecoderManifestAsync(const CreateDecoderManifestRequestT& request, const CreateDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::CreateDecoderManifest, request, handler, context);
        }

        /**
         * <p> Creates a fleet that represents a group of vehicles. </p>  <p>You must
         * create both a signal catalog and vehicles before you can create a fleet. </p>
         *  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleets.html">Fleets</a>
         * in the <i>Amazon Web Services IoT FleetWise Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        Model::CreateFleetOutcomeCallable CreateFleetCallable(const CreateFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::CreateFleet, request);
        }

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        void CreateFleetAsync(const CreateFleetRequestT& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::CreateFleet, request, handler, context);
        }

        /**
         * <p> Creates a vehicle model (model manifest) that specifies signals (attributes,
         * branches, sensors, and actuators). </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/vehicle-models.html">Vehicle
         * models</a> in the <i>Amazon Web Services IoT FleetWise Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelManifestOutcome CreateModelManifest(const Model::CreateModelManifestRequest& request) const;

        /**
         * A Callable wrapper for CreateModelManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelManifestRequestT = Model::CreateModelManifestRequest>
        Model::CreateModelManifestOutcomeCallable CreateModelManifestCallable(const CreateModelManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::CreateModelManifest, request);
        }

        /**
         * An Async wrapper for CreateModelManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelManifestRequestT = Model::CreateModelManifestRequest>
        void CreateModelManifestAsync(const CreateModelManifestRequestT& request, const CreateModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::CreateModelManifest, request, handler, context);
        }

        /**
         * <p> Creates a collection of standardized signals that can be reused to create
         * vehicle models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSignalCatalogOutcome CreateSignalCatalog(const Model::CreateSignalCatalogRequest& request) const;

        /**
         * A Callable wrapper for CreateSignalCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSignalCatalogRequestT = Model::CreateSignalCatalogRequest>
        Model::CreateSignalCatalogOutcomeCallable CreateSignalCatalogCallable(const CreateSignalCatalogRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::CreateSignalCatalog, request);
        }

        /**
         * An Async wrapper for CreateSignalCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSignalCatalogRequestT = Model::CreateSignalCatalogRequest>
        void CreateSignalCatalogAsync(const CreateSignalCatalogRequestT& request, const CreateSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::CreateSignalCatalog, request, handler, context);
        }

        /**
         * <p> Creates a vehicle, which is an instance of a vehicle model (model manifest).
         * Vehicles created from the same vehicle model consist of the same signals
         * inherited from the vehicle model.</p>  <p> If you have an existing Amazon
         * Web Services IoT thing, you can use Amazon Web Services IoT FleetWise to create
         * a vehicle and collect data from your thing. </p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/create-vehicle-cli.html">Create
         * a vehicle (AWS CLI)</a> in the <i>Amazon Web Services IoT FleetWise Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVehicleOutcome CreateVehicle(const Model::CreateVehicleRequest& request) const;

        /**
         * A Callable wrapper for CreateVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVehicleRequestT = Model::CreateVehicleRequest>
        Model::CreateVehicleOutcomeCallable CreateVehicleCallable(const CreateVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::CreateVehicle, request);
        }

        /**
         * An Async wrapper for CreateVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVehicleRequestT = Model::CreateVehicleRequest>
        void CreateVehicleAsync(const CreateVehicleRequestT& request, const CreateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::CreateVehicle, request, handler, context);
        }

        /**
         * <p> Deletes a data collection campaign. Deleting a campaign suspends all data
         * collection and removes it from any vehicles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const DeleteCampaignRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DeleteCampaign, request);
        }

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        void DeleteCampaignAsync(const DeleteCampaignRequestT& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DeleteCampaign, request, handler, context);
        }

        /**
         * <p> Deletes a decoder manifest. You can't delete a decoder manifest if it has
         * vehicles associated with it. </p>  <p>If the decoder manifest is
         * successfully deleted, Amazon Web Services IoT FleetWise sends back an HTTP 200
         * response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDecoderManifestOutcome DeleteDecoderManifest(const Model::DeleteDecoderManifestRequest& request) const;

        /**
         * A Callable wrapper for DeleteDecoderManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDecoderManifestRequestT = Model::DeleteDecoderManifestRequest>
        Model::DeleteDecoderManifestOutcomeCallable DeleteDecoderManifestCallable(const DeleteDecoderManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DeleteDecoderManifest, request);
        }

        /**
         * An Async wrapper for DeleteDecoderManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDecoderManifestRequestT = Model::DeleteDecoderManifestRequest>
        void DeleteDecoderManifestAsync(const DeleteDecoderManifestRequestT& request, const DeleteDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DeleteDecoderManifest, request, handler, context);
        }

        /**
         * <p> Deletes a fleet. Before you delete a fleet, all vehicles must be dissociated
         * from the fleet. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/delete-fleet-cli.html">Delete
         * a fleet (AWS CLI)</a> in the <i>Amazon Web Services IoT FleetWise Developer
         * Guide</i>.</p>  <p>If the fleet is successfully deleted, Amazon Web
         * Services IoT FleetWise sends back an HTTP 200 response with an empty body.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const DeleteFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DeleteFleet, request);
        }

        /**
         * An Async wrapper for DeleteFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        void DeleteFleetAsync(const DeleteFleetRequestT& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DeleteFleet, request, handler, context);
        }

        /**
         * <p> Deletes a vehicle model (model manifest).</p>  <p>If the vehicle model
         * is successfully deleted, Amazon Web Services IoT FleetWise sends back an HTTP
         * 200 response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelManifestOutcome DeleteModelManifest(const Model::DeleteModelManifestRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelManifestRequestT = Model::DeleteModelManifestRequest>
        Model::DeleteModelManifestOutcomeCallable DeleteModelManifestCallable(const DeleteModelManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DeleteModelManifest, request);
        }

        /**
         * An Async wrapper for DeleteModelManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelManifestRequestT = Model::DeleteModelManifestRequest>
        void DeleteModelManifestAsync(const DeleteModelManifestRequestT& request, const DeleteModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DeleteModelManifest, request, handler, context);
        }

        /**
         * <p> Deletes a signal catalog. </p>  <p>If the signal catalog is
         * successfully deleted, Amazon Web Services IoT FleetWise sends back an HTTP 200
         * response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSignalCatalogOutcome DeleteSignalCatalog(const Model::DeleteSignalCatalogRequest& request) const;

        /**
         * A Callable wrapper for DeleteSignalCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSignalCatalogRequestT = Model::DeleteSignalCatalogRequest>
        Model::DeleteSignalCatalogOutcomeCallable DeleteSignalCatalogCallable(const DeleteSignalCatalogRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DeleteSignalCatalog, request);
        }

        /**
         * An Async wrapper for DeleteSignalCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSignalCatalogRequestT = Model::DeleteSignalCatalogRequest>
        void DeleteSignalCatalogAsync(const DeleteSignalCatalogRequestT& request, const DeleteSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DeleteSignalCatalog, request, handler, context);
        }

        /**
         * <p> Deletes a vehicle and removes it from any campaigns.</p>  <p>If the
         * vehicle is successfully deleted, Amazon Web Services IoT FleetWise sends back an
         * HTTP 200 response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVehicleOutcome DeleteVehicle(const Model::DeleteVehicleRequest& request) const;

        /**
         * A Callable wrapper for DeleteVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVehicleRequestT = Model::DeleteVehicleRequest>
        Model::DeleteVehicleOutcomeCallable DeleteVehicleCallable(const DeleteVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DeleteVehicle, request);
        }

        /**
         * An Async wrapper for DeleteVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVehicleRequestT = Model::DeleteVehicleRequest>
        void DeleteVehicleAsync(const DeleteVehicleRequestT& request, const DeleteVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DeleteVehicle, request, handler, context);
        }

        /**
         * <p>Removes, or disassociates, a vehicle from a fleet. Disassociating a vehicle
         * from a fleet doesn't delete the vehicle.</p>  <p>If the vehicle is
         * successfully dissociated from a fleet, Amazon Web Services IoT FleetWise sends
         * back an HTTP 200 response with an empty body.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DisassociateVehicleFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateVehicleFleetOutcome DisassociateVehicleFleet(const Model::DisassociateVehicleFleetRequest& request) const;

        /**
         * A Callable wrapper for DisassociateVehicleFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateVehicleFleetRequestT = Model::DisassociateVehicleFleetRequest>
        Model::DisassociateVehicleFleetOutcomeCallable DisassociateVehicleFleetCallable(const DisassociateVehicleFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::DisassociateVehicleFleet, request);
        }

        /**
         * An Async wrapper for DisassociateVehicleFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateVehicleFleetRequestT = Model::DisassociateVehicleFleetRequest>
        void DisassociateVehicleFleetAsync(const DisassociateVehicleFleetRequestT& request, const DisassociateVehicleFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::DisassociateVehicleFleet, request, handler, context);
        }

        /**
         * <p> Retrieves information about a campaign. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

        /**
         * A Callable wrapper for GetCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignRequestT = Model::GetCampaignRequest>
        Model::GetCampaignOutcomeCallable GetCampaignCallable(const GetCampaignRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetCampaign, request);
        }

        /**
         * An Async wrapper for GetCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignRequestT = Model::GetCampaignRequest>
        void GetCampaignAsync(const GetCampaignRequestT& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetCampaign, request, handler, context);
        }

        /**
         * <p> Retrieves information about a created decoder manifest. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDecoderManifestOutcome GetDecoderManifest(const Model::GetDecoderManifestRequest& request) const;

        /**
         * A Callable wrapper for GetDecoderManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDecoderManifestRequestT = Model::GetDecoderManifestRequest>
        Model::GetDecoderManifestOutcomeCallable GetDecoderManifestCallable(const GetDecoderManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetDecoderManifest, request);
        }

        /**
         * An Async wrapper for GetDecoderManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDecoderManifestRequestT = Model::GetDecoderManifestRequest>
        void GetDecoderManifestAsync(const GetDecoderManifestRequestT& request, const GetDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetDecoderManifest, request, handler, context);
        }

        /**
         * <p>Retrieves the encryption configuration for resources and data in Amazon Web
         * Services IoT FleetWise.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEncryptionConfigurationOutcome GetEncryptionConfiguration(const Model::GetEncryptionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEncryptionConfigurationRequestT = Model::GetEncryptionConfigurationRequest>
        Model::GetEncryptionConfigurationOutcomeCallable GetEncryptionConfigurationCallable(const GetEncryptionConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetEncryptionConfiguration, request);
        }

        /**
         * An Async wrapper for GetEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEncryptionConfigurationRequestT = Model::GetEncryptionConfigurationRequest>
        void GetEncryptionConfigurationAsync(const GetEncryptionConfigurationRequestT& request, const GetEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetEncryptionConfiguration, request, handler, context);
        }

        /**
         * <p> Retrieves information about a fleet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFleetOutcome GetFleet(const Model::GetFleetRequest& request) const;

        /**
         * A Callable wrapper for GetFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFleetRequestT = Model::GetFleetRequest>
        Model::GetFleetOutcomeCallable GetFleetCallable(const GetFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetFleet, request);
        }

        /**
         * An Async wrapper for GetFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFleetRequestT = Model::GetFleetRequest>
        void GetFleetAsync(const GetFleetRequestT& request, const GetFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetFleet, request, handler, context);
        }

        /**
         * <p>Retrieves the logging options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingOptionsOutcome GetLoggingOptions(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for GetLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoggingOptionsRequestT = Model::GetLoggingOptionsRequest>
        Model::GetLoggingOptionsOutcomeCallable GetLoggingOptionsCallable(const GetLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetLoggingOptions, request);
        }

        /**
         * An Async wrapper for GetLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoggingOptionsRequestT = Model::GetLoggingOptionsRequest>
        void GetLoggingOptionsAsync(const GetLoggingOptionsRequestT& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetLoggingOptions, request, handler, context);
        }

        /**
         * <p> Retrieves information about a vehicle model (model manifest). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelManifestOutcome GetModelManifest(const Model::GetModelManifestRequest& request) const;

        /**
         * A Callable wrapper for GetModelManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelManifestRequestT = Model::GetModelManifestRequest>
        Model::GetModelManifestOutcomeCallable GetModelManifestCallable(const GetModelManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetModelManifest, request);
        }

        /**
         * An Async wrapper for GetModelManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelManifestRequestT = Model::GetModelManifestRequest>
        void GetModelManifestAsync(const GetModelManifestRequestT& request, const GetModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetModelManifest, request, handler, context);
        }

        /**
         * <p> Retrieves information about the status of registering your Amazon Web
         * Services account, IAM, and Amazon Timestream resources so that Amazon Web
         * Services IoT FleetWise can transfer your vehicle data to the Amazon Web Services
         * Cloud. </p> <p>For more information, including step-by-step procedures, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/setting-up.html">Setting
         * up Amazon Web Services IoT FleetWise</a>. </p>  <p>This API operation
         * doesn't require input parameters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetRegisterAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegisterAccountStatusOutcome GetRegisterAccountStatus(const Model::GetRegisterAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for GetRegisterAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegisterAccountStatusRequestT = Model::GetRegisterAccountStatusRequest>
        Model::GetRegisterAccountStatusOutcomeCallable GetRegisterAccountStatusCallable(const GetRegisterAccountStatusRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetRegisterAccountStatus, request);
        }

        /**
         * An Async wrapper for GetRegisterAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegisterAccountStatusRequestT = Model::GetRegisterAccountStatusRequest>
        void GetRegisterAccountStatusAsync(const GetRegisterAccountStatusRequestT& request, const GetRegisterAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetRegisterAccountStatus, request, handler, context);
        }

        /**
         * <p> Retrieves information about a signal catalog. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSignalCatalogOutcome GetSignalCatalog(const Model::GetSignalCatalogRequest& request) const;

        /**
         * A Callable wrapper for GetSignalCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSignalCatalogRequestT = Model::GetSignalCatalogRequest>
        Model::GetSignalCatalogOutcomeCallable GetSignalCatalogCallable(const GetSignalCatalogRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetSignalCatalog, request);
        }

        /**
         * An Async wrapper for GetSignalCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSignalCatalogRequestT = Model::GetSignalCatalogRequest>
        void GetSignalCatalogAsync(const GetSignalCatalogRequestT& request, const GetSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetSignalCatalog, request, handler, context);
        }

        /**
         * <p> Retrieves information about a vehicle. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVehicleOutcome GetVehicle(const Model::GetVehicleRequest& request) const;

        /**
         * A Callable wrapper for GetVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVehicleRequestT = Model::GetVehicleRequest>
        Model::GetVehicleOutcomeCallable GetVehicleCallable(const GetVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetVehicle, request);
        }

        /**
         * An Async wrapper for GetVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVehicleRequestT = Model::GetVehicleRequest>
        void GetVehicleAsync(const GetVehicleRequestT& request, const GetVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetVehicle, request, handler, context);
        }

        /**
         * <p> Retrieves information about the status of a vehicle with any associated
         * campaigns. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetVehicleStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVehicleStatusOutcome GetVehicleStatus(const Model::GetVehicleStatusRequest& request) const;

        /**
         * A Callable wrapper for GetVehicleStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVehicleStatusRequestT = Model::GetVehicleStatusRequest>
        Model::GetVehicleStatusOutcomeCallable GetVehicleStatusCallable(const GetVehicleStatusRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::GetVehicleStatus, request);
        }

        /**
         * An Async wrapper for GetVehicleStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVehicleStatusRequestT = Model::GetVehicleStatusRequest>
        void GetVehicleStatusAsync(const GetVehicleStatusRequestT& request, const GetVehicleStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::GetVehicleStatus, request, handler, context);
        }

        /**
         * <p> Creates a decoder manifest using your existing CAN DBC file from your local
         * device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ImportDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDecoderManifestOutcome ImportDecoderManifest(const Model::ImportDecoderManifestRequest& request) const;

        /**
         * A Callable wrapper for ImportDecoderManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportDecoderManifestRequestT = Model::ImportDecoderManifestRequest>
        Model::ImportDecoderManifestOutcomeCallable ImportDecoderManifestCallable(const ImportDecoderManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ImportDecoderManifest, request);
        }

        /**
         * An Async wrapper for ImportDecoderManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportDecoderManifestRequestT = Model::ImportDecoderManifestRequest>
        void ImportDecoderManifestAsync(const ImportDecoderManifestRequestT& request, const ImportDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ImportDecoderManifest, request, handler, context);
        }

        /**
         * <p> Creates a signal catalog using your existing VSS formatted content from your
         * local device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ImportSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSignalCatalogOutcome ImportSignalCatalog(const Model::ImportSignalCatalogRequest& request) const;

        /**
         * A Callable wrapper for ImportSignalCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportSignalCatalogRequestT = Model::ImportSignalCatalogRequest>
        Model::ImportSignalCatalogOutcomeCallable ImportSignalCatalogCallable(const ImportSignalCatalogRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ImportSignalCatalog, request);
        }

        /**
         * An Async wrapper for ImportSignalCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportSignalCatalogRequestT = Model::ImportSignalCatalogRequest>
        void ImportSignalCatalogAsync(const ImportSignalCatalogRequestT& request, const ImportSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ImportSignalCatalog, request, handler, context);
        }

        /**
         * <p> Lists information about created campaigns. </p>  <p>This API operation
         * uses pagination. Specify the <code>nextToken</code> parameter in the request to
         * return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;

        /**
         * A Callable wrapper for ListCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCampaignsRequestT = Model::ListCampaignsRequest>
        Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const ListCampaignsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListCampaigns, request);
        }

        /**
         * An Async wrapper for ListCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCampaignsRequestT = Model::ListCampaignsRequest>
        void ListCampaignsAsync(const ListCampaignsRequestT& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListCampaigns, request, handler, context);
        }

        /**
         * <p> Lists the network interfaces specified in a decoder manifest. </p> 
         * <p>This API operation uses pagination. Specify the <code>nextToken</code>
         * parameter in the request to return more results.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListDecoderManifestNetworkInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDecoderManifestNetworkInterfacesOutcome ListDecoderManifestNetworkInterfaces(const Model::ListDecoderManifestNetworkInterfacesRequest& request) const;

        /**
         * A Callable wrapper for ListDecoderManifestNetworkInterfaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDecoderManifestNetworkInterfacesRequestT = Model::ListDecoderManifestNetworkInterfacesRequest>
        Model::ListDecoderManifestNetworkInterfacesOutcomeCallable ListDecoderManifestNetworkInterfacesCallable(const ListDecoderManifestNetworkInterfacesRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListDecoderManifestNetworkInterfaces, request);
        }

        /**
         * An Async wrapper for ListDecoderManifestNetworkInterfaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDecoderManifestNetworkInterfacesRequestT = Model::ListDecoderManifestNetworkInterfacesRequest>
        void ListDecoderManifestNetworkInterfacesAsync(const ListDecoderManifestNetworkInterfacesRequestT& request, const ListDecoderManifestNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListDecoderManifestNetworkInterfaces, request, handler, context);
        }

        /**
         * <p> A list of information about signal decoders specified in a decoder manifest.
         * </p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListDecoderManifestSignals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDecoderManifestSignalsOutcome ListDecoderManifestSignals(const Model::ListDecoderManifestSignalsRequest& request) const;

        /**
         * A Callable wrapper for ListDecoderManifestSignals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDecoderManifestSignalsRequestT = Model::ListDecoderManifestSignalsRequest>
        Model::ListDecoderManifestSignalsOutcomeCallable ListDecoderManifestSignalsCallable(const ListDecoderManifestSignalsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListDecoderManifestSignals, request);
        }

        /**
         * An Async wrapper for ListDecoderManifestSignals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDecoderManifestSignalsRequestT = Model::ListDecoderManifestSignalsRequest>
        void ListDecoderManifestSignalsAsync(const ListDecoderManifestSignalsRequestT& request, const ListDecoderManifestSignalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListDecoderManifestSignals, request, handler, context);
        }

        /**
         * <p> Lists decoder manifests. </p>  <p>This API operation uses pagination.
         * Specify the <code>nextToken</code> parameter in the request to return more
         * results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListDecoderManifests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDecoderManifestsOutcome ListDecoderManifests(const Model::ListDecoderManifestsRequest& request) const;

        /**
         * A Callable wrapper for ListDecoderManifests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDecoderManifestsRequestT = Model::ListDecoderManifestsRequest>
        Model::ListDecoderManifestsOutcomeCallable ListDecoderManifestsCallable(const ListDecoderManifestsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListDecoderManifests, request);
        }

        /**
         * An Async wrapper for ListDecoderManifests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDecoderManifestsRequestT = Model::ListDecoderManifestsRequest>
        void ListDecoderManifestsAsync(const ListDecoderManifestsRequestT& request, const ListDecoderManifestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListDecoderManifests, request, handler, context);
        }

        /**
         * <p> Retrieves information for each created fleet in an Amazon Web Services
         * account. </p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFleetsRequestT = Model::ListFleetsRequest>
        Model::ListFleetsOutcomeCallable ListFleetsCallable(const ListFleetsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListFleets, request);
        }

        /**
         * An Async wrapper for ListFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFleetsRequestT = Model::ListFleetsRequest>
        void ListFleetsAsync(const ListFleetsRequestT& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListFleets, request, handler, context);
        }

        /**
         * <p>Retrieves a list of IDs for all fleets that the vehicle is associated
         * with.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListFleetsForVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsForVehicleOutcome ListFleetsForVehicle(const Model::ListFleetsForVehicleRequest& request) const;

        /**
         * A Callable wrapper for ListFleetsForVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFleetsForVehicleRequestT = Model::ListFleetsForVehicleRequest>
        Model::ListFleetsForVehicleOutcomeCallable ListFleetsForVehicleCallable(const ListFleetsForVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListFleetsForVehicle, request);
        }

        /**
         * An Async wrapper for ListFleetsForVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFleetsForVehicleRequestT = Model::ListFleetsForVehicleRequest>
        void ListFleetsForVehicleAsync(const ListFleetsForVehicleRequestT& request, const ListFleetsForVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListFleetsForVehicle, request, handler, context);
        }

        /**
         * <p> Lists information about nodes specified in a vehicle model (model manifest).
         * </p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListModelManifestNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelManifestNodesOutcome ListModelManifestNodes(const Model::ListModelManifestNodesRequest& request) const;

        /**
         * A Callable wrapper for ListModelManifestNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelManifestNodesRequestT = Model::ListModelManifestNodesRequest>
        Model::ListModelManifestNodesOutcomeCallable ListModelManifestNodesCallable(const ListModelManifestNodesRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListModelManifestNodes, request);
        }

        /**
         * An Async wrapper for ListModelManifestNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelManifestNodesRequestT = Model::ListModelManifestNodesRequest>
        void ListModelManifestNodesAsync(const ListModelManifestNodesRequestT& request, const ListModelManifestNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListModelManifestNodes, request, handler, context);
        }

        /**
         * <p> Retrieves a list of vehicle models (model manifests). </p>  <p>This
         * API operation uses pagination. Specify the <code>nextToken</code> parameter in
         * the request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListModelManifests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelManifestsOutcome ListModelManifests(const Model::ListModelManifestsRequest& request) const;

        /**
         * A Callable wrapper for ListModelManifests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelManifestsRequestT = Model::ListModelManifestsRequest>
        Model::ListModelManifestsOutcomeCallable ListModelManifestsCallable(const ListModelManifestsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListModelManifests, request);
        }

        /**
         * An Async wrapper for ListModelManifests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelManifestsRequestT = Model::ListModelManifestsRequest>
        void ListModelManifestsAsync(const ListModelManifestsRequestT& request, const ListModelManifestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListModelManifests, request, handler, context);
        }

        /**
         * <p> Lists of information about the signals (nodes) specified in a signal
         * catalog. </p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListSignalCatalogNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSignalCatalogNodesOutcome ListSignalCatalogNodes(const Model::ListSignalCatalogNodesRequest& request) const;

        /**
         * A Callable wrapper for ListSignalCatalogNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSignalCatalogNodesRequestT = Model::ListSignalCatalogNodesRequest>
        Model::ListSignalCatalogNodesOutcomeCallable ListSignalCatalogNodesCallable(const ListSignalCatalogNodesRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListSignalCatalogNodes, request);
        }

        /**
         * An Async wrapper for ListSignalCatalogNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSignalCatalogNodesRequestT = Model::ListSignalCatalogNodesRequest>
        void ListSignalCatalogNodesAsync(const ListSignalCatalogNodesRequestT& request, const ListSignalCatalogNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListSignalCatalogNodes, request, handler, context);
        }

        /**
         * <p> Lists all the created signal catalogs in an Amazon Web Services account.
         * </p> <p>You can use to list information about each signal (node) specified in a
         * signal catalog.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListSignalCatalogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSignalCatalogsOutcome ListSignalCatalogs(const Model::ListSignalCatalogsRequest& request) const;

        /**
         * A Callable wrapper for ListSignalCatalogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSignalCatalogsRequestT = Model::ListSignalCatalogsRequest>
        Model::ListSignalCatalogsOutcomeCallable ListSignalCatalogsCallable(const ListSignalCatalogsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListSignalCatalogs, request);
        }

        /**
         * An Async wrapper for ListSignalCatalogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSignalCatalogsRequestT = Model::ListSignalCatalogsRequest>
        void ListSignalCatalogsAsync(const ListSignalCatalogsRequestT& request, const ListSignalCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListSignalCatalogs, request, handler, context);
        }

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Retrieves a list of summaries of created vehicles. </p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListVehicles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVehiclesOutcome ListVehicles(const Model::ListVehiclesRequest& request) const;

        /**
         * A Callable wrapper for ListVehicles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVehiclesRequestT = Model::ListVehiclesRequest>
        Model::ListVehiclesOutcomeCallable ListVehiclesCallable(const ListVehiclesRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListVehicles, request);
        }

        /**
         * An Async wrapper for ListVehicles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVehiclesRequestT = Model::ListVehiclesRequest>
        void ListVehiclesAsync(const ListVehiclesRequestT& request, const ListVehiclesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListVehicles, request, handler, context);
        }

        /**
         * <p> Retrieves a list of summaries of all vehicles associated with a fleet. </p>
         *  <p>This API operation uses pagination. Specify the <code>nextToken</code>
         * parameter in the request to return more results.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListVehiclesInFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVehiclesInFleetOutcome ListVehiclesInFleet(const Model::ListVehiclesInFleetRequest& request) const;

        /**
         * A Callable wrapper for ListVehiclesInFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVehiclesInFleetRequestT = Model::ListVehiclesInFleetRequest>
        Model::ListVehiclesInFleetOutcomeCallable ListVehiclesInFleetCallable(const ListVehiclesInFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::ListVehiclesInFleet, request);
        }

        /**
         * An Async wrapper for ListVehiclesInFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVehiclesInFleetRequestT = Model::ListVehiclesInFleetRequest>
        void ListVehiclesInFleetAsync(const ListVehiclesInFleetRequestT& request, const ListVehiclesInFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::ListVehiclesInFleet, request, handler, context);
        }

        /**
         * <p>Creates or updates the encryption configuration. Amazon Web Services IoT
         * FleetWise can encrypt your data and resources using an Amazon Web Services
         * managed key. Or, you can use a KMS key that you own and manage. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/data-encryption.html">Data
         * encryption</a> in the <i>Amazon Web Services IoT FleetWise Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/PutEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEncryptionConfigurationOutcome PutEncryptionConfiguration(const Model::PutEncryptionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEncryptionConfigurationRequestT = Model::PutEncryptionConfigurationRequest>
        Model::PutEncryptionConfigurationOutcomeCallable PutEncryptionConfigurationCallable(const PutEncryptionConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::PutEncryptionConfiguration, request);
        }

        /**
         * An Async wrapper for PutEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEncryptionConfigurationRequestT = Model::PutEncryptionConfigurationRequest>
        void PutEncryptionConfigurationAsync(const PutEncryptionConfigurationRequestT& request, const PutEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::PutEncryptionConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates the logging option.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
        Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const PutLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::PutLoggingOptions, request);
        }

        /**
         * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
        void PutLoggingOptionsAsync(const PutLoggingOptionsRequestT& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::PutLoggingOptions, request, handler, context);
        }

        /**
         *  <p>This API operation contains deprecated parameters. Register your
         * account again without the Timestream resources parameter so that Amazon Web
         * Services IoT FleetWise can remove the Timestream metadata stored. You should
         * then pass the data destination into the <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/APIReference/API_CreateCampaign.html">CreateCampaign</a>
         * API operation.</p> <p>You must delete any existing campaigns that include an
         * empty data destination before you register your account again. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/APIReference/API_DeleteCampaign.html">DeleteCampaign</a>
         * API operation.</p> <p>If you want to delete the Timestream inline policy from
         * the service-linked role, such as to mitigate an overly permissive policy, you
         * must first delete any existing campaigns. Then delete the service-linked role
         * and register your account again to enable CloudWatch metrics. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_DeleteServiceLinkedRole.html">DeleteServiceLinkedRole</a>
         * in the <i>Identity and Access Management API Reference</i>.</p> 
         * <p>Registers your Amazon Web Services account, IAM, and Amazon Timestream
         * resources so Amazon Web Services IoT FleetWise can transfer your vehicle data to
         * the Amazon Web Services Cloud. For more information, including step-by-step
         * procedures, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/setting-up.html">Setting
         * up Amazon Web Services IoT FleetWise</a>. </p>  <p>An Amazon Web Services
         * account is <b>not</b> the same thing as a "user." An <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/introduction_identity-management.html#intro-identity-users">Amazon
         * Web Services user</a> is an identity that you create using Identity and Access
         * Management (IAM) and takes the form of either an <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users.html">IAM
         * user</a> or an <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM role,
         * both with credentials</a>. A single Amazon Web Services account can, and
         * typically does, contain many users and roles.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/RegisterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAccountOutcome RegisterAccount(const Model::RegisterAccountRequest& request) const;

        /**
         * A Callable wrapper for RegisterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterAccountRequestT = Model::RegisterAccountRequest>
        Model::RegisterAccountOutcomeCallable RegisterAccountCallable(const RegisterAccountRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::RegisterAccount, request);
        }

        /**
         * An Async wrapper for RegisterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAccountRequestT = Model::RegisterAccountRequest>
        void RegisterAccountAsync(const RegisterAccountRequestT& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::RegisterAccount, request, handler, context);
        }

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates a campaign. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignRequestT = Model::UpdateCampaignRequest>
        Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const UpdateCampaignRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UpdateCampaign, request);
        }

        /**
         * An Async wrapper for UpdateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignRequestT = Model::UpdateCampaignRequest>
        void UpdateCampaignAsync(const UpdateCampaignRequestT& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UpdateCampaign, request, handler, context);
        }

        /**
         * <p> Updates a decoder manifest.</p> <p>A decoder manifest can only be updated
         * when the status is <code>DRAFT</code>. Only <code>ACTIVE</code> decoder
         * manifests can be associated with vehicles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDecoderManifestOutcome UpdateDecoderManifest(const Model::UpdateDecoderManifestRequest& request) const;

        /**
         * A Callable wrapper for UpdateDecoderManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDecoderManifestRequestT = Model::UpdateDecoderManifestRequest>
        Model::UpdateDecoderManifestOutcomeCallable UpdateDecoderManifestCallable(const UpdateDecoderManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UpdateDecoderManifest, request);
        }

        /**
         * An Async wrapper for UpdateDecoderManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDecoderManifestRequestT = Model::UpdateDecoderManifestRequest>
        void UpdateDecoderManifestAsync(const UpdateDecoderManifestRequestT& request, const UpdateDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UpdateDecoderManifest, request, handler, context);
        }

        /**
         * <p> Updates the description of an existing fleet. </p>  <p>If the fleet is
         * successfully updated, Amazon Web Services IoT FleetWise sends back an HTTP 200
         * response with an empty HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetOutcome UpdateFleet(const Model::UpdateFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        Model::UpdateFleetOutcomeCallable UpdateFleetCallable(const UpdateFleetRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UpdateFleet, request);
        }

        /**
         * An Async wrapper for UpdateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        void UpdateFleetAsync(const UpdateFleetRequestT& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UpdateFleet, request, handler, context);
        }

        /**
         * <p> Updates a vehicle model (model manifest). If created vehicles are associated
         * with a vehicle model, it can't be updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelManifestOutcome UpdateModelManifest(const Model::UpdateModelManifestRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelManifest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelManifestRequestT = Model::UpdateModelManifestRequest>
        Model::UpdateModelManifestOutcomeCallable UpdateModelManifestCallable(const UpdateModelManifestRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UpdateModelManifest, request);
        }

        /**
         * An Async wrapper for UpdateModelManifest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelManifestRequestT = Model::UpdateModelManifestRequest>
        void UpdateModelManifestAsync(const UpdateModelManifestRequestT& request, const UpdateModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UpdateModelManifest, request, handler, context);
        }

        /**
         * <p> Updates a signal catalog. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSignalCatalogOutcome UpdateSignalCatalog(const Model::UpdateSignalCatalogRequest& request) const;

        /**
         * A Callable wrapper for UpdateSignalCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSignalCatalogRequestT = Model::UpdateSignalCatalogRequest>
        Model::UpdateSignalCatalogOutcomeCallable UpdateSignalCatalogCallable(const UpdateSignalCatalogRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UpdateSignalCatalog, request);
        }

        /**
         * An Async wrapper for UpdateSignalCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSignalCatalogRequestT = Model::UpdateSignalCatalogRequest>
        void UpdateSignalCatalogAsync(const UpdateSignalCatalogRequestT& request, const UpdateSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UpdateSignalCatalog, request, handler, context);
        }

        /**
         * <p> Updates a vehicle. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVehicleOutcome UpdateVehicle(const Model::UpdateVehicleRequest& request) const;

        /**
         * A Callable wrapper for UpdateVehicle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVehicleRequestT = Model::UpdateVehicleRequest>
        Model::UpdateVehicleOutcomeCallable UpdateVehicleCallable(const UpdateVehicleRequestT& request) const
        {
            return SubmitCallable(&IoTFleetWiseClient::UpdateVehicle, request);
        }

        /**
         * An Async wrapper for UpdateVehicle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVehicleRequestT = Model::UpdateVehicleRequest>
        void UpdateVehicleAsync(const UpdateVehicleRequestT& request, const UpdateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetWiseClient::UpdateVehicle, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTFleetWiseEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTFleetWiseClient>;
      void init(const IoTFleetWiseClientConfiguration& clientConfiguration);

      IoTFleetWiseClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTFleetWiseEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTFleetWise
} // namespace Aws
