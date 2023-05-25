/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeSDKMediaPipelinesClient header */
#include <aws/chime-sdk-media-pipelines/model/CreateMediaCapturePipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaConcatenationPipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineConfigurationResult.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaLiveConnectorPipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaCapturePipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaInsightsPipelineConfigurationResult.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineResult.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesResult.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaInsightsPipelineConfigurationsResult.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesResult.h>
#include <aws/chime-sdk-media-pipelines/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-media-pipelines/model/TagResourceResult.h>
#include <aws/chime-sdk-media-pipelines/model/UntagResourceResult.h>
#include <aws/chime-sdk-media-pipelines/model/UpdateMediaInsightsPipelineConfigurationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeSDKMediaPipelinesClient header */

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

  namespace ChimeSDKMediaPipelines
  {
    using ChimeSDKMediaPipelinesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeSDKMediaPipelinesEndpointProviderBase = Aws::ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesEndpointProviderBase;
    using ChimeSDKMediaPipelinesEndpointProvider = Aws::ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeSDKMediaPipelinesClient header */
      class CreateMediaCapturePipelineRequest;
      class CreateMediaConcatenationPipelineRequest;
      class CreateMediaInsightsPipelineRequest;
      class CreateMediaInsightsPipelineConfigurationRequest;
      class CreateMediaLiveConnectorPipelineRequest;
      class DeleteMediaCapturePipelineRequest;
      class DeleteMediaInsightsPipelineConfigurationRequest;
      class DeleteMediaPipelineRequest;
      class GetMediaCapturePipelineRequest;
      class GetMediaInsightsPipelineConfigurationRequest;
      class GetMediaPipelineRequest;
      class ListMediaCapturePipelinesRequest;
      class ListMediaInsightsPipelineConfigurationsRequest;
      class ListMediaPipelinesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateMediaInsightsPipelineConfigurationRequest;
      class UpdateMediaInsightsPipelineStatusRequest;
      /* End of service model forward declarations required in ChimeSDKMediaPipelinesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateMediaCapturePipelineResult, ChimeSDKMediaPipelinesError> CreateMediaCapturePipelineOutcome;
      typedef Aws::Utils::Outcome<CreateMediaConcatenationPipelineResult, ChimeSDKMediaPipelinesError> CreateMediaConcatenationPipelineOutcome;
      typedef Aws::Utils::Outcome<CreateMediaInsightsPipelineResult, ChimeSDKMediaPipelinesError> CreateMediaInsightsPipelineOutcome;
      typedef Aws::Utils::Outcome<CreateMediaInsightsPipelineConfigurationResult, ChimeSDKMediaPipelinesError> CreateMediaInsightsPipelineConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateMediaLiveConnectorPipelineResult, ChimeSDKMediaPipelinesError> CreateMediaLiveConnectorPipelineOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMediaPipelinesError> DeleteMediaCapturePipelineOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMediaPipelinesError> DeleteMediaInsightsPipelineConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMediaPipelinesError> DeleteMediaPipelineOutcome;
      typedef Aws::Utils::Outcome<GetMediaCapturePipelineResult, ChimeSDKMediaPipelinesError> GetMediaCapturePipelineOutcome;
      typedef Aws::Utils::Outcome<GetMediaInsightsPipelineConfigurationResult, ChimeSDKMediaPipelinesError> GetMediaInsightsPipelineConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetMediaPipelineResult, ChimeSDKMediaPipelinesError> GetMediaPipelineOutcome;
      typedef Aws::Utils::Outcome<ListMediaCapturePipelinesResult, ChimeSDKMediaPipelinesError> ListMediaCapturePipelinesOutcome;
      typedef Aws::Utils::Outcome<ListMediaInsightsPipelineConfigurationsResult, ChimeSDKMediaPipelinesError> ListMediaInsightsPipelineConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListMediaPipelinesResult, ChimeSDKMediaPipelinesError> ListMediaPipelinesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeSDKMediaPipelinesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ChimeSDKMediaPipelinesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ChimeSDKMediaPipelinesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateMediaInsightsPipelineConfigurationResult, ChimeSDKMediaPipelinesError> UpdateMediaInsightsPipelineConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMediaPipelinesError> UpdateMediaInsightsPipelineStatusOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateMediaCapturePipelineOutcome> CreateMediaCapturePipelineOutcomeCallable;
      typedef std::future<CreateMediaConcatenationPipelineOutcome> CreateMediaConcatenationPipelineOutcomeCallable;
      typedef std::future<CreateMediaInsightsPipelineOutcome> CreateMediaInsightsPipelineOutcomeCallable;
      typedef std::future<CreateMediaInsightsPipelineConfigurationOutcome> CreateMediaInsightsPipelineConfigurationOutcomeCallable;
      typedef std::future<CreateMediaLiveConnectorPipelineOutcome> CreateMediaLiveConnectorPipelineOutcomeCallable;
      typedef std::future<DeleteMediaCapturePipelineOutcome> DeleteMediaCapturePipelineOutcomeCallable;
      typedef std::future<DeleteMediaInsightsPipelineConfigurationOutcome> DeleteMediaInsightsPipelineConfigurationOutcomeCallable;
      typedef std::future<DeleteMediaPipelineOutcome> DeleteMediaPipelineOutcomeCallable;
      typedef std::future<GetMediaCapturePipelineOutcome> GetMediaCapturePipelineOutcomeCallable;
      typedef std::future<GetMediaInsightsPipelineConfigurationOutcome> GetMediaInsightsPipelineConfigurationOutcomeCallable;
      typedef std::future<GetMediaPipelineOutcome> GetMediaPipelineOutcomeCallable;
      typedef std::future<ListMediaCapturePipelinesOutcome> ListMediaCapturePipelinesOutcomeCallable;
      typedef std::future<ListMediaInsightsPipelineConfigurationsOutcome> ListMediaInsightsPipelineConfigurationsOutcomeCallable;
      typedef std::future<ListMediaPipelinesOutcome> ListMediaPipelinesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateMediaInsightsPipelineConfigurationOutcome> UpdateMediaInsightsPipelineConfigurationOutcomeCallable;
      typedef std::future<UpdateMediaInsightsPipelineStatusOutcome> UpdateMediaInsightsPipelineStatusOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeSDKMediaPipelinesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::CreateMediaCapturePipelineRequest&, const Model::CreateMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaCapturePipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::CreateMediaConcatenationPipelineRequest&, const Model::CreateMediaConcatenationPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaConcatenationPipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::CreateMediaInsightsPipelineRequest&, const Model::CreateMediaInsightsPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaInsightsPipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::CreateMediaInsightsPipelineConfigurationRequest&, const Model::CreateMediaInsightsPipelineConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaInsightsPipelineConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::CreateMediaLiveConnectorPipelineRequest&, const Model::CreateMediaLiveConnectorPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaLiveConnectorPipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::DeleteMediaCapturePipelineRequest&, const Model::DeleteMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMediaCapturePipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::DeleteMediaInsightsPipelineConfigurationRequest&, const Model::DeleteMediaInsightsPipelineConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMediaInsightsPipelineConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::DeleteMediaPipelineRequest&, const Model::DeleteMediaPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMediaPipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::GetMediaCapturePipelineRequest&, const Model::GetMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaCapturePipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::GetMediaInsightsPipelineConfigurationRequest&, const Model::GetMediaInsightsPipelineConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaInsightsPipelineConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::GetMediaPipelineRequest&, const Model::GetMediaPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaPipelineResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::ListMediaCapturePipelinesRequest&, const Model::ListMediaCapturePipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMediaCapturePipelinesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::ListMediaInsightsPipelineConfigurationsRequest&, const Model::ListMediaInsightsPipelineConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMediaInsightsPipelineConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::ListMediaPipelinesRequest&, const Model::ListMediaPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMediaPipelinesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::UpdateMediaInsightsPipelineConfigurationRequest&, const Model::UpdateMediaInsightsPipelineConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMediaInsightsPipelineConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMediaPipelinesClient*, const Model::UpdateMediaInsightsPipelineStatusRequest&, const Model::UpdateMediaInsightsPipelineStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMediaInsightsPipelineStatusResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
