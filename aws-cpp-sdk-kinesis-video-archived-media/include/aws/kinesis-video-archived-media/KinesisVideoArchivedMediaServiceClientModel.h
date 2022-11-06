/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KinesisVideoArchivedMediaClient header */
#include <aws/kinesis-video-archived-media/model/GetClipResult.h>
#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLResult.h>
#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLResult.h>
#include <aws/kinesis-video-archived-media/model/GetImagesResult.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListResult.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsResult.h>
/* End of service model headers required in KinesisVideoArchivedMediaClient header */

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

  namespace KinesisVideoArchivedMedia
  {
    using KinesisVideoArchivedMediaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KinesisVideoArchivedMediaEndpointProviderBase = Aws::KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaEndpointProviderBase;
    using KinesisVideoArchivedMediaEndpointProvider = Aws::KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KinesisVideoArchivedMediaClient header */
      class GetClipRequest;
      class GetDASHStreamingSessionURLRequest;
      class GetHLSStreamingSessionURLRequest;
      class GetImagesRequest;
      class GetMediaForFragmentListRequest;
      class ListFragmentsRequest;
      /* End of service model forward declarations required in KinesisVideoArchivedMediaClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetClipResult, KinesisVideoArchivedMediaError> GetClipOutcome;
      typedef Aws::Utils::Outcome<GetDASHStreamingSessionURLResult, KinesisVideoArchivedMediaError> GetDASHStreamingSessionURLOutcome;
      typedef Aws::Utils::Outcome<GetHLSStreamingSessionURLResult, KinesisVideoArchivedMediaError> GetHLSStreamingSessionURLOutcome;
      typedef Aws::Utils::Outcome<GetImagesResult, KinesisVideoArchivedMediaError> GetImagesOutcome;
      typedef Aws::Utils::Outcome<GetMediaForFragmentListResult, KinesisVideoArchivedMediaError> GetMediaForFragmentListOutcome;
      typedef Aws::Utils::Outcome<ListFragmentsResult, KinesisVideoArchivedMediaError> ListFragmentsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetClipOutcome> GetClipOutcomeCallable;
      typedef std::future<GetDASHStreamingSessionURLOutcome> GetDASHStreamingSessionURLOutcomeCallable;
      typedef std::future<GetHLSStreamingSessionURLOutcome> GetHLSStreamingSessionURLOutcomeCallable;
      typedef std::future<GetImagesOutcome> GetImagesOutcomeCallable;
      typedef std::future<GetMediaForFragmentListOutcome> GetMediaForFragmentListOutcomeCallable;
      typedef std::future<ListFragmentsOutcome> ListFragmentsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KinesisVideoArchivedMediaClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetClipRequest&, Model::GetClipOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClipResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetDASHStreamingSessionURLRequest&, const Model::GetDASHStreamingSessionURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDASHStreamingSessionURLResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetHLSStreamingSessionURLRequest&, const Model::GetHLSStreamingSessionURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHLSStreamingSessionURLResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetImagesRequest&, const Model::GetImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImagesResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetMediaForFragmentListRequest&, Model::GetMediaForFragmentListOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaForFragmentListResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::ListFragmentsRequest&, const Model::ListFragmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFragmentsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
