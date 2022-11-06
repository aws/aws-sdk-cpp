/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/firehose/FirehoseErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/firehose/FirehoseEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FirehoseClient header */
#include <aws/firehose/model/CreateDeliveryStreamResult.h>
#include <aws/firehose/model/DeleteDeliveryStreamResult.h>
#include <aws/firehose/model/DescribeDeliveryStreamResult.h>
#include <aws/firehose/model/ListDeliveryStreamsResult.h>
#include <aws/firehose/model/ListTagsForDeliveryStreamResult.h>
#include <aws/firehose/model/PutRecordResult.h>
#include <aws/firehose/model/PutRecordBatchResult.h>
#include <aws/firehose/model/StartDeliveryStreamEncryptionResult.h>
#include <aws/firehose/model/StopDeliveryStreamEncryptionResult.h>
#include <aws/firehose/model/TagDeliveryStreamResult.h>
#include <aws/firehose/model/UntagDeliveryStreamResult.h>
#include <aws/firehose/model/UpdateDestinationResult.h>
/* End of service model headers required in FirehoseClient header */

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

  namespace Firehose
  {
    using FirehoseClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FirehoseEndpointProviderBase = Aws::Firehose::Endpoint::FirehoseEndpointProviderBase;
    using FirehoseEndpointProvider = Aws::Firehose::Endpoint::FirehoseEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FirehoseClient header */
      class CreateDeliveryStreamRequest;
      class DeleteDeliveryStreamRequest;
      class DescribeDeliveryStreamRequest;
      class ListDeliveryStreamsRequest;
      class ListTagsForDeliveryStreamRequest;
      class PutRecordRequest;
      class PutRecordBatchRequest;
      class StartDeliveryStreamEncryptionRequest;
      class StopDeliveryStreamEncryptionRequest;
      class TagDeliveryStreamRequest;
      class UntagDeliveryStreamRequest;
      class UpdateDestinationRequest;
      /* End of service model forward declarations required in FirehoseClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDeliveryStreamResult, FirehoseError> CreateDeliveryStreamOutcome;
      typedef Aws::Utils::Outcome<DeleteDeliveryStreamResult, FirehoseError> DeleteDeliveryStreamOutcome;
      typedef Aws::Utils::Outcome<DescribeDeliveryStreamResult, FirehoseError> DescribeDeliveryStreamOutcome;
      typedef Aws::Utils::Outcome<ListDeliveryStreamsResult, FirehoseError> ListDeliveryStreamsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForDeliveryStreamResult, FirehoseError> ListTagsForDeliveryStreamOutcome;
      typedef Aws::Utils::Outcome<PutRecordResult, FirehoseError> PutRecordOutcome;
      typedef Aws::Utils::Outcome<PutRecordBatchResult, FirehoseError> PutRecordBatchOutcome;
      typedef Aws::Utils::Outcome<StartDeliveryStreamEncryptionResult, FirehoseError> StartDeliveryStreamEncryptionOutcome;
      typedef Aws::Utils::Outcome<StopDeliveryStreamEncryptionResult, FirehoseError> StopDeliveryStreamEncryptionOutcome;
      typedef Aws::Utils::Outcome<TagDeliveryStreamResult, FirehoseError> TagDeliveryStreamOutcome;
      typedef Aws::Utils::Outcome<UntagDeliveryStreamResult, FirehoseError> UntagDeliveryStreamOutcome;
      typedef Aws::Utils::Outcome<UpdateDestinationResult, FirehoseError> UpdateDestinationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDeliveryStreamOutcome> CreateDeliveryStreamOutcomeCallable;
      typedef std::future<DeleteDeliveryStreamOutcome> DeleteDeliveryStreamOutcomeCallable;
      typedef std::future<DescribeDeliveryStreamOutcome> DescribeDeliveryStreamOutcomeCallable;
      typedef std::future<ListDeliveryStreamsOutcome> ListDeliveryStreamsOutcomeCallable;
      typedef std::future<ListTagsForDeliveryStreamOutcome> ListTagsForDeliveryStreamOutcomeCallable;
      typedef std::future<PutRecordOutcome> PutRecordOutcomeCallable;
      typedef std::future<PutRecordBatchOutcome> PutRecordBatchOutcomeCallable;
      typedef std::future<StartDeliveryStreamEncryptionOutcome> StartDeliveryStreamEncryptionOutcomeCallable;
      typedef std::future<StopDeliveryStreamEncryptionOutcome> StopDeliveryStreamEncryptionOutcomeCallable;
      typedef std::future<TagDeliveryStreamOutcome> TagDeliveryStreamOutcomeCallable;
      typedef std::future<UntagDeliveryStreamOutcome> UntagDeliveryStreamOutcomeCallable;
      typedef std::future<UpdateDestinationOutcome> UpdateDestinationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FirehoseClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FirehoseClient*, const Model::CreateDeliveryStreamRequest&, const Model::CreateDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::DeleteDeliveryStreamRequest&, const Model::DeleteDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::DescribeDeliveryStreamRequest&, const Model::DescribeDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::ListDeliveryStreamsRequest&, const Model::ListDeliveryStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeliveryStreamsResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::ListTagsForDeliveryStreamRequest&, const Model::ListTagsForDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::PutRecordRequest&, const Model::PutRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecordResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::PutRecordBatchRequest&, const Model::PutRecordBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecordBatchResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::StartDeliveryStreamEncryptionRequest&, const Model::StartDeliveryStreamEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeliveryStreamEncryptionResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::StopDeliveryStreamEncryptionRequest&, const Model::StopDeliveryStreamEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDeliveryStreamEncryptionResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::TagDeliveryStreamRequest&, const Model::TagDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::UntagDeliveryStreamRequest&, const Model::UntagDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::UpdateDestinationRequest&, const Model::UpdateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDestinationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Firehose
} // namespace Aws
