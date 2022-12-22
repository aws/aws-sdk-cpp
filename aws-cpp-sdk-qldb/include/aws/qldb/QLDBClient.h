/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qldb/QLDBServiceClientModel.h>

namespace Aws
{
namespace QLDB
{
  /**
   * <p>The control plane for Amazon QLDB</p>
   */
  class AWS_QLDB_API QLDBClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<QLDBClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBClient(const Aws::QLDB::QLDBClientConfiguration& clientConfiguration = Aws::QLDB::QLDBClientConfiguration(),
                   std::shared_ptr<QLDBEndpointProviderBase> endpointProvider = Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<QLDBEndpointProviderBase> endpointProvider = Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG),
                   const Aws::QLDB::QLDBClientConfiguration& clientConfiguration = Aws::QLDB::QLDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QLDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<QLDBEndpointProviderBase> endpointProvider = Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG),
                   const Aws::QLDB::QLDBClientConfiguration& clientConfiguration = Aws::QLDB::QLDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QLDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QLDBClient();

        /**
         * <p>Ends a given Amazon QLDB journal stream. Before a stream can be canceled, its
         * current status must be <code>ACTIVE</code>.</p> <p>You can't restart a stream
         * after you cancel it. Canceled QLDB stream resources are subject to a 7-day
         * retention period, so they are automatically deleted after this limit
         * expires.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/CancelJournalKinesisStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJournalKinesisStreamOutcome CancelJournalKinesisStream(const Model::CancelJournalKinesisStreamRequest& request) const;

        /**
         * A Callable wrapper for CancelJournalKinesisStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJournalKinesisStreamOutcomeCallable CancelJournalKinesisStreamCallable(const Model::CancelJournalKinesisStreamRequest& request) const;

        /**
         * An Async wrapper for CancelJournalKinesisStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJournalKinesisStreamAsync(const Model::CancelJournalKinesisStreamRequest& request, const CancelJournalKinesisStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ledger in your Amazon Web Services account in the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/CreateLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLedgerOutcome CreateLedger(const Model::CreateLedgerRequest& request) const;

        /**
         * A Callable wrapper for CreateLedger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLedgerOutcomeCallable CreateLedgerCallable(const Model::CreateLedgerRequest& request) const;

        /**
         * An Async wrapper for CreateLedger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLedgerAsync(const Model::CreateLedgerRequest& request, const CreateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a ledger and all of its contents. This action is irreversible.</p>
         * <p>If deletion protection is enabled, you must first disable it before you can
         * delete the ledger. You can disable it by calling the <code>UpdateLedger</code>
         * operation to set the flag to <code>false</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DeleteLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLedgerOutcome DeleteLedger(const Model::DeleteLedgerRequest& request) const;

        /**
         * A Callable wrapper for DeleteLedger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLedgerOutcomeCallable DeleteLedgerCallable(const Model::DeleteLedgerRequest& request) const;

        /**
         * An Async wrapper for DeleteLedger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLedgerAsync(const Model::DeleteLedgerRequest& request, const DeleteLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about a given Amazon QLDB journal stream. The
         * output includes the Amazon Resource Name (ARN), stream name, current status,
         * creation time, and the parameters of the original stream creation request.</p>
         * <p>This action does not return any expired journal streams. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/streams.create.html#streams.create.states.expiration">Expiration
         * for terminal streams</a> in the <i>Amazon QLDB Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeJournalKinesisStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJournalKinesisStreamOutcome DescribeJournalKinesisStream(const Model::DescribeJournalKinesisStreamRequest& request) const;

        /**
         * A Callable wrapper for DescribeJournalKinesisStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJournalKinesisStreamOutcomeCallable DescribeJournalKinesisStreamCallable(const Model::DescribeJournalKinesisStreamRequest& request) const;

        /**
         * An Async wrapper for DescribeJournalKinesisStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJournalKinesisStreamAsync(const Model::DescribeJournalKinesisStreamRequest& request, const DescribeJournalKinesisStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a journal export job, including the ledger name,
         * export ID, creation time, current status, and the parameters of the original
         * export creation request.</p> <p>This action does not return any expired export
         * jobs. For more information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/export-journal.request.html#export-journal.request.expiration">Export
         * job expiration</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>If the
         * export job with the given <code>ExportId</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the ledger with the given
         * <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeJournalS3Export">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJournalS3ExportOutcome DescribeJournalS3Export(const Model::DescribeJournalS3ExportRequest& request) const;

        /**
         * A Callable wrapper for DescribeJournalS3Export that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJournalS3ExportOutcomeCallable DescribeJournalS3ExportCallable(const Model::DescribeJournalS3ExportRequest& request) const;

        /**
         * An Async wrapper for DescribeJournalS3Export that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJournalS3ExportAsync(const Model::DescribeJournalS3ExportRequest& request, const DescribeJournalS3ExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a ledger, including its state, permissions mode,
         * encryption at rest settings, and when it was created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLedgerOutcome DescribeLedger(const Model::DescribeLedgerRequest& request) const;

        /**
         * A Callable wrapper for DescribeLedger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLedgerOutcomeCallable DescribeLedgerCallable(const Model::DescribeLedgerRequest& request) const;

        /**
         * An Async wrapper for DescribeLedger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLedgerAsync(const Model::DescribeLedgerRequest& request, const DescribeLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports journal contents within a date and time range from a ledger into a
         * specified Amazon Simple Storage Service (Amazon S3) bucket. A journal export job
         * can write the data objects in either the text or binary representation of Amazon
         * Ion format, or in <i>JSON Lines</i> text format.</p> <p>In JSON Lines format,
         * each journal block in the exported data object is a valid JSON object that is
         * delimited by a newline. You can use this format to easily integrate JSON exports
         * with analytics tools such as Glue and Amazon Athena because these services can
         * parse newline-delimited JSON automatically. For more information about the
         * format, see <a href="https://jsonlines.org/">JSON Lines</a>.</p> <p>If the
         * ledger with the given <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the ledger with the given
         * <code>Name</code> is in <code>CREATING</code> status, then throws
         * <code>ResourcePreconditionNotMetException</code>.</p> <p>You can initiate up to
         * two concurrent journal export requests for each ledger. Beyond this limit,
         * journal export requests throw <code>LimitExceededException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ExportJournalToS3">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportJournalToS3Outcome ExportJournalToS3(const Model::ExportJournalToS3Request& request) const;

        /**
         * A Callable wrapper for ExportJournalToS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportJournalToS3OutcomeCallable ExportJournalToS3Callable(const Model::ExportJournalToS3Request& request) const;

        /**
         * An Async wrapper for ExportJournalToS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportJournalToS3Async(const Model::ExportJournalToS3Request& request, const ExportJournalToS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a block object at a specified address in a journal. Also returns a
         * proof of the specified block for verification if <code>DigestTipAddress</code>
         * is provided.</p> <p>For information about the data contents in a block, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/journal-contents.html">Journal
         * contents</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>If the specified
         * ledger doesn't exist or is in <code>DELETING</code> status, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the specified ledger is in
         * <code>CREATING</code> status, then throws
         * <code>ResourcePreconditionNotMetException</code>.</p> <p>If no block exists with
         * the specified address, then throws
         * <code>InvalidParameterException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetBlock">AWS API
         * Reference</a></p>
         */
        virtual Model::GetBlockOutcome GetBlock(const Model::GetBlockRequest& request) const;

