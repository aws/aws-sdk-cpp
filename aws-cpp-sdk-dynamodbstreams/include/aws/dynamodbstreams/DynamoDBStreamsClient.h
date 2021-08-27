/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodbstreams/model/DescribeStreamResult.h>
#include <aws/dynamodbstreams/model/GetRecordsResult.h>
#include <aws/dynamodbstreams/model/GetShardIteratorResult.h>
#include <aws/dynamodbstreams/model/ListStreamsResult.h>
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

namespace DynamoDBStreams
{

namespace Model
{
        class DescribeStreamRequest;
        class GetRecordsRequest;
        class GetShardIteratorRequest;
        class ListStreamsRequest;

        typedef Aws::Utils::Outcome<DescribeStreamResult, DynamoDBStreamsError> DescribeStreamOutcome;
        typedef Aws::Utils::Outcome<GetRecordsResult, DynamoDBStreamsError> GetRecordsOutcome;
        typedef Aws::Utils::Outcome<GetShardIteratorResult, DynamoDBStreamsError> GetShardIteratorOutcome;
        typedef Aws::Utils::Outcome<ListStreamsResult, DynamoDBStreamsError> ListStreamsOutcome;

        typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
        typedef std::future<GetRecordsOutcome> GetRecordsOutcomeCallable;
        typedef std::future<GetShardIteratorOutcome> GetShardIteratorOutcomeCallable;
        typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
} // namespace Model

  class DynamoDBStreamsClient;

