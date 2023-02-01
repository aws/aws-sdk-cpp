/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ebs/EBSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ebs/EBSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EBSClient header */
#include <aws/ebs/model/CompleteSnapshotResult.h>
#include <aws/ebs/model/GetSnapshotBlockResult.h>
#include <aws/ebs/model/ListChangedBlocksResult.h>
#include <aws/ebs/model/ListSnapshotBlocksResult.h>
#include <aws/ebs/model/PutSnapshotBlockResult.h>
#include <aws/ebs/model/StartSnapshotResult.h>
/* End of service model headers required in EBSClient header */

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

  namespace EBS
  {
    using EBSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EBSEndpointProviderBase = Aws::EBS::Endpoint::EBSEndpointProviderBase;
    using EBSEndpointProvider = Aws::EBS::Endpoint::EBSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EBSClient header */
      class CompleteSnapshotRequest;
      class GetSnapshotBlockRequest;
      class ListChangedBlocksRequest;
      class ListSnapshotBlocksRequest;
      class PutSnapshotBlockRequest;
      class StartSnapshotRequest;
      /* End of service model forward declarations required in EBSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CompleteSnapshotResult, EBSError> CompleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetSnapshotBlockResult, EBSError> GetSnapshotBlockOutcome;
      typedef Aws::Utils::Outcome<ListChangedBlocksResult, EBSError> ListChangedBlocksOutcome;
      typedef Aws::Utils::Outcome<ListSnapshotBlocksResult, EBSError> ListSnapshotBlocksOutcome;
      typedef Aws::Utils::Outcome<PutSnapshotBlockResult, EBSError> PutSnapshotBlockOutcome;
      typedef Aws::Utils::Outcome<StartSnapshotResult, EBSError> StartSnapshotOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CompleteSnapshotOutcome> CompleteSnapshotOutcomeCallable;
      typedef std::future<GetSnapshotBlockOutcome> GetSnapshotBlockOutcomeCallable;
      typedef std::future<ListChangedBlocksOutcome> ListChangedBlocksOutcomeCallable;
      typedef std::future<ListSnapshotBlocksOutcome> ListSnapshotBlocksOutcomeCallable;
      typedef std::future<PutSnapshotBlockOutcome> PutSnapshotBlockOutcomeCallable;
      typedef std::future<StartSnapshotOutcome> StartSnapshotOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EBSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EBSClient*, const Model::CompleteSnapshotRequest&, const Model::CompleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::GetSnapshotBlockRequest&, Model::GetSnapshotBlockOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotBlockResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::ListChangedBlocksRequest&, const Model::ListChangedBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangedBlocksResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::ListSnapshotBlocksRequest&, const Model::ListSnapshotBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSnapshotBlocksResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::PutSnapshotBlockRequest&, const Model::PutSnapshotBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSnapshotBlockResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::StartSnapshotRequest&, const Model::StartSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSnapshotResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EBS
} // namespace Aws
