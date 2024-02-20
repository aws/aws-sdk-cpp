/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/firehose/FirehoseServiceClientModel.h>

namespace Aws
{
namespace Firehose
{
  /**
   * <fullname>Amazon Data Firehose</fullname> <p>Amazon Data Firehose is a fully
   * managed service that delivers real-time streaming data to destinations such as
   * Amazon Simple Storage Service (Amazon S3), Amazon OpenSearch Service, Amazon
   * Redshift, Splunk, and various other supportd destinations.</p>
   */
  class AWS_FIREHOSE_API FirehoseClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FirehoseClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FirehoseClientConfiguration ClientConfigurationType;
      typedef FirehoseEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FirehoseClient(const Aws::Firehose::FirehoseClientConfiguration& clientConfiguration = Aws::Firehose::FirehoseClientConfiguration(),
                       std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FirehoseClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Firehose::FirehoseClientConfiguration& clientConfiguration = Aws::Firehose::FirehoseClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FirehoseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Firehose::FirehoseClientConfiguration& clientConfiguration = Aws::Firehose::FirehoseClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FirehoseClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FirehoseClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FirehoseClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FirehoseClient();

        /**
         * <p>Creates a Firehose delivery stream.</p> <p>By default, you can create up to
         * 50 delivery streams per Amazon Web Services Region.</p> <p>This is an
         * asynchronous operation that immediately returns. The initial status of the
         * delivery stream is <code>CREATING</code>. After the delivery stream is created,
         * its status is <code>ACTIVE</code> and it now accepts data. If the delivery
         * stream creation fails, the status transitions to <code>CREATING_FAILED</code>.
         * Attempts to send data to a delivery stream that is not in the
         * <code>ACTIVE</code> state cause an exception. To check the state of a delivery
         * stream, use <a>DescribeDeliveryStream</a>.</p> <p>If the status of a delivery
         * stream is <code>CREATING_FAILED</code>, this status doesn't change, and you
         * can't invoke <code>CreateDeliveryStream</code> again on it. However, you can
         * invoke the <a>DeleteDeliveryStream</a> operation to delete it.</p> <p>A Firehose
         * delivery stream can be configured to receive records directly from providers
         * using <a>PutRecord</a> or <a>PutRecordBatch</a>, or it can be configured to use
         * an existing Kinesis stream as its source. To specify a Kinesis data stream as
         * input, set the <code>DeliveryStreamType</code> parameter to
         * <code>KinesisStreamAsSource</code>, and provide the Kinesis stream Amazon
         * Resource Name (ARN) and role ARN in the
         * <code>KinesisStreamSourceConfiguration</code> parameter.</p> <p>To create a
         * delivery stream with server-side encryption (SSE) enabled, include
         * <a>DeliveryStreamEncryptionConfigurationInput</a> in your request. This is
         * optional. You can also invoke <a>StartDeliveryStreamEncryption</a> to turn on
         * SSE for an existing delivery stream that doesn't have SSE enabled.</p> <p>A
         * delivery stream is configured with a single destination, such as Amazon Simple
         * Storage Service (Amazon S3), Amazon Redshift, Amazon OpenSearch Service, Amazon
         * OpenSearch Serverless, Splunk, and any custom HTTP endpoint or HTTP endpoints
         * owned by or supported by third-party service providers, including Datadog,
         * Dynatrace, LogicMonitor, MongoDB, New Relic, and Sumo Logic. You must specify
         * only one of the following destination configuration parameters:
         * <code>ExtendedS3DestinationConfiguration</code>,
         * <code>S3DestinationConfiguration</code>,
         * <code>ElasticsearchDestinationConfiguration</code>,
         * <code>RedshiftDestinationConfiguration</code>, or
         * <code>SplunkDestinationConfiguration</code>.</p> <p>When you specify
         * <code>S3DestinationConfiguration</code>, you can also provide the following
         * optional values: BufferingHints, <code>EncryptionConfiguration</code>, and
         * <code>CompressionFormat</code>. By default, if no <code>BufferingHints</code>
         * value is provided, Firehose buffers data up to 5 MB or for 5 minutes, whichever
         * condition is satisfied first. <code>BufferingHints</code> is a hint, so there
         * are some cases where the service cannot adhere to these conditions strictly. For
         * example, record boundaries might be such that the size is a little over or under
         * the configured buffering size. By default, no encryption is performed. We
         * strongly recommend that you enable encryption to ensure secure data storage in
         * Amazon S3.</p> <p>A few notes about Amazon Redshift as a destination:</p> <ul>
         * <li> <p>An Amazon Redshift destination requires an S3 bucket as intermediate
         * location. Firehose first delivers data to Amazon S3 and then uses
         * <code>COPY</code> syntax to load data into an Amazon Redshift table. This is
         * specified in the <code>RedshiftDestinationConfiguration.S3Configuration</code>
         * parameter.</p> </li> <li> <p>The compression formats <code>SNAPPY</code> or
         * <code>ZIP</code> cannot be specified in
         * <code>RedshiftDestinationConfiguration.S3Configuration</code> because the Amazon
         * Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't
         * support these compression formats.</p> </li> <li> <p>We strongly recommend that
         * you use the user name and password you provide exclusively with Firehose, and
         * that the permissions for the account are restricted for Amazon Redshift
         * <code>INSERT</code> permissions.</p> </li> </ul> <p>Firehose assumes the IAM
         * role that is configured as part of the destination. The role should allow the
         * Firehose principal to assume the role, and the role should have permissions that
         * allow the service to deliver the data. For more information, see <a
         * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
         * Firehose Access to an Amazon S3 Destination</a> in the <i>Amazon Firehose
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/CreateDeliveryStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeliveryStreamOutcome CreateDeliveryStream(const Model::CreateDeliveryStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateDeliveryStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeliveryStreamRequestT = Model::CreateDeliveryStreamRequest>
        Model::CreateDeliveryStreamOutcomeCallable CreateDeliveryStreamCallable(const CreateDeliveryStreamRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::CreateDeliveryStream, request);
        }

        /**
         * An Async wrapper for CreateDeliveryStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeliveryStreamRequestT = Model::CreateDeliveryStreamRequest>
        void CreateDeliveryStreamAsync(const CreateDeliveryStreamRequestT& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::CreateDeliveryStream, request, handler, context);
        }

        /**
         * <p>Deletes a delivery stream and its data.</p> <p>You can delete a delivery
         * stream only if it is in one of the following states: <code>ACTIVE</code>,
         * <code>DELETING</code>, <code>CREATING_FAILED</code>, or
         * <code>DELETING_FAILED</code>. You can't delete a delivery stream that is in the
         * <code>CREATING</code> state. To check the state of a delivery stream, use
         * <a>DescribeDeliveryStream</a>. </p> <p>DeleteDeliveryStream is an asynchronous
         * API. When an API request to DeleteDeliveryStream succeeds, the delivery stream
         * is marked for deletion, and it goes into the <code>DELETING</code> state.While
         * the delivery stream is in the <code>DELETING</code> state, the service might
         * continue to accept records, but it doesn't make any guarantees with respect to
         * delivering the data. Therefore, as a best practice, first stop any applications
         * that are sending records before you delete a delivery stream.</p> <p>Removal of
         * a delivery stream that is in the <code>DELETING</code> state is a low priority
         * operation for the service. A stream may remain in the <code>DELETING</code>
         * state for several minutes. Therefore, as a best practice, applications should
         * not wait for streams in the <code>DELETING</code> state to be removed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DeleteDeliveryStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeliveryStreamOutcome DeleteDeliveryStream(const Model::DeleteDeliveryStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeliveryStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeliveryStreamRequestT = Model::DeleteDeliveryStreamRequest>
        Model::DeleteDeliveryStreamOutcomeCallable DeleteDeliveryStreamCallable(const DeleteDeliveryStreamRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::DeleteDeliveryStream, request);
        }

        /**
         * An Async wrapper for DeleteDeliveryStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeliveryStreamRequestT = Model::DeleteDeliveryStreamRequest>
        void DeleteDeliveryStreamAsync(const DeleteDeliveryStreamRequestT& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::DeleteDeliveryStream, request, handler, context);
        }

        /**
         * <p>Describes the specified delivery stream and its status. For example, after
         * your delivery stream is created, call <code>DescribeDeliveryStream</code> to see
         * whether the delivery stream is <code>ACTIVE</code> and therefore ready for data
         * to be sent to it. </p> <p>If the status of a delivery stream is
         * <code>CREATING_FAILED</code>, this status doesn't change, and you can't invoke
         * <a>CreateDeliveryStream</a> again on it. However, you can invoke the
         * <a>DeleteDeliveryStream</a> operation to delete it. If the status is
         * <code>DELETING_FAILED</code>, you can force deletion by invoking
         * <a>DeleteDeliveryStream</a> again but with
         * <a>DeleteDeliveryStreamInput$AllowForceDelete</a> set to true.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DescribeDeliveryStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeliveryStreamOutcome DescribeDeliveryStream(const Model::DescribeDeliveryStreamRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeliveryStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeliveryStreamRequestT = Model::DescribeDeliveryStreamRequest>
        Model::DescribeDeliveryStreamOutcomeCallable DescribeDeliveryStreamCallable(const DescribeDeliveryStreamRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::DescribeDeliveryStream, request);
        }

        /**
         * An Async wrapper for DescribeDeliveryStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeliveryStreamRequestT = Model::DescribeDeliveryStreamRequest>
        void DescribeDeliveryStreamAsync(const DescribeDeliveryStreamRequestT& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::DescribeDeliveryStream, request, handler, context);
        }

        /**
         * <p>Lists your delivery streams in alphabetical order of their names.</p> <p>The
         * number of delivery streams might be too large to return using a single call to
         * <code>ListDeliveryStreams</code>. You can limit the number of delivery streams
         * returned, using the <code>Limit</code> parameter. To determine whether there are
         * more delivery streams to list, check the value of
         * <code>HasMoreDeliveryStreams</code> in the output. If there are more delivery
         * streams to list, you can request them by calling this operation again and
         * setting the <code>ExclusiveStartDeliveryStreamName</code> parameter to the name
         * of the last delivery stream returned in the last call.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ListDeliveryStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeliveryStreamsOutcome ListDeliveryStreams(const Model::ListDeliveryStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListDeliveryStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeliveryStreamsRequestT = Model::ListDeliveryStreamsRequest>
        Model::ListDeliveryStreamsOutcomeCallable ListDeliveryStreamsCallable(const ListDeliveryStreamsRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::ListDeliveryStreams, request);
        }

        /**
         * An Async wrapper for ListDeliveryStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeliveryStreamsRequestT = Model::ListDeliveryStreamsRequest>
        void ListDeliveryStreamsAsync(const ListDeliveryStreamsRequestT& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::ListDeliveryStreams, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified delivery stream. This operation has a limit
         * of five transactions per second per account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ListTagsForDeliveryStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForDeliveryStreamOutcome ListTagsForDeliveryStream(const Model::ListTagsForDeliveryStreamRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForDeliveryStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForDeliveryStreamRequestT = Model::ListTagsForDeliveryStreamRequest>
        Model::ListTagsForDeliveryStreamOutcomeCallable ListTagsForDeliveryStreamCallable(const ListTagsForDeliveryStreamRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::ListTagsForDeliveryStream, request);
        }

        /**
         * An Async wrapper for ListTagsForDeliveryStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForDeliveryStreamRequestT = Model::ListTagsForDeliveryStreamRequest>
        void ListTagsForDeliveryStreamAsync(const ListTagsForDeliveryStreamRequestT& request, const ListTagsForDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::ListTagsForDeliveryStream, request, handler, context);
        }

        /**
         * <p>Writes a single data record into an Amazon Firehose delivery stream. To write
         * multiple data records into a delivery stream, use <a>PutRecordBatch</a>.
         * Applications using these operations are referred to as producers.</p> <p>By
         * default, each delivery stream can take in up to 2,000 transactions per second,
         * 5,000 records per second, or 5 MB per second. If you use <a>PutRecord</a> and
         * <a>PutRecordBatch</a>, the limits are an aggregate across these two operations
         * for each delivery stream. For more information about limits and how to request
         * an increase, see <a
         * href="https://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon
         * Firehose Limits</a>. </p> <p>Firehose accumulates and publishes a particular
         * metric for a customer account in one minute intervals. It is possible that the
         * bursts of incoming bytes/records ingested to a delivery stream last only for a
         * few seconds. Due to this, the actual spikes in the traffic might not be fully
         * visible in the customer's 1 minute CloudWatch metrics.</p> <p>You must specify
         * the name of the delivery stream and the data record when using <a>PutRecord</a>.
         * The data record consists of a data blob that can be up to 1,000 KiB in size, and
         * any kind of data. For example, it can be a segment from a log file, geographic
         * location data, website clickstream data, and so on.</p> <p>Firehose buffers
         * records before delivering them to the destination. To disambiguate the data
         * blobs at the destination, a common solution is to use delimiters in the data,
         * such as a newline (<code>\n</code>) or some other character unique within the
         * data. This allows the consumer application to parse individual data items when
         * reading the data from the destination.</p> <p>The <code>PutRecord</code>
         * operation returns a <code>RecordId</code>, which is a unique string assigned to
         * each record. Producer applications can use this ID for purposes such as
         * auditability and investigation.</p> <p>If the <code>PutRecord</code> operation
         * throws a <code>ServiceUnavailableException</code>, the API is automatically
         * reinvoked (retried) 3 times. If the exception persists, it is possible that the
         * throughput limits have been exceeded for the delivery stream. </p>
         * <p>Re-invoking the Put API operations (for example, PutRecord and
         * PutRecordBatch) can result in data duplicates. For larger data assets, allow for
         * a longer time out before retrying Put API operations.</p> <p>Data records sent
         * to Firehose are stored for 24 hours from the time they are added to a delivery
         * stream as it tries to send the records to the destination. If the destination is
         * unreachable for more than 24 hours, the data is no longer available.</p>
         *  <p>Don't concatenate two or more base64 strings to form the data
         * fields of your records. Instead, concatenate the raw data, then perform base64
         * encoding.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/PutRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordOutcome PutRecord(const Model::PutRecordRequest& request) const;

        /**
         * A Callable wrapper for PutRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRecordRequestT = Model::PutRecordRequest>
        Model::PutRecordOutcomeCallable PutRecordCallable(const PutRecordRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::PutRecord, request);
        }

        /**
         * An Async wrapper for PutRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRecordRequestT = Model::PutRecordRequest>
        void PutRecordAsync(const PutRecordRequestT& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::PutRecord, request, handler, context);
        }

        /**
         * <p>Writes multiple data records into a delivery stream in a single call, which
         * can achieve higher throughput per producer than when writing single records. To
         * write single data records into a delivery stream, use <a>PutRecord</a>.
         * Applications using these operations are referred to as producers.</p>
         * <p>Firehose accumulates and publishes a particular metric for a customer account
         * in one minute intervals. It is possible that the bursts of incoming
         * bytes/records ingested to a delivery stream last only for a few seconds. Due to
         * this, the actual spikes in the traffic might not be fully visible in the
         * customer's 1 minute CloudWatch metrics.</p> <p>For information about service
         * quota, see <a
         * href="https://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon
         * Firehose Quota</a>.</p> <p>Each <a>PutRecordBatch</a> request supports up to 500
         * records. Each record in the request can be as large as 1,000 KB (before base64
         * encoding), up to a limit of 4 MB for the entire request. These limits cannot be
         * changed.</p> <p>You must specify the name of the delivery stream and the data
         * record when using <a>PutRecord</a>. The data record consists of a data blob that
         * can be up to 1,000 KB in size, and any kind of data. For example, it could be a
         * segment from a log file, geographic location data, website clickstream data, and
         * so on.</p> <p>Firehose buffers records before delivering them to the
         * destination. To disambiguate the data blobs at the destination, a common
         * solution is to use delimiters in the data, such as a newline (<code>\n</code>)
         * or some other character unique within the data. This allows the consumer
         * application to parse individual data items when reading the data from the
         * destination.</p> <p>The <a>PutRecordBatch</a> response includes a count of
         * failed records, <code>FailedPutCount</code>, and an array of responses,
         * <code>RequestResponses</code>. Even if the <a>PutRecordBatch</a> call succeeds,
         * the value of <code>FailedPutCount</code> may be greater than 0, indicating that
         * there are records for which the operation didn't succeed. Each entry in the
         * <code>RequestResponses</code> array provides additional information about the
         * processed record. It directly correlates with a record in the request array
         * using the same ordering, from the top to the bottom. The response array always
         * includes the same number of records as the request array.
         * <code>RequestResponses</code> includes both successfully and unsuccessfully
         * processed records. Firehose tries to process all records in each
         * <a>PutRecordBatch</a> request. A single record failure does not stop the
         * processing of subsequent records. </p> <p>A successfully processed record
         * includes a <code>RecordId</code> value, which is unique for the record. An
         * unsuccessfully processed record includes <code>ErrorCode</code> and
         * <code>ErrorMessage</code> values. <code>ErrorCode</code> reflects the type of
         * error, and is one of the following values:
         * <code>ServiceUnavailableException</code> or <code>InternalFailure</code>.
         * <code>ErrorMessage</code> provides more detailed information about the
         * error.</p> <p>If there is an internal server error or a timeout, the write might
         * have completed or it might have failed. If <code>FailedPutCount</code> is
         * greater than 0, retry the request, resending only those records that might have
         * failed processing. This minimizes the possible duplicate records and also
         * reduces the total bytes sent (and corresponding charges). We recommend that you
         * handle any duplicates at the destination.</p> <p>If <a>PutRecordBatch</a> throws
         * <code>ServiceUnavailableException</code>, the API is automatically reinvoked
         * (retried) 3 times. If the exception persists, it is possible that the throughput
         * limits have been exceeded for the delivery stream.</p> <p>Re-invoking the Put
         * API operations (for example, PutRecord and PutRecordBatch) can result in data
         * duplicates. For larger data assets, allow for a longer time out before retrying
         * Put API operations.</p> <p>Data records sent to Firehose are stored for 24 hours
         * from the time they are added to a delivery stream as it attempts to send the
         * records to the destination. If the destination is unreachable for more than 24
         * hours, the data is no longer available.</p>  <p>Don't concatenate two
         * or more base64 strings to form the data fields of your records. Instead,
         * concatenate the raw data, then perform base64 encoding.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/PutRecordBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordBatchOutcome PutRecordBatch(const Model::PutRecordBatchRequest& request) const;

        /**
         * A Callable wrapper for PutRecordBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRecordBatchRequestT = Model::PutRecordBatchRequest>
        Model::PutRecordBatchOutcomeCallable PutRecordBatchCallable(const PutRecordBatchRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::PutRecordBatch, request);
        }

        /**
         * An Async wrapper for PutRecordBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRecordBatchRequestT = Model::PutRecordBatchRequest>
        void PutRecordBatchAsync(const PutRecordBatchRequestT& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::PutRecordBatch, request, handler, context);
        }

        /**
         * <p>Enables server-side encryption (SSE) for the delivery stream. </p> <p>This
         * operation is asynchronous. It returns immediately. When you invoke it, Firehose
         * first sets the encryption status of the stream to <code>ENABLING</code>, and
         * then to <code>ENABLED</code>. The encryption status of a delivery stream is the
         * <code>Status</code> property in <a>DeliveryStreamEncryptionConfiguration</a>. If
         * the operation fails, the encryption status changes to
         * <code>ENABLING_FAILED</code>. You can continue to read and write data to your
         * delivery stream while the encryption status is <code>ENABLING</code>, but the
         * data is not encrypted. It can take up to 5 seconds after the encryption status
         * changes to <code>ENABLED</code> before all records written to the delivery
         * stream are encrypted. To find out whether a record or a batch of records was
         * encrypted, check the response elements <a>PutRecordOutput$Encrypted</a> and
         * <a>PutRecordBatchOutput$Encrypted</a>, respectively.</p> <p>To check the
         * encryption status of a delivery stream, use <a>DescribeDeliveryStream</a>.</p>
         * <p>Even if encryption is currently enabled for a delivery stream, you can still
         * invoke this operation on it to change the ARN of the CMK or both its type and
         * ARN. If you invoke this method to change the CMK, and the old CMK is of type
         * <code>CUSTOMER_MANAGED_CMK</code>, Firehose schedules the grant it had on the
         * old CMK for retirement. If the new CMK is of type
         * <code>CUSTOMER_MANAGED_CMK</code>, Firehose creates a grant that enables it to
         * use the new CMK to encrypt and decrypt data and to manage the grant.</p> <p>For
         * the KMS grant creation to be successful, Firehose APIs
         * <code>StartDeliveryStreamEncryption</code> and <code>CreateDeliveryStream</code>
         * should not be called with session credentials that are more than 6 hours
         * old.</p> <p>If a delivery stream already has encryption enabled and then you
         * invoke this operation to change the ARN of the CMK or both its type and ARN and
         * you get <code>ENABLING_FAILED</code>, this only means that the attempt to change
         * the CMK failed. In this case, encryption remains enabled with the old CMK.</p>
         * <p>If the encryption status of your delivery stream is
         * <code>ENABLING_FAILED</code>, you can invoke this operation again with a valid
         * CMK. The CMK must be enabled and the key policy mustn't explicitly deny the
         * permission for Firehose to invoke KMS encrypt and decrypt operations.</p> <p>You
         * can enable SSE for a delivery stream only if it's a delivery stream that uses
         * <code>DirectPut</code> as its source. </p> <p>The
         * <code>StartDeliveryStreamEncryption</code> and
         * <code>StopDeliveryStreamEncryption</code> operations have a combined limit of 25
         * calls per delivery stream per 24 hours. For example, you reach the limit if you
         * call <code>StartDeliveryStreamEncryption</code> 13 times and
         * <code>StopDeliveryStreamEncryption</code> 12 times for the same delivery stream
         * in a 24-hour period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/StartDeliveryStreamEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeliveryStreamEncryptionOutcome StartDeliveryStreamEncryption(const Model::StartDeliveryStreamEncryptionRequest& request) const;

        /**
         * A Callable wrapper for StartDeliveryStreamEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDeliveryStreamEncryptionRequestT = Model::StartDeliveryStreamEncryptionRequest>
        Model::StartDeliveryStreamEncryptionOutcomeCallable StartDeliveryStreamEncryptionCallable(const StartDeliveryStreamEncryptionRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::StartDeliveryStreamEncryption, request);
        }

        /**
         * An Async wrapper for StartDeliveryStreamEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeliveryStreamEncryptionRequestT = Model::StartDeliveryStreamEncryptionRequest>
        void StartDeliveryStreamEncryptionAsync(const StartDeliveryStreamEncryptionRequestT& request, const StartDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::StartDeliveryStreamEncryption, request, handler, context);
        }

        /**
         * <p>Disables server-side encryption (SSE) for the delivery stream. </p> <p>This
         * operation is asynchronous. It returns immediately. When you invoke it, Firehose
         * first sets the encryption status of the stream to <code>DISABLING</code>, and
         * then to <code>DISABLED</code>. You can continue to read and write data to your
         * stream while its status is <code>DISABLING</code>. It can take up to 5 seconds
         * after the encryption status changes to <code>DISABLED</code> before all records
         * written to the delivery stream are no longer subject to encryption. To find out
         * whether a record or a batch of records was encrypted, check the response
         * elements <a>PutRecordOutput$Encrypted</a> and
         * <a>PutRecordBatchOutput$Encrypted</a>, respectively.</p> <p>To check the
         * encryption state of a delivery stream, use <a>DescribeDeliveryStream</a>. </p>
         * <p>If SSE is enabled using a customer managed CMK and then you invoke
         * <code>StopDeliveryStreamEncryption</code>, Firehose schedules the related KMS
         * grant for retirement and then retires it after it ensures that it is finished
         * delivering records to the destination.</p> <p>The
         * <code>StartDeliveryStreamEncryption</code> and
         * <code>StopDeliveryStreamEncryption</code> operations have a combined limit of 25
         * calls per delivery stream per 24 hours. For example, you reach the limit if you
         * call <code>StartDeliveryStreamEncryption</code> 13 times and
         * <code>StopDeliveryStreamEncryption</code> 12 times for the same delivery stream
         * in a 24-hour period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/StopDeliveryStreamEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDeliveryStreamEncryptionOutcome StopDeliveryStreamEncryption(const Model::StopDeliveryStreamEncryptionRequest& request) const;

        /**
         * A Callable wrapper for StopDeliveryStreamEncryption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDeliveryStreamEncryptionRequestT = Model::StopDeliveryStreamEncryptionRequest>
        Model::StopDeliveryStreamEncryptionOutcomeCallable StopDeliveryStreamEncryptionCallable(const StopDeliveryStreamEncryptionRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::StopDeliveryStreamEncryption, request);
        }

        /**
         * An Async wrapper for StopDeliveryStreamEncryption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDeliveryStreamEncryptionRequestT = Model::StopDeliveryStreamEncryptionRequest>
        void StopDeliveryStreamEncryptionAsync(const StopDeliveryStreamEncryptionRequestT& request, const StopDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::StopDeliveryStreamEncryption, request, handler, context);
        }

        /**
         * <p>Adds or updates tags for the specified delivery stream. A tag is a key-value
         * pair that you can define and assign to Amazon Web Services resources. If you
         * specify a tag that already exists, the tag value is replaced with the value that
         * you specify in the request. Tags are metadata. For example, you can add friendly
         * names and descriptions or other types of information that can help you
         * distinguish the delivery stream. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
         * Management User Guide</i>. </p> <p>Each delivery stream can have up to 50 tags.
         * </p> <p>This operation has a limit of five transactions per second per account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/TagDeliveryStream">AWS
         * API Reference</a></p>
         */
        virtual Model::TagDeliveryStreamOutcome TagDeliveryStream(const Model::TagDeliveryStreamRequest& request) const;

        /**
         * A Callable wrapper for TagDeliveryStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagDeliveryStreamRequestT = Model::TagDeliveryStreamRequest>
        Model::TagDeliveryStreamOutcomeCallable TagDeliveryStreamCallable(const TagDeliveryStreamRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::TagDeliveryStream, request);
        }

        /**
         * An Async wrapper for TagDeliveryStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagDeliveryStreamRequestT = Model::TagDeliveryStreamRequest>
        void TagDeliveryStreamAsync(const TagDeliveryStreamRequestT& request, const TagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::TagDeliveryStream, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified delivery stream. Removed tags are deleted,
         * and you can't recover them after this operation successfully completes.</p>
         * <p>If you specify a tag that doesn't exist, the operation ignores it.</p>
         * <p>This operation has a limit of five transactions per second per account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/UntagDeliveryStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagDeliveryStreamOutcome UntagDeliveryStream(const Model::UntagDeliveryStreamRequest& request) const;

        /**
         * A Callable wrapper for UntagDeliveryStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagDeliveryStreamRequestT = Model::UntagDeliveryStreamRequest>
        Model::UntagDeliveryStreamOutcomeCallable UntagDeliveryStreamCallable(const UntagDeliveryStreamRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::UntagDeliveryStream, request);
        }

        /**
         * An Async wrapper for UntagDeliveryStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagDeliveryStreamRequestT = Model::UntagDeliveryStreamRequest>
        void UntagDeliveryStreamAsync(const UntagDeliveryStreamRequestT& request, const UntagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::UntagDeliveryStream, request, handler, context);
        }

        /**
         * <p>Updates the specified destination of the specified delivery stream.</p>
         * <p>Use this operation to change the destination type (for example, to replace
         * the Amazon S3 destination with Amazon Redshift) or change the parameters
         * associated with a destination (for example, to change the bucket name of the
         * Amazon S3 destination). The update might not occur immediately. The target
         * delivery stream remains active while the configurations are updated, so data
         * writes to the delivery stream can continue during this process. The updated
         * configurations are usually effective within a few minutes.</p> <p>Switching
         * between Amazon OpenSearch Service and other services is not supported. For an
         * Amazon OpenSearch Service destination, you can only update to another Amazon
         * OpenSearch Service destination.</p> <p>If the destination type is the same,
         * Firehose merges the configuration parameters specified with the destination
         * configuration that already exists on the delivery stream. If any of the
         * parameters are not specified in the call, the existing values are retained. For
         * example, in the Amazon S3 destination, if <a>EncryptionConfiguration</a> is not
         * specified, then the existing <code>EncryptionConfiguration</code> is maintained
         * on the destination.</p> <p>If the destination type is not the same, for example,
         * changing the destination from Amazon S3 to Amazon Redshift, Firehose does not
         * merge any parameters. In this case, all parameters must be specified.</p>
         * <p>Firehose uses <code>CurrentDeliveryStreamVersionId</code> to avoid race
         * conditions and conflicting merges. This is a required field, and the service
         * updates the configuration only if the existing configuration has a version ID
         * that matches. After the update is applied successfully, the version ID is
         * updated, and can be retrieved using <a>DescribeDeliveryStream</a>. Use the new
         * version ID to set <code>CurrentDeliveryStreamVersionId</code> in the next
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const UpdateDestinationRequestT& request) const
        {
            return SubmitCallable(&FirehoseClient::UpdateDestination, request);
        }

        /**
         * An Async wrapper for UpdateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        void UpdateDestinationAsync(const UpdateDestinationRequestT& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FirehoseClient::UpdateDestination, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FirehoseEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FirehoseClient>;
      void init(const FirehoseClientConfiguration& clientConfiguration);

      FirehoseClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FirehoseEndpointProviderBase> m_endpointProvider;
  };

} // namespace Firehose
} // namespace Aws