    typedef std::function<void(const DynamoDBStreamsClient*, const Model::DescribeStreamRequest&, const Model::DescribeStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamResponseReceivedHandler;
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::GetRecordsRequest&, const Model::GetRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::GetShardIteratorRequest&, const Model::GetShardIteratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetShardIteratorResponseReceivedHandler;
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;

  /**
   * <fullname>Amazon DynamoDB</fullname> <p>Amazon DynamoDB Streams provides API
   * actions for accessing streams and processing stream records. To learn more about
   * application development with Streams, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing
   * Table Activity with DynamoDB Streams</a> in the Amazon DynamoDB Developer
   * Guide.</p>
   */
  class AWS_DYNAMODBSTREAMS_API DynamoDBStreamsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBStreamsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBStreamsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DynamoDBStreamsClient();


        /**
         * <p>Returns information about a stream, including the current status of the
         * stream, its Amazon Resource Name (ARN), the composition of its shards, and its
         * corresponding DynamoDB table.</p>  <p>You can call
         * <code>DescribeStream</code> at a maximum rate of 10 times per second.</p>
         *  <p>Each shard in the stream has a <code>SequenceNumberRange</code>
         * associated with it. If the <code>SequenceNumberRange</code> has a
         * <code>StartingSequenceNumber</code> but no <code>EndingSequenceNumber</code>,
         * then the shard is still open (able to receive more stream records). If both
         * <code>StartingSequenceNumber</code> and <code>EndingSequenceNumber</code> are
         * present, then that shard is closed and can no longer receive more
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/DescribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest& request) const;

        /**
         * <p>Returns information about a stream, including the current status of the
         * stream, its Amazon Resource Name (ARN), the composition of its shards, and its
         * corresponding DynamoDB table.</p>  <p>You can call
         * <code>DescribeStream</code> at a maximum rate of 10 times per second.</p>
         *  <p>Each shard in the stream has a <code>SequenceNumberRange</code>
         * associated with it. If the <code>SequenceNumberRange</code> has a
         * <code>StartingSequenceNumber</code> but no <code>EndingSequenceNumber</code>,
         * then the shard is still open (able to receive more stream records). If both
         * <code>StartingSequenceNumber</code> and <code>EndingSequenceNumber</code> are
         * present, then that shard is closed and can no longer receive more
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/DescribeStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request) const;

        /**
         * <p>Returns information about a stream, including the current status of the
         * stream, its Amazon Resource Name (ARN), the composition of its shards, and its
         * corresponding DynamoDB table.</p>  <p>You can call
         * <code>DescribeStream</code> at a maximum rate of 10 times per second.</p>
         *  <p>Each shard in the stream has a <code>SequenceNumberRange</code>
         * associated with it. If the <code>SequenceNumberRange</code> has a
         * <code>StartingSequenceNumber</code> but no <code>EndingSequenceNumber</code>,
         * then the shard is still open (able to receive more stream records). If both
         * <code>StartingSequenceNumber</code> and <code>EndingSequenceNumber</code> are
         * present, then that shard is closed and can no longer receive more
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/DescribeStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the stream records from a given shard.</p> <p>Specify a shard
         * iterator using the <code>ShardIterator</code> parameter. The shard iterator
         * specifies the position in the shard from which you want to start reading stream
         * records sequentially. If there are no stream records available in the portion of
         * the shard that the iterator points to, <code>GetRecords</code> returns an empty
         * list. Note that it might take multiple calls to get to a portion of the shard
         * that contains stream records.</p>  <p> <code>GetRecords</code> can
         * retrieve a maximum of 1 MB of data or 1000 stream records, whichever comes
         * first.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordsOutcome GetRecords(const Model::GetRecordsRequest& request) const;

        /**
         * <p>Retrieves the stream records from a given shard.</p> <p>Specify a shard
         * iterator using the <code>ShardIterator</code> parameter. The shard iterator
         * specifies the position in the shard from which you want to start reading stream
         * records sequentially. If there are no stream records available in the portion of
         * the shard that the iterator points to, <code>GetRecords</code> returns an empty
         * list. Note that it might take multiple calls to get to a portion of the shard
         * that contains stream records.</p>  <p> <code>GetRecords</code> can
         * retrieve a maximum of 1 MB of data or 1000 stream records, whichever comes
         * first.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecordsOutcomeCallable GetRecordsCallable(const Model::GetRecordsRequest& request) const;

        /**
         * <p>Retrieves the stream records from a given shard.</p> <p>Specify a shard
         * iterator using the <code>ShardIterator</code> parameter. The shard iterator
         * specifies the position in the shard from which you want to start reading stream
         * records sequentially. If there are no stream records available in the portion of
         * the shard that the iterator points to, <code>GetRecords</code> returns an empty
         * list. Note that it might take multiple calls to get to a portion of the shard
         * that contains stream records.</p>  <p> <code>GetRecords</code> can
         * retrieve a maximum of 1 MB of data or 1000 stream records, whichever comes
         * first.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecordsAsync(const Model::GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a shard iterator. A shard iterator provides information about how to
         * retrieve the stream records from within a shard. Use the shard iterator in a
         * subsequent <code>GetRecords</code> request to read the stream records from the
         * shard.</p>  <p>A shard iterator expires 15 minutes after it is returned to
         * the requester.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetShardIterator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetShardIteratorOutcome GetShardIterator(const Model::GetShardIteratorRequest& request) const;

        /**
         * <p>Returns a shard iterator. A shard iterator provides information about how to
         * retrieve the stream records from within a shard. Use the shard iterator in a
         * subsequent <code>GetRecords</code> request to read the stream records from the
         * shard.</p>  <p>A shard iterator expires 15 minutes after it is returned to
         * the requester.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetShardIterator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetShardIteratorOutcomeCallable GetShardIteratorCallable(const Model::GetShardIteratorRequest& request) const;

        /**
         * <p>Returns a shard iterator. A shard iterator provides information about how to
         * retrieve the stream records from within a shard. Use the shard iterator in a
         * subsequent <code>GetRecords</code> request to read the stream records from the
         * shard.</p>  <p>A shard iterator expires 15 minutes after it is returned to
         * the requester.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetShardIterator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetShardIteratorAsync(const Model::GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of stream ARNs associated with the current account and
         * endpoint. If the <code>TableName</code> parameter is present, then
         * <code>ListStreams</code> will return only the streams ARNs for that table.</p>
         *  <p>You can call <code>ListStreams</code> at a maximum rate of 5 times per
         * second.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Returns an array of stream ARNs associated with the current account and
         * endpoint. If the <code>TableName</code> parameter is present, then
         * <code>ListStreams</code> will return only the streams ARNs for that table.</p>
         *  <p>You can call <code>ListStreams</code> at a maximum rate of 5 times per
         * second.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/ListStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Returns an array of stream ARNs associated with the current account and
         * endpoint. If the <code>TableName</code> parameter is present, then
         * <code>ListStreams</code> will return only the streams ARNs for that table.</p>
         *  <p>You can call <code>ListStreams</code> at a maximum rate of 5 times per
         * second.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/ListStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeStreamAsyncHelper(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecordsAsyncHelper(const Model::GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetShardIteratorAsyncHelper(const Model::GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamsAsyncHelper(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DynamoDBStreams
} // namespace Aws
