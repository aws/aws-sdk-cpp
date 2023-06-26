/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesisvideo/KinesisVideoErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesisvideo/KinesisVideoEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisVideoClient header */
#include <aws/kinesisvideo/model/CreateSignalingChannelResult.h>
#include <aws/kinesisvideo/model/CreateStreamResult.h>
#include <aws/kinesisvideo/model/DeleteSignalingChannelResult.h>
#include <aws/kinesisvideo/model/DeleteStreamResult.h>
#include <aws/kinesisvideo/model/DescribeEdgeConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeImageGenerationConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeMediaStorageConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeNotificationConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeSignalingChannelResult.h>
#include <aws/kinesisvideo/model/DescribeStreamResult.h>
#include <aws/kinesisvideo/model/GetDataEndpointResult.h>
#include <aws/kinesisvideo/model/GetSignalingChannelEndpointResult.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsResult.h>
#include <aws/kinesisvideo/model/ListStreamsResult.h>
#include <aws/kinesisvideo/model/ListTagsForResourceResult.h>
#include <aws/kinesisvideo/model/ListTagsForStreamResult.h>
#include <aws/kinesisvideo/model/StartEdgeConfigurationUpdateResult.h>
#include <aws/kinesisvideo/model/TagResourceResult.h>
#include <aws/kinesisvideo/model/TagStreamResult.h>
#include <aws/kinesisvideo/model/UntagResourceResult.h>
#include <aws/kinesisvideo/model/UntagStreamResult.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionResult.h>
#include <aws/kinesisvideo/model/UpdateImageGenerationConfigurationResult.h>
#include <aws/kinesisvideo/model/UpdateMediaStorageConfigurationResult.h>
#include <aws/kinesisvideo/model/UpdateNotificationConfigurationResult.h>
#include <aws/kinesisvideo/model/UpdateSignalingChannelResult.h>
#include <aws/kinesisvideo/model/UpdateStreamResult.h>
/* End of service model headers required in KinesisVideoClient header */

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

  namespace KinesisVideo
  {
    using KinesisVideoClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisVideoEndpointProviderBase = Aws::KinesisVideo::Endpoint::KinesisVideoEndpointProviderBase;
    using KinesisVideoEndpointProvider = Aws::KinesisVideo::Endpoint::KinesisVideoEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisVideoClient header */
      class CreateSignalingChannelRequest;
      class CreateStreamRequest;
      class DeleteSignalingChannelRequest;
      class DeleteStreamRequest;
      class DescribeEdgeConfigurationRequest;
      class DescribeImageGenerationConfigurationRequest;
      class DescribeMappedResourceConfigurationRequest;
      class DescribeMediaStorageConfigurationRequest;
      class DescribeNotificationConfigurationRequest;
      class DescribeSignalingChannelRequest;
      class DescribeStreamRequest;
      class GetDataEndpointRequest;
      class GetSignalingChannelEndpointRequest;
      class ListSignalingChannelsRequest;
      class ListStreamsRequest;
      class ListTagsForResourceRequest;
      class ListTagsForStreamRequest;
      class StartEdgeConfigurationUpdateRequest;
      class TagResourceRequest;
      class TagStreamRequest;
      class UntagResourceRequest;
      class UntagStreamRequest;
      class UpdateDataRetentionRequest;
      class UpdateImageGenerationConfigurationRequest;
      class UpdateMediaStorageConfigurationRequest;
      class UpdateNotificationConfigurationRequest;
      class UpdateSignalingChannelRequest;
      class UpdateStreamRequest;
      /* End of service model forward declarations required in KinesisVideoClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateSignalingChannelResult, KinesisVideoError> CreateSignalingChannelOutcome;
      typedef Aws::Utils::Outcome<CreateStreamResult, KinesisVideoError> CreateStreamOutcome;
      typedef Aws::Utils::Outcome<DeleteSignalingChannelResult, KinesisVideoError> DeleteSignalingChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteStreamResult, KinesisVideoError> DeleteStreamOutcome;
      typedef Aws::Utils::Outcome<DescribeEdgeConfigurationResult, KinesisVideoError> DescribeEdgeConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeImageGenerationConfigurationResult, KinesisVideoError> DescribeImageGenerationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeMappedResourceConfigurationResult, KinesisVideoError> DescribeMappedResourceConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeMediaStorageConfigurationResult, KinesisVideoError> DescribeMediaStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeNotificationConfigurationResult, KinesisVideoError> DescribeNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeSignalingChannelResult, KinesisVideoError> DescribeSignalingChannelOutcome;
      typedef Aws::Utils::Outcome<DescribeStreamResult, KinesisVideoError> DescribeStreamOutcome;
      typedef Aws::Utils::Outcome<GetDataEndpointResult, KinesisVideoError> GetDataEndpointOutcome;
      typedef Aws::Utils::Outcome<GetSignalingChannelEndpointResult, KinesisVideoError> GetSignalingChannelEndpointOutcome;
      typedef Aws::Utils::Outcome<ListSignalingChannelsResult, KinesisVideoError> ListSignalingChannelsOutcome;
      typedef Aws::Utils::Outcome<ListStreamsResult, KinesisVideoError> ListStreamsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KinesisVideoError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTagsForStreamResult, KinesisVideoError> ListTagsForStreamOutcome;
      typedef Aws::Utils::Outcome<StartEdgeConfigurationUpdateResult, KinesisVideoError> StartEdgeConfigurationUpdateOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KinesisVideoError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TagStreamResult, KinesisVideoError> TagStreamOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KinesisVideoError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagStreamResult, KinesisVideoError> UntagStreamOutcome;
      typedef Aws::Utils::Outcome<UpdateDataRetentionResult, KinesisVideoError> UpdateDataRetentionOutcome;
      typedef Aws::Utils::Outcome<UpdateImageGenerationConfigurationResult, KinesisVideoError> UpdateImageGenerationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateMediaStorageConfigurationResult, KinesisVideoError> UpdateMediaStorageConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateNotificationConfigurationResult, KinesisVideoError> UpdateNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateSignalingChannelResult, KinesisVideoError> UpdateSignalingChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateStreamResult, KinesisVideoError> UpdateStreamOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateSignalingChannelOutcome> CreateSignalingChannelOutcomeCallable;
      typedef std::future<CreateStreamOutcome> CreateStreamOutcomeCallable;
      typedef std::future<DeleteSignalingChannelOutcome> DeleteSignalingChannelOutcomeCallable;
      typedef std::future<DeleteStreamOutcome> DeleteStreamOutcomeCallable;
      typedef std::future<DescribeEdgeConfigurationOutcome> DescribeEdgeConfigurationOutcomeCallable;
      typedef std::future<DescribeImageGenerationConfigurationOutcome> DescribeImageGenerationConfigurationOutcomeCallable;
      typedef std::future<DescribeMappedResourceConfigurationOutcome> DescribeMappedResourceConfigurationOutcomeCallable;
      typedef std::future<DescribeMediaStorageConfigurationOutcome> DescribeMediaStorageConfigurationOutcomeCallable;
      typedef std::future<DescribeNotificationConfigurationOutcome> DescribeNotificationConfigurationOutcomeCallable;
      typedef std::future<DescribeSignalingChannelOutcome> DescribeSignalingChannelOutcomeCallable;
      typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
      typedef std::future<GetDataEndpointOutcome> GetDataEndpointOutcomeCallable;
      typedef std::future<GetSignalingChannelEndpointOutcome> GetSignalingChannelEndpointOutcomeCallable;
      typedef std::future<ListSignalingChannelsOutcome> ListSignalingChannelsOutcomeCallable;
      typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTagsForStreamOutcome> ListTagsForStreamOutcomeCallable;
      typedef std::future<StartEdgeConfigurationUpdateOutcome> StartEdgeConfigurationUpdateOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TagStreamOutcome> TagStreamOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UntagStreamOutcome> UntagStreamOutcomeCallable;
      typedef std::future<UpdateDataRetentionOutcome> UpdateDataRetentionOutcomeCallable;
      typedef std::future<UpdateImageGenerationConfigurationOutcome> UpdateImageGenerationConfigurationOutcomeCallable;
      typedef std::future<UpdateMediaStorageConfigurationOutcome> UpdateMediaStorageConfigurationOutcomeCallable;
      typedef std::future<UpdateNotificationConfigurationOutcome> UpdateNotificationConfigurationOutcomeCallable;
      typedef std::future<UpdateSignalingChannelOutcome> UpdateSignalingChannelOutcomeCallable;
      typedef std::future<UpdateStreamOutcome> UpdateStreamOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisVideoClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisVideoClient*, const Model::CreateSignalingChannelRequest&, const Model::CreateSignalingChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSignalingChannelResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::CreateStreamRequest&, const Model::CreateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DeleteSignalingChannelRequest&, const Model::DeleteSignalingChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSignalingChannelResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DeleteStreamRequest&, const Model::DeleteStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeEdgeConfigurationRequest&, const Model::DescribeEdgeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEdgeConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeImageGenerationConfigurationRequest&, const Model::DescribeImageGenerationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageGenerationConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeMappedResourceConfigurationRequest&, const Model::DescribeMappedResourceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMappedResourceConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeMediaStorageConfigurationRequest&, const Model::DescribeMediaStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMediaStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeNotificationConfigurationRequest&, const Model::DescribeNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeSignalingChannelRequest&, const Model::DescribeSignalingChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSignalingChannelResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::DescribeStreamRequest&, const Model::DescribeStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::GetDataEndpointRequest&, const Model::GetDataEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataEndpointResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::GetSignalingChannelEndpointRequest&, const Model::GetSignalingChannelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSignalingChannelEndpointResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::ListSignalingChannelsRequest&, const Model::ListSignalingChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSignalingChannelsResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::ListTagsForStreamRequest&, const Model::ListTagsForStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::StartEdgeConfigurationUpdateRequest&, const Model::StartEdgeConfigurationUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEdgeConfigurationUpdateResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::TagStreamRequest&, const Model::TagStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UntagStreamRequest&, const Model::UntagStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagStreamResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateDataRetentionRequest&, const Model::UpdateDataRetentionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataRetentionResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateImageGenerationConfigurationRequest&, const Model::UpdateImageGenerationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImageGenerationConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateMediaStorageConfigurationRequest&, const Model::UpdateMediaStorageConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMediaStorageConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateNotificationConfigurationRequest&, const Model::UpdateNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateSignalingChannelRequest&, const Model::UpdateSignalingChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSignalingChannelResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoClient*, const Model::UpdateStreamRequest&, const Model::UpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisVideo
} // namespace Aws
