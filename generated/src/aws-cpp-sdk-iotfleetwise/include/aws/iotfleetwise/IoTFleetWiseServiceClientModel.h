/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotfleetwise/IoTFleetWiseErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotfleetwise/IoTFleetWiseEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTFleetWiseClient header */
#include <aws/iotfleetwise/model/AssociateVehicleFleetResult.h>
#include <aws/iotfleetwise/model/BatchCreateVehicleResult.h>
#include <aws/iotfleetwise/model/BatchUpdateVehicleResult.h>
#include <aws/iotfleetwise/model/CreateCampaignResult.h>
#include <aws/iotfleetwise/model/CreateDecoderManifestResult.h>
#include <aws/iotfleetwise/model/CreateFleetResult.h>
#include <aws/iotfleetwise/model/CreateModelManifestResult.h>
#include <aws/iotfleetwise/model/CreateSignalCatalogResult.h>
#include <aws/iotfleetwise/model/CreateVehicleResult.h>
#include <aws/iotfleetwise/model/DeleteCampaignResult.h>
#include <aws/iotfleetwise/model/DeleteDecoderManifestResult.h>
#include <aws/iotfleetwise/model/DeleteFleetResult.h>
#include <aws/iotfleetwise/model/DeleteModelManifestResult.h>
#include <aws/iotfleetwise/model/DeleteSignalCatalogResult.h>
#include <aws/iotfleetwise/model/DeleteVehicleResult.h>
#include <aws/iotfleetwise/model/DisassociateVehicleFleetResult.h>
#include <aws/iotfleetwise/model/GetCampaignResult.h>
#include <aws/iotfleetwise/model/GetDecoderManifestResult.h>
#include <aws/iotfleetwise/model/GetFleetResult.h>
#include <aws/iotfleetwise/model/GetLoggingOptionsResult.h>
#include <aws/iotfleetwise/model/GetModelManifestResult.h>
#include <aws/iotfleetwise/model/GetRegisterAccountStatusResult.h>
#include <aws/iotfleetwise/model/GetSignalCatalogResult.h>
#include <aws/iotfleetwise/model/GetVehicleResult.h>
#include <aws/iotfleetwise/model/GetVehicleStatusResult.h>
#include <aws/iotfleetwise/model/ImportDecoderManifestResult.h>
#include <aws/iotfleetwise/model/ImportSignalCatalogResult.h>
#include <aws/iotfleetwise/model/ListCampaignsResult.h>
#include <aws/iotfleetwise/model/ListDecoderManifestNetworkInterfacesResult.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsResult.h>
#include <aws/iotfleetwise/model/ListDecoderManifestsResult.h>
#include <aws/iotfleetwise/model/ListFleetsResult.h>
#include <aws/iotfleetwise/model/ListFleetsForVehicleResult.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesResult.h>
#include <aws/iotfleetwise/model/ListModelManifestsResult.h>
#include <aws/iotfleetwise/model/ListSignalCatalogNodesResult.h>
#include <aws/iotfleetwise/model/ListSignalCatalogsResult.h>
#include <aws/iotfleetwise/model/ListTagsForResourceResult.h>
#include <aws/iotfleetwise/model/ListVehiclesResult.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetResult.h>
#include <aws/iotfleetwise/model/PutLoggingOptionsResult.h>
#include <aws/iotfleetwise/model/RegisterAccountResult.h>
#include <aws/iotfleetwise/model/TagResourceResult.h>
#include <aws/iotfleetwise/model/UntagResourceResult.h>
#include <aws/iotfleetwise/model/UpdateCampaignResult.h>
#include <aws/iotfleetwise/model/UpdateDecoderManifestResult.h>
#include <aws/iotfleetwise/model/UpdateFleetResult.h>
#include <aws/iotfleetwise/model/UpdateModelManifestResult.h>
#include <aws/iotfleetwise/model/UpdateSignalCatalogResult.h>
#include <aws/iotfleetwise/model/UpdateVehicleResult.h>
/* End of service model headers required in IoTFleetWiseClient header */

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

  namespace IoTFleetWise
  {
    using IoTFleetWiseClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTFleetWiseEndpointProviderBase = Aws::IoTFleetWise::Endpoint::IoTFleetWiseEndpointProviderBase;
    using IoTFleetWiseEndpointProvider = Aws::IoTFleetWise::Endpoint::IoTFleetWiseEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTFleetWiseClient header */
      class AssociateVehicleFleetRequest;
      class BatchCreateVehicleRequest;
      class BatchUpdateVehicleRequest;
      class CreateCampaignRequest;
      class CreateDecoderManifestRequest;
      class CreateFleetRequest;
      class CreateModelManifestRequest;
      class CreateSignalCatalogRequest;
      class CreateVehicleRequest;
      class DeleteCampaignRequest;
      class DeleteDecoderManifestRequest;
      class DeleteFleetRequest;
      class DeleteModelManifestRequest;
      class DeleteSignalCatalogRequest;
      class DeleteVehicleRequest;
      class DisassociateVehicleFleetRequest;
      class GetCampaignRequest;
      class GetDecoderManifestRequest;
      class GetFleetRequest;
      class GetLoggingOptionsRequest;
      class GetModelManifestRequest;
      class GetRegisterAccountStatusRequest;
      class GetSignalCatalogRequest;
      class GetVehicleRequest;
      class GetVehicleStatusRequest;
      class ImportDecoderManifestRequest;
      class ImportSignalCatalogRequest;
      class ListCampaignsRequest;
      class ListDecoderManifestNetworkInterfacesRequest;
      class ListDecoderManifestSignalsRequest;
      class ListDecoderManifestsRequest;
      class ListFleetsRequest;
      class ListFleetsForVehicleRequest;
      class ListModelManifestNodesRequest;
      class ListModelManifestsRequest;
      class ListSignalCatalogNodesRequest;
      class ListSignalCatalogsRequest;
      class ListTagsForResourceRequest;
      class ListVehiclesRequest;
      class ListVehiclesInFleetRequest;
      class PutLoggingOptionsRequest;
      class RegisterAccountRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCampaignRequest;
      class UpdateDecoderManifestRequest;
      class UpdateFleetRequest;
      class UpdateModelManifestRequest;
      class UpdateSignalCatalogRequest;
      class UpdateVehicleRequest;
      /* End of service model forward declarations required in IoTFleetWiseClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateVehicleFleetResult, IoTFleetWiseError> AssociateVehicleFleetOutcome;
      typedef Aws::Utils::Outcome<BatchCreateVehicleResult, IoTFleetWiseError> BatchCreateVehicleOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateVehicleResult, IoTFleetWiseError> BatchUpdateVehicleOutcome;
      typedef Aws::Utils::Outcome<CreateCampaignResult, IoTFleetWiseError> CreateCampaignOutcome;
      typedef Aws::Utils::Outcome<CreateDecoderManifestResult, IoTFleetWiseError> CreateDecoderManifestOutcome;
      typedef Aws::Utils::Outcome<CreateFleetResult, IoTFleetWiseError> CreateFleetOutcome;
      typedef Aws::Utils::Outcome<CreateModelManifestResult, IoTFleetWiseError> CreateModelManifestOutcome;
      typedef Aws::Utils::Outcome<CreateSignalCatalogResult, IoTFleetWiseError> CreateSignalCatalogOutcome;
      typedef Aws::Utils::Outcome<CreateVehicleResult, IoTFleetWiseError> CreateVehicleOutcome;
      typedef Aws::Utils::Outcome<DeleteCampaignResult, IoTFleetWiseError> DeleteCampaignOutcome;
      typedef Aws::Utils::Outcome<DeleteDecoderManifestResult, IoTFleetWiseError> DeleteDecoderManifestOutcome;
      typedef Aws::Utils::Outcome<DeleteFleetResult, IoTFleetWiseError> DeleteFleetOutcome;
      typedef Aws::Utils::Outcome<DeleteModelManifestResult, IoTFleetWiseError> DeleteModelManifestOutcome;
      typedef Aws::Utils::Outcome<DeleteSignalCatalogResult, IoTFleetWiseError> DeleteSignalCatalogOutcome;
      typedef Aws::Utils::Outcome<DeleteVehicleResult, IoTFleetWiseError> DeleteVehicleOutcome;
      typedef Aws::Utils::Outcome<DisassociateVehicleFleetResult, IoTFleetWiseError> DisassociateVehicleFleetOutcome;
      typedef Aws::Utils::Outcome<GetCampaignResult, IoTFleetWiseError> GetCampaignOutcome;
      typedef Aws::Utils::Outcome<GetDecoderManifestResult, IoTFleetWiseError> GetDecoderManifestOutcome;
      typedef Aws::Utils::Outcome<GetFleetResult, IoTFleetWiseError> GetFleetOutcome;
      typedef Aws::Utils::Outcome<GetLoggingOptionsResult, IoTFleetWiseError> GetLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<GetModelManifestResult, IoTFleetWiseError> GetModelManifestOutcome;
      typedef Aws::Utils::Outcome<GetRegisterAccountStatusResult, IoTFleetWiseError> GetRegisterAccountStatusOutcome;
      typedef Aws::Utils::Outcome<GetSignalCatalogResult, IoTFleetWiseError> GetSignalCatalogOutcome;
      typedef Aws::Utils::Outcome<GetVehicleResult, IoTFleetWiseError> GetVehicleOutcome;
      typedef Aws::Utils::Outcome<GetVehicleStatusResult, IoTFleetWiseError> GetVehicleStatusOutcome;
      typedef Aws::Utils::Outcome<ImportDecoderManifestResult, IoTFleetWiseError> ImportDecoderManifestOutcome;
      typedef Aws::Utils::Outcome<ImportSignalCatalogResult, IoTFleetWiseError> ImportSignalCatalogOutcome;
      typedef Aws::Utils::Outcome<ListCampaignsResult, IoTFleetWiseError> ListCampaignsOutcome;
      typedef Aws::Utils::Outcome<ListDecoderManifestNetworkInterfacesResult, IoTFleetWiseError> ListDecoderManifestNetworkInterfacesOutcome;
      typedef Aws::Utils::Outcome<ListDecoderManifestSignalsResult, IoTFleetWiseError> ListDecoderManifestSignalsOutcome;
      typedef Aws::Utils::Outcome<ListDecoderManifestsResult, IoTFleetWiseError> ListDecoderManifestsOutcome;
      typedef Aws::Utils::Outcome<ListFleetsResult, IoTFleetWiseError> ListFleetsOutcome;
      typedef Aws::Utils::Outcome<ListFleetsForVehicleResult, IoTFleetWiseError> ListFleetsForVehicleOutcome;
      typedef Aws::Utils::Outcome<ListModelManifestNodesResult, IoTFleetWiseError> ListModelManifestNodesOutcome;
      typedef Aws::Utils::Outcome<ListModelManifestsResult, IoTFleetWiseError> ListModelManifestsOutcome;
      typedef Aws::Utils::Outcome<ListSignalCatalogNodesResult, IoTFleetWiseError> ListSignalCatalogNodesOutcome;
      typedef Aws::Utils::Outcome<ListSignalCatalogsResult, IoTFleetWiseError> ListSignalCatalogsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTFleetWiseError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVehiclesResult, IoTFleetWiseError> ListVehiclesOutcome;
      typedef Aws::Utils::Outcome<ListVehiclesInFleetResult, IoTFleetWiseError> ListVehiclesInFleetOutcome;
      typedef Aws::Utils::Outcome<PutLoggingOptionsResult, IoTFleetWiseError> PutLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<RegisterAccountResult, IoTFleetWiseError> RegisterAccountOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTFleetWiseError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTFleetWiseError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCampaignResult, IoTFleetWiseError> UpdateCampaignOutcome;
      typedef Aws::Utils::Outcome<UpdateDecoderManifestResult, IoTFleetWiseError> UpdateDecoderManifestOutcome;
      typedef Aws::Utils::Outcome<UpdateFleetResult, IoTFleetWiseError> UpdateFleetOutcome;
      typedef Aws::Utils::Outcome<UpdateModelManifestResult, IoTFleetWiseError> UpdateModelManifestOutcome;
      typedef Aws::Utils::Outcome<UpdateSignalCatalogResult, IoTFleetWiseError> UpdateSignalCatalogOutcome;
      typedef Aws::Utils::Outcome<UpdateVehicleResult, IoTFleetWiseError> UpdateVehicleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateVehicleFleetOutcome> AssociateVehicleFleetOutcomeCallable;
      typedef std::future<BatchCreateVehicleOutcome> BatchCreateVehicleOutcomeCallable;
      typedef std::future<BatchUpdateVehicleOutcome> BatchUpdateVehicleOutcomeCallable;
      typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
      typedef std::future<CreateDecoderManifestOutcome> CreateDecoderManifestOutcomeCallable;
      typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
      typedef std::future<CreateModelManifestOutcome> CreateModelManifestOutcomeCallable;
      typedef std::future<CreateSignalCatalogOutcome> CreateSignalCatalogOutcomeCallable;
      typedef std::future<CreateVehicleOutcome> CreateVehicleOutcomeCallable;
      typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
      typedef std::future<DeleteDecoderManifestOutcome> DeleteDecoderManifestOutcomeCallable;
      typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
      typedef std::future<DeleteModelManifestOutcome> DeleteModelManifestOutcomeCallable;
      typedef std::future<DeleteSignalCatalogOutcome> DeleteSignalCatalogOutcomeCallable;
      typedef std::future<DeleteVehicleOutcome> DeleteVehicleOutcomeCallable;
      typedef std::future<DisassociateVehicleFleetOutcome> DisassociateVehicleFleetOutcomeCallable;
      typedef std::future<GetCampaignOutcome> GetCampaignOutcomeCallable;
      typedef std::future<GetDecoderManifestOutcome> GetDecoderManifestOutcomeCallable;
      typedef std::future<GetFleetOutcome> GetFleetOutcomeCallable;
      typedef std::future<GetLoggingOptionsOutcome> GetLoggingOptionsOutcomeCallable;
      typedef std::future<GetModelManifestOutcome> GetModelManifestOutcomeCallable;
      typedef std::future<GetRegisterAccountStatusOutcome> GetRegisterAccountStatusOutcomeCallable;
      typedef std::future<GetSignalCatalogOutcome> GetSignalCatalogOutcomeCallable;
      typedef std::future<GetVehicleOutcome> GetVehicleOutcomeCallable;
      typedef std::future<GetVehicleStatusOutcome> GetVehicleStatusOutcomeCallable;
      typedef std::future<ImportDecoderManifestOutcome> ImportDecoderManifestOutcomeCallable;
      typedef std::future<ImportSignalCatalogOutcome> ImportSignalCatalogOutcomeCallable;
      typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
      typedef std::future<ListDecoderManifestNetworkInterfacesOutcome> ListDecoderManifestNetworkInterfacesOutcomeCallable;
      typedef std::future<ListDecoderManifestSignalsOutcome> ListDecoderManifestSignalsOutcomeCallable;
      typedef std::future<ListDecoderManifestsOutcome> ListDecoderManifestsOutcomeCallable;
      typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
      typedef std::future<ListFleetsForVehicleOutcome> ListFleetsForVehicleOutcomeCallable;
      typedef std::future<ListModelManifestNodesOutcome> ListModelManifestNodesOutcomeCallable;
      typedef std::future<ListModelManifestsOutcome> ListModelManifestsOutcomeCallable;
      typedef std::future<ListSignalCatalogNodesOutcome> ListSignalCatalogNodesOutcomeCallable;
      typedef std::future<ListSignalCatalogsOutcome> ListSignalCatalogsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVehiclesOutcome> ListVehiclesOutcomeCallable;
      typedef std::future<ListVehiclesInFleetOutcome> ListVehiclesInFleetOutcomeCallable;
      typedef std::future<PutLoggingOptionsOutcome> PutLoggingOptionsOutcomeCallable;
      typedef std::future<RegisterAccountOutcome> RegisterAccountOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
      typedef std::future<UpdateDecoderManifestOutcome> UpdateDecoderManifestOutcomeCallable;
      typedef std::future<UpdateFleetOutcome> UpdateFleetOutcomeCallable;
      typedef std::future<UpdateModelManifestOutcome> UpdateModelManifestOutcomeCallable;
      typedef std::future<UpdateSignalCatalogOutcome> UpdateSignalCatalogOutcomeCallable;
      typedef std::future<UpdateVehicleOutcome> UpdateVehicleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTFleetWiseClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTFleetWiseClient*, const Model::AssociateVehicleFleetRequest&, const Model::AssociateVehicleFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVehicleFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::BatchCreateVehicleRequest&, const Model::BatchCreateVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateVehicleResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::BatchUpdateVehicleRequest&, const Model::BatchUpdateVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateVehicleResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::CreateDecoderManifestRequest&, const Model::CreateDecoderManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDecoderManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::CreateModelManifestRequest&, const Model::CreateModelManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::CreateSignalCatalogRequest&, const Model::CreateSignalCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSignalCatalogResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::CreateVehicleRequest&, const Model::CreateVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVehicleResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DeleteDecoderManifestRequest&, const Model::DeleteDecoderManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDecoderManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DeleteModelManifestRequest&, const Model::DeleteModelManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DeleteSignalCatalogRequest&, const Model::DeleteSignalCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSignalCatalogResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DeleteVehicleRequest&, const Model::DeleteVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVehicleResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::DisassociateVehicleFleetRequest&, const Model::DisassociateVehicleFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateVehicleFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetCampaignRequest&, const Model::GetCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetDecoderManifestRequest&, const Model::GetDecoderManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDecoderManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetFleetRequest&, const Model::GetFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetLoggingOptionsRequest&, const Model::GetLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetModelManifestRequest&, const Model::GetModelManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetRegisterAccountStatusRequest&, const Model::GetRegisterAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegisterAccountStatusResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetSignalCatalogRequest&, const Model::GetSignalCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSignalCatalogResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetVehicleRequest&, const Model::GetVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVehicleResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::GetVehicleStatusRequest&, const Model::GetVehicleStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVehicleStatusResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ImportDecoderManifestRequest&, const Model::ImportDecoderManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportDecoderManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ImportSignalCatalogRequest&, const Model::ImportSignalCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportSignalCatalogResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCampaignsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListDecoderManifestNetworkInterfacesRequest&, const Model::ListDecoderManifestNetworkInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDecoderManifestNetworkInterfacesResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListDecoderManifestSignalsRequest&, const Model::ListDecoderManifestSignalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDecoderManifestSignalsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListDecoderManifestsRequest&, const Model::ListDecoderManifestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDecoderManifestsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListFleetsForVehicleRequest&, const Model::ListFleetsForVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsForVehicleResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListModelManifestNodesRequest&, const Model::ListModelManifestNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelManifestNodesResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListModelManifestsRequest&, const Model::ListModelManifestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelManifestsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListSignalCatalogNodesRequest&, const Model::ListSignalCatalogNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSignalCatalogNodesResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListSignalCatalogsRequest&, const Model::ListSignalCatalogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSignalCatalogsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListVehiclesRequest&, const Model::ListVehiclesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVehiclesResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::ListVehiclesInFleetRequest&, const Model::ListVehiclesInFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVehiclesInFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::PutLoggingOptionsRequest&, const Model::PutLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::RegisterAccountRequest&, const Model::RegisterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterAccountResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UpdateDecoderManifestRequest&, const Model::UpdateDecoderManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDecoderManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UpdateFleetRequest&, const Model::UpdateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UpdateModelManifestRequest&, const Model::UpdateModelManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelManifestResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UpdateSignalCatalogRequest&, const Model::UpdateSignalCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSignalCatalogResponseReceivedHandler;
    typedef std::function<void(const IoTFleetWiseClient*, const Model::UpdateVehicleRequest&, const Model::UpdateVehicleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVehicleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTFleetWise
} // namespace Aws
