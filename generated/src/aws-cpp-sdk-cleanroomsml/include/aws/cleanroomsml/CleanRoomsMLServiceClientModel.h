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
#include <aws/cleanroomsml/model/CreateTrainingDatasetResult.h>
#include <aws/cleanroomsml/model/GetAudienceGenerationJobResult.h>
#include <aws/cleanroomsml/model/GetAudienceModelResult.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelResult.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelPolicyResult.h>
#include <aws/cleanroomsml/model/GetTrainingDatasetResult.h>
#include <aws/cleanroomsml/model/ListAudienceExportJobsResult.h>
#include <aws/cleanroomsml/model/ListAudienceGenerationJobsResult.h>
#include <aws/cleanroomsml/model/ListAudienceModelsResult.h>
#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsResult.h>
#include <aws/cleanroomsml/model/ListTagsForResourceResult.h>
#include <aws/cleanroomsml/model/ListTrainingDatasetsResult.h>
#include <aws/cleanroomsml/model/PutConfiguredAudienceModelPolicyResult.h>
#include <aws/cleanroomsml/model/StartAudienceGenerationJobResult.h>
#include <aws/cleanroomsml/model/TagResourceResult.h>
#include <aws/cleanroomsml/model/UntagResourceResult.h>
#include <aws/cleanroomsml/model/UpdateConfiguredAudienceModelResult.h>
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
    using CleanRoomsMLClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CleanRoomsMLEndpointProviderBase = Aws::CleanRoomsML::Endpoint::CleanRoomsMLEndpointProviderBase;
    using CleanRoomsMLEndpointProvider = Aws::CleanRoomsML::Endpoint::CleanRoomsMLEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CleanRoomsMLClient header */
      class CreateAudienceModelRequest;
      class CreateConfiguredAudienceModelRequest;
      class CreateTrainingDatasetRequest;
      class DeleteAudienceGenerationJobRequest;
      class DeleteAudienceModelRequest;
      class DeleteConfiguredAudienceModelRequest;
      class DeleteConfiguredAudienceModelPolicyRequest;
      class DeleteTrainingDatasetRequest;
      class GetAudienceGenerationJobRequest;
      class GetAudienceModelRequest;
      class GetConfiguredAudienceModelRequest;
      class GetConfiguredAudienceModelPolicyRequest;
      class GetTrainingDatasetRequest;
      class ListAudienceExportJobsRequest;
      class ListAudienceGenerationJobsRequest;
      class ListAudienceModelsRequest;
      class ListConfiguredAudienceModelsRequest;
      class ListTagsForResourceRequest;
      class ListTrainingDatasetsRequest;
      class PutConfiguredAudienceModelPolicyRequest;
      class StartAudienceExportJobRequest;
      class StartAudienceGenerationJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConfiguredAudienceModelRequest;
      /* End of service model forward declarations required in CleanRoomsMLClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAudienceModelResult, CleanRoomsMLError> CreateAudienceModelOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredAudienceModelResult, CleanRoomsMLError> CreateConfiguredAudienceModelOutcome;
      typedef Aws::Utils::Outcome<CreateTrainingDatasetResult, CleanRoomsMLError> CreateTrainingDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteAudienceGenerationJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteAudienceModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteConfiguredAudienceModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteConfiguredAudienceModelPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> DeleteTrainingDatasetOutcome;
      typedef Aws::Utils::Outcome<GetAudienceGenerationJobResult, CleanRoomsMLError> GetAudienceGenerationJobOutcome;
      typedef Aws::Utils::Outcome<GetAudienceModelResult, CleanRoomsMLError> GetAudienceModelOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredAudienceModelResult, CleanRoomsMLError> GetConfiguredAudienceModelOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredAudienceModelPolicyResult, CleanRoomsMLError> GetConfiguredAudienceModelPolicyOutcome;
      typedef Aws::Utils::Outcome<GetTrainingDatasetResult, CleanRoomsMLError> GetTrainingDatasetOutcome;
      typedef Aws::Utils::Outcome<ListAudienceExportJobsResult, CleanRoomsMLError> ListAudienceExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListAudienceGenerationJobsResult, CleanRoomsMLError> ListAudienceGenerationJobsOutcome;
      typedef Aws::Utils::Outcome<ListAudienceModelsResult, CleanRoomsMLError> ListAudienceModelsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredAudienceModelsResult, CleanRoomsMLError> ListConfiguredAudienceModelsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CleanRoomsMLError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrainingDatasetsResult, CleanRoomsMLError> ListTrainingDatasetsOutcome;
      typedef Aws::Utils::Outcome<PutConfiguredAudienceModelPolicyResult, CleanRoomsMLError> PutConfiguredAudienceModelPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CleanRoomsMLError> StartAudienceExportJobOutcome;
      typedef Aws::Utils::Outcome<StartAudienceGenerationJobResult, CleanRoomsMLError> StartAudienceGenerationJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CleanRoomsMLError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CleanRoomsMLError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredAudienceModelResult, CleanRoomsMLError> UpdateConfiguredAudienceModelOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAudienceModelOutcome> CreateAudienceModelOutcomeCallable;
      typedef std::future<CreateConfiguredAudienceModelOutcome> CreateConfiguredAudienceModelOutcomeCallable;
      typedef std::future<CreateTrainingDatasetOutcome> CreateTrainingDatasetOutcomeCallable;
      typedef std::future<DeleteAudienceGenerationJobOutcome> DeleteAudienceGenerationJobOutcomeCallable;
      typedef std::future<DeleteAudienceModelOutcome> DeleteAudienceModelOutcomeCallable;
      typedef std::future<DeleteConfiguredAudienceModelOutcome> DeleteConfiguredAudienceModelOutcomeCallable;
      typedef std::future<DeleteConfiguredAudienceModelPolicyOutcome> DeleteConfiguredAudienceModelPolicyOutcomeCallable;
      typedef std::future<DeleteTrainingDatasetOutcome> DeleteTrainingDatasetOutcomeCallable;
      typedef std::future<GetAudienceGenerationJobOutcome> GetAudienceGenerationJobOutcomeCallable;
      typedef std::future<GetAudienceModelOutcome> GetAudienceModelOutcomeCallable;
      typedef std::future<GetConfiguredAudienceModelOutcome> GetConfiguredAudienceModelOutcomeCallable;
      typedef std::future<GetConfiguredAudienceModelPolicyOutcome> GetConfiguredAudienceModelPolicyOutcomeCallable;
      typedef std::future<GetTrainingDatasetOutcome> GetTrainingDatasetOutcomeCallable;
      typedef std::future<ListAudienceExportJobsOutcome> ListAudienceExportJobsOutcomeCallable;
      typedef std::future<ListAudienceGenerationJobsOutcome> ListAudienceGenerationJobsOutcomeCallable;
      typedef std::future<ListAudienceModelsOutcome> ListAudienceModelsOutcomeCallable;
      typedef std::future<ListConfiguredAudienceModelsOutcome> ListConfiguredAudienceModelsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrainingDatasetsOutcome> ListTrainingDatasetsOutcomeCallable;
      typedef std::future<PutConfiguredAudienceModelPolicyOutcome> PutConfiguredAudienceModelPolicyOutcomeCallable;
      typedef std::future<StartAudienceExportJobOutcome> StartAudienceExportJobOutcomeCallable;
      typedef std::future<StartAudienceGenerationJobOutcome> StartAudienceGenerationJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfiguredAudienceModelOutcome> UpdateConfiguredAudienceModelOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CleanRoomsMLClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateAudienceModelRequest&, const Model::CreateAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateConfiguredAudienceModelRequest&, const Model::CreateConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::CreateTrainingDatasetRequest&, const Model::CreateTrainingDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainingDatasetResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteAudienceGenerationJobRequest&, const Model::DeleteAudienceGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAudienceGenerationJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteAudienceModelRequest&, const Model::DeleteAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteConfiguredAudienceModelRequest&, const Model::DeleteConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteConfiguredAudienceModelPolicyRequest&, const Model::DeleteConfiguredAudienceModelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredAudienceModelPolicyResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::DeleteTrainingDatasetRequest&, const Model::DeleteTrainingDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrainingDatasetResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetAudienceGenerationJobRequest&, const Model::GetAudienceGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAudienceGenerationJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetAudienceModelRequest&, const Model::GetAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetConfiguredAudienceModelRequest&, const Model::GetConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredAudienceModelResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetConfiguredAudienceModelPolicyRequest&, const Model::GetConfiguredAudienceModelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredAudienceModelPolicyResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::GetTrainingDatasetRequest&, const Model::GetTrainingDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrainingDatasetResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListAudienceExportJobsRequest&, const Model::ListAudienceExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAudienceExportJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListAudienceGenerationJobsRequest&, const Model::ListAudienceGenerationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAudienceGenerationJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListAudienceModelsRequest&, const Model::ListAudienceModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAudienceModelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListConfiguredAudienceModelsRequest&, const Model::ListConfiguredAudienceModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredAudienceModelsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::ListTrainingDatasetsRequest&, const Model::ListTrainingDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingDatasetsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::PutConfiguredAudienceModelPolicyRequest&, const Model::PutConfiguredAudienceModelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfiguredAudienceModelPolicyResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::StartAudienceExportJobRequest&, const Model::StartAudienceExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAudienceExportJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::StartAudienceGenerationJobRequest&, const Model::StartAudienceGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAudienceGenerationJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsMLClient*, const Model::UpdateConfiguredAudienceModelRequest&, const Model::UpdateConfiguredAudienceModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredAudienceModelResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CleanRoomsML
} // namespace Aws
