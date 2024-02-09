/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodbstreams/DynamoDBStreamsServiceClientModel.h>

namespace Aws
{
namespace DynamoDBStreams
{
  /**
   * <fullname>Amazon DynamoDB</fullname> <p>Amazon DynamoDB Streams provides API
   * actions for accessing streams and processing stream records. To learn more about
   * application development with Streams, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing
   * Table Activity with DynamoDB Streams</a> in the Amazon DynamoDB Developer
   * Guide.</p>
   */
  class AWS_DYNAMODBSTREAMS_API DynamoDBStreamsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DynamoDBStreamsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DynamoDBStreamsClientConfiguration ClientConfigurationType;
      typedef DynamoDBStreamsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBStreamsClient(const Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration& clientConfiguration = Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration(),
                              std::shared_ptr<DynamoDBStreamsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBStreamsClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<DynamoDBStreamsEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration& clientConfiguration = Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<DynamoDBStreamsEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration& clientConfiguration = Aws::DynamoDBStreams::DynamoDBStreamsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBStreamsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBStreamsClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for DescribeStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStreamRequestT = Model::DescribeStreamRequest>
        Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const DescribeStreamRequestT& request) const
        {
            return SubmitCallable(&DynamoDBStreamsClient::DescribeStream, request);
        }

        /**
         * An Async wrapper for DescribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStreamRequestT = Model::DescribeStreamRequest>
        void DescribeStreamAsync(const DescribeStreamRequestT& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBStreamsClient::DescribeStream, request, handler, context);
        }

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
         * A Callable wrapper for GetRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecordsRequestT = Model::GetRecordsRequest>
        Model::GetRecordsOutcomeCallable GetRecordsCallable(const GetRecordsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBStreamsClient::GetRecords, request);
        }

        /**
         * An Async wrapper for GetRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecordsRequestT = Model::GetRecordsRequest>
        void GetRecordsAsync(const GetRecordsRequestT& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBStreamsClient::GetRecords, request, handler, context);
        }

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
         * A Callable wrapper for GetShardIterator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetShardIteratorRequestT = Model::GetShardIteratorRequest>
        Model::GetShardIteratorOutcomeCallable GetShardIteratorCallable(const GetShardIteratorRequestT& request) const
        {
            return SubmitCallable(&DynamoDBStreamsClient::GetShardIterator, request);
        }

        /**
         * An Async wrapper for GetShardIterator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetShardIteratorRequestT = Model::GetShardIteratorRequest>
        void GetShardIteratorAsync(const GetShardIteratorRequestT& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBStreamsClient::GetShardIterator, request, handler, context);
        }

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
         * A Callable wrapper for ListStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        Model::ListStreamsOutcomeCallable ListStreamsCallable(const ListStreamsRequestT& request) const
        {
            return SubmitCallable(&DynamoDBStreamsClient::ListStreams, request);
        }

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        void ListStreamsAsync(const ListStreamsRequestT& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBStreamsClient::ListStreams, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DynamoDBStreamsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DynamoDBStreamsClient>;
      void init(const DynamoDBStreamsClientConfiguration& clientConfiguration);

      DynamoDBStreamsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DynamoDBStreamsEndpointProviderBase> m_endpointProvider;
  };

} // namespace DynamoDBStreams
} // namespace Aws
