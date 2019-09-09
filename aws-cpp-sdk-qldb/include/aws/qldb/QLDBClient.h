/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qldb/model/CreateLedgerResult.h>
#include <aws/qldb/model/DescribeJournalS3ExportResult.h>
#include <aws/qldb/model/DescribeLedgerResult.h>
#include <aws/qldb/model/ExportJournalToS3Result.h>
#include <aws/qldb/model/GetBlockResult.h>
#include <aws/qldb/model/GetDigestResult.h>
#include <aws/qldb/model/GetRevisionResult.h>
#include <aws/qldb/model/ListJournalS3ExportsResult.h>
#include <aws/qldb/model/ListJournalS3ExportsForLedgerResult.h>
#include <aws/qldb/model/ListLedgersResult.h>
#include <aws/qldb/model/ListTagsForResourceResult.h>
#include <aws/qldb/model/TagResourceResult.h>
#include <aws/qldb/model/UntagResourceResult.h>
#include <aws/qldb/model/UpdateLedgerResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
        class CreateLedgerRequest;
        class DeleteLedgerRequest;
        class DescribeJournalS3ExportRequest;
        class DescribeLedgerRequest;
        class ExportJournalToS3Request;
        class GetBlockRequest;
        class GetDigestRequest;
        class GetRevisionRequest;
        class ListJournalS3ExportsRequest;
        class ListJournalS3ExportsForLedgerRequest;
        class ListLedgersRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateLedgerRequest;

        typedef Aws::Utils::Outcome<CreateLedgerResult, Aws::Client::AWSError<QLDBErrors>> CreateLedgerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<QLDBErrors>> DeleteLedgerOutcome;
        typedef Aws::Utils::Outcome<DescribeJournalS3ExportResult, Aws::Client::AWSError<QLDBErrors>> DescribeJournalS3ExportOutcome;
        typedef Aws::Utils::Outcome<DescribeLedgerResult, Aws::Client::AWSError<QLDBErrors>> DescribeLedgerOutcome;
        typedef Aws::Utils::Outcome<ExportJournalToS3Result, Aws::Client::AWSError<QLDBErrors>> ExportJournalToS3Outcome;
        typedef Aws::Utils::Outcome<GetBlockResult, Aws::Client::AWSError<QLDBErrors>> GetBlockOutcome;
        typedef Aws::Utils::Outcome<GetDigestResult, Aws::Client::AWSError<QLDBErrors>> GetDigestOutcome;
        typedef Aws::Utils::Outcome<GetRevisionResult, Aws::Client::AWSError<QLDBErrors>> GetRevisionOutcome;
        typedef Aws::Utils::Outcome<ListJournalS3ExportsResult, Aws::Client::AWSError<QLDBErrors>> ListJournalS3ExportsOutcome;
        typedef Aws::Utils::Outcome<ListJournalS3ExportsForLedgerResult, Aws::Client::AWSError<QLDBErrors>> ListJournalS3ExportsForLedgerOutcome;
        typedef Aws::Utils::Outcome<ListLedgersResult, Aws::Client::AWSError<QLDBErrors>> ListLedgersOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<QLDBErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<QLDBErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<QLDBErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateLedgerResult, Aws::Client::AWSError<QLDBErrors>> UpdateLedgerOutcome;

        typedef std::future<CreateLedgerOutcome> CreateLedgerOutcomeCallable;
        typedef std::future<DeleteLedgerOutcome> DeleteLedgerOutcomeCallable;
        typedef std::future<DescribeJournalS3ExportOutcome> DescribeJournalS3ExportOutcomeCallable;
        typedef std::future<DescribeLedgerOutcome> DescribeLedgerOutcomeCallable;
        typedef std::future<ExportJournalToS3Outcome> ExportJournalToS3OutcomeCallable;
        typedef std::future<GetBlockOutcome> GetBlockOutcomeCallable;
        typedef std::future<GetDigestOutcome> GetDigestOutcomeCallable;
        typedef std::future<GetRevisionOutcome> GetRevisionOutcomeCallable;
        typedef std::future<ListJournalS3ExportsOutcome> ListJournalS3ExportsOutcomeCallable;
        typedef std::future<ListJournalS3ExportsForLedgerOutcome> ListJournalS3ExportsForLedgerOutcomeCallable;
        typedef std::future<ListLedgersOutcome> ListLedgersOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateLedgerOutcome> UpdateLedgerOutcomeCallable;
} // namespace Model

  class QLDBClient;

    typedef std::function<void(const QLDBClient*, const Model::CreateLedgerRequest&, const Model::CreateLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DeleteLedgerRequest&, const Model::DeleteLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DescribeJournalS3ExportRequest&, const Model::DescribeJournalS3ExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJournalS3ExportResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::DescribeLedgerRequest&, const Model::DescribeLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ExportJournalToS3Request&, const Model::ExportJournalToS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportJournalToS3ResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::GetBlockRequest&, const Model::GetBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlockResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::GetDigestRequest&, const Model::GetDigestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDigestResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::GetRevisionRequest&, const Model::GetRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRevisionResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListJournalS3ExportsRequest&, const Model::ListJournalS3ExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJournalS3ExportsResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListJournalS3ExportsForLedgerRequest&, const Model::ListJournalS3ExportsForLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJournalS3ExportsForLedgerResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListLedgersRequest&, const Model::ListLedgersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLedgersResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QLDBClient*, const Model::UpdateLedgerRequest&, const Model::UpdateLedgerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLedgerResponseReceivedHandler;

  /**
   * <p>The control plane for Amazon QLDB</p>
   */
  class AWS_QLDB_API QLDBClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QLDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~QLDBClient();

        inline virtual const char* GetServiceClientName() const override { return "QLDB"; }


        /**
         * <p>Creates a new ledger in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/CreateLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLedgerOutcome CreateLedger(const Model::CreateLedgerRequest& request) const;

        /**
         * <p>Creates a new ledger in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/CreateLedger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLedgerOutcomeCallable CreateLedgerCallable(const Model::CreateLedgerRequest& request) const;

        /**
         * <p>Creates a new ledger in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/CreateLedger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLedgerAsync(const Model::CreateLedgerRequest& request, const CreateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a ledger and all of its contents. This action is irreversible.</p>
         * <p>If deletion protection is enabled, you must first disable it before you can
         * delete the ledger using the QLDB API or the AWS Command Line Interface (AWS
         * CLI). You can disable it by calling the <code>UpdateLedger</code> operation to
         * set the flag to <code>false</code>. The QLDB console disables deletion
         * protection for you when you use it to delete a ledger.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DeleteLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLedgerOutcome DeleteLedger(const Model::DeleteLedgerRequest& request) const;

        /**
         * <p>Deletes a ledger and all of its contents. This action is irreversible.</p>
         * <p>If deletion protection is enabled, you must first disable it before you can
         * delete the ledger using the QLDB API or the AWS Command Line Interface (AWS
         * CLI). You can disable it by calling the <code>UpdateLedger</code> operation to
         * set the flag to <code>false</code>. The QLDB console disables deletion
         * protection for you when you use it to delete a ledger.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DeleteLedger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLedgerOutcomeCallable DeleteLedgerCallable(const Model::DeleteLedgerRequest& request) const;

        /**
         * <p>Deletes a ledger and all of its contents. This action is irreversible.</p>
         * <p>If deletion protection is enabled, you must first disable it before you can
         * delete the ledger using the QLDB API or the AWS Command Line Interface (AWS
         * CLI). You can disable it by calling the <code>UpdateLedger</code> operation to
         * set the flag to <code>false</code>. The QLDB console disables deletion
         * protection for you when you use it to delete a ledger.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DeleteLedger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLedgerAsync(const Model::DeleteLedgerRequest& request, const DeleteLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a journal export job, including the ledger name,
         * export ID, when it was created, current status, and its start and end time
         * export parameters.</p> <p>If the export job with the given <code>ExportId</code>
         * doesn't exist, then throws <code>ResourceNotFoundException</code>.</p> <p>If the
         * ledger with the given <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeJournalS3Export">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJournalS3ExportOutcome DescribeJournalS3Export(const Model::DescribeJournalS3ExportRequest& request) const;

        /**
         * <p>Returns information about a journal export job, including the ledger name,
         * export ID, when it was created, current status, and its start and end time
         * export parameters.</p> <p>If the export job with the given <code>ExportId</code>
         * doesn't exist, then throws <code>ResourceNotFoundException</code>.</p> <p>If the
         * ledger with the given <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeJournalS3Export">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJournalS3ExportOutcomeCallable DescribeJournalS3ExportCallable(const Model::DescribeJournalS3ExportRequest& request) const;

        /**
         * <p>Returns information about a journal export job, including the ledger name,
         * export ID, when it was created, current status, and its start and end time
         * export parameters.</p> <p>If the export job with the given <code>ExportId</code>
         * doesn't exist, then throws <code>ResourceNotFoundException</code>.</p> <p>If the
         * ledger with the given <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeJournalS3Export">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJournalS3ExportAsync(const Model::DescribeJournalS3ExportRequest& request, const DescribeJournalS3ExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a ledger, including its state and when it was
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLedgerOutcome DescribeLedger(const Model::DescribeLedgerRequest& request) const;

        /**
         * <p>Returns information about a ledger, including its state and when it was
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeLedger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLedgerOutcomeCallable DescribeLedgerCallable(const Model::DescribeLedgerRequest& request) const;

        /**
         * <p>Returns information about a ledger, including its state and when it was
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/DescribeLedger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLedgerAsync(const Model::DescribeLedgerRequest& request, const DescribeLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports journal contents within a date and time range from a ledger into a
         * specified Amazon Simple Storage Service (Amazon S3) bucket. The data is written
         * as files in Amazon Ion format.</p> <p>If the ledger with the given
         * <code>Name</code> doesn't exist, then throws
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
         * <p>Exports journal contents within a date and time range from a ledger into a
         * specified Amazon Simple Storage Service (Amazon S3) bucket. The data is written
         * as files in Amazon Ion format.</p> <p>If the ledger with the given
         * <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the ledger with the given
         * <code>Name</code> is in <code>CREATING</code> status, then throws
         * <code>ResourcePreconditionNotMetException</code>.</p> <p>You can initiate up to
         * two concurrent journal export requests for each ledger. Beyond this limit,
         * journal export requests throw <code>LimitExceededException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ExportJournalToS3">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportJournalToS3OutcomeCallable ExportJournalToS3Callable(const Model::ExportJournalToS3Request& request) const;

        /**
         * <p>Exports journal contents within a date and time range from a ledger into a
         * specified Amazon Simple Storage Service (Amazon S3) bucket. The data is written
         * as files in Amazon Ion format.</p> <p>If the ledger with the given
         * <code>Name</code> doesn't exist, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the ledger with the given
         * <code>Name</code> is in <code>CREATING</code> status, then throws
         * <code>ResourcePreconditionNotMetException</code>.</p> <p>You can initiate up to
         * two concurrent journal export requests for each ledger. Beyond this limit,
         * journal export requests throw <code>LimitExceededException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ExportJournalToS3">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportJournalToS3Async(const Model::ExportJournalToS3Request& request, const ExportJournalToS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a journal block object at a specified address in a ledger. Also
         * returns a proof of the specified block for verification if
         * <code>DigestTipAddress</code> is provided.</p> <p>If the specified ledger
         * doesn't exist or is in <code>DELETING</code> status, then throws
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
         * <p>Returns a journal block object at a specified address in a ledger. Also
         * returns a proof of the specified block for verification if
         * <code>DigestTipAddress</code> is provided.</p> <p>If the specified ledger
         * doesn't exist or is in <code>DELETING</code> status, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the specified ledger is in
         * <code>CREATING</code> status, then throws
         * <code>ResourcePreconditionNotMetException</code>.</p> <p>If no block exists with
         * the specified address, then throws
         * <code>InvalidParameterException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetBlock">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlockOutcomeCallable GetBlockCallable(const Model::GetBlockRequest& request) const;

        /**
         * <p>Returns a journal block object at a specified address in a ledger. Also
         * returns a proof of the specified block for verification if
         * <code>DigestTipAddress</code> is provided.</p> <p>If the specified ledger
         * doesn't exist or is in <code>DELETING</code> status, then throws
         * <code>ResourceNotFoundException</code>.</p> <p>If the specified ledger is in
         * <code>CREATING</code> status, then throws
         * <code>ResourcePreconditionNotMetException</code>.</p> <p>If no block exists with
         * the specified address, then throws
         * <code>InvalidParameterException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetBlock">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the digest of a ledger at the latest committed block in the journal.
         * The response includes a 256-bit hash value and a block address.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetDigest">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDigestOutcomeCallable GetDigestCallable(const Model::GetDigestRequest& request) const;

        /**
         * <p>Returns the digest of a ledger at the latest committed block in the journal.
         * The response includes a 256-bit hash value and a block address.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetDigest">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a revision data object for a specified document ID and block address.
         * Also returns a proof of the specified revision for verification if
         * <code>DigestTipAddress</code> is provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetRevision">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRevisionOutcomeCallable GetRevisionCallable(const Model::GetRevisionRequest& request) const;

        /**
         * <p>Returns a revision data object for a specified document ID and block address.
         * Also returns a proof of the specified revision for verification if
         * <code>DigestTipAddress</code> is provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/GetRevision">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRevisionAsync(const Model::GetRevisionRequest& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of journal export job descriptions for all ledgers that are
         * associated with the current AWS account and Region.</p> <p>This action returns a
         * maximum of <code>MaxResults</code> items, and is paginated so that you can
         * retrieve all the items by calling <code>ListJournalS3Exports</code> multiple
         * times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3Exports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJournalS3ExportsOutcome ListJournalS3Exports(const Model::ListJournalS3ExportsRequest& request) const;

        /**
         * <p>Returns an array of journal export job descriptions for all ledgers that are
         * associated with the current AWS account and Region.</p> <p>This action returns a
         * maximum of <code>MaxResults</code> items, and is paginated so that you can
         * retrieve all the items by calling <code>ListJournalS3Exports</code> multiple
         * times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3Exports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJournalS3ExportsOutcomeCallable ListJournalS3ExportsCallable(const Model::ListJournalS3ExportsRequest& request) const;

        /**
         * <p>Returns an array of journal export job descriptions for all ledgers that are
         * associated with the current AWS account and Region.</p> <p>This action returns a
         * maximum of <code>MaxResults</code> items, and is paginated so that you can
         * retrieve all the items by calling <code>ListJournalS3Exports</code> multiple
         * times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3Exports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJournalS3ExportsAsync(const Model::ListJournalS3ExportsRequest& request, const ListJournalS3ExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of journal export job descriptions for a specified
         * ledger.</p> <p>This action returns a maximum of <code>MaxResults</code> items,
         * and is paginated so that you can retrieve all the items by calling
         * <code>ListJournalS3ExportsForLedger</code> multiple times.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3ExportsForLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJournalS3ExportsForLedgerOutcome ListJournalS3ExportsForLedger(const Model::ListJournalS3ExportsForLedgerRequest& request) const;

        /**
         * <p>Returns an array of journal export job descriptions for a specified
         * ledger.</p> <p>This action returns a maximum of <code>MaxResults</code> items,
         * and is paginated so that you can retrieve all the items by calling
         * <code>ListJournalS3ExportsForLedger</code> multiple times.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3ExportsForLedger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJournalS3ExportsForLedgerOutcomeCallable ListJournalS3ExportsForLedgerCallable(const Model::ListJournalS3ExportsForLedgerRequest& request) const;

        /**
         * <p>Returns an array of journal export job descriptions for a specified
         * ledger.</p> <p>This action returns a maximum of <code>MaxResults</code> items,
         * and is paginated so that you can retrieve all the items by calling
         * <code>ListJournalS3ExportsForLedger</code> multiple times.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListJournalS3ExportsForLedger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJournalS3ExportsForLedgerAsync(const Model::ListJournalS3ExportsForLedgerRequest& request, const ListJournalS3ExportsForLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of ledger summaries that are associated with the current AWS
         * account and Region.</p> <p>This action returns a maximum of 100 items and is
         * paginated so that you can retrieve all the items by calling
         * <code>ListLedgers</code> multiple times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListLedgers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLedgersOutcome ListLedgers(const Model::ListLedgersRequest& request) const;

        /**
         * <p>Returns an array of ledger summaries that are associated with the current AWS
         * account and Region.</p> <p>This action returns a maximum of 100 items and is
         * paginated so that you can retrieve all the items by calling
         * <code>ListLedgers</code> multiple times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListLedgers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLedgersOutcomeCallable ListLedgersCallable(const Model::ListLedgersRequest& request) const;

        /**
         * <p>Returns an array of ledger summaries that are associated with the current AWS
         * account and Region.</p> <p>This action returns a maximum of 100 items and is
         * paginated so that you can retrieve all the items by calling
         * <code>ListLedgers</code> multiple times.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListLedgers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns all tags for a specified Amazon QLDB resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns all tags for a specified Amazon QLDB resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a specified Amazon QLDB resource.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a specified Amazon QLDB resource.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a specified Amazon QLDB resource.</p> <p>A resource
         * can have up to 50 tags. If you try to create more than 50 tags for a resource,
         * your request fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes one or more tags from a specified Amazon QLDB resource. You can
         * specify up to 50 tag keys to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a specified Amazon QLDB resource. You can
         * specify up to 50 tag keys to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties on a ledger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UpdateLedger">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLedgerOutcome UpdateLedger(const Model::UpdateLedgerRequest& request) const;

        /**
         * <p>Updates properties on a ledger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UpdateLedger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLedgerOutcomeCallable UpdateLedgerCallable(const Model::UpdateLedgerRequest& request) const;

        /**
         * <p>Updates properties on a ledger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/UpdateLedger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLedgerAsync(const Model::UpdateLedgerRequest& request, const UpdateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateLedgerAsyncHelper(const Model::CreateLedgerRequest& request, const CreateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLedgerAsyncHelper(const Model::DeleteLedgerRequest& request, const DeleteLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJournalS3ExportAsyncHelper(const Model::DescribeJournalS3ExportRequest& request, const DescribeJournalS3ExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLedgerAsyncHelper(const Model::DescribeLedgerRequest& request, const DescribeLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportJournalToS3AsyncHelper(const Model::ExportJournalToS3Request& request, const ExportJournalToS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlockAsyncHelper(const Model::GetBlockRequest& request, const GetBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDigestAsyncHelper(const Model::GetDigestRequest& request, const GetDigestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRevisionAsyncHelper(const Model::GetRevisionRequest& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJournalS3ExportsAsyncHelper(const Model::ListJournalS3ExportsRequest& request, const ListJournalS3ExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJournalS3ExportsForLedgerAsyncHelper(const Model::ListJournalS3ExportsForLedgerRequest& request, const ListJournalS3ExportsForLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLedgersAsyncHelper(const Model::ListLedgersRequest& request, const ListLedgersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLedgerAsyncHelper(const Model::UpdateLedgerRequest& request, const UpdateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace QLDB
} // namespace Aws
