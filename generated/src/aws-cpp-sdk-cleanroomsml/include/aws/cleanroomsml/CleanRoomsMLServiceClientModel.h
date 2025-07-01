/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cleanroomsml/CleanRoomsMLErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cleanroomsml/CleanRoomsMLEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CleanRoomsMLClient header */
#include <aws/cleanroomsml/model/CreateAudienceModelResult.h>
#include <aws/cleanroomsml/model/CreateConfiguredAudienceModelResult.h>
#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmResult.h>
#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmAssociationResult.h>
#include <aws/cleanroomsml/model/CreateMLInputChannelResult.h>
#include <aws/cleanroomsml/model/CreateTrainedModelResult.h>
#include <aws/cleanroomsml/model/CreateTrainingDatasetResult.h>
#include <aws/cleanroomsml/model/GetAudienceGenerationJobResult.h>
#include <aws/cleanroomsml/model/GetAudienceModelResult.h>
#include <aws/cleanroomsml/model/GetCollaborationConfiguredModelAlgorithmAssociationResult.h>
#include <aws/cleanroomsml/model/GetCollaborationMLInputChannelResult.h>
#include <aws/cleanroomsml/model/GetCollaborationTrainedModelResult.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelResult.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelPolicyResult.h>
#include <aws/cleanroomsml/model/GetConfiguredModelAlgorithmResult.h>
#include <aws/cleanroomsml/model/GetConfiguredModelAlgorithmAssociationResult.h>
#include <aws/cleanroomsml/model/GetMLConfigurationResult.h>
#include <aws/cleanroomsml/model/GetMLInputChannelResult.h>
#include <aws/cleanroomsml/model/GetTrainedModelResult.h>
#include <aws/cleanroomsml/model/GetTrainedModelInferenceJobResult.h>
#include <aws/cleanroomsml/model/GetTrainingDatasetResult.h>
#include <aws/cleanroomsml/model/ListAudienceExportJobsResult.h>
#include <aws/cleanroomsml/model/ListAudienceGenerationJobsResult.h>
#include <aws/cleanroomsml/model/ListAudienceModelsResult.h>
#include <aws/cleanroomsml/model/ListCollaborationConfiguredModelAlgorithmAssociationsResult.h>
#include <aws/cleanroomsml/model/ListCollaborationMLInputChannelsResult.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelExportJobsResult.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelInferenceJobsResult.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsResult.h>
#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsResult.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmAssociationsResult.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmsResult.h>
#include <aws/cleanroomsml/model/ListMLInputChannelsResult.h>
#include <aws/cleanroomsml/model/ListTagsForResourceResult.h>
#include <aws/cleanroomsml/model/ListTrainedModelInferenceJobsResult.h>
#include <aws/cleanroomsml/model/ListTrainedModelVersionsResult.h>
#include <aws/cleanroomsml/model/ListTrainedModelsResult.h>
#include <aws/cleanroomsml/model/ListTrainingDatasetsResult.h>
#include <aws/cleanroomsml/model/PutConfiguredAudienceModelPolicyResult.h>
#include <aws/cleanroomsml/model/StartAudienceGenerationJobResult.h>
#include <aws/cleanroomsml/model/StartTrainedModelInferenceJobResult.h>
#include <aws/cleanroomsml/model/TagResourceResult.h>
#include <aws/cleanroomsml/model/UntagResourceResult.h>
#include <aws/cleanroomsml/model/UpdateConfiguredAudienceModelResult.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmsRequest.h>
#include <aws/cleanroomsml/model/ListAudienceExportJobsRequest.h>
#include <aws/cleanroomsml/model/ListAudienceModelsRequest.h>
#include <aws/cleanroomsml/model/ListAudienceGenerationJobsRequest.h>
#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsRequest.h>
#include <aws/cleanroomsml/model/ListTrainingDatasetsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CleanRoomsMLClient header */

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

  namespace CleanRoomsML
  {
    using CleanRoomsMLClientConfiguration = Aws::Client::GenericClientConfiguration;
    using CleanRoomsMLEndpointProviderBase = Aws::CleanRoomsML::Endpoint::CleanRoomsMLEndpointProviderBase;
    using CleanRoomsMLEndpointProvider = Aws::CleanRoomsML::Endpoint::CleanRoomsMLEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CleanRoomsMLClient header */
      class CancelTrainedModelRequest;
      class CancelTrainedModelInferenceJobRequest;
      class CreateAudienceModelRequest;
      class CreateConfiguredAudienceModelRequest;
      class CreateConfiguredModelAlgorithmRequest;
      class CreateConfiguredModelAlgorithmAssociationRequest;
      class CreateMLInputChannelRequest;
      class CreateTrainedModelRequest;
      class CreateTrainingDatasetRequest;
      class DeleteAudienceGenerationJobRequest;
      class DeleteAudienceModelRequest;
      class DeleteConfiguredAudienceModelRequest;
      class DeleteConfiguredAudienceModelPolicyRequest;
      class DeleteConfiguredModelAlgorithmRequest;
      class DeleteConfiguredModelAlgorithmAssociationRequest;
      class DeleteMLConfigurationRequest;
      class DeleteMLInputChannelDataRequest;
      class DeleteTrainedModelOutputRequest;
      class DeleteTrainingDatasetRequest;
      class GetAudienceGenerationJobRequest;
      class GetAudienceModelRequest;
      class GetCollaborationConfiguredModelAlgorithmAssociationRequest;
      class GetCollaborationMLInputChannelRequest;
      class GetCollaborationTrainedModelRequest;
      class GetConfiguredAudienceModelRequest;
      class GetConfiguredAudienceModelPolicyRequest;
      class GetConfiguredModelAlgorithmRequest;
      class GetConfiguredModelAlgorithmAssociationRequest;
      class GetMLConfigurationRequest;
      class GetMLInputChannelRequest;
      class GetTrainedModelRequest;
      class GetTrainedModelInferenceJobRequest;
      class GetTrainingDatasetRequest;
      class ListAudienceExportJobsRequest;
      class ListAudienceGenerationJobsRequest;
      class ListAudienceModelsRequest;
      class ListCollaborationConfiguredModelAlgorithmAssociationsRequest;
      class ListCollaborationMLInputChannelsRequest;
      class ListCollaborationTrainedModelExportJobsRequest;
      class ListCollaborationTrainedModelInferenceJobsRequest;
      class ListCollaborationTrainedModelsRequest;
      class ListConfiguredAudienceModelsRequest;
      class ListConfiguredModelAlgorithmAssociationsRequest;
      class ListConfiguredModelAlgorithmsRequest;
      class ListMLInputChannelsRequest;
      class ListTagsForResourceRequest;
      class ListTrainedModelInferenceJobsRequest;
      class ListTrainedModelVersionsRequest;
      class ListTrainedModelsRequest;
      class ListTrainingDatasetsRequest;
      class PutConfiguredAudienceModelPolicyRequest;
      class PutMLConfigurationRequest;
      class StartAudienceExportJobRequest;
      class StartAudienceGenerationJobRequest;
      class StartTrainedModelExportJobRequest;
      class StartTrainedModelInferenceJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConfiguredAudienceModelRequest;
      /* End of service model forward declarations required in CleanRoomsMLClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> CancelTrainedModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> CancelTrainedModelInferenceJobOutcome;
      typedef Aws::Utils::Outcome<CreateAudienceModelResult, CleanRoomsMLError> CreateAudienceModelOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredAudienceModelResult, CleanRoomsMLError> CreateConfiguredAudienceModelOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredModelAlgorithmResult, CleanRoomsMLError> CreateConfiguredModelAlgorithmOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredModelAlgorithmAssociationResult, CleanRoomsMLError> CreateConfiguredModelAlgorithmAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateMLInputChannelResult, CleanRoomsMLError> CreateMLInputChannelOutcome;
      typedef Aws::Utils::Outcome<CreateTrainedModelResult, CleanRoomsMLError> CreateTrainedModelOutcome;
      typedef Aws::Utils::Outcome<CreateTrainingDatasetResult, CleanRoomsMLError> CreateTrainingDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteAudienceGenerationJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteAudienceModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteConfiguredAudienceModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteConfiguredAudienceModelPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteConfiguredModelAlgorithmOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteConfiguredModelAlgorithmAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteMLConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteMLInputChannelDataOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteTrainedModelOutputOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteTrainingDatasetOutcome;
      typedef Aws::Utils::Outcome<GetAudienceGenerationJobResult, CleanRoomsMLError> GetAudienceGenerationJobOutcome;
      typedef Aws::Utils::Outcome<GetAudienceModelResult, CleanRoomsMLError> GetAudienceModelOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationConfiguredModelAlgorithmAssociationResult, CleanRoomsMLError> GetCollaborationConfiguredModelAlgorithmAssociationOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationMLInputChannelResult, CleanRoomsMLError> GetCollaborationMLInputChannelOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationTrainedModelResult, CleanRoomsMLError> GetCollaborationTrainedModelOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredAudienceModelResult, CleanRoomsMLError> GetConfiguredAudienceModelOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredAudienceModelPolicyResult, CleanRoomsMLError> GetConfiguredAudienceModelPolicyOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredModelAlgorithmResult, CleanRoomsMLError> GetConfiguredModelAlgorithmOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredModelAlgorithmAssociationResult, CleanRoomsMLError> GetConfiguredModelAlgorithmAssociationOutcome;
      typedef Aws::Utils::Outcome<GetMLConfigurationResult, CleanRoomsMLError> GetMLConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetMLInputChannelResult, CleanRoomsMLError> GetMLInputChannelOutcome;
      typedef Aws::Utils::Outcome<GetTrainedModelResult, CleanRoomsMLError> GetTrainedModelOutcome;
      typedef Aws::Utils::Outcome<GetTrainedModelInferenceJobResult, CleanRoomsMLError> GetTrainedModelInferenceJobOutcome;
      typedef Aws::Utils::Outcome<GetTrainingDatasetResult, CleanRoomsMLError> GetTrainingDatasetOutcome;
      typedef Aws::Utils::Outcome<ListAudienceExportJobsResult, CleanRoomsMLError> ListAudienceExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListAudienceGenerationJobsResult, CleanRoomsMLError> ListAudienceGenerationJobsOutcome;
      typedef Aws::Utils::Outcome<ListAudienceModelsResult, CleanRoomsMLError> ListAudienceModelsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationConfiguredModelAlgorithmAssociationsResult, CleanRoomsMLError> ListCollaborationConfiguredModelAlgorithmAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationMLInputChannelsResult, CleanRoomsMLError> ListCollaborationMLInputChannelsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationTrainedModelExportJobsResult, CleanRoomsMLError> ListCollaborationTrainedModelExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationTrainedModelInferenceJobsResult, CleanRoomsMLError> ListCollaborationTrainedModelInferenceJobsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationTrainedModelsResult, CleanRoomsMLError> ListCollaborationTrainedModelsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredAudienceModelsResult, CleanRoomsMLError> ListConfiguredAudienceModelsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredModelAlgorithmAssociationsResult, CleanRoomsMLError> ListConfiguredModelAlgorithmAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredModelAlgorithmsResult, CleanRoomsMLError> ListConfiguredModelAlgorithmsOutcome;
      typedef Aws::Utils::Outcome<ListMLInputChannelsResult, CleanRoomsMLError> ListMLInputChannelsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CleanRoomsMLError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrainedModelInferenceJobsResult, CleanRoomsMLError> ListTrainedModelInferenceJobsOutcome;
      typedef Aws::Utils::Outcome<ListTrainedModelVersionsResult, CleanRoomsMLError> ListTrainedModelVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTrainedModelsResult, CleanRoomsMLError> ListTrainedModelsOutcome;
      typedef Aws::Utils::Outcome<ListTrainingDatasetsResult, CleanRoomsMLError> ListTrainingDatasetsOutcome;
      typedef Aws::Utils::Outcome<PutConfiguredAudienceModelPolicyResult, CleanRoomsMLError> PutConfiguredAudienceModelPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> PutMLConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> StartAudienceExportJobOutcome;
      typedef Aws::Utils::Outcome<StartAudienceGenerationJobResult, CleanRoomsMLError> StartAudienceGenerationJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> StartTrainedModelExportJobOutcome;
      typedef Aws::Utils::Outcome<StartTrainedModelInferenceJobResult, CleanRoomsMLError> StartTrainedModelInferenceJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CleanRoomsMLError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CleanRoomsMLError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredAudienceModelResult, CleanRoomsMLError> UpdateConfiguredAudienceModelOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelTrainedModelOutcome> CancelTrainedModelOutcomeCallable;
      typedef std::future<CancelTrainedModelInferenceJobOutcome> CancelTrainedModelInferenceJobOutcomeCallable;
      typedef std::future<CreateAudienceModelOutcome> CreateAudienceModelOutcomeCallable;
      typedef std::future<CreateConfiguredAudienceModelOutcome> CreateConfiguredAudienceModelOutcomeCallable;
      typedef std::future<CreateConfiguredModelAlgorithmOutcome> CreateConfiguredModelAlgorithmOutcomeCallable;
      typedef std::future<CreateConfiguredModelAlgorithmAssociationOutcome> CreateConfiguredModelAlgorithmAssociationOutcomeCallable;
      typedef std::future<CreateMLInputChannelOutcome> CreateMLInputChannelOutcomeCallable;
      typedef std::future<CreateTrainedModelOutcome> CreateTrainedModelOutcomeCallable;
      typedef std::future<CreateTrainingDatasetOutcome> CreateTrainingDatasetOutcomeCallable;
      typedef std::future<DeleteAudienceGenerationJobOutcome> DeleteAudienceGenerationJobOutcomeCallable;
      typedef std::future<DeleteAudienceModelOutcome> DeleteAudienceModelOutcomeCallable;
      typedef std::future<DeleteConfiguredAudienceModelOutcome> DeleteConfiguredAudienceModelOutcomeCallable;
      typedef std::future<DeleteConfiguredAudienceModelPolicyOutcome> DeleteConfiguredAudienceModelPolicyOutcomeCallable;
      typedef std::future<DeleteConfiguredModelAlgorithmOutcome> DeleteConfiguredModelAlgorithmOutcomeCallable;
      typedef std::future<DeleteConfiguredModelAlgorithmAssociationOutcome> DeleteConfiguredModelAlgorithmAssociationOutcomeCallable;
      typedef std::future<DeleteMLConfigurationOutcome> DeleteMLConfigurationOutcomeCallable;
      typedef std::future<DeleteMLInputChannelDataOutcome> DeleteMLInputChannelDataOutcomeCallable;
      typedef std::future<DeleteTrainedModelOutputOutcome> DeleteTrainedModelOutputOutcomeCallable;
      typedef std::future<DeleteTrainingDatasetOutcome> DeleteTrainingDatasetOutcomeCallable;
      typedef std::future<GetAudienceGenerationJobOutcome> GetAudienceGenerationJobOutcomeCallable;
      typedef std::future<GetAudienceModelOutcome> GetAudienceModelOutcomeCallable;
      typedef std::future<GetCollaborationConfiguredModelAlgorithmAssociationOutcome> GetCollaborationConfiguredModelAlgorithmAssociationOutcomeCallable;
      typedef std::future<GetCollaborationMLInputChannelOutcome> GetCollaborationMLInputChannelOutcomeCallable;
      typedef std::future<GetCollaborationTrainedModelOutcome> GetCollaborationTrainedModelOutcomeCallable;
      typedef std::future<GetConfiguredAudienceModelOutcome> GetConfiguredAudienceModelOutcomeCallable;
      typedef std::future<GetConfiguredAudienceModelPolicyOutcome> GetConfiguredAudienceModelPolicyOutcomeCallable;
      typedef std::future<GetConfiguredModelAlgorithmOutcome> GetConfiguredModelAlgorithmOutcomeCallable;
      typedef std::future<GetConfiguredModelAlgorithmAssociationOutcome> GetConfiguredModelAlgorithmAssociationOutcomeCallable;
      typedef std::future<GetMLConfigurationOutcome> GetMLConfigurationOutcomeCallable;
      typedef std::future<GetMLInputChannelOutcome> GetMLInputChannelOutcomeCallable;
      typedef std::future<GetTrainedModelOutcome> GetTrainedModelOutcomeCallable;
      typedef std::future<GetTrainedModelInferenceJobOutcome> GetTrainedModelInferenceJobOutcomeCallable;
      typedef std::future<GetTrainingDatasetOutcome> GetTrainingDatasetOutcomeCallable;
      typedef std::future<ListAudienceExportJobsOutcome> ListAudienceExportJobsOutcomeCallable;
      typedef std::future<ListAudienceGenerationJobsOutcome> ListAudienceGenerationJobsOutcomeCallable;
      typedef std::future<ListAudienceModelsOutcome> ListAudienceModelsOutcomeCallable;
      typedef std::future<ListCollaborationConfiguredModelAlgorithmAssociationsOutcome> ListCollaborationConfiguredModelAlgorithmAssociationsOutcomeCallable;
      typedef std::future<ListCollaborationMLInputChannelsOutcome> ListCollaborationMLInputChannelsOutcomeCallable;
      typedef std::future<ListCollaborationTrainedModelExportJobsOutcome> ListCollaborationTrainedModelExportJobsOutcomeCallable;
      typedef std::future<ListCollaborationTrainedModelInferenceJobsOutcome> ListCollaborationTrainedModelInferenceJobsOutcomeCallable;
      typedef std::future<ListCollaborationTrainedModelsOutcome> ListCollaborationTrainedModelsOutcomeCallable;
      typedef std::future<ListConfiguredAudienceModelsOutcome> ListConfiguredAudienceModelsOutcomeCallable;
      typedef std::future<ListConfiguredModelAlgorithmAssociationsOutcome> ListConfiguredModelAlgorithmAssociationsOutcomeCallable;
      typedef std::future<ListConfiguredModelAlgorithmsOutcome> ListConfiguredModelAlgorithmsOutcomeCallable;
      typedef std::future<ListMLInputChannelsOutcome> ListMLInputChannelsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrainedModelInferenceJobsOutcome> ListTrainedModelInferenceJobsOutcomeCallable;
      typedef std::future<ListTrainedModelVersionsOutcome> ListTrainedModelVersionsOutcomeCallable;
      typedef std::future<ListTrainedModelsOutcome> ListTrainedModelsOutcomeCallable;
      typedef std::future<ListTrainingDatasetsOutcome> ListTrainingDatasetsOutcomeCallable;
      typedef std::future<PutConfiguredAudienceModelPolicyOutcome> PutConfiguredAudienceModelPolicyOutcomeCallable;
      typedef std::future<PutMLConfigurationOutcome> PutMLConfigurationOutcomeCallable;
      typedef std::future<StartAudienceExportJobOutcome> StartAudienceExportJobOutcomeCallable;
      typedef std::future<StartAudienceGenerationJobOutcome> StartAudienceGenerationJobOutcomeCallable;
      typedef std::future<StartTrainedModelExportJobOutcome> StartTrainedModelExportJobOutcomeCallable;
      typedef std::future<StartTrainedModelInferenceJobOutcome> StartTrainedModelInferenceJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfiguredAudienceModelOutcome> UpdateConfiguredAudienceModelOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CleanRoomsMLClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CancelTrainedModelRequest&, const Model::CancelTrainedModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTrainedModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CancelTrainedModelInferenceJobRequest&, const Model::CancelTrainedModelInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTrainedModelInferenceJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateAudienceModelRequest&, const Model::CreateAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateConfiguredAudienceModelRequest&, const Model::CreateConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateConfiguredModelAlgorithmRequest&, const Model::CreateConfiguredModelAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredModelAlgorithmResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateConfiguredModelAlgorithmAssociationRequest&, const Model::CreateConfiguredModelAlgorithmAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredModelAlgorithmAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateMLInputChannelRequest&, const Model::CreateMLInputChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMLInputChannelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateTrainedModelRequest&, const Model::CreateTrainedModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainedModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateTrainingDatasetRequest&, const Model::CreateTrainingDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainingDatasetResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteAudienceGenerationJobRequest&, const Model::DeleteAudienceGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAudienceGenerationJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteAudienceModelRequest&, const Model::DeleteAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteConfiguredAudienceModelRequest&, const Model::DeleteConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteConfiguredAudienceModelPolicyRequest&, const Model::DeleteConfiguredAudienceModelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredAudienceModelPolicyResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteConfiguredModelAlgorithmRequest&, const Model::DeleteConfiguredModelAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredModelAlgorithmResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteConfiguredModelAlgorithmAssociationRequest&, const Model::DeleteConfiguredModelAlgorithmAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredModelAlgorithmAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteMLConfigurationRequest&, const Model::DeleteMLConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMLConfigurationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteMLInputChannelDataRequest&, const Model::DeleteMLInputChannelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMLInputChannelDataResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteTrainedModelOutputRequest&, const Model::DeleteTrainedModelOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrainedModelOutputResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteTrainingDatasetRequest&, const Model::DeleteTrainingDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrainingDatasetResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetAudienceGenerationJobRequest&, const Model::GetAudienceGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAudienceGenerationJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetAudienceModelRequest&, const Model::GetAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetCollaborationConfiguredModelAlgorithmAssociationRequest&, const Model::GetCollaborationConfiguredModelAlgorithmAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationConfiguredModelAlgorithmAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetCollaborationMLInputChannelRequest&, const Model::GetCollaborationMLInputChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationMLInputChannelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetCollaborationTrainedModelRequest&, const Model::GetCollaborationTrainedModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationTrainedModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetConfiguredAudienceModelRequest&, const Model::GetConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetConfiguredAudienceModelPolicyRequest&, const Model::GetConfiguredAudienceModelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredAudienceModelPolicyResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetConfiguredModelAlgorithmRequest&, const Model::GetConfiguredModelAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredModelAlgorithmResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetConfiguredModelAlgorithmAssociationRequest&, const Model::GetConfiguredModelAlgorithmAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredModelAlgorithmAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetMLConfigurationRequest&, const Model::GetMLConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLConfigurationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetMLInputChannelRequest&, const Model::GetMLInputChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLInputChannelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetTrainedModelRequest&, const Model::GetTrainedModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrainedModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetTrainedModelInferenceJobRequest&, const Model::GetTrainedModelInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrainedModelInferenceJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetTrainingDatasetRequest&, const Model::GetTrainingDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrainingDatasetResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListAudienceExportJobsRequest&, const Model::ListAudienceExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAudienceExportJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListAudienceGenerationJobsRequest&, const Model::ListAudienceGenerationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAudienceGenerationJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListAudienceModelsRequest&, const Model::ListAudienceModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAudienceModelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest&, const Model::ListCollaborationConfiguredModelAlgorithmAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationConfiguredModelAlgorithmAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListCollaborationMLInputChannelsRequest&, const Model::ListCollaborationMLInputChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationMLInputChannelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListCollaborationTrainedModelExportJobsRequest&, const Model::ListCollaborationTrainedModelExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationTrainedModelExportJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListCollaborationTrainedModelInferenceJobsRequest&, const Model::ListCollaborationTrainedModelInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationTrainedModelInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListCollaborationTrainedModelsRequest&, const Model::ListCollaborationTrainedModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationTrainedModelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListConfiguredAudienceModelsRequest&, const Model::ListConfiguredAudienceModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredAudienceModelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListConfiguredModelAlgorithmAssociationsRequest&, const Model::ListConfiguredModelAlgorithmAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredModelAlgorithmAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListConfiguredModelAlgorithmsRequest&, const Model::ListConfiguredModelAlgorithmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredModelAlgorithmsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListMLInputChannelsRequest&, const Model::ListMLInputChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLInputChannelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTrainedModelInferenceJobsRequest&, const Model::ListTrainedModelInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainedModelInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTrainedModelVersionsRequest&, const Model::ListTrainedModelVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainedModelVersionsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTrainedModelsRequest&, const Model::ListTrainedModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainedModelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTrainingDatasetsRequest&, const Model::ListTrainingDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingDatasetsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::PutConfiguredAudienceModelPolicyRequest&, const Model::PutConfiguredAudienceModelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfiguredAudienceModelPolicyResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::PutMLConfigurationRequest&, const Model::PutMLConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMLConfigurationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::StartAudienceExportJobRequest&, const Model::StartAudienceExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAudienceExportJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::StartAudienceGenerationJobRequest&, const Model::StartAudienceGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAudienceGenerationJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::StartTrainedModelExportJobRequest&, const Model::StartTrainedModelExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTrainedModelExportJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::StartTrainedModelInferenceJobRequest&, const Model::StartTrainedModelInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTrainedModelInferenceJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::UpdateConfiguredAudienceModelRequest&, const Model::UpdateConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredAudienceModelResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CleanRoomsML
} // namespace Aws
