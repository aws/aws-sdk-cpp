/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/firehose/model/CreateDeliveryStreamResult.h>
#include <aws/firehose/model/DeleteDeliveryStreamResult.h>
#include <aws/firehose/model/DescribeDeliveryStreamResult.h>
#include <aws/firehose/model/ListDeliveryStreamsResult.h>
#include <aws/firehose/model/PutRecordResult.h>
#include <aws/firehose/model/PutRecordBatchResult.h>
#include <aws/firehose/model/UpdateDestinationResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace Model
{
        class CreateDeliveryStreamRequest;
        class DeleteDeliveryStreamRequest;
        class DescribeDeliveryStreamRequest;
        class ListDeliveryStreamsRequest;
        class PutRecordRequest;
        class PutRecordBatchRequest;
        class UpdateDestinationRequest;

        typedef Aws::Utils::Outcome<CreateDeliveryStreamResult, Aws::Client::AWSError<FirehoseErrors>> CreateDeliveryStreamOutcome;
        typedef Aws::Utils::Outcome<DeleteDeliveryStreamResult, Aws::Client::AWSError<FirehoseErrors>> DeleteDeliveryStreamOutcome;
        typedef Aws::Utils::Outcome<DescribeDeliveryStreamResult, Aws::Client::AWSError<FirehoseErrors>> DescribeDeliveryStreamOutcome;
        typedef Aws::Utils::Outcome<ListDeliveryStreamsResult, Aws::Client::AWSError<FirehoseErrors>> ListDeliveryStreamsOutcome;
        typedef Aws::Utils::Outcome<PutRecordResult, Aws::Client::AWSError<FirehoseErrors>> PutRecordOutcome;
        typedef Aws::Utils::Outcome<PutRecordBatchResult, Aws::Client::AWSError<FirehoseErrors>> PutRecordBatchOutcome;
        typedef Aws::Utils::Outcome<UpdateDestinationResult, Aws::Client::AWSError<FirehoseErrors>> UpdateDestinationOutcome;

        typedef std::future<CreateDeliveryStreamOutcome> CreateDeliveryStreamOutcomeCallable;
        typedef std::future<DeleteDeliveryStreamOutcome> DeleteDeliveryStreamOutcomeCallable;
        typedef std::future<DescribeDeliveryStreamOutcome> DescribeDeliveryStreamOutcomeCallable;
        typedef std::future<ListDeliveryStreamsOutcome> ListDeliveryStreamsOutcomeCallable;
        typedef std::future<PutRecordOutcome> PutRecordOutcomeCallable;
        typedef std::future<PutRecordBatchOutcome> PutRecordBatchOutcomeCallable;
        typedef std::future<UpdateDestinationOutcome> UpdateDestinationOutcomeCallable;
} // namespace Model

  class FirehoseClient;

    typedef std::function<void(const FirehoseClient*, const Model::CreateDeliveryStreamRequest&, const Model::CreateDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::DeleteDeliveryStreamRequest&, const Model::DeleteDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::DescribeDeliveryStreamRequest&, const Model::DescribeDeliveryStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryStreamResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::ListDeliveryStreamsRequest&, const Model::ListDeliveryStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeliveryStreamsResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::PutRecordRequest&, const Model::PutRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecordResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::PutRecordBatchRequest&, const Model::PutRecordBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecordBatchResponseReceivedHandler;
    typedef std::function<void(const FirehoseClient*, const Model::UpdateDestinationRequest&, const Model::UpdateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDestinationResponseReceivedHandler;

  /**
   * <fullname>Amazon Kinesis Firehose API Reference</fullname> <p>Amazon Kinesis
   * Firehose is a fully-managed service that delivers real-time streaming data to
   * destinations such as Amazon Simple Storage Service (Amazon S3), Amazon
   * Elasticsearch Service (Amazon ES), and Amazon Redshift.</p>
   */
  class AWS_FIREHOSE_API FirehoseClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FirehoseClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FirehoseClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FirehoseClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~FirehoseClient();

        /**
         * <p>Creates a delivery stream.</p> <p> <a>CreateDeliveryStream</a> is an
         * asynchronous operation that immediately returns. The initial status of the
         * delivery stream is <code>CREATING</code>. After the delivery stream is created,
         * its status is <code>ACTIVE</code> and it now accepts data. Attempts to send data
         * to a delivery stream that is not in the <code>ACTIVE</code> state cause an
         * exception. To check the state of a delivery stream, use
         * <a>DescribeDeliveryStream</a>.</p> <p>The name of a delivery stream identifies
         * it. You can't have two delivery streams with the same name in the same region.
         * Two delivery streams in different AWS accounts or different regions in the same
         * AWS account can have the same name.</p> <p>By default, you can create up to 20
         * delivery streams per region.</p> <p>A delivery stream can only be configured
         * with a single destination, Amazon S3, Amazon Elasticsearch Service, or Amazon
         * Redshift. For correct <a>CreateDeliveryStream</a> request syntax, specify only
         * one destination configuration parameter: either
         * <b>S3DestinationConfiguration</b>, <b>ElasticsearchDestinationConfiguration</b>,
         * or <b>RedshiftDestinationConfiguration</b>. </p> <p>As part of
         * <b>S3DestinationConfiguration</b>, optional values <b>BufferingHints</b>,
         * <b>EncryptionConfiguration</b>, and <b>CompressionFormat</b> can be provided. By
         * default, if no <b>BufferingHints</b> value is provided, Firehose buffers data up
         * to 5 MB or for 5 minutes, whichever condition is satisfied first. Note that
         * <b>BufferingHints</b> is a hint, so there are some cases where the service
         * cannot adhere to these conditions strictly; for example, record boundaries are
         * such that the size is a little over or under the configured buffering size. By
         * default, no encryption is performed. We strongly recommend that you enable
         * encryption to ensure secure data storage in Amazon S3.</p> <p>A few notes about
         * <b>RedshiftDestinationConfiguration</b>:</p> <ul> <li> <p>An Amazon Redshift
         * destination requires an S3 bucket as intermediate location, as Firehose first
         * delivers data to S3 and then uses <code>COPY</code> syntax to load data into an
         * Amazon Redshift table. This is specified in the
         * <b>RedshiftDestinationConfiguration.S3Configuration</b> parameter element.</p>
         * </li> <li> <p>The compression formats <code>SNAPPY</code> or <code>ZIP</code>
         * cannot be specified in <b>RedshiftDestinationConfiguration.S3Configuration</b>
         * because the Amazon Redshift <code>COPY</code> operation that reads from the S3
         * bucket doesn't support these compression formats.</p> </li> <li> <p>We strongly
         * recommend that the username and password provided is used exclusively for
         * Firehose purposes, and that the permissions for the account are restricted for
         * Amazon Redshift <code>INSERT</code> permissions.</p> </li> </ul> <p>Firehose
         * assumes the IAM role that is configured as part of destinations. The IAM role
         * should allow the Firehose principal to assume the role, and the role should have
         * permissions that allows the service to deliver the data. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
         * S3 Bucket Access</a> in the <i>Amazon Kinesis Firehose Developer Guide</i>.</p>
         */
        virtual Model::CreateDeliveryStreamOutcome CreateDeliveryStream(const Model::CreateDeliveryStreamRequest& request) const;

        /**
         * <p>Creates a delivery stream.</p> <p> <a>CreateDeliveryStream</a> is an
         * asynchronous operation that immediately returns. The initial status of the
         * delivery stream is <code>CREATING</code>. After the delivery stream is created,
         * its status is <code>ACTIVE</code> and it now accepts data. Attempts to send data
         * to a delivery stream that is not in the <code>ACTIVE</code> state cause an
         * exception. To check the state of a delivery stream, use
         * <a>DescribeDeliveryStream</a>.</p> <p>The name of a delivery stream identifies
         * it. You can't have two delivery streams with the same name in the same region.
         * Two delivery streams in different AWS accounts or different regions in the same
         * AWS account can have the same name.</p> <p>By default, you can create up to 20
         * delivery streams per region.</p> <p>A delivery stream can only be configured
         * with a single destination, Amazon S3, Amazon Elasticsearch Service, or Amazon
         * Redshift. For correct <a>CreateDeliveryStream</a> request syntax, specify only
         * one destination configuration parameter: either
         * <b>S3DestinationConfiguration</b>, <b>ElasticsearchDestinationConfiguration</b>,
         * or <b>RedshiftDestinationConfiguration</b>. </p> <p>As part of
         * <b>S3DestinationConfiguration</b>, optional values <b>BufferingHints</b>,
         * <b>EncryptionConfiguration</b>, and <b>CompressionFormat</b> can be provided. By
         * default, if no <b>BufferingHints</b> value is provided, Firehose buffers data up
         * to 5 MB or for 5 minutes, whichever condition is satisfied first. Note that
         * <b>BufferingHints</b> is a hint, so there are some cases where the service
         * cannot adhere to these conditions strictly; for example, record boundaries are
         * such that the size is a little over or under the configured buffering size. By
         * default, no encryption is performed. We strongly recommend that you enable
         * encryption to ensure secure data storage in Amazon S3.</p> <p>A few notes about
         * <b>RedshiftDestinationConfiguration</b>:</p> <ul> <li> <p>An Amazon Redshift
         * destination requires an S3 bucket as intermediate location, as Firehose first
         * delivers data to S3 and then uses <code>COPY</code> syntax to load data into an
         * Amazon Redshift table. This is specified in the
         * <b>RedshiftDestinationConfiguration.S3Configuration</b> parameter element.</p>
         * </li> <li> <p>The compression formats <code>SNAPPY</code> or <code>ZIP</code>
         * cannot be specified in <b>RedshiftDestinationConfiguration.S3Configuration</b>
         * because the Amazon Redshift <code>COPY</code> operation that reads from the S3
         * bucket doesn't support these compression formats.</p> </li> <li> <p>We strongly
         * recommend that the username and password provided is used exclusively for
         * Firehose purposes, and that the permissions for the account are restricted for
         * Amazon Redshift <code>INSERT</code> permissions.</p> </li> </ul> <p>Firehose
         * assumes the IAM role that is configured as part of destinations. The IAM role
         * should allow the Firehose principal to assume the role, and the role should have
         * permissions that allows the service to deliver the data. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
         * S3 Bucket Access</a> in the <i>Amazon Kinesis Firehose Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeliveryStreamOutcomeCallable CreateDeliveryStreamCallable(const Model::CreateDeliveryStreamRequest& request) const;

        /**
         * <p>Creates a delivery stream.</p> <p> <a>CreateDeliveryStream</a> is an
         * asynchronous operation that immediately returns. The initial status of the
         * delivery stream is <code>CREATING</code>. After the delivery stream is created,
         * its status is <code>ACTIVE</code> and it now accepts data. Attempts to send data
         * to a delivery stream that is not in the <code>ACTIVE</code> state cause an
         * exception. To check the state of a delivery stream, use
         * <a>DescribeDeliveryStream</a>.</p> <p>The name of a delivery stream identifies
         * it. You can't have two delivery streams with the same name in the same region.
         * Two delivery streams in different AWS accounts or different regions in the same
         * AWS account can have the same name.</p> <p>By default, you can create up to 20
         * delivery streams per region.</p> <p>A delivery stream can only be configured
         * with a single destination, Amazon S3, Amazon Elasticsearch Service, or Amazon
         * Redshift. For correct <a>CreateDeliveryStream</a> request syntax, specify only
         * one destination configuration parameter: either
         * <b>S3DestinationConfiguration</b>, <b>ElasticsearchDestinationConfiguration</b>,
         * or <b>RedshiftDestinationConfiguration</b>. </p> <p>As part of
         * <b>S3DestinationConfiguration</b>, optional values <b>BufferingHints</b>,
         * <b>EncryptionConfiguration</b>, and <b>CompressionFormat</b> can be provided. By
         * default, if no <b>BufferingHints</b> value is provided, Firehose buffers data up
         * to 5 MB or for 5 minutes, whichever condition is satisfied first. Note that
         * <b>BufferingHints</b> is a hint, so there are some cases where the service
         * cannot adhere to these conditions strictly; for example, record boundaries are
         * such that the size is a little over or under the configured buffering size. By
         * default, no encryption is performed. We strongly recommend that you enable
         * encryption to ensure secure data storage in Amazon S3.</p> <p>A few notes about
         * <b>RedshiftDestinationConfiguration</b>:</p> <ul> <li> <p>An Amazon Redshift
         * destination requires an S3 bucket as intermediate location, as Firehose first
         * delivers data to S3 and then uses <code>COPY</code> syntax to load data into an
         * Amazon Redshift table. This is specified in the
         * <b>RedshiftDestinationConfiguration.S3Configuration</b> parameter element.</p>
         * </li> <li> <p>The compression formats <code>SNAPPY</code> or <code>ZIP</code>
         * cannot be specified in <b>RedshiftDestinationConfiguration.S3Configuration</b>
         * because the Amazon Redshift <code>COPY</code> operation that reads from the S3
         * bucket doesn't support these compression formats.</p> </li> <li> <p>We strongly
         * recommend that the username and password provided is used exclusively for
         * Firehose purposes, and that the permissions for the account are restricted for
         * Amazon Redshift <code>INSERT</code> permissions.</p> </li> </ul> <p>Firehose
         * assumes the IAM role that is configured as part of destinations. The IAM role
         * should allow the Firehose principal to assume the role, and the role should have
         * permissions that allows the service to deliver the data. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
         * S3 Bucket Access</a> in the <i>Amazon Kinesis Firehose Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeliveryStreamAsync(const Model::CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a delivery stream and its data.</p> <p>You can delete a delivery
         * stream only if it is in <code>ACTIVE</code> or <code>DELETING</code> state, and
         * not in the <code>CREATING</code> state. While the deletion request is in
         * process, the delivery stream is in the <code>DELETING</code> state.</p> <p>To
         * check the state of a delivery stream, use <a>DescribeDeliveryStream</a>.</p>
         * <p>While the delivery stream is <code>DELETING</code> state, the service may
         * continue to accept the records, but the service doesn't make any guarantees with
         * respect to delivering the data. Therefore, as a best practice, you should first
         * stop any applications that are sending records before deleting a delivery
         * stream.</p>
         */
        virtual Model::DeleteDeliveryStreamOutcome DeleteDeliveryStream(const Model::DeleteDeliveryStreamRequest& request) const;

        /**
         * <p>Deletes a delivery stream and its data.</p> <p>You can delete a delivery
         * stream only if it is in <code>ACTIVE</code> or <code>DELETING</code> state, and
         * not in the <code>CREATING</code> state. While the deletion request is in
         * process, the delivery stream is in the <code>DELETING</code> state.</p> <p>To
         * check the state of a delivery stream, use <a>DescribeDeliveryStream</a>.</p>
         * <p>While the delivery stream is <code>DELETING</code> state, the service may
         * continue to accept the records, but the service doesn't make any guarantees with
         * respect to delivering the data. Therefore, as a best practice, you should first
         * stop any applications that are sending records before deleting a delivery
         * stream.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeliveryStreamOutcomeCallable DeleteDeliveryStreamCallable(const Model::DeleteDeliveryStreamRequest& request) const;

        /**
         * <p>Deletes a delivery stream and its data.</p> <p>You can delete a delivery
         * stream only if it is in <code>ACTIVE</code> or <code>DELETING</code> state, and
         * not in the <code>CREATING</code> state. While the deletion request is in
         * process, the delivery stream is in the <code>DELETING</code> state.</p> <p>To
         * check the state of a delivery stream, use <a>DescribeDeliveryStream</a>.</p>
         * <p>While the delivery stream is <code>DELETING</code> state, the service may
         * continue to accept the records, but the service doesn't make any guarantees with
         * respect to delivering the data. Therefore, as a best practice, you should first
         * stop any applications that are sending records before deleting a delivery
         * stream.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeliveryStreamAsync(const Model::DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified delivery stream and gets the status. For example,
         * after your delivery stream is created, call <a>DescribeDeliveryStream</a> to see
         * if the delivery stream is <code>ACTIVE</code> and therefore ready for data to be
         * sent to it.</p>
         */
        virtual Model::DescribeDeliveryStreamOutcome DescribeDeliveryStream(const Model::DescribeDeliveryStreamRequest& request) const;

        /**
         * <p>Describes the specified delivery stream and gets the status. For example,
         * after your delivery stream is created, call <a>DescribeDeliveryStream</a> to see
         * if the delivery stream is <code>ACTIVE</code> and therefore ready for data to be
         * sent to it.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeliveryStreamOutcomeCallable DescribeDeliveryStreamCallable(const Model::DescribeDeliveryStreamRequest& request) const;

        /**
         * <p>Describes the specified delivery stream and gets the status. For example,
         * after your delivery stream is created, call <a>DescribeDeliveryStream</a> to see
         * if the delivery stream is <code>ACTIVE</code> and therefore ready for data to be
         * sent to it.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeliveryStreamAsync(const Model::DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your delivery streams.</p> <p>The number of delivery streams might be
         * too large to return using a single call to <a>ListDeliveryStreams</a>. You can
         * limit the number of delivery streams returned, using the <b>Limit</b> parameter.
         * To determine whether there are more delivery streams to list, check the value of
         * <b>HasMoreDeliveryStreams</b> in the output. If there are more delivery streams
         * to list, you can request them by specifying the name of the last delivery stream
         * returned in the call in the <b>ExclusiveStartDeliveryStreamName</b> parameter of
         * a subsequent call.</p>
         */
        virtual Model::ListDeliveryStreamsOutcome ListDeliveryStreams(const Model::ListDeliveryStreamsRequest& request) const;

        /**
         * <p>Lists your delivery streams.</p> <p>The number of delivery streams might be
         * too large to return using a single call to <a>ListDeliveryStreams</a>. You can
         * limit the number of delivery streams returned, using the <b>Limit</b> parameter.
         * To determine whether there are more delivery streams to list, check the value of
         * <b>HasMoreDeliveryStreams</b> in the output. If there are more delivery streams
         * to list, you can request them by specifying the name of the last delivery stream
         * returned in the call in the <b>ExclusiveStartDeliveryStreamName</b> parameter of
         * a subsequent call.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeliveryStreamsOutcomeCallable ListDeliveryStreamsCallable(const Model::ListDeliveryStreamsRequest& request) const;

        /**
         * <p>Lists your delivery streams.</p> <p>The number of delivery streams might be
         * too large to return using a single call to <a>ListDeliveryStreams</a>. You can
         * limit the number of delivery streams returned, using the <b>Limit</b> parameter.
         * To determine whether there are more delivery streams to list, check the value of
         * <b>HasMoreDeliveryStreams</b> in the output. If there are more delivery streams
         * to list, you can request them by specifying the name of the last delivery stream
         * returned in the call in the <b>ExclusiveStartDeliveryStreamName</b> parameter of
         * a subsequent call.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeliveryStreamsAsync(const Model::ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Writes a single data record into an Amazon Kinesis Firehose delivery stream.
         * To write multiple data records into a delivery stream, use
         * <a>PutRecordBatch</a>. Applications using these operations are referred to as
         * producers.</p> <p>By default, each delivery stream can take in up to 2,000
         * transactions per second, 5,000 records per second, or 5 MB per second. Note that
         * if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an
         * aggregate across these two operations for each delivery stream. For more
         * information about limits and how to request an increase, see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis
         * Firehose Limits</a>. </p> <p>You must specify the name of the delivery stream
         * and the data record when using <a>PutRecord</a>. The data record consists of a
         * data blob that can be up to 1,000 KB in size, and any kind of data, for example,
         * a segment from a log file, geographic location data, web site clickstream data,
         * etc.</p> <p>Firehose buffers records before delivering them to the destination.
         * To disambiguate the data blobs at the destination, a common solution is to use
         * delimiters in the data, such as a newline (<code>\n</code>) or some other
         * character unique within the data. This allows the consumer application(s) to
         * parse individual data items when reading the data from the destination.</p>
         * <p>The <a>PutRecord</a> operation returns a <b>RecordId</b>, which is a unique
         * string assigned to each record. Producer applications can use this ID for
         * purposes such as auditability and investigation.</p> <p>If the <a>PutRecord</a>
         * operation throws a <b>ServiceUnavailableException</b>, back off and retry. If
         * the exception persists, it is possible that the throughput limits have been
         * exceeded for the delivery stream. </p> <p>Data records sent to Firehose are
         * stored for 24 hours from the time they are added to a delivery stream as it
         * attempts to send the records to the destination. If the destination is
         * unreachable for more than 24 hours, the data is no longer available.</p>
         */
        virtual Model::PutRecordOutcome PutRecord(const Model::PutRecordRequest& request) const;

        /**
         * <p>Writes a single data record into an Amazon Kinesis Firehose delivery stream.
         * To write multiple data records into a delivery stream, use
         * <a>PutRecordBatch</a>. Applications using these operations are referred to as
         * producers.</p> <p>By default, each delivery stream can take in up to 2,000
         * transactions per second, 5,000 records per second, or 5 MB per second. Note that
         * if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an
         * aggregate across these two operations for each delivery stream. For more
         * information about limits and how to request an increase, see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis
         * Firehose Limits</a>. </p> <p>You must specify the name of the delivery stream
         * and the data record when using <a>PutRecord</a>. The data record consists of a
         * data blob that can be up to 1,000 KB in size, and any kind of data, for example,
         * a segment from a log file, geographic location data, web site clickstream data,
         * etc.</p> <p>Firehose buffers records before delivering them to the destination.
         * To disambiguate the data blobs at the destination, a common solution is to use
         * delimiters in the data, such as a newline (<code>\n</code>) or some other
         * character unique within the data. This allows the consumer application(s) to
         * parse individual data items when reading the data from the destination.</p>
         * <p>The <a>PutRecord</a> operation returns a <b>RecordId</b>, which is a unique
         * string assigned to each record. Producer applications can use this ID for
         * purposes such as auditability and investigation.</p> <p>If the <a>PutRecord</a>
         * operation throws a <b>ServiceUnavailableException</b>, back off and retry. If
         * the exception persists, it is possible that the throughput limits have been
         * exceeded for the delivery stream. </p> <p>Data records sent to Firehose are
         * stored for 24 hours from the time they are added to a delivery stream as it
         * attempts to send the records to the destination. If the destination is
         * unreachable for more than 24 hours, the data is no longer available.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecordOutcomeCallable PutRecordCallable(const Model::PutRecordRequest& request) const;

        /**
         * <p>Writes a single data record into an Amazon Kinesis Firehose delivery stream.
         * To write multiple data records into a delivery stream, use
         * <a>PutRecordBatch</a>. Applications using these operations are referred to as
         * producers.</p> <p>By default, each delivery stream can take in up to 2,000
         * transactions per second, 5,000 records per second, or 5 MB per second. Note that
         * if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an
         * aggregate across these two operations for each delivery stream. For more
         * information about limits and how to request an increase, see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis
         * Firehose Limits</a>. </p> <p>You must specify the name of the delivery stream
         * and the data record when using <a>PutRecord</a>. The data record consists of a
         * data blob that can be up to 1,000 KB in size, and any kind of data, for example,
         * a segment from a log file, geographic location data, web site clickstream data,
         * etc.</p> <p>Firehose buffers records before delivering them to the destination.
         * To disambiguate the data blobs at the destination, a common solution is to use
         * delimiters in the data, such as a newline (<code>\n</code>) or some other
         * character unique within the data. This allows the consumer application(s) to
         * parse individual data items when reading the data from the destination.</p>
         * <p>The <a>PutRecord</a> operation returns a <b>RecordId</b>, which is a unique
         * string assigned to each record. Producer applications can use this ID for
         * purposes such as auditability and investigation.</p> <p>If the <a>PutRecord</a>
         * operation throws a <b>ServiceUnavailableException</b>, back off and retry. If
         * the exception persists, it is possible that the throughput limits have been
         * exceeded for the delivery stream. </p> <p>Data records sent to Firehose are
         * stored for 24 hours from the time they are added to a delivery stream as it
         * attempts to send the records to the destination. If the destination is
         * unreachable for more than 24 hours, the data is no longer available.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecordAsync(const Model::PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Writes multiple data records into a delivery stream in a single call, which
         * can achieve higher throughput per producer than when writing single records. To
         * write single data records into a delivery stream, use <a>PutRecord</a>.
         * Applications using these operations are referred to as producers.</p> <p>Each
         * <a>PutRecordBatch</a> request supports up to 500 records. Each record in the
         * request can be as large as 1,000 KB (before 64-bit encoding), up to a limit of 4
         * MB for the entire request. By default, each delivery stream can take in up to
         * 2,000 transactions per second, 5,000 records per second, or 5 MB per second.
         * Note that if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are
         * an aggregate across these two operations for each delivery stream. For more
         * information about limits and how to request an increase, see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis
         * Firehose Limits</a>. </p> <p>You must specify the name of the delivery stream
         * and the data record when using <a>PutRecord</a>. The data record consists of a
         * data blob that can be up to 1,000 KB in size, and any kind of data, for example,
         * a segment from a log file, geographic location data, web site clickstream data,
         * and so on.</p> <p>Firehose buffers records before delivering them to the
         * destination. To disambiguate the data blobs at the destination, a common
         * solution is to use delimiters in the data, such as a newline (<code>\n</code>)
         * or some other character unique within the data. This allows the consumer
         * application(s) to parse individual data items when reading the data from the
         * destination.</p> <p>The <a>PutRecordBatch</a> response includes a count of any
         * failed records, <b>FailedPutCount</b>, and an array of responses,
         * <b>RequestResponses</b>. The <b>FailedPutCount</b> value is a count of records
         * that failed. Each entry in the <b>RequestResponses</b> array gives additional
         * information of the processed record. Each entry in <b>RequestResponses</b>
         * directly correlates with a record in the request array using the same ordering,
         * from the top to the bottom of the request and response. <b>RequestResponses</b>
         * always includes the same number of records as the request array.
         * <b>RequestResponses</b> both successfully and unsuccessfully processed records.
         * Firehose attempts to process all records in each <a>PutRecordBatch</a> request.
         * A single record failure does not stop the processing of subsequent records.</p>
         * <p>A successfully processed record includes a <b>RecordId</b> value, which is a
         * unique value identified for the record. An unsuccessfully processed record
         * includes <b>ErrorCode</b> and <b>ErrorMessage</b> values. <b>ErrorCode</b>
         * reflects the type of error and is one of the following values:
         * <code>ServiceUnavailable</code> or <code>InternalFailure</code>.
         * <code>ErrorMessage</code> provides more detailed information about the
         * error.</p> <p>If <b>FailedPutCount</b> is greater than 0 (zero), retry the
         * request. A retry of the entire batch of records is possible; however, we
         * strongly recommend that you inspect the entire response and resend only those
         * records that failed processing. This minimizes duplicate records and also
         * reduces the total bytes sent (and corresponding charges).</p> <p>If the
         * <a>PutRecordBatch</a> operation throws a <b>ServiceUnavailableException</b>,
         * back off and retry. If the exception persists, it is possible that the
         * throughput limits have been exceeded for the delivery stream.</p> <p>Data
         * records sent to Firehose are stored for 24 hours from the time they are added to
         * a delivery stream as it attempts to send the records to the destination. If the
         * destination is unreachable for more than 24 hours, the data is no longer
         * available.</p>
         */
        virtual Model::PutRecordBatchOutcome PutRecordBatch(const Model::PutRecordBatchRequest& request) const;

        /**
         * <p>Writes multiple data records into a delivery stream in a single call, which
         * can achieve higher throughput per producer than when writing single records. To
         * write single data records into a delivery stream, use <a>PutRecord</a>.
         * Applications using these operations are referred to as producers.</p> <p>Each
         * <a>PutRecordBatch</a> request supports up to 500 records. Each record in the
         * request can be as large as 1,000 KB (before 64-bit encoding), up to a limit of 4
         * MB for the entire request. By default, each delivery stream can take in up to
         * 2,000 transactions per second, 5,000 records per second, or 5 MB per second.
         * Note that if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are
         * an aggregate across these two operations for each delivery stream. For more
         * information about limits and how to request an increase, see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis
         * Firehose Limits</a>. </p> <p>You must specify the name of the delivery stream
         * and the data record when using <a>PutRecord</a>. The data record consists of a
         * data blob that can be up to 1,000 KB in size, and any kind of data, for example,
         * a segment from a log file, geographic location data, web site clickstream data,
         * and so on.</p> <p>Firehose buffers records before delivering them to the
         * destination. To disambiguate the data blobs at the destination, a common
         * solution is to use delimiters in the data, such as a newline (<code>\n</code>)
         * or some other character unique within the data. This allows the consumer
         * application(s) to parse individual data items when reading the data from the
         * destination.</p> <p>The <a>PutRecordBatch</a> response includes a count of any
         * failed records, <b>FailedPutCount</b>, and an array of responses,
         * <b>RequestResponses</b>. The <b>FailedPutCount</b> value is a count of records
         * that failed. Each entry in the <b>RequestResponses</b> array gives additional
         * information of the processed record. Each entry in <b>RequestResponses</b>
         * directly correlates with a record in the request array using the same ordering,
         * from the top to the bottom of the request and response. <b>RequestResponses</b>
         * always includes the same number of records as the request array.
         * <b>RequestResponses</b> both successfully and unsuccessfully processed records.
         * Firehose attempts to process all records in each <a>PutRecordBatch</a> request.
         * A single record failure does not stop the processing of subsequent records.</p>
         * <p>A successfully processed record includes a <b>RecordId</b> value, which is a
         * unique value identified for the record. An unsuccessfully processed record
         * includes <b>ErrorCode</b> and <b>ErrorMessage</b> values. <b>ErrorCode</b>
         * reflects the type of error and is one of the following values:
         * <code>ServiceUnavailable</code> or <code>InternalFailure</code>.
         * <code>ErrorMessage</code> provides more detailed information about the
         * error.</p> <p>If <b>FailedPutCount</b> is greater than 0 (zero), retry the
         * request. A retry of the entire batch of records is possible; however, we
         * strongly recommend that you inspect the entire response and resend only those
         * records that failed processing. This minimizes duplicate records and also
         * reduces the total bytes sent (and corresponding charges).</p> <p>If the
         * <a>PutRecordBatch</a> operation throws a <b>ServiceUnavailableException</b>,
         * back off and retry. If the exception persists, it is possible that the
         * throughput limits have been exceeded for the delivery stream.</p> <p>Data
         * records sent to Firehose are stored for 24 hours from the time they are added to
         * a delivery stream as it attempts to send the records to the destination. If the
         * destination is unreachable for more than 24 hours, the data is no longer
         * available.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecordBatchOutcomeCallable PutRecordBatchCallable(const Model::PutRecordBatchRequest& request) const;

        /**
         * <p>Writes multiple data records into a delivery stream in a single call, which
         * can achieve higher throughput per producer than when writing single records. To
         * write single data records into a delivery stream, use <a>PutRecord</a>.
         * Applications using these operations are referred to as producers.</p> <p>Each
         * <a>PutRecordBatch</a> request supports up to 500 records. Each record in the
         * request can be as large as 1,000 KB (before 64-bit encoding), up to a limit of 4
         * MB for the entire request. By default, each delivery stream can take in up to
         * 2,000 transactions per second, 5,000 records per second, or 5 MB per second.
         * Note that if you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are
         * an aggregate across these two operations for each delivery stream. For more
         * information about limits and how to request an increase, see <a
         * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis
         * Firehose Limits</a>. </p> <p>You must specify the name of the delivery stream
         * and the data record when using <a>PutRecord</a>. The data record consists of a
         * data blob that can be up to 1,000 KB in size, and any kind of data, for example,
         * a segment from a log file, geographic location data, web site clickstream data,
         * and so on.</p> <p>Firehose buffers records before delivering them to the
         * destination. To disambiguate the data blobs at the destination, a common
         * solution is to use delimiters in the data, such as a newline (<code>\n</code>)
         * or some other character unique within the data. This allows the consumer
         * application(s) to parse individual data items when reading the data from the
         * destination.</p> <p>The <a>PutRecordBatch</a> response includes a count of any
         * failed records, <b>FailedPutCount</b>, and an array of responses,
         * <b>RequestResponses</b>. The <b>FailedPutCount</b> value is a count of records
         * that failed. Each entry in the <b>RequestResponses</b> array gives additional
         * information of the processed record. Each entry in <b>RequestResponses</b>
         * directly correlates with a record in the request array using the same ordering,
         * from the top to the bottom of the request and response. <b>RequestResponses</b>
         * always includes the same number of records as the request array.
         * <b>RequestResponses</b> both successfully and unsuccessfully processed records.
         * Firehose attempts to process all records in each <a>PutRecordBatch</a> request.
         * A single record failure does not stop the processing of subsequent records.</p>
         * <p>A successfully processed record includes a <b>RecordId</b> value, which is a
         * unique value identified for the record. An unsuccessfully processed record
         * includes <b>ErrorCode</b> and <b>ErrorMessage</b> values. <b>ErrorCode</b>
         * reflects the type of error and is one of the following values:
         * <code>ServiceUnavailable</code> or <code>InternalFailure</code>.
         * <code>ErrorMessage</code> provides more detailed information about the
         * error.</p> <p>If <b>FailedPutCount</b> is greater than 0 (zero), retry the
         * request. A retry of the entire batch of records is possible; however, we
         * strongly recommend that you inspect the entire response and resend only those
         * records that failed processing. This minimizes duplicate records and also
         * reduces the total bytes sent (and corresponding charges).</p> <p>If the
         * <a>PutRecordBatch</a> operation throws a <b>ServiceUnavailableException</b>,
         * back off and retry. If the exception persists, it is possible that the
         * throughput limits have been exceeded for the delivery stream.</p> <p>Data
         * records sent to Firehose are stored for 24 hours from the time they are added to
         * a delivery stream as it attempts to send the records to the destination. If the
         * destination is unreachable for more than 24 hours, the data is no longer
         * available.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecordBatchAsync(const Model::PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified destination of the specified delivery stream. Note:
         * Switching between Elasticsearch and other services is not supported. For
         * Elasticsearch destination, you can only update an existing Elasticsearch
         * destination with this operation.</p> <p>This operation can be used to change the
         * destination type (for example, to replace the Amazon S3 destination with Amazon
         * Redshift) or change the parameters associated with a given destination (for
         * example, to change the bucket name of the Amazon S3 destination). The update may
         * not occur immediately. The target delivery stream remains active while the
         * configurations are updated, so data writes to the delivery stream can continue
         * during this process. The updated configurations are normally effective within a
         * few minutes.</p> <p>If the destination type is the same, Firehose merges the
         * configuration parameters specified in the <a>UpdateDestination</a> request with
         * the destination configuration that already exists on the delivery stream. If any
         * of the parameters are not specified in the update request, then the existing
         * configuration parameters are retained. For example, in the Amazon S3
         * destination, if <a>EncryptionConfiguration</a> is not specified then the
         * existing <a>EncryptionConfiguration</a> is maintained on the destination.</p>
         * <p>If the destination type is not the same, for example, changing the
         * destination from Amazon S3 to Amazon Redshift, Firehose does not merge any
         * parameters. In this case, all parameters must be specified.</p> <p>Firehose uses
         * the <b>CurrentDeliveryStreamVersionId</b> to avoid race conditions and
         * conflicting merges. This is a required field in every request and the service
         * only updates the configuration if the existing configuration matches the
         * <b>VersionId</b>. After the update is applied successfully, the <b>VersionId</b>
         * is updated, which can be retrieved with the <a>DescribeDeliveryStream</a>
         * operation. The new <b>VersionId</b> should be uses to set
         * <b>CurrentDeliveryStreamVersionId</b> in the next <a>UpdateDestination</a>
         * operation.</p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * <p>Updates the specified destination of the specified delivery stream. Note:
         * Switching between Elasticsearch and other services is not supported. For
         * Elasticsearch destination, you can only update an existing Elasticsearch
         * destination with this operation.</p> <p>This operation can be used to change the
         * destination type (for example, to replace the Amazon S3 destination with Amazon
         * Redshift) or change the parameters associated with a given destination (for
         * example, to change the bucket name of the Amazon S3 destination). The update may
         * not occur immediately. The target delivery stream remains active while the
         * configurations are updated, so data writes to the delivery stream can continue
         * during this process. The updated configurations are normally effective within a
         * few minutes.</p> <p>If the destination type is the same, Firehose merges the
         * configuration parameters specified in the <a>UpdateDestination</a> request with
         * the destination configuration that already exists on the delivery stream. If any
         * of the parameters are not specified in the update request, then the existing
         * configuration parameters are retained. For example, in the Amazon S3
         * destination, if <a>EncryptionConfiguration</a> is not specified then the
         * existing <a>EncryptionConfiguration</a> is maintained on the destination.</p>
         * <p>If the destination type is not the same, for example, changing the
         * destination from Amazon S3 to Amazon Redshift, Firehose does not merge any
         * parameters. In this case, all parameters must be specified.</p> <p>Firehose uses
         * the <b>CurrentDeliveryStreamVersionId</b> to avoid race conditions and
         * conflicting merges. This is a required field in every request and the service
         * only updates the configuration if the existing configuration matches the
         * <b>VersionId</b>. After the update is applied successfully, the <b>VersionId</b>
         * is updated, which can be retrieved with the <a>DescribeDeliveryStream</a>
         * operation. The new <b>VersionId</b> should be uses to set
         * <b>CurrentDeliveryStreamVersionId</b> in the next <a>UpdateDestination</a>
         * operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const Model::UpdateDestinationRequest& request) const;

        /**
         * <p>Updates the specified destination of the specified delivery stream. Note:
         * Switching between Elasticsearch and other services is not supported. For
         * Elasticsearch destination, you can only update an existing Elasticsearch
         * destination with this operation.</p> <p>This operation can be used to change the
         * destination type (for example, to replace the Amazon S3 destination with Amazon
         * Redshift) or change the parameters associated with a given destination (for
         * example, to change the bucket name of the Amazon S3 destination). The update may
         * not occur immediately. The target delivery stream remains active while the
         * configurations are updated, so data writes to the delivery stream can continue
         * during this process. The updated configurations are normally effective within a
         * few minutes.</p> <p>If the destination type is the same, Firehose merges the
         * configuration parameters specified in the <a>UpdateDestination</a> request with
         * the destination configuration that already exists on the delivery stream. If any
         * of the parameters are not specified in the update request, then the existing
         * configuration parameters are retained. For example, in the Amazon S3
         * destination, if <a>EncryptionConfiguration</a> is not specified then the
         * existing <a>EncryptionConfiguration</a> is maintained on the destination.</p>
         * <p>If the destination type is not the same, for example, changing the
         * destination from Amazon S3 to Amazon Redshift, Firehose does not merge any
         * parameters. In this case, all parameters must be specified.</p> <p>Firehose uses
         * the <b>CurrentDeliveryStreamVersionId</b> to avoid race conditions and
         * conflicting merges. This is a required field in every request and the service
         * only updates the configuration if the existing configuration matches the
         * <b>VersionId</b>. After the update is applied successfully, the <b>VersionId</b>
         * is updated, which can be retrieved with the <a>DescribeDeliveryStream</a>
         * operation. The new <b>VersionId</b> should be uses to set
         * <b>CurrentDeliveryStreamVersionId</b> in the next <a>UpdateDestination</a>
         * operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDestinationAsync(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateDeliveryStreamAsyncHelper(const Model::CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeliveryStreamAsyncHelper(const Model::DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeliveryStreamAsyncHelper(const Model::DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeliveryStreamsAsyncHelper(const Model::ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRecordAsyncHelper(const Model::PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRecordBatchAsyncHelper(const Model::PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDestinationAsyncHelper(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Firehose
} // namespace Aws