        /**
         * A Callable wrapper for GetBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlockOutcomeCallable GetBlockCallable(const Model::GetBlockRequest& request) const;

        /**
         * An Async wrapper for GetBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlockAsync(const Model::GetBlockRequest& request, const GetBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the digest of a ledger at the latest committed block in the journal.
         * The response includes a 256-bit hash value and a block address.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetDigest">AWS API
         * Reference</a></p>
         */
        virtual Model::GetDigestOutcome GetDigest(const Model::GetDigestRequest& request) const;

        /**
         * A Callable wrapper for GetDigest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDigestOutcomeCallable GetDigestCallable(const Model::GetDigestRequest& request) const;

        /**
         * An Async wrapper for GetDigest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDigestAsync(const Model::GetDigestRequest& request, const GetDigestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a revision data object for a specified document ID and block address.
         * Also returns a proof of the specified revision for verification if
         * <code>DigestTipAddress</code> is provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevisionOutcome GetRevision(const Model::GetRevisionRequest& request) const;

        /**
         * A Callable wrapper for GetRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRevisionOutcomeCallable GetRevisionCallable(const Model::GetRevisionRequest& request) const;

        /**
         * An Async wrapper for GetRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRevisionAsync(const Model::GetRevisionRequest& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of all Amazon QLDB journal stream descriptors for a given
         * ledger. The output of each stream descriptor includes the same details that are
         * returned by <code>DescribeJournalKinesisStream</code>.</p> <p>This action does
         * not return any expired journal streams. For more information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/streams.create.html#streams.create.states.expiration">Expiration
         * for terminal streams</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>This
         * action returns a maximum of <code>MaxResults</code> items. It is paginated so
         * that you can retrieve all the items by calling
         * <code>ListJournalKinesisStreamsForLedger</code> multiple times.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalKinesisStreamsForLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJournalKinesisStreamsForLedgerOutcome ListJournalKinesisStreamsForLedger(const Model::ListJournalKinesisStreamsForLedgerRequest& request) const;

        /**
         * A Callable wrapper for ListJournalKinesisStreamsForLedger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJournalKinesisStreamsForLedgerOutcomeCallable ListJournalKinesisStreamsForLedgerCallable(const Model::ListJournalKinesisStreamsForLedgerRequest& request) const;

        /**
         * An Async wrapper for ListJournalKinesisStreamsForLedger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJournalKinesisStreamsForLedgerAsync(const Model::ListJournalKinesisStreamsForLedgerRequest& request, const ListJournalKinesisStreamsForLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of journal export job descriptions for all ledgers that are
         * associated with the current Amazon Web Services account and Region.</p> <p>This
         * action returns a maximum of <code>MaxResults</code> items, and is paginated so
         * that you can retrieve all the items by calling <code>ListJournalS3Exports</code>
         * multiple times.</p> <p>This action does not return any expired export jobs. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/export-journal.request.html#export-journal.request.expiration">Export
         * job expiration</a> in the <i>Amazon QLDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3Exports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJournalS3ExportsOutcome ListJournalS3Exports(const Model::ListJournalS3ExportsRequest& request) const;

        /**
         * A Callable wrapper for ListJournalS3Exports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJournalS3ExportsOutcomeCallable ListJournalS3ExportsCallable(const Model::ListJournalS3ExportsRequest& request) const;

        /**
         * An Async wrapper for ListJournalS3Exports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJournalS3ExportsAsync(const Model::ListJournalS3ExportsRequest& request, const ListJournalS3ExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of journal export job descriptions for a specified
         * ledger.</p> <p>This action returns a maximum of <code>MaxResults</code> items,
         * and is paginated so that you can retrieve all the items by calling
         * <code>ListJournalS3ExportsForLedger</code> multiple times.</p> <p>This action
         * does not return any expired export jobs. For more information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/export-journal.request.html#export-journal.request.expiration">Export
         * job expiration</a> in the <i>Amazon QLDB Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3ExportsForLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJournalS3ExportsForLedgerOutcome ListJournalS3ExportsForLedger(const Model::ListJournalS3ExportsForLedgerRequest& request) const;

        /**
         * A Callable wrapper for ListJournalS3ExportsForLedger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJournalS3ExportsForLedgerOutcomeCallable ListJournalS3ExportsForLedgerCallable(const Model::ListJournalS3ExportsForLedgerRequest& request) const;

        /**
         * An Async wrapper for ListJournalS3ExportsForLedger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJournalS3ExportsForLedgerAsync(const Model::ListJournalS3ExportsForLedgerRequest& request, const ListJournalS3ExportsForLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of ledger summaries that are associated with the current
         * Amazon Web Services account and Region.</p> <p>This action returns a maximum of
         * 100 items and is paginated so that you can retrieve all the items by calling
         * <code>ListLedgers</code> multiple times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListLedgers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLedgersOutcome ListLedgers(const Model::ListLedgersRequest& request) const;

        /**
         * A Callable wrapper for ListLedgers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLedgersOutcomeCallable ListLedgersCallable(const Model::ListLedgersRequest& request) const;

        /**
         * An Async wrapper for ListLedgers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLedgersAsync(const Model::ListLedgersRequest& request, const ListLedgersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tags for a specified Amazon QLDB resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a journal stream for a given Amazon QLDB ledger. The stream captures
         * every document revision that is committed to the ledger's journal and delivers
         * the data to a specified Amazon Kinesis Data Streams resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/StreamJournalToKinesis">AWS
         * API Reference</a></p>
         */
        virtual Model::StreamJournalToKinesisOutcome StreamJournalToKinesis(const Model::StreamJournalToKinesisRequest& request) const;

