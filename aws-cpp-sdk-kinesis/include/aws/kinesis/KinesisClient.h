﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/KinesisServiceClientModel.h>

namespace Aws
{
namespace Kinesis
{
  /**
   * <fullname>Amazon Kinesis Data Streams Service API Reference</fullname> <p>Amazon
   * Kinesis Data Streams is a managed service that scales elastically for real-time
   * processing of streaming big data.</p>
   */
  class AWS_KINESIS_API KinesisClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisClient(const Aws::Kinesis::KinesisClientConfiguration& clientConfiguration = Aws::Kinesis::KinesisClientConfiguration(),
                      std::shared_ptr<KinesisEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<KinesisEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Kinesis::KinesisClientConfiguration& clientConfiguration = Aws::Kinesis::KinesisClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<KinesisEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Kinesis::KinesisClientConfiguration& clientConfiguration = Aws::Kinesis::KinesisClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisClient();

        /**
         * <p>Adds or updates tags for the specified Kinesis data stream. You can assign up
         * to 50 tags to a data stream.</p>  <p>When invoking this API, it is
         * recommended you use the <code>StreamARN</code> input parameter rather than the
         * <code>StreamName</code> input parameter.</p>  <p>If tags have already
         * been assigned to the stream, <code>AddTagsToStream</code> overwrites any
         * existing tags that correspond to the specified tag keys.</p> <p>
         * <a>AddTagsToStream</a> has a limit of five transactions per second per
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/AddTagsToStream">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToStreamOutcome AddTagsToStream(const Model::AddTagsToStreamRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToStreamOutcomeCallable AddTagsToStreamCallable(const Model::AddTagsToStreamRequest& request) const;

        /**
         * An Async wrapper for AddTagsToStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToStreamAsync(const Model::AddTagsToStreamRequest& request, const AddTagsToStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Kinesis data stream. A stream captures and transports data records
         * that are continuously emitted from different data sources or <i>producers</i>.
         * Scale-out within a stream is explicitly supported by means of shards, which are
         * uniquely identified groups of data records in a stream.</p> <p>You can create
         * your data stream using either on-demand or provisioned capacity mode. Data
         * streams with an on-demand mode require no capacity planning and automatically
         * scale to handle gigabytes of write and read throughput per minute. With the
         * on-demand mode, Kinesis Data Streams automatically manages the shards in order
         * to provide the necessary throughput. For the data streams with a provisioned
         * mode, you must specify the number of shards for the data stream. Each shard can
         * support reads up to five transactions per second, up to a maximum data read
         * total of 2 MiB per second. Each shard can support writes up to 1,000 records per
         * second, up to a maximum data write total of 1 MiB per second. If the amount of
         * data input increases or decreases, you can add or remove shards.</p> <p>The
         * stream name identifies the stream. The name is scoped to the Amazon Web Services
         * account used by the application. It is also scoped by Amazon Web Services
         * Region. That is, two streams in two different accounts can have the same name,
         * and two streams in the same account, but in two different Regions, can have the
         * same name.</p> <p> <code>CreateStream</code> is an asynchronous operation. Upon
         * receiving a <code>CreateStream</code> request, Kinesis Data Streams immediately
         * returns and sets the stream status to <code>CREATING</code>. After the stream is
         * created, Kinesis Data Streams sets the stream status to <code>ACTIVE</code>. You
         * should perform read and write operations only on an <code>ACTIVE</code> stream.
         * </p> <p>You receive a <code>LimitExceededException</code> when making a
         * <code>CreateStream</code> request when you try to do one of the following:</p>
         * <ul> <li> <p>Have more than five streams in the <code>CREATING</code> state at
         * any point in time.</p> </li> <li> <p>Create more shards than are authorized for
         * your account.</p> </li> </ul> <p>For the default shard limit for an Amazon Web
         * Services account, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Amazon
         * Kinesis Data Streams Limits</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>. To increase this limit, <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">contact
         * Amazon Web Services Support</a>.</p> <p>You can use <a>DescribeStreamSummary</a>
         * to check the stream status, which is returned in <code>StreamStatus</code>.</p>
         * <p> <a>CreateStream</a> has a limit of five transactions per second per
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/CreateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamOutcome CreateStream(const Model::CreateStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamOutcomeCallable CreateStreamCallable(const Model::CreateStreamRequest& request) const;

        /**
         * An Async wrapper for CreateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamAsync(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Decreases the Kinesis data stream's retention period, which is the length of
         * time data records are accessible after they are added to the stream. The minimum
         * value of a stream's retention period is 24 hours.</p>  <p>When invoking
         * this API, it is recommended you use the <code>StreamARN</code> input parameter
         * rather than the <code>StreamName</code> input parameter.</p>  <p>This
         * operation may result in lost data. For example, if the stream's retention period
         * is 48 hours and is decreased to 24 hours, any data already in the stream that is
         * older than 24 hours is inaccessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DecreaseStreamRetentionPeriod">AWS
         * API Reference</a></p>
         */
        virtual Model::DecreaseStreamRetentionPeriodOutcome DecreaseStreamRetentionPeriod(const Model::DecreaseStreamRetentionPeriodRequest& request) const;

        /**
         * A Callable wrapper for DecreaseStreamRetentionPeriod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DecreaseStreamRetentionPeriodOutcomeCallable DecreaseStreamRetentionPeriodCallable(const Model::DecreaseStreamRetentionPeriodRequest& request) const;

        /**
         * An Async wrapper for DecreaseStreamRetentionPeriod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecreaseStreamRetentionPeriodAsync(const Model::DecreaseStreamRetentionPeriodRequest& request, const DecreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Kinesis data stream and all its shards and data. You must shut down
         * any applications that are operating on the stream before you delete the stream.
         * If an application attempts to operate on a deleted stream, it receives the
         * exception <code>ResourceNotFoundException</code>.</p>  <p>When invoking
         * this API, it is recommended you use the <code>StreamARN</code> input parameter
         * rather than the <code>StreamName</code> input parameter.</p>  <p>If the
         * stream is in the <code>ACTIVE</code> state, you can delete it. After a
         * <code>DeleteStream</code> request, the specified stream is in the
         * <code>DELETING</code> state until Kinesis Data Streams completes the
         * deletion.</p> <p> <b>Note:</b> Kinesis Data Streams might continue to accept
         * data read and write operations, such as <a>PutRecord</a>, <a>PutRecords</a>, and
         * <a>GetRecords</a>, on a stream in the <code>DELETING</code> state until the
         * stream deletion is complete.</p> <p>When you delete a stream, any shards in that
         * stream are also deleted, and any tags are dissociated from the stream.</p>
         * <p>You can use the <a>DescribeStreamSummary</a> operation to check the state of
         * the stream, which is returned in <code>StreamStatus</code>.</p> <p>
         * <a>DeleteStream</a> has a limit of five transactions per second per
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DeleteStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamOutcome DeleteStream(const Model::DeleteStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const Model::DeleteStreamRequest& request) const;

        /**
         * An Async wrapper for DeleteStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To deregister a consumer, provide its ARN. Alternatively, you can provide the
         * ARN of the data stream and the name you gave the consumer when you registered
         * it. You may also provide all three parameters, as long as they don't conflict
         * with each other. If you don't know the name or ARN of the consumer that you want
         * to deregister, you can use the <a>ListStreamConsumers</a> operation to get a
         * list of the descriptions of all the consumers that are currently registered with
         * a given data stream. The description of a consumer contains its name and
         * ARN.</p> <p>This operation has a limit of five transactions per second per
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DeregisterStreamConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterStreamConsumerOutcome DeregisterStreamConsumer(const Model::DeregisterStreamConsumerRequest& request) const;

        /**
         * A Callable wrapper for DeregisterStreamConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterStreamConsumerOutcomeCallable DeregisterStreamConsumerCallable(const Model::DeregisterStreamConsumerRequest& request) const;

        /**
         * An Async wrapper for DeregisterStreamConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterStreamConsumerAsync(const Model::DeregisterStreamConsumerRequest& request, const DeregisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the shard limits and usage for the account.</p> <p>If you update
         * your account limits, the old limits might be returned for a few minutes.</p>
         * <p>This operation has a limit of one transaction per second per
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DescribeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLimitsOutcome DescribeLimits(const Model::DescribeLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLimitsOutcomeCallable DescribeLimitsCallable(const Model::DescribeLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLimitsAsync(const Model::DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Kinesis data stream.</p>  <p>This API has been
         * revised. It's highly recommended that you use the <a>DescribeStreamSummary</a>
         * API to get a summarized description of the specified Kinesis data stream and the
         * <a>ListShards</a> API to list the shards in a specified data stream and obtain
         * information about each shard. </p>   <p>When invoking this API, it
         * is recommended you use the <code>StreamARN</code> input parameter rather than
         * the <code>StreamName</code> input parameter.</p>  <p>The information
         * returned includes the stream name, Amazon Resource Name (ARN), creation time,
         * enhanced metric configuration, and shard map. The shard map is an array of shard
         * objects. For each shard object, there is the hash key and sequence number ranges
         * that the shard spans, and the IDs of any earlier shards that played in a role in
         * creating the shard. Every record ingested in the stream is identified by a
         * sequence number, which is assigned when the record is put into the stream.</p>
         * <p>You can limit the number of shards returned by each call. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-retrieve-shards.html">Retrieving
         * Shards from a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>.</p> <p>There are no guarantees about the chronological order shards
         * returned. To process shards in chronological order, use the ID of the parent
         * shard to track the lineage to the oldest shard.</p> <p>This operation has a
         * limit of 10 transactions per second per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DescribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest& request) const;

        /**
         * A Callable wrapper for DescribeStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request) const;

        /**
         * An Async wrapper for DescribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To get the description of a registered consumer, provide the ARN of the
         * consumer. Alternatively, you can provide the ARN of the data stream and the name
         * you gave the consumer when you registered it. You may also provide all three
         * parameters, as long as they don't conflict with each other. If you don't know
         * the name or ARN of the consumer that you want to describe, you can use the
         * <a>ListStreamConsumers</a> operation to get a list of the descriptions of all
         * the consumers that are currently registered with a given data stream.</p>
         * <p>This operation has a limit of 20 transactions per second per
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DescribeStreamConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamConsumerOutcome DescribeStreamConsumer(const Model::DescribeStreamConsumerRequest& request) const;

        /**
         * A Callable wrapper for DescribeStreamConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamConsumerOutcomeCallable DescribeStreamConsumerCallable(const Model::DescribeStreamConsumerRequest& request) const;

        /**
         * An Async wrapper for DescribeStreamConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamConsumerAsync(const Model::DescribeStreamConsumerRequest& request, const DescribeStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a summarized description of the specified Kinesis data stream
         * without the shard list.</p>  <p>When invoking this API, it is recommended
         * you use the <code>StreamARN</code> input parameter rather than the
         * <code>StreamName</code> input parameter.</p>  <p>The information returned
         * includes the stream name, Amazon Resource Name (ARN), status, record retention
         * period, approximate creation time, monitoring, encryption details, and open
         * shard count. </p> <p> <a>DescribeStreamSummary</a> has a limit of 20
         * transactions per second per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DescribeStreamSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamSummaryOutcome DescribeStreamSummary(const Model::DescribeStreamSummaryRequest& request) const;

        /**
         * A Callable wrapper for DescribeStreamSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamSummaryOutcomeCallable DescribeStreamSummaryCallable(const Model::DescribeStreamSummaryRequest& request) const;

        /**
         * An Async wrapper for DescribeStreamSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamSummaryAsync(const Model::DescribeStreamSummaryRequest& request, const DescribeStreamSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables enhanced monitoring.</p>  <p>When invoking this API, it is
         * recommended you use the <code>StreamARN</code> input parameter rather than the
         * <code>StreamName</code> input parameter.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DisableEnhancedMonitoring">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableEnhancedMonitoringOutcome DisableEnhancedMonitoring(const Model::DisableEnhancedMonitoringRequest& request) const;

        /**
         * A Callable wrapper for DisableEnhancedMonitoring that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableEnhancedMonitoringOutcomeCallable DisableEnhancedMonitoringCallable(const Model::DisableEnhancedMonitoringRequest& request) const;

        /**
         * An Async wrapper for DisableEnhancedMonitoring that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableEnhancedMonitoringAsync(const Model::DisableEnhancedMonitoringRequest& request, const DisableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables enhanced Kinesis data stream monitoring for shard-level metrics.</p>
         *  <p>When invoking this API, it is recommended you use the
         * <code>StreamARN</code> input parameter rather than the <code>StreamName</code>
         * input parameter.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/EnableEnhancedMonitoring">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableEnhancedMonitoringOutcome EnableEnhancedMonitoring(const Model::EnableEnhancedMonitoringRequest& request) const;

        /**
         * A Callable wrapper for EnableEnhancedMonitoring that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableEnhancedMonitoringOutcomeCallable EnableEnhancedMonitoringCallable(const Model::EnableEnhancedMonitoringRequest& request) const;

        /**
         * An Async wrapper for EnableEnhancedMonitoring that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableEnhancedMonitoringAsync(const Model::EnableEnhancedMonitoringRequest& request, const EnableEnhancedMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets data records from a Kinesis data stream's shard.</p>  <p>When
         * invoking this API, it is recommended you use the <code>StreamARN</code> input
         * parameter in addition to the <code>ShardIterator</code> parameter.</p> 
         * <p>Specify a shard iterator using the <code>ShardIterator</code> parameter. The
         * shard iterator specifies the position in the shard from which you want to start
         * reading data records sequentially. If there are no records available in the
         * portion of the shard that the iterator points to, <a>GetRecords</a> returns an
         * empty list. It might take multiple calls to get to a portion of the shard that
         * contains records.</p> <p>You can scale by provisioning multiple shards per
         * stream while considering service limits (for more information, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Amazon
         * Kinesis Data Streams Limits</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>). Your application should have one thread per shard, each reading
         * continuously from its stream. To read from a stream continually, call
         * <a>GetRecords</a> in a loop. Use <a>GetShardIterator</a> to get the shard
         * iterator to specify in the first <a>GetRecords</a> call. <a>GetRecords</a>
         * returns a new shard iterator in <code>NextShardIterator</code>. Specify the
         * shard iterator returned in <code>NextShardIterator</code> in subsequent calls to
         * <a>GetRecords</a>. If the shard has been closed, the shard iterator can't return
         * more data and <a>GetRecords</a> returns <code>null</code> in
         * <code>NextShardIterator</code>. You can terminate the loop when the shard is
         * closed, or when the shard iterator reaches the record with the sequence number
         * or other attribute that marks it as the last record to process.</p> <p>Each data
         * record can be up to 1 MiB in size, and each shard can read up to 2 MiB per
         * second. You can ensure that your calls don't exceed the maximum supported size
         * or throughput by using the <code>Limit</code> parameter to specify the maximum
         * number of records that <a>GetRecords</a> can return. Consider your average
         * record size when determining this limit. The maximum number of records that can
         * be returned per call is 10,000.</p> <p>The size of the data returned by
         * <a>GetRecords</a> varies depending on the utilization of the shard. It is
         * recommended that consumer applications retrieve records via the
         * <code>GetRecords</code> command using the 5 TPS limit to remain caught up.
         * Retrieving records less frequently can lead to consumer applications falling
         * behind. The maximum size of data that <a>GetRecords</a> can return is 10 MiB. If
         * a call returns this amount of data, subsequent calls made within the next 5
         * seconds throw <code>ProvisionedThroughputExceededException</code>. If there is
         * insufficient provisioned throughput on the stream, subsequent calls made within
         * the next 1 second throw <code>ProvisionedThroughputExceededException</code>.
         * <a>GetRecords</a> doesn't return any data when it throws an exception. For this
         * reason, we recommend that you wait 1 second between calls to <a>GetRecords</a>.
         * However, it's possible that the application will get exceptions for longer than
         * 1 second.</p> <p>To detect whether the application is falling behind in
         * processing, you can use the <code>MillisBehindLatest</code> response attribute.
         * You can also monitor the stream using CloudWatch metrics and other mechanisms
         * (see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring.html">Monitoring</a>
         * in the <i>Amazon Kinesis Data Streams Developer Guide</i>).</p> <p>Each Amazon
         * Kinesis record includes a value, <code>ApproximateArrivalTimestamp</code>, that
         * is set when a stream successfully receives and stores a record. This is commonly
         * referred to as a server-side time stamp, whereas a client-side time stamp is set
         * when a data producer creates or sends the record to a stream (a data producer is
         * any data source putting data records into a stream, for example with
         * <a>PutRecords</a>). The time stamp has millisecond precision. There are no
         * guarantees about the time stamp accuracy, or that the time stamp is always
         * increasing. For example, records in a shard or across a stream might have time
         * stamps that are out of order.</p> <p>This operation has a limit of five
         * transactions per second per shard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/GetRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordsOutcome GetRecords(const Model::GetRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecordsOutcomeCallable GetRecordsCallable(const Model::GetRecordsRequest& request) const;

        /**
         * An Async wrapper for GetRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecordsAsync(const Model::GetRecordsRequest& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Amazon Kinesis shard iterator. A shard iterator expires 5 minutes
         * after it is returned to the requester.</p>  <p>When invoking this API, it
         * is recommended you use the <code>StreamARN</code> input parameter rather than
         * the <code>StreamName</code> input parameter.</p>  <p>A shard iterator
         * specifies the shard position from which to start reading data records
         * sequentially. The position is specified using the sequence number of a data
         * record in a shard. A sequence number is the identifier associated with every
         * record ingested in the stream, and is assigned when a record is put into the
         * stream. Each stream has one or more shards.</p> <p>You must specify the shard
         * iterator type. For example, you can set the <code>ShardIteratorType</code>
         * parameter to read exactly from the position denoted by a specific sequence
         * number by using the <code>AT_SEQUENCE_NUMBER</code> shard iterator type.
         * Alternatively, the parameter can read right after the sequence number by using
         * the <code>AFTER_SEQUENCE_NUMBER</code> shard iterator type, using sequence
         * numbers returned by earlier calls to <a>PutRecord</a>, <a>PutRecords</a>,
         * <a>GetRecords</a>, or <a>DescribeStream</a>. In the request, you can specify the
         * shard iterator type <code>AT_TIMESTAMP</code> to read records from an arbitrary
         * point in time, <code>TRIM_HORIZON</code> to cause <code>ShardIterator</code> to
         * point to the last untrimmed record in the shard in the system (the oldest data
         * record in the shard), or <code>LATEST</code> so that you always read the most
         * recent data in the shard. </p> <p>When you read repeatedly from a stream, use a
         * <a>GetShardIterator</a> request to get the first shard iterator for use in your
         * first <a>GetRecords</a> request and for subsequent reads use the shard iterator
         * returned by the <a>GetRecords</a> request in <code>NextShardIterator</code>. A
         * new shard iterator is returned by every <a>GetRecords</a> request in
         * <code>NextShardIterator</code>, which you use in the <code>ShardIterator</code>
         * parameter of the next <a>GetRecords</a> request. </p> <p>If a
         * <a>GetShardIterator</a> request is made too often, you receive a
         * <code>ProvisionedThroughputExceededException</code>. For more information about
         * throughput limits, see <a>GetRecords</a>, and <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Streams
         * Limits</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p> <p>If
         * the shard is closed, <a>GetShardIterator</a> returns a valid iterator for the
         * last sequence number of the shard. A shard can be closed as a result of using
         * <a>SplitShard</a> or <a>MergeShards</a>.</p> <p> <a>GetShardIterator</a> has a
         * limit of five transactions per second per account per open shard.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/GetShardIterator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetShardIteratorOutcome GetShardIterator(const Model::GetShardIteratorRequest& request) const;

        /**
         * A Callable wrapper for GetShardIterator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetShardIteratorOutcomeCallable GetShardIteratorCallable(const Model::GetShardIteratorRequest& request) const;

        /**
         * An Async wrapper for GetShardIterator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetShardIteratorAsync(const Model::GetShardIteratorRequest& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Increases the Kinesis data stream's retention period, which is the length of
         * time data records are accessible after they are added to the stream. The maximum
         * value of a stream's retention period is 8760 hours (365 days).</p> 
         * <p>When invoking this API, it is recommended you use the <code>StreamARN</code>
         * input parameter rather than the <code>StreamName</code> input parameter.</p>
         *  <p>If you choose a longer stream retention period, this operation
         * increases the time period during which records that have not yet expired are
         * accessible. However, it does not make previous, expired data (older than the
         * stream's previous retention period) accessible after the operation has been
         * called. For example, if a stream's retention period is set to 24 hours and is
         * increased to 168 hours, any data that is older than 24 hours remains
         * inaccessible to consumer applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/IncreaseStreamRetentionPeriod">AWS
         * API Reference</a></p>
         */
        virtual Model::IncreaseStreamRetentionPeriodOutcome IncreaseStreamRetentionPeriod(const Model::IncreaseStreamRetentionPeriodRequest& request) const;

        /**
         * A Callable wrapper for IncreaseStreamRetentionPeriod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IncreaseStreamRetentionPeriodOutcomeCallable IncreaseStreamRetentionPeriodCallable(const Model::IncreaseStreamRetentionPeriodRequest& request) const;

        /**
         * An Async wrapper for IncreaseStreamRetentionPeriod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IncreaseStreamRetentionPeriodAsync(const Model::IncreaseStreamRetentionPeriodRequest& request, const IncreaseStreamRetentionPeriodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the shards in a stream and provides information about each shard. This
         * operation has a limit of 1000 transactions per second per data stream.</p>
         *  <p>When invoking this API, it is recommended you use the
         * <code>StreamARN</code> input parameter rather than the <code>StreamName</code>
         * input parameter.</p>  <p>This action does not list expired shards. For
         * information about expired shards, see <a
         * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-using-sdk-java-after-resharding.html#kinesis-using-sdk-java-resharding-data-routing">Data
         * Routing, Data Persistence, and Shard State after a Reshard</a>. </p> 
         * <p>This API is a new operation that is used by the Amazon Kinesis Client Library
         * (KCL). If you have a fine-grained IAM policy that only allows specific
         * operations, you must update your policy to allow calls to this API. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/streams/latest/dev/controlling-access.html">Controlling
         * Access to Amazon Kinesis Data Streams Resources Using IAM</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListShards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListShardsOutcome ListShards(const Model::ListShardsRequest& request) const;

        /**
         * A Callable wrapper for ListShards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListShardsOutcomeCallable ListShardsCallable(const Model::ListShardsRequest& request) const;

        /**
         * An Async wrapper for ListShards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListShardsAsync(const Model::ListShardsRequest& request, const ListShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the consumers registered to receive data from a stream using enhanced
         * fan-out, and provides information about each consumer.</p> <p>This operation has
         * a limit of 5 transactions per second per stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListStreamConsumers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamConsumersOutcome ListStreamConsumers(const Model::ListStreamConsumersRequest& request) const;

        /**
         * A Callable wrapper for ListStreamConsumers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamConsumersOutcomeCallable ListStreamConsumersCallable(const Model::ListStreamConsumersRequest& request) const;

        /**
         * An Async wrapper for ListStreamConsumers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamConsumersAsync(const Model::ListStreamConsumersRequest& request, const ListStreamConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your Kinesis data streams.</p> <p>The number of streams may be too
         * large to return from a single call to <code>ListStreams</code>. You can limit
         * the number of returned streams using the <code>Limit</code> parameter. If you do
         * not specify a value for the <code>Limit</code> parameter, Kinesis Data Streams
         * uses the default limit, which is currently 100.</p> <p>You can detect if there
         * are more streams available to list by using the <code>HasMoreStreams</code> flag
         * from the returned output. If there are more streams available, you can request
         * more streams by using the name of the last stream returned by the
         * <code>ListStreams</code> request in the <code>ExclusiveStartStreamName</code>
         * parameter in a subsequent request to <code>ListStreams</code>. The group of
         * stream names returned by the subsequent request is then added to the list. You
         * can continue this process until all the stream names have been collected in the
         * list. </p> <p> <a>ListStreams</a> has a limit of five transactions per second
         * per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified Kinesis data stream. This operation has a
         * limit of five transactions per second per account.</p>  <p>When invoking
         * this API, it is recommended you use the <code>StreamARN</code> input parameter
         * rather than the <code>StreamName</code> input parameter.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListTagsForStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForStreamOutcome ListTagsForStream(const Model::ListTagsForStreamRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForStreamOutcomeCallable ListTagsForStreamCallable(const Model::ListTagsForStreamRequest& request) const;

        /**
         * An Async wrapper for ListTagsForStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForStreamAsync(const Model::ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Merges two adjacent shards in a Kinesis data stream and combines them into a
         * single shard to reduce the stream's capacity to ingest and transport data. This
         * API is only supported for the data streams with the provisioned capacity mode.
         * Two shards are considered adjacent if the union of the hash key ranges for the
         * two shards form a contiguous set with no gaps. For example, if you have two
         * shards, one with a hash key range of 276...381 and the other with a hash key
         * range of 382...454, then you could merge these two shards into a single shard
         * that would have a hash key range of 276...454. After the merge, the single child
         * shard receives data for all hash key values covered by the two parent
         * shards.</p>  <p>When invoking this API, it is recommended you use the
         * <code>StreamARN</code> input parameter rather than the <code>StreamName</code>
         * input parameter.</p>  <p> <code>MergeShards</code> is called when there
         * is a need to reduce the overall capacity of a stream because of excess capacity
         * that is not being used. You must specify the shard to be merged and the adjacent
         * shard for a stream. For more information about merging shards, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-resharding-merge.html">Merge
         * Two Shards</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
         * <p>If the stream is in the <code>ACTIVE</code> state, you can call
         * <code>MergeShards</code>. If a stream is in the <code>CREATING</code>,
         * <code>UPDATING</code>, or <code>DELETING</code> state, <code>MergeShards</code>
         * returns a <code>ResourceInUseException</code>. If the specified stream does not
         * exist, <code>MergeShards</code> returns a
         * <code>ResourceNotFoundException</code>. </p> <p>You can use
         * <a>DescribeStreamSummary</a> to check the state of the stream, which is returned
         * in <code>StreamStatus</code>.</p> <p> <code>MergeShards</code> is an
         * asynchronous operation. Upon receiving a <code>MergeShards</code> request,
         * Amazon Kinesis Data Streams immediately returns a response and sets the
         * <code>StreamStatus</code> to <code>UPDATING</code>. After the operation is
         * completed, Kinesis Data Streams sets the <code>StreamStatus</code> to
         * <code>ACTIVE</code>. Read and write operations continue to work while the stream
         * is in the <code>UPDATING</code> state. </p> <p>You use
         * <a>DescribeStreamSummary</a> and the <a>ListShards</a> APIs to determine the
         * shard IDs that are specified in the <code>MergeShards</code> request. </p> <p>If
         * you try to operate on too many streams in parallel using <a>CreateStream</a>,
         * <a>DeleteStream</a>, <code>MergeShards</code>, or <a>SplitShard</a>, you receive
         * a <code>LimitExceededException</code>. </p> <p> <code>MergeShards</code> has a
         * limit of five transactions per second per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/MergeShards">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeShardsOutcome MergeShards(const Model::MergeShardsRequest& request) const;

        /**
         * A Callable wrapper for MergeShards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeShardsOutcomeCallable MergeShardsCallable(const Model::MergeShardsRequest& request) const;

        /**
         * An Async wrapper for MergeShards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeShardsAsync(const Model::MergeShardsRequest& request, const MergeShardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Writes a single data record into an Amazon Kinesis data stream. Call
         * <code>PutRecord</code> to send data into the stream for real-time ingestion and
         * subsequent processing, one record at a time. Each shard can support writes up to
         * 1,000 records per second, up to a maximum data write total of 1 MiB per
         * second.</p>  <p>When invoking this API, it is recommended you use the
         * <code>StreamARN</code> input parameter rather than the <code>StreamName</code>
         * input parameter.</p>  <p>You must specify the name of the stream that
         * captures, stores, and transports the data; a partition key; and the data blob
         * itself.</p> <p>The data blob can be any type of data; for example, a segment
         * from a log file, geographic/location data, website clickstream data, and so
         * on.</p> <p>The partition key is used by Kinesis Data Streams to distribute data
         * across shards. Kinesis Data Streams segregates the data records that belong to a
         * stream into multiple shards, using the partition key associated with each data
         * record to determine the shard to which a given data record belongs.</p>
         * <p>Partition keys are Unicode strings, with a maximum length limit of 256
         * characters for each key. An MD5 hash function is used to map partition keys to
         * 128-bit integer values and to map associated data records to shards using the
         * hash key ranges of the shards. You can override hashing the partition key to
         * determine the shard by explicitly specifying a hash value using the
         * <code>ExplicitHashKey</code> parameter. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-add-data-to-stream">Adding
         * Data to a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>.</p> <p> <code>PutRecord</code> returns the shard ID of where the data
         * record was placed and the sequence number that was assigned to the data
         * record.</p> <p>Sequence numbers increase over time and are specific to a shard
         * within a stream, not across all shards within a stream. To guarantee strictly
         * increasing ordering, write serially to a shard and use the
         * <code>SequenceNumberForOrdering</code> parameter. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-add-data-to-stream">Adding
         * Data to a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>.</p>  <p>After you write a record to a stream, you cannot
         * modify that record or its order within the stream.</p>  <p>If a
         * <code>PutRecord</code> request cannot be processed because of insufficient
         * provisioned throughput on the shard involved in the request,
         * <code>PutRecord</code> throws
         * <code>ProvisionedThroughputExceededException</code>. </p> <p>By default, data
         * records are accessible for 24 hours from the time that they are added to a
         * stream. You can use <a>IncreaseStreamRetentionPeriod</a> or
         * <a>DecreaseStreamRetentionPeriod</a> to modify this retention
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/PutRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordOutcome PutRecord(const Model::PutRecordRequest& request) const;

        /**
         * A Callable wrapper for PutRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecordOutcomeCallable PutRecordCallable(const Model::PutRecordRequest& request) const;

        /**
         * An Async wrapper for PutRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecordAsync(const Model::PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Writes multiple data records into a Kinesis data stream in a single call
         * (also referred to as a <code>PutRecords</code> request). Use this operation to
         * send data into the stream for data ingestion and processing. </p>  <p>When
         * invoking this API, it is recommended you use the <code>StreamARN</code> input
         * parameter rather than the <code>StreamName</code> input parameter.</p> 
         * <p>Each <code>PutRecords</code> request can support up to 500 records. Each
         * record in the request can be as large as 1 MiB, up to a limit of 5 MiB for the
         * entire request, including partition keys. Each shard can support writes up to
         * 1,000 records per second, up to a maximum data write total of 1 MiB per
         * second.</p> <p>You must specify the name of the stream that captures, stores,
         * and transports the data; and an array of request <code>Records</code>, with each
         * record in the array requiring a partition key and data blob. The record size
         * limit applies to the total size of the partition key and data blob.</p> <p>The
         * data blob can be any type of data; for example, a segment from a log file,
         * geographic/location data, website clickstream data, and so on.</p> <p>The
         * partition key is used by Kinesis Data Streams as input to a hash function that
         * maps the partition key and associated data to a specific shard. An MD5 hash
         * function is used to map partition keys to 128-bit integer values and to map
         * associated data records to shards. As a result of this hashing mechanism, all
         * data records with the same partition key map to the same shard within the
         * stream. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-add-data-to-stream">Adding
         * Data to a Stream</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>.</p> <p>Each record in the <code>Records</code> array may include an
         * optional parameter, <code>ExplicitHashKey</code>, which overrides the partition
         * key to shard mapping. This parameter allows a data producer to determine
         * explicitly the shard where the record is stored. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/developing-producers-with-sdk.html#kinesis-using-sdk-java-putrecords">Adding
         * Multiple Records with PutRecords</a> in the <i>Amazon Kinesis Data Streams
         * Developer Guide</i>.</p> <p>The <code>PutRecords</code> response includes an
         * array of response <code>Records</code>. Each record in the response array
         * directly correlates with a record in the request array using natural ordering,
         * from the top to the bottom of the request and response. The response
         * <code>Records</code> array always includes the same number of records as the
         * request array.</p> <p>The response <code>Records</code> array includes both
         * successfully and unsuccessfully processed records. Kinesis Data Streams attempts
         * to process all records in each <code>PutRecords</code> request. A single record
         * failure does not stop the processing of subsequent records. As a result,
         * PutRecords doesn't guarantee the ordering of records. If you need to read
         * records in the same order they are written to the stream, use <a>PutRecord</a>
         * instead of <code>PutRecords</code>, and write to the same shard.</p> <p>A
         * successfully processed record includes <code>ShardId</code> and
         * <code>SequenceNumber</code> values. The <code>ShardId</code> parameter
         * identifies the shard in the stream where the record is stored. The
         * <code>SequenceNumber</code> parameter is an identifier assigned to the put
         * record, unique to all records in the stream.</p> <p>An unsuccessfully processed
         * record includes <code>ErrorCode</code> and <code>ErrorMessage</code> values.
         * <code>ErrorCode</code> reflects the type of error and can be one of the
         * following values: <code>ProvisionedThroughputExceededException</code> or
         * <code>InternalFailure</code>. <code>ErrorMessage</code> provides more detailed
         * information about the <code>ProvisionedThroughputExceededException</code>
         * exception including the account ID, stream name, and shard ID of the record that
         * was throttled. For more information about partially successful responses, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-add-data-to-stream.html#kinesis-using-sdk-java-putrecords">Adding
         * Multiple Records with PutRecords</a> in the <i>Amazon Kinesis Data Streams
         * Developer Guide</i>.</p>  <p>After you write a record to a stream,
         * you cannot modify that record or its order within the stream.</p> 
         * <p>By default, data records are accessible for 24 hours from the time that they
         * are added to a stream. You can use <a>IncreaseStreamRetentionPeriod</a> or
         * <a>DecreaseStreamRetentionPeriod</a> to modify this retention
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/PutRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordsOutcome PutRecords(const Model::PutRecordsRequest& request) const;

        /**
         * A Callable wrapper for PutRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecordsOutcomeCallable PutRecordsCallable(const Model::PutRecordsRequest& request) const;

        /**
         * An Async wrapper for PutRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecordsAsync(const Model::PutRecordsRequest& request, const PutRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a consumer with a Kinesis data stream. When you use this operation,
         * the consumer you register can then call <a>SubscribeToShard</a> to receive data
         * from the stream using enhanced fan-out, at a rate of up to 2 MiB per second for
         * every shard you subscribe to. This rate is unaffected by the total number of
         * consumers that read from the same stream.</p> <p>You can register up to 20
         * consumers per stream. A given consumer can only be registered with one stream at
         * a time.</p> <p>For an example of how to use this operations, see <a
         * href="/streams/latest/dev/building-enhanced-consumers-api.html">Enhanced Fan-Out
         * Using the Kinesis Data Streams API</a>.</p> <p>The use of this operation has a
         * limit of five transactions per second per account. Also, only 5 consumers can be
         * created simultaneously. In other words, you cannot have more than 5 consumers in
         * a <code>CREATING</code> status at the same time. Registering a 6th consumer
         * while there are 5 in a <code>CREATING</code> status results in a
         * <code>LimitExceededException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/RegisterStreamConsumer">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterStreamConsumerOutcome RegisterStreamConsumer(const Model::RegisterStreamConsumerRequest& request) const;

        /**
         * A Callable wrapper for RegisterStreamConsumer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterStreamConsumerOutcomeCallable RegisterStreamConsumerCallable(const Model::RegisterStreamConsumerRequest& request) const;

        /**
         * An Async wrapper for RegisterStreamConsumer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterStreamConsumerAsync(const Model::RegisterStreamConsumerRequest& request, const RegisterStreamConsumerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the specified Kinesis data stream. Removed tags are deleted
         * and cannot be recovered after this operation successfully completes.</p> 
         * <p>When invoking this API, it is recommended you use the <code>StreamARN</code>
         * input parameter rather than the <code>StreamName</code> input parameter.</p>
         *  <p>If you specify a tag that does not exist, it is ignored.</p> <p>
         * <a>RemoveTagsFromStream</a> has a limit of five transactions per second per
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/RemoveTagsFromStream">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromStreamOutcome RemoveTagsFromStream(const Model::RemoveTagsFromStreamRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromStreamOutcomeCallable RemoveTagsFromStreamCallable(const Model::RemoveTagsFromStreamRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromStreamAsync(const Model::RemoveTagsFromStreamRequest& request, const RemoveTagsFromStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Splits a shard into two new shards in the Kinesis data stream, to increase
         * the stream's capacity to ingest and transport data. <code>SplitShard</code> is
         * called when there is a need to increase the overall capacity of a stream because
         * of an expected increase in the volume of data records being ingested. This API
         * is only supported for the data streams with the provisioned capacity mode.</p>
         *  <p>When invoking this API, it is recommended you use the
         * <code>StreamARN</code> input parameter rather than the <code>StreamName</code>
         * input parameter.</p>  <p>You can also use <code>SplitShard</code> when a
         * shard appears to be approaching its maximum utilization; for example, the
         * producers sending data into the specific shard are suddenly sending more than
         * previously anticipated. You can also call <code>SplitShard</code> to increase
         * stream capacity, so that more Kinesis Data Streams applications can
         * simultaneously read data from the stream for real-time processing. </p> <p>You
         * must specify the shard to be split and the new hash key, which is the position
         * in the shard where the shard gets split in two. In many cases, the new hash key
         * might be the average of the beginning and ending hash key, but it can be any
         * hash key value in the range being mapped into the shard. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/kinesis-using-sdk-java-resharding-split.html">Split
         * a Shard</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
         * <p>You can use <a>DescribeStreamSummary</a> and the <a>ListShards</a> APIs to
         * determine the shard ID and hash key values for the <code>ShardToSplit</code> and
         * <code>NewStartingHashKey</code> parameters that are specified in the
         * <code>SplitShard</code> request.</p> <p> <code>SplitShard</code> is an
         * asynchronous operation. Upon receiving a <code>SplitShard</code> request,
         * Kinesis Data Streams immediately returns a response and sets the stream status
         * to <code>UPDATING</code>. After the operation is completed, Kinesis Data Streams
         * sets the stream status to <code>ACTIVE</code>. Read and write operations
         * continue to work while the stream is in the <code>UPDATING</code> state. </p>
         * <p>You can use <a>DescribeStreamSummary</a> to check the status of the stream,
         * which is returned in <code>StreamStatus</code>. If the stream is in the
         * <code>ACTIVE</code> state, you can call <code>SplitShard</code>. </p> <p>If the
         * specified stream does not exist, <a>DescribeStreamSummary</a> returns a
         * <code>ResourceNotFoundException</code>. If you try to create more shards than
         * are authorized for your account, you receive a
         * <code>LimitExceededException</code>. </p> <p>For the default shard limit for an
         * Amazon Web Services account, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Kinesis
         * Data Streams Limits</a> in the <i>Amazon Kinesis Data Streams Developer
         * Guide</i>. To increase this limit, <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">contact
         * Amazon Web Services Support</a>.</p> <p>If you try to operate on too many
         * streams simultaneously using <a>CreateStream</a>, <a>DeleteStream</a>,
         * <a>MergeShards</a>, and/or <a>SplitShard</a>, you receive a
         * <code>LimitExceededException</code>. </p> <p> <code>SplitShard</code> has a
         * limit of five transactions per second per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/SplitShard">AWS
         * API Reference</a></p>
         */
        virtual Model::SplitShardOutcome SplitShard(const Model::SplitShardRequest& request) const;

        /**
         * A Callable wrapper for SplitShard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SplitShardOutcomeCallable SplitShardCallable(const Model::SplitShardRequest& request) const;

        /**
         * An Async wrapper for SplitShard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SplitShardAsync(const Model::SplitShardRequest& request, const SplitShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or updates server-side encryption using an Amazon Web Services KMS
         * key for a specified stream. </p> <p>Starting encryption is an asynchronous
         * operation. Upon receiving the request, Kinesis Data Streams returns immediately
         * and sets the status of the stream to <code>UPDATING</code>. After the update is
         * complete, Kinesis Data Streams sets the status of the stream back to
         * <code>ACTIVE</code>. Updating or applying encryption normally takes a few
         * seconds to complete, but it can take minutes. You can continue to read and write
         * data to your stream while its status is <code>UPDATING</code>. Once the status
         * of the stream is <code>ACTIVE</code>, encryption begins for records written to
         * the stream. </p> <p>API Limits: You can successfully apply a new Amazon Web
         * Services KMS key for server-side encryption 25 times in a rolling 24-hour
         * period.</p> <p>Note: It can take up to 5 seconds after the stream is in an
         * <code>ACTIVE</code> status before all records written to the stream are
         * encrypted. After you enable encryption, you can verify that encryption is
         * applied by inspecting the API response from <code>PutRecord</code> or
         * <code>PutRecords</code>.</p>  <p>When invoking this API, it is recommended
         * you use the <code>StreamARN</code> input parameter rather than the
         * <code>StreamName</code> input parameter.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/StartStreamEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamEncryptionOutcome StartStreamEncryption(const Model::StartStreamEncryptionRequest& request) const;

        /**
         * A Callable wrapper for StartStreamEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStreamEncryptionOutcomeCallable StartStreamEncryptionCallable(const Model::StartStreamEncryptionRequest& request) const;

        /**
         * An Async wrapper for StartStreamEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStreamEncryptionAsync(const Model::StartStreamEncryptionRequest& request, const StartStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables server-side encryption for a specified stream. </p>  <p>When
         * invoking this API, it is recommended you use the <code>StreamARN</code> input
         * parameter rather than the <code>StreamName</code> input parameter.</p> 
         * <p>Stopping encryption is an asynchronous operation. Upon receiving the request,
         * Kinesis Data Streams returns immediately and sets the status of the stream to
         * <code>UPDATING</code>. After the update is complete, Kinesis Data Streams sets
         * the status of the stream back to <code>ACTIVE</code>. Stopping encryption
         * normally takes a few seconds to complete, but it can take minutes. You can
         * continue to read and write data to your stream while its status is
         * <code>UPDATING</code>. Once the status of the stream is <code>ACTIVE</code>,
         * records written to the stream are no longer encrypted by Kinesis Data Streams.
         * </p> <p>API Limits: You can successfully disable server-side encryption 25 times
         * in a rolling 24-hour period. </p> <p>Note: It can take up to 5 seconds after the
         * stream is in an <code>ACTIVE</code> status before all records written to the
         * stream are no longer subject to encryption. After you disabled encryption, you
         * can verify that encryption is not applied by inspecting the API response from
         * <code>PutRecord</code> or <code>PutRecords</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/StopStreamEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStreamEncryptionOutcome StopStreamEncryption(const Model::StopStreamEncryptionRequest& request) const;

        /**
         * A Callable wrapper for StopStreamEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStreamEncryptionOutcomeCallable StopStreamEncryptionCallable(const Model::StopStreamEncryptionRequest& request) const;

        /**
         * An Async wrapper for StopStreamEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStreamEncryptionAsync(const Model::StopStreamEncryptionRequest& request, const StopStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation establishes an HTTP/2 connection between the consumer you
         * specify in the <code>ConsumerARN</code> parameter and the shard you specify in
         * the <code>ShardId</code> parameter. After the connection is successfully
         * established, Kinesis Data Streams pushes records from the shard to the consumer
         * over this connection. Before you call this operation, call
         * <a>RegisterStreamConsumer</a> to register the consumer with Kinesis Data
         * Streams.</p> <p>When the <code>SubscribeToShard</code> call succeeds, your
         * consumer starts receiving events of type <a>SubscribeToShardEvent</a> over the
         * HTTP/2 connection for up to 5 minutes, after which time you need to call
         * <code>SubscribeToShard</code> again to renew the subscription if you want to
         * continue to receive records.</p> <p>You can make one call to
         * <code>SubscribeToShard</code> per second per registered consumer per shard. For
         * example, if you have a 4000 shard stream and two registered stream consumers,
         * you can make one <code>SubscribeToShard</code> request per second for each
         * combination of shard and registered consumer, allowing you to subscribe both
         * consumers to all 4000 shards in one second. </p> <p>If you call
         * <code>SubscribeToShard</code> again with the same <code>ConsumerARN</code> and
         * <code>ShardId</code> within 5 seconds of a successful call, you'll get a
         * <code>ResourceInUseException</code>. If you call <code>SubscribeToShard</code> 5
         * seconds or more after a successful call, the second call takes over the
         * subscription and the previous connection expires or fails with a
         * <code>ResourceInUseException</code>.</p> <p>For an example of how to use this
         * operations, see <a
         * href="/streams/latest/dev/building-enhanced-consumers-api.html">Enhanced Fan-Out
         * Using the Kinesis Data Streams API</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/SubscribeToShard">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeToShardOutcome SubscribeToShard(Model::SubscribeToShardRequest& request) const;

        /**
         * A Callable wrapper for SubscribeToShard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeToShardOutcomeCallable SubscribeToShardCallable(Model::SubscribeToShardRequest& request) const;

        /**
         * An Async wrapper for SubscribeToShard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeToShardAsync(Model::SubscribeToShardRequest& request, const SubscribeToShardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the shard count of the specified stream to the specified number of
         * shards. This API is only supported for the data streams with the provisioned
         * capacity mode.</p>  <p>When invoking this API, it is recommended you use
         * the <code>StreamARN</code> input parameter rather than the
         * <code>StreamName</code> input parameter.</p>  <p>Updating the shard count
         * is an asynchronous operation. Upon receiving the request, Kinesis Data Streams
         * returns immediately and sets the status of the stream to <code>UPDATING</code>.
         * After the update is complete, Kinesis Data Streams sets the status of the stream
         * back to <code>ACTIVE</code>. Depending on the size of the stream, the scaling
         * action could take a few minutes to complete. You can continue to read and write
         * data to your stream while its status is <code>UPDATING</code>.</p> <p>To update
         * the shard count, Kinesis Data Streams performs splits or merges on individual
         * shards. This can cause short-lived shards to be created, in addition to the
         * final shards. These short-lived shards count towards your total shard limit for
         * your account in the Region.</p> <p>When using this operation, we recommend that
         * you specify a target shard count that is a multiple of 25% (25%, 50%, 75%,
         * 100%). You can specify any target value within your shard limit. However, if you
         * specify a target that isn't a multiple of 25%, the scaling action might take
         * longer to complete. </p> <p>This operation has the following default limits. By
         * default, you cannot do the following:</p> <ul> <li> <p>Scale more than ten times
         * per rolling 24-hour period per stream</p> </li> <li> <p>Scale up to more than
         * double your current shard count for a stream</p> </li> <li> <p>Scale down below
         * half your current shard count for a stream</p> </li> <li> <p>Scale up to more
         * than 10000 shards in a stream</p> </li> <li> <p>Scale a stream with more than
         * 10000 shards down unless the result is less than 10000 shards</p> </li> <li>
         * <p>Scale up to more than the shard limit for your account</p> </li> </ul> <p>For
         * the default limits for an Amazon Web Services account, see <a
         * href="https://docs.aws.amazon.com/kinesis/latest/dev/service-sizes-and-limits.html">Streams
         * Limits</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>. To request
         * an increase in the call rate limit, the shard limit for this API, or your
         * overall shard limit, use the <a
         * href="https://console.aws.amazon.com/support/v1#/case/create?issueType=service-limit-increase&amp;limitType=service-code-kinesis">limits
         * form</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/UpdateShardCount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateShardCountOutcome UpdateShardCount(const Model::UpdateShardCountRequest& request) const;

        /**
         * A Callable wrapper for UpdateShardCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateShardCountOutcomeCallable UpdateShardCountCallable(const Model::UpdateShardCountRequest& request) const;

        /**
         * An Async wrapper for UpdateShardCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateShardCountAsync(const Model::UpdateShardCountRequest& request, const UpdateShardCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the capacity mode of the data stream. Currently, in Kinesis Data
         * Streams, you can choose between an <b>on-demand</b> capacity mode and a
         * <b>provisioned</b> capacity mode for your data stream. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/UpdateStreamMode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamModeOutcome UpdateStreamMode(const Model::UpdateStreamModeRequest& request) const;

        /**
         * A Callable wrapper for UpdateStreamMode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamModeOutcomeCallable UpdateStreamModeCallable(const Model::UpdateStreamModeRequest& request) const;

        /**
         * An Async wrapper for UpdateStreamMode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamModeAsync(const Model::UpdateStreamModeRequest& request, const UpdateStreamModeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisClient>;
      void init(const KinesisClientConfiguration& clientConfiguration);

      KinesisClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisEndpointProviderBase> m_endpointProvider;
  };

} // namespace Kinesis
} // namespace Aws
