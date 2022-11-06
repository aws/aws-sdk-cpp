/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/qldb/QLDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/qldb/QLDBEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QLDBClient header */
#include <aws/qldb/model/CancelJournalKinesisStreamResult.h>
#include <aws/qldb/model/CreateLedgerResult.h>
#include <aws/qldb/model/DescribeJournalKinesisStreamResult.h>
#include <aws/qldb/model/DescribeJournalS3ExportResult.h>
#include <aws/qldb/model/DescribeLedgerResult.h>
#include <aws/qldb/model/ExportJournalToS3Result.h>
#include <aws/qldb/model/GetBlockResult.h>
#include <aws/qldb/model/GetDigestResult.h>
#include <aws/qldb/model/GetRevisionResult.h>
#include <aws/qldb/model/ListJournalKinesisStreamsForLedgerResult.h>
#include <aws/qldb/model/ListJournalS3ExportsResult.h>
#include <aws/qldb/model/ListJournalS3ExportsForLedgerResult.h>
#include <aws/qldb/model/ListLedgersResult.h>
#include <aws/qldb/model/ListTagsForResourceResult.h>
#include <aws/qldb/model/StreamJournalToKinesisResult.h>
#include <aws/qldb/model/TagResourceResult.h>
#include <aws/qldb/model/UntagResourceResult.h>
#include <aws/qldb/model/UpdateLedgerResult.h>
#include <aws/qldb/model/UpdateLedgerPermissionsModeResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in QLDBClient header */

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

  namespace QLDB
  {
    using QLDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using QLDBEndpointProviderBase = Aws::QLDB::Endpoint::QLDBEndpointProviderBase;
    using QLDBEndpointProvider = Aws::QLDB::Endpoint::QLDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QLDBClient header */
      class CancelJournalKinesisStreamRequest;
      class CreateLedgerRequest;
      class DeleteLedgerRequest;
      class DescribeJournalKinesisStreamRequest;
      class DescribeJournalS3ExportRequest;
      class DescribeLedgerRequest;
      class ExportJournalToS3Request;
      class GetBlockRequest;
      class GetDigestRequest;
      class GetRevisionRequest;
      class ListJournalKinesisStreamsForLedgerRequest;
      class ListJournalS3ExportsRequest;
      class ListJournalS3ExportsForLedgerRequest;
      class ListLedgersRequest;
      class ListTagsForResourceRequest;
      class StreamJournalToKinesisRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLedgerRequest;
      class UpdateLedgerPermissionsModeRequest;
      /* End of service model forward declarations required in QLDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJournalKinesisStreamResult, QLDBError> CancelJournalKinesisStreamOutcome;
      typedef Aws::Utils::Outcome<CreateLedgerResult, QLDBError> CreateLedgerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QLDBError> DeleteLedgerOutcome;
      typedef Aws::Utils::Outcome<DescribeJournalKinesisStreamResult, QLDBError> DescribeJournalKinesisStreamOutcome;
      typedef Aws::Utils::Outcome<DescribeJournalS3ExportResult, QLDBError> DescribeJournalS3ExportOutcome;
      typedef Aws::Utils::Outcome<DescribeLedgerResult, QLDBError> DescribeLedgerOutcome;
      typedef Aws::Utils::Outcome<ExportJournalToS3Result, QLDBError> ExportJournalToS3Outcome;
      typedef Aws::Utils::Outcome<GetBlockResult, QLDBError> GetBlockOutcome;
      typedef Aws::Utils::Outcome<GetDigestResult, QLDBError> GetDigestOutcome;
      typedef Aws::Utils::Outcome<GetRevisionResult, QLDBError> GetRevisionOutcome;
      typedef Aws::Utils::Outcome<ListJournalKinesisStreamsForLedgerResult, QLDBError> ListJournalKinesisStreamsForLedgerOutcome;
      typedef Aws::Utils::Outcome<ListJournalS3ExportsResult, QLDBError> ListJournalS3ExportsOutcome;
      typedef Aws::Utils::Outcome<ListJournalS3ExportsForLedgerResult, QLDBError> ListJournalS3ExportsForLedgerOutcome;
      typedef Aws::Utils::Outcome<ListLedgersResult, QLDBError> ListLedgersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, QLDBError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StreamJournalToKinesisResult, QLDBError> StreamJournalToKinesisOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, QLDBError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, QLDBError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLedgerResult, QLDBError> UpdateLedgerOutcome;
      typedef Aws::Utils::Outcome<UpdateLedgerPermissionsModeResult, QLDBError> UpdateLedgerPermissionsModeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJournalKinesisStreamOutcome> CancelJournalKinesisStreamOutcomeCallable;
      typedef std::future<CreateLedgerOutcome> CreateLedgerOutcomeCallable;
      typedef std::future<DeleteLedgerOutcome> DeleteLedgerOutcomeCallable;
      typedef std::future<DescribeJournalKinesisStreamOutcome> DescribeJournalKinesisStreamOutcomeCallable;
      typedef std::future<DescribeJournalS3ExportOutcome> DescribeJournalS3ExportOutcomeCallable;
      typedef std::future<DescribeLedgerOutcome> DescribeLedgerOutcomeCallable;
      typedef std::future<ExportJournalToS3Outcome> ExportJournalToS3OutcomeCallable;
      typedef std::future<GetBlockOutcome> GetBlockOutcomeCallable;
      typedef std::future<GetDigestOutcome> GetDigestOutcomeCallable;
      typedef std::future<GetRevisionOutcome> GetRevisionOutcomeCallable;
      typedef std::future<ListJournalKinesisStreamsForLedgerOutcome> ListJournalKinesisStreamsForLedgerOutcomeCallable;
      typedef std::future<ListJournalS3ExportsOutcome> ListJournalS3ExportsOutcomeCallable;
      typedef std::future<ListJournalS3ExportsForLedgerOutcome> ListJournalS3ExportsForLedgerOutcomeCallable;
      typedef std::future<ListLedgersOutcome> ListLedgersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StreamJournalToKinesisOutcome> StreamJournalToKinesisOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLedgerOutcome> UpdateLedgerOutcomeCallable;
      typedef std::future<UpdateLedgerPermissionsModeOutcome> UpdateLedgerPermissionsModeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QLDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QLDBClient*, const Model::CancelJournalKinesisStreamRequest&, const Model::CancelJournalKinesisStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJournalKinesisStreamResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::CreateLedgerRequest&, const Model::CreateLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DeleteLedgerRequest&, const Model::DeleteLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DescribeJournalKinesisStreamRequest&, const Model::DescribeJournalKinesisStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJournalKinesisStreamResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DescribeJournalS3ExportRequest&, const Model::DescribeJournalS3ExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJournalS3ExportResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DescribeLedgerRequest&, const Model::DescribeLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ExportJournalToS3Request&, const Model::ExportJournalToS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportJournalToS3ResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::GetBlockRequest&, const Model::GetBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlockResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::GetDigestRequest&, const Model::GetDigestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDigestResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::GetRevisionRequest&, const Model::GetRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRevisionResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListJournalKinesisStreamsForLedgerRequest&, const Model::ListJournalKinesisStreamsForLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJournalKinesisStreamsForLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListJournalS3ExportsRequest&, const Model::ListJournalS3ExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJournalS3ExportsResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListJournalS3ExportsForLedgerRequest&, const Model::ListJournalS3ExportsForLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJournalS3ExportsForLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListLedgersRequest&, const Model::ListLedgersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLedgersResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::StreamJournalToKinesisRequest&, const Model::StreamJournalToKinesisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StreamJournalToKinesisResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::UpdateLedgerRequest&, const Model::UpdateLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::UpdateLedgerPermissionsModeRequest&, const Model::UpdateLedgerPermissionsModeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLedgerPermissionsModeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QLDB
} // namespace Aws
