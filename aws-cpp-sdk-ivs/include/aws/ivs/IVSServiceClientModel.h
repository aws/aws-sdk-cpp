/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ivs/IVSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ivs/IVSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IVSClient header */
#include <aws/ivs/model/BatchGetChannelResult.h>
#include <aws/ivs/model/BatchGetStreamKeyResult.h>
#include <aws/ivs/model/CreateChannelResult.h>
#include <aws/ivs/model/CreateRecordingConfigurationResult.h>
#include <aws/ivs/model/CreateStreamKeyResult.h>
#include <aws/ivs/model/DeletePlaybackKeyPairResult.h>
#include <aws/ivs/model/GetChannelResult.h>
#include <aws/ivs/model/GetPlaybackKeyPairResult.h>
#include <aws/ivs/model/GetRecordingConfigurationResult.h>
#include <aws/ivs/model/GetStreamResult.h>
#include <aws/ivs/model/GetStreamKeyResult.h>
#include <aws/ivs/model/GetStreamSessionResult.h>
#include <aws/ivs/model/ImportPlaybackKeyPairResult.h>
#include <aws/ivs/model/ListChannelsResult.h>
#include <aws/ivs/model/ListPlaybackKeyPairsResult.h>
#include <aws/ivs/model/ListRecordingConfigurationsResult.h>
#include <aws/ivs/model/ListStreamKeysResult.h>
#include <aws/ivs/model/ListStreamSessionsResult.h>
#include <aws/ivs/model/ListStreamsResult.h>
#include <aws/ivs/model/ListTagsForResourceResult.h>
#include <aws/ivs/model/StopStreamResult.h>
#include <aws/ivs/model/TagResourceResult.h>
#include <aws/ivs/model/UntagResourceResult.h>
#include <aws/ivs/model/UpdateChannelResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IVSClient header */

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

  namespace IVS
  {
    using IVSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IVSEndpointProviderBase = Aws::IVS::Endpoint::IVSEndpointProviderBase;
    using IVSEndpointProvider = Aws::IVS::Endpoint::IVSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IVSClient header */
      class BatchGetChannelRequest;
      class BatchGetStreamKeyRequest;
      class CreateChannelRequest;
      class CreateRecordingConfigurationRequest;
      class CreateStreamKeyRequest;
      class DeleteChannelRequest;
      class DeletePlaybackKeyPairRequest;
      class DeleteRecordingConfigurationRequest;
      class DeleteStreamKeyRequest;
      class GetChannelRequest;
      class GetPlaybackKeyPairRequest;
      class GetRecordingConfigurationRequest;
      class GetStreamRequest;
      class GetStreamKeyRequest;
      class GetStreamSessionRequest;
      class ImportPlaybackKeyPairRequest;
      class ListChannelsRequest;
      class ListPlaybackKeyPairsRequest;
      class ListRecordingConfigurationsRequest;
      class ListStreamKeysRequest;
      class ListStreamSessionsRequest;
      class ListStreamsRequest;
      class ListTagsForResourceRequest;
      class PutMetadataRequest;
      class StopStreamRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateChannelRequest;
      /* End of service model forward declarations required in IVSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetChannelResult, IVSError> BatchGetChannelOutcome;
      typedef Aws::Utils::Outcome<BatchGetStreamKeyResult, IVSError> BatchGetStreamKeyOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, IVSError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateRecordingConfigurationResult, IVSError> CreateRecordingConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateStreamKeyResult, IVSError> CreateStreamKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeletePlaybackKeyPairResult, IVSError> DeletePlaybackKeyPairOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> DeleteRecordingConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> DeleteStreamKeyOutcome;
      typedef Aws::Utils::Outcome<GetChannelResult, IVSError> GetChannelOutcome;
      typedef Aws::Utils::Outcome<GetPlaybackKeyPairResult, IVSError> GetPlaybackKeyPairOutcome;
      typedef Aws::Utils::Outcome<GetRecordingConfigurationResult, IVSError> GetRecordingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetStreamResult, IVSError> GetStreamOutcome;
      typedef Aws::Utils::Outcome<GetStreamKeyResult, IVSError> GetStreamKeyOutcome;
      typedef Aws::Utils::Outcome<GetStreamSessionResult, IVSError> GetStreamSessionOutcome;
      typedef Aws::Utils::Outcome<ImportPlaybackKeyPairResult, IVSError> ImportPlaybackKeyPairOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, IVSError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListPlaybackKeyPairsResult, IVSError> ListPlaybackKeyPairsOutcome;
      typedef Aws::Utils::Outcome<ListRecordingConfigurationsResult, IVSError> ListRecordingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListStreamKeysResult, IVSError> ListStreamKeysOutcome;
      typedef Aws::Utils::Outcome<ListStreamSessionsResult, IVSError> ListStreamSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStreamsResult, IVSError> ListStreamsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IVSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> PutMetadataOutcome;
      typedef Aws::Utils::Outcome<StopStreamResult, IVSError> StopStreamOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IVSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IVSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, IVSError> UpdateChannelOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetChannelOutcome> BatchGetChannelOutcomeCallable;
      typedef std::future<BatchGetStreamKeyOutcome> BatchGetStreamKeyOutcomeCallable;
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateRecordingConfigurationOutcome> CreateRecordingConfigurationOutcomeCallable;
      typedef std::future<CreateStreamKeyOutcome> CreateStreamKeyOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeletePlaybackKeyPairOutcome> DeletePlaybackKeyPairOutcomeCallable;
      typedef std::future<DeleteRecordingConfigurationOutcome> DeleteRecordingConfigurationOutcomeCallable;
      typedef std::future<DeleteStreamKeyOutcome> DeleteStreamKeyOutcomeCallable;
      typedef std::future<GetChannelOutcome> GetChannelOutcomeCallable;
      typedef std::future<GetPlaybackKeyPairOutcome> GetPlaybackKeyPairOutcomeCallable;
      typedef std::future<GetRecordingConfigurationOutcome> GetRecordingConfigurationOutcomeCallable;
      typedef std::future<GetStreamOutcome> GetStreamOutcomeCallable;
      typedef std::future<GetStreamKeyOutcome> GetStreamKeyOutcomeCallable;
      typedef std::future<GetStreamSessionOutcome> GetStreamSessionOutcomeCallable;
      typedef std::future<ImportPlaybackKeyPairOutcome> ImportPlaybackKeyPairOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListPlaybackKeyPairsOutcome> ListPlaybackKeyPairsOutcomeCallable;
      typedef std::future<ListRecordingConfigurationsOutcome> ListRecordingConfigurationsOutcomeCallable;
      typedef std::future<ListStreamKeysOutcome> ListStreamKeysOutcomeCallable;
      typedef std::future<ListStreamSessionsOutcome> ListStreamSessionsOutcomeCallable;
      typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutMetadataOutcome> PutMetadataOutcomeCallable;
      typedef std::future<StopStreamOutcome> StopStreamOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IVSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IVSClient*, const Model::BatchGetChannelRequest&, const Model::BatchGetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::BatchGetStreamKeyRequest&, const Model::BatchGetStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::CreateRecordingConfigurationRequest&, const Model::CreateRecordingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecordingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::CreateStreamKeyRequest&, const Model::CreateStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeletePlaybackKeyPairRequest&, const Model::DeletePlaybackKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaybackKeyPairResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeleteRecordingConfigurationRequest&, const Model::DeleteRecordingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecordingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeleteStreamKeyRequest&, const Model::DeleteStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetChannelRequest&, const Model::GetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetPlaybackKeyPairRequest&, const Model::GetPlaybackKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaybackKeyPairResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetRecordingConfigurationRequest&, const Model::GetRecordingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetStreamRequest&, const Model::GetStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetStreamKeyRequest&, const Model::GetStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetStreamSessionRequest&, const Model::GetStreamSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamSessionResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ImportPlaybackKeyPairRequest&, const Model::ImportPlaybackKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportPlaybackKeyPairResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListPlaybackKeyPairsRequest&, const Model::ListPlaybackKeyPairsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaybackKeyPairsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListRecordingConfigurationsRequest&, const Model::ListRecordingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListStreamKeysRequest&, const Model::ListStreamKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamKeysResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListStreamSessionsRequest&, const Model::ListStreamSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamSessionsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::PutMetadataRequest&, const Model::PutMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetadataResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::StopStreamRequest&, const Model::StopStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStreamResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IVS
} // namespace Aws
