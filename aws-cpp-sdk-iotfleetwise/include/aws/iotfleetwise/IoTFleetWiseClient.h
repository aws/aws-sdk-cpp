/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleetwise/IoTFleetWiseServiceClientModel.h>
#include <aws/iotfleetwise/IoTFleetWiseLegacyAsyncMacros.h>

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
  class AWS_IOTFLEETWISE_API IoTFleetWiseClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetWiseClient(const Aws::IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration = Aws::IoTFleetWise::IoTFleetWiseClientConfiguration(),
                           std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetWiseClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG),
                           const Aws::IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration = Aws::IoTFleetWise::IoTFleetWiseClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTFleetWiseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p> Adds, or associates, a vehicle with a fleet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/AssociateVehicleFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVehicleFleetOutcome AssociateVehicleFleet(const Model::AssociateVehicleFleetRequest& request) const;


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
         * <p> Creates a collection of standardized signals that can be reused to create
         * vehicle models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSignalCatalogOutcome CreateSignalCatalog(const Model::CreateSignalCatalogRequest& request) const;


        /**
         * <p> Creates a vehicle, which is an instance of a vehicle model (model manifest).
         * Vehicles created from the same vehicle model consist of the same signals
         * inherited from the vehicle model.</p>  <p> If you have an existing Amazon
         * Web Services IoT Thing, you can use Amazon Web Services IoT FleetWise to create
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
         * <p> Deletes a data collection campaign. Deleting a campaign suspends all data
         * collection and removes it from any vehicles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;


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
         * <p> Deletes a vehicle model (model manifest).</p>  <p>If the vehicle model
         * is successfully deleted, Amazon Web Services IoT FleetWise sends back an HTTP
         * 200 response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelManifestOutcome DeleteModelManifest(const Model::DeleteModelManifestRequest& request) const;


        /**
         * <p> Deletes a signal catalog. </p>  <p>If the signal catalog is
         * successfully deleted, Amazon Web Services IoT FleetWise sends back an HTTP 200
         * response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSignalCatalogOutcome DeleteSignalCatalog(const Model::DeleteSignalCatalogRequest& request) const;


        /**
         * <p> Deletes a vehicle and removes it from any campaigns.</p>  <p>If the
         * vehicle is successfully deleted, Amazon Web Services IoT FleetWise sends back an
         * HTTP 200 response with an empty body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DeleteVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVehicleOutcome DeleteVehicle(const Model::DeleteVehicleRequest& request) const;


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
         * <p> Retrieves information about a campaign. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;


        /**
         * <p> Retrieves information about a created decoder manifest. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDecoderManifestOutcome GetDecoderManifest(const Model::GetDecoderManifestRequest& request) const;


        /**
         * <p> Retrieves information about a fleet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFleetOutcome GetFleet(const Model::GetFleetRequest& request) const;


        /**
         * <p>Retrieves the logging options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingOptionsOutcome GetLoggingOptions(const Model::GetLoggingOptionsRequest& request) const;


        /**
         * <p> Retrieves information about a vehicle model (model manifest). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelManifestOutcome GetModelManifest(const Model::GetModelManifestRequest& request) const;


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
         * <p> Retrieves information about a signal catalog. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSignalCatalogOutcome GetSignalCatalog(const Model::GetSignalCatalogRequest& request) const;


        /**
         * <p> Retrieves information about a vehicle. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVehicleOutcome GetVehicle(const Model::GetVehicleRequest& request) const;


        /**
         * <p> Retrieves information about the status of a vehicle with any associated
         * campaigns. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/GetVehicleStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVehicleStatusOutcome GetVehicleStatus(const Model::GetVehicleStatusRequest& request) const;


        /**
         * <p> Creates a decoder manifest using your existing CAN DBC file from your local
         * device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ImportDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDecoderManifestOutcome ImportDecoderManifest(const Model::ImportDecoderManifestRequest& request) const;


        /**
         * <p> Creates a signal catalog using your existing VSS formatted content from your
         * local device. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ImportSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSignalCatalogOutcome ImportSignalCatalog(const Model::ImportSignalCatalogRequest& request) const;


        /**
         * <p> Lists information about created campaigns. </p>  <p>This API operation
         * uses pagination. Specify the <code>nextToken</code> parameter in the request to
         * return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;


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
         * <p> A list of information about signal decoders specified in a decoder manifest.
         * </p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListDecoderManifestSignals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDecoderManifestSignalsOutcome ListDecoderManifestSignals(const Model::ListDecoderManifestSignalsRequest& request) const;


        /**
         * <p> Lists decoder manifests. </p>  <p>This API operation uses pagination.
         * Specify the <code>nextToken</code> parameter in the request to return more
         * results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListDecoderManifests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDecoderManifestsOutcome ListDecoderManifests(const Model::ListDecoderManifestsRequest& request) const;


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
         * <p>Retrieves a list of IDs for all fleets that the vehicle is associated
         * with.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListFleetsForVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsForVehicleOutcome ListFleetsForVehicle(const Model::ListFleetsForVehicleRequest& request) const;


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
         * <p> Retrieves a list of vehicle models (model manifests). </p>  <p>This
         * API operation uses pagination. Specify the <code>nextToken</code> parameter in
         * the request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListModelManifests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelManifestsOutcome ListModelManifests(const Model::ListModelManifestsRequest& request) const;


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
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> Retrieves a list of summaries of created vehicles. </p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ListVehicles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVehiclesOutcome ListVehicles(const Model::ListVehiclesRequest& request) const;


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
         * <p>Creates or updates the logging option.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;


        /**
         * <p>Registers your Amazon Web Services account, IAM, and Amazon Timestream
         * resources so Amazon Web Services IoT FleetWise can transfer your vehicle data to
         * the Amazon Web Services Cloud. For more information, including step-by-step
         * procedures, see <a
         * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/setting-up.html">Setting
         * up Amazon Web Services IoT FleetWise</a>. </p>  <p>An Amazon Web Services
         * account is <b>not</b> the same thing as a "user account". An <a
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
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Updates a campaign. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;


        /**
         * <p> Updates a decoder manifest.</p> <p>A decoder manifest can only be updated
         * when the status is <code>DRAFT</code>. Only <code>ACTIVE</code> decoder
         * manifests can be associated with vehicles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateDecoderManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDecoderManifestOutcome UpdateDecoderManifest(const Model::UpdateDecoderManifestRequest& request) const;


        /**
         * <p> Updates the description of an existing fleet. </p>  <p>If the fleet is
         * successfully updated, Amazon Web Services IoT FleetWise sends back an HTTP 200
         * response with an empty HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetOutcome UpdateFleet(const Model::UpdateFleetRequest& request) const;


        /**
         * <p> Updates a vehicle model (model manifest). If created vehicles are associated
         * with a vehicle model, it can't be updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateModelManifest">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelManifestOutcome UpdateModelManifest(const Model::UpdateModelManifestRequest& request) const;


        /**
         * <p> Updates a signal catalog. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateSignalCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSignalCatalogOutcome UpdateSignalCatalog(const Model::UpdateSignalCatalogRequest& request) const;


        /**
         * <p> Updates a vehicle. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/UpdateVehicle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVehicleOutcome UpdateVehicle(const Model::UpdateVehicleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTFleetWiseEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTFleetWiseClientConfiguration& clientConfiguration);

      IoTFleetWiseClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTFleetWiseEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTFleetWise
} // namespace Aws
