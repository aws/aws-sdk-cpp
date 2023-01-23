/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elastictranscoder/ElasticTranscoderErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elastictranscoder/ElasticTranscoderEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElasticTranscoderClient header */
#include <aws/elastictranscoder/model/CancelJobResult.h>
#include <aws/elastictranscoder/model/CreateJobResult.h>
#include <aws/elastictranscoder/model/CreatePipelineResult.h>
#include <aws/elastictranscoder/model/CreatePresetResult.h>
#include <aws/elastictranscoder/model/DeletePipelineResult.h>
#include <aws/elastictranscoder/model/DeletePresetResult.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineResult.h>
#include <aws/elastictranscoder/model/ListJobsByStatusResult.h>
#include <aws/elastictranscoder/model/ListPipelinesResult.h>
#include <aws/elastictranscoder/model/ListPresetsResult.h>
#include <aws/elastictranscoder/model/ReadJobResult.h>
#include <aws/elastictranscoder/model/ReadPipelineResult.h>
#include <aws/elastictranscoder/model/ReadPresetResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusResult.h>
/* End of service model headers required in ElasticTranscoderClient header */

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

  namespace ElasticTranscoder
  {
    using ElasticTranscoderClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElasticTranscoderEndpointProviderBase = Aws::ElasticTranscoder::Endpoint::ElasticTranscoderEndpointProviderBase;
    using ElasticTranscoderEndpointProvider = Aws::ElasticTranscoder::Endpoint::ElasticTranscoderEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElasticTranscoderClient header */
      class CancelJobRequest;
      class CreateJobRequest;
      class CreatePipelineRequest;
      class CreatePresetRequest;
      class DeletePipelineRequest;
      class DeletePresetRequest;
      class ListJobsByPipelineRequest;
      class ListJobsByStatusRequest;
      class ListPipelinesRequest;
      class ListPresetsRequest;
      class ReadJobRequest;
      class ReadPipelineRequest;
      class ReadPresetRequest;
      class UpdatePipelineRequest;
      class UpdatePipelineNotificationsRequest;
      class UpdatePipelineStatusRequest;
      /* End of service model forward declarations required in ElasticTranscoderClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobResult, ElasticTranscoderError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, ElasticTranscoderError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreatePipelineResult, ElasticTranscoderError> CreatePipelineOutcome;
      typedef Aws::Utils::Outcome<CreatePresetResult, ElasticTranscoderError> CreatePresetOutcome;
      typedef Aws::Utils::Outcome<DeletePipelineResult, ElasticTranscoderError> DeletePipelineOutcome;
      typedef Aws::Utils::Outcome<DeletePresetResult, ElasticTranscoderError> DeletePresetOutcome;
      typedef Aws::Utils::Outcome<ListJobsByPipelineResult, ElasticTranscoderError> ListJobsByPipelineOutcome;
      typedef Aws::Utils::Outcome<ListJobsByStatusResult, ElasticTranscoderError> ListJobsByStatusOutcome;
      typedef Aws::Utils::Outcome<ListPipelinesResult, ElasticTranscoderError> ListPipelinesOutcome;
      typedef Aws::Utils::Outcome<ListPresetsResult, ElasticTranscoderError> ListPresetsOutcome;
      typedef Aws::Utils::Outcome<ReadJobResult, ElasticTranscoderError> ReadJobOutcome;
      typedef Aws::Utils::Outcome<ReadPipelineResult, ElasticTranscoderError> ReadPipelineOutcome;
      typedef Aws::Utils::Outcome<ReadPresetResult, ElasticTranscoderError> ReadPresetOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineResult, ElasticTranscoderError> UpdatePipelineOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineNotificationsResult, ElasticTranscoderError> UpdatePipelineNotificationsOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineStatusResult, ElasticTranscoderError> UpdatePipelineStatusOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
      typedef std::future<CreatePresetOutcome> CreatePresetOutcomeCallable;
      typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
      typedef std::future<DeletePresetOutcome> DeletePresetOutcomeCallable;
      typedef std::future<ListJobsByPipelineOutcome> ListJobsByPipelineOutcomeCallable;
      typedef std::future<ListJobsByStatusOutcome> ListJobsByStatusOutcomeCallable;
      typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
      typedef std::future<ListPresetsOutcome> ListPresetsOutcomeCallable;
      typedef std::future<ReadJobOutcome> ReadJobOutcomeCallable;
      typedef std::future<ReadPipelineOutcome> ReadPipelineOutcomeCallable;
      typedef std::future<ReadPresetOutcome> ReadPresetOutcomeCallable;
      typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
      typedef std::future<UpdatePipelineNotificationsOutcome> UpdatePipelineNotificationsOutcomeCallable;
      typedef std::future<UpdatePipelineStatusOutcome> UpdatePipelineStatusOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElasticTranscoderClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreatePresetRequest&, const Model::CreatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::DeletePresetRequest&, const Model::DeletePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListJobsByPipelineRequest&, const Model::ListJobsByPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByPipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListJobsByStatusRequest&, const Model::ListJobsByStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByStatusResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListPresetsRequest&, const Model::ListPresetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPresetsResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadJobRequest&, const Model::ReadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadPipelineRequest&, const Model::ReadPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadPipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadPresetRequest&, const Model::ReadPresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadPresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineNotificationsRequest&, const Model::UpdatePipelineNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineNotificationsResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineStatusRequest&, const Model::UpdatePipelineStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineStatusResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ElasticTranscoder
} // namespace Aws