        /**
         * A Callable wrapper for StreamJournalToKinesis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StreamJournalToKinesisOutcomeCallable StreamJournalToKinesisCallable(const Model::StreamJournalToKinesisRequest& request) const;

        /**
         * An Async wrapper for StreamJournalToKinesis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StreamJournalToKinesisAsync(const Model::StreamJournalToKinesisRequest& request, const StreamJournalToKinesisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a specified Amazon QLDB resource.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a specified Amazon QLDB resource. You can
         * specify up to 50 tag keys to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties on a ledger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UpdateLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLedgerOutcome UpdateLedger(const Model::UpdateLedgerRequest& request) const;

        /**
         * A Callable wrapper for UpdateLedger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLedgerOutcomeCallable UpdateLedgerCallable(const Model::UpdateLedgerRequest& request) const;

        /**
         * An Async wrapper for UpdateLedger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLedgerAsync(const Model::UpdateLedgerRequest& request, const UpdateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the permissions mode of a ledger.</p>  <p>Before you
         * switch to the <code>STANDARD</code> permissions mode, you must first create all
         * required IAM policies and table tags to avoid disruption to your users. To learn
         * more, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/ledger-management.basics.html#ledger-mgmt.basics.update-permissions.migrating">Migrating
         * to the standard permissions mode</a> in the <i>Amazon QLDB Developer
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UpdateLedgerPermissionsMode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLedgerPermissionsModeOutcome UpdateLedgerPermissionsMode(const Model::UpdateLedgerPermissionsModeRequest& request) const;

        /**
         * A Callable wrapper for UpdateLedgerPermissionsMode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLedgerPermissionsModeOutcomeCallable UpdateLedgerPermissionsModeCallable(const Model::UpdateLedgerPermissionsModeRequest& request) const;

        /**
         * An Async wrapper for UpdateLedgerPermissionsMode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLedgerPermissionsModeAsync(const Model::UpdateLedgerPermissionsModeRequest& request, const UpdateLedgerPermissionsModeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QLDBEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QLDBClient>;
      void init(const QLDBClientConfiguration& clientConfiguration);

      QLDBClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<QLDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace QLDB
} // namespace Aws
