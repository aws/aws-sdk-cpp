/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/StartingPosition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Additional options for the Amazon Kinesis streaming data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/KinesisStreamingSourceOptions">AWS
   * API Reference</a></p>
   */
  class KinesisStreamingSourceOptions
  {
  public:
    AWS_GLUE_API KinesisStreamingSourceOptions();
    AWS_GLUE_API KinesisStreamingSourceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API KinesisStreamingSourceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::move(value); }

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline KinesisStreamingSourceOptions& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline KinesisStreamingSourceOptions& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline KinesisStreamingSourceOptions& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}


    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline KinesisStreamingSourceOptions& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline KinesisStreamingSourceOptions& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline KinesisStreamingSourceOptions& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>An optional classification.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>An optional classification.</p>
     */
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }

    /**
     * <p>An optional classification.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>An optional classification.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>An optional classification.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>An optional classification.</p>
     */
    inline KinesisStreamingSourceOptions& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An optional classification.</p>
     */
    inline KinesisStreamingSourceOptions& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An optional classification.</p>
     */
    inline KinesisStreamingSourceOptions& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline KinesisStreamingSourceOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline KinesisStreamingSourceOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline KinesisStreamingSourceOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}


    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>, or
     * <code>"earliest"</code>. The default value is <code>"latest"</code>.</p>
     */
    inline const StartingPosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>, or
     * <code>"earliest"</code>. The default value is <code>"latest"</code>.</p>
     */
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }

    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>, or
     * <code>"earliest"</code>. The default value is <code>"latest"</code>.</p>
     */
    inline void SetStartingPosition(const StartingPosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>, or
     * <code>"earliest"</code>. The default value is <code>"latest"</code>.</p>
     */
    inline void SetStartingPosition(StartingPosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }

    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>, or
     * <code>"earliest"</code>. The default value is <code>"latest"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithStartingPosition(const StartingPosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>, or
     * <code>"earliest"</code>. The default value is <code>"latest"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithStartingPosition(StartingPosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>The maximum time spent in the job executor to fetch a record from the Kinesis
     * data stream per shard, specified in milliseconds (ms). The default value is
     * <code>1000</code>.</p>
     */
    inline long long GetMaxFetchTimeInMs() const{ return m_maxFetchTimeInMs; }

    /**
     * <p>The maximum time spent in the job executor to fetch a record from the Kinesis
     * data stream per shard, specified in milliseconds (ms). The default value is
     * <code>1000</code>.</p>
     */
    inline bool MaxFetchTimeInMsHasBeenSet() const { return m_maxFetchTimeInMsHasBeenSet; }

    /**
     * <p>The maximum time spent in the job executor to fetch a record from the Kinesis
     * data stream per shard, specified in milliseconds (ms). The default value is
     * <code>1000</code>.</p>
     */
    inline void SetMaxFetchTimeInMs(long long value) { m_maxFetchTimeInMsHasBeenSet = true; m_maxFetchTimeInMs = value; }

    /**
     * <p>The maximum time spent in the job executor to fetch a record from the Kinesis
     * data stream per shard, specified in milliseconds (ms). The default value is
     * <code>1000</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithMaxFetchTimeInMs(long long value) { SetMaxFetchTimeInMs(value); return *this;}


    /**
     * <p>The maximum number of records to fetch per shard in the Kinesis data stream.
     * The default value is <code>100000</code>.</p>
     */
    inline long long GetMaxFetchRecordsPerShard() const{ return m_maxFetchRecordsPerShard; }

    /**
     * <p>The maximum number of records to fetch per shard in the Kinesis data stream.
     * The default value is <code>100000</code>.</p>
     */
    inline bool MaxFetchRecordsPerShardHasBeenSet() const { return m_maxFetchRecordsPerShardHasBeenSet; }

    /**
     * <p>The maximum number of records to fetch per shard in the Kinesis data stream.
     * The default value is <code>100000</code>.</p>
     */
    inline void SetMaxFetchRecordsPerShard(long long value) { m_maxFetchRecordsPerShardHasBeenSet = true; m_maxFetchRecordsPerShard = value; }

    /**
     * <p>The maximum number of records to fetch per shard in the Kinesis data stream.
     * The default value is <code>100000</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithMaxFetchRecordsPerShard(long long value) { SetMaxFetchRecordsPerShard(value); return *this;}


    /**
     * <p>The maximum number of records to fetch from the Kinesis data stream in each
     * getRecords operation. The default value is <code>10000</code>.</p>
     */
    inline long long GetMaxRecordPerRead() const{ return m_maxRecordPerRead; }

    /**
     * <p>The maximum number of records to fetch from the Kinesis data stream in each
     * getRecords operation. The default value is <code>10000</code>.</p>
     */
    inline bool MaxRecordPerReadHasBeenSet() const { return m_maxRecordPerReadHasBeenSet; }

    /**
     * <p>The maximum number of records to fetch from the Kinesis data stream in each
     * getRecords operation. The default value is <code>10000</code>.</p>
     */
    inline void SetMaxRecordPerRead(long long value) { m_maxRecordPerReadHasBeenSet = true; m_maxRecordPerRead = value; }

    /**
     * <p>The maximum number of records to fetch from the Kinesis data stream in each
     * getRecords operation. The default value is <code>10000</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithMaxRecordPerRead(long long value) { SetMaxRecordPerRead(value); return *this;}


    /**
     * <p>Adds a time delay between two consecutive getRecords operations. The default
     * value is <code>"False"</code>. This option is only configurable for Glue version
     * 2.0 and above.</p>
     */
    inline bool GetAddIdleTimeBetweenReads() const{ return m_addIdleTimeBetweenReads; }

    /**
     * <p>Adds a time delay between two consecutive getRecords operations. The default
     * value is <code>"False"</code>. This option is only configurable for Glue version
     * 2.0 and above.</p>
     */
    inline bool AddIdleTimeBetweenReadsHasBeenSet() const { return m_addIdleTimeBetweenReadsHasBeenSet; }

    /**
     * <p>Adds a time delay between two consecutive getRecords operations. The default
     * value is <code>"False"</code>. This option is only configurable for Glue version
     * 2.0 and above.</p>
     */
    inline void SetAddIdleTimeBetweenReads(bool value) { m_addIdleTimeBetweenReadsHasBeenSet = true; m_addIdleTimeBetweenReads = value; }

    /**
     * <p>Adds a time delay between two consecutive getRecords operations. The default
     * value is <code>"False"</code>. This option is only configurable for Glue version
     * 2.0 and above.</p>
     */
    inline KinesisStreamingSourceOptions& WithAddIdleTimeBetweenReads(bool value) { SetAddIdleTimeBetweenReads(value); return *this;}


    /**
     * <p>The minimum time delay between two consecutive getRecords operations,
     * specified in ms. The default value is <code>1000</code>. This option is only
     * configurable for Glue version 2.0 and above.</p>
     */
    inline long long GetIdleTimeBetweenReadsInMs() const{ return m_idleTimeBetweenReadsInMs; }

    /**
     * <p>The minimum time delay between two consecutive getRecords operations,
     * specified in ms. The default value is <code>1000</code>. This option is only
     * configurable for Glue version 2.0 and above.</p>
     */
    inline bool IdleTimeBetweenReadsInMsHasBeenSet() const { return m_idleTimeBetweenReadsInMsHasBeenSet; }

    /**
     * <p>The minimum time delay between two consecutive getRecords operations,
     * specified in ms. The default value is <code>1000</code>. This option is only
     * configurable for Glue version 2.0 and above.</p>
     */
    inline void SetIdleTimeBetweenReadsInMs(long long value) { m_idleTimeBetweenReadsInMsHasBeenSet = true; m_idleTimeBetweenReadsInMs = value; }

    /**
     * <p>The minimum time delay between two consecutive getRecords operations,
     * specified in ms. The default value is <code>1000</code>. This option is only
     * configurable for Glue version 2.0 and above.</p>
     */
    inline KinesisStreamingSourceOptions& WithIdleTimeBetweenReadsInMs(long long value) { SetIdleTimeBetweenReadsInMs(value); return *this;}


    /**
     * <p>The minimum time interval between two ListShards API calls for your script to
     * consider resharding. The default value is <code>1s</code>.</p>
     */
    inline long long GetDescribeShardInterval() const{ return m_describeShardInterval; }

    /**
     * <p>The minimum time interval between two ListShards API calls for your script to
     * consider resharding. The default value is <code>1s</code>.</p>
     */
    inline bool DescribeShardIntervalHasBeenSet() const { return m_describeShardIntervalHasBeenSet; }

    /**
     * <p>The minimum time interval between two ListShards API calls for your script to
     * consider resharding. The default value is <code>1s</code>.</p>
     */
    inline void SetDescribeShardInterval(long long value) { m_describeShardIntervalHasBeenSet = true; m_describeShardInterval = value; }

    /**
     * <p>The minimum time interval between two ListShards API calls for your script to
     * consider resharding. The default value is <code>1s</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithDescribeShardInterval(long long value) { SetDescribeShardInterval(value); return *this;}


    /**
     * <p>The maximum number of retries for Kinesis Data Streams API requests. The
     * default value is <code>3</code>.</p>
     */
    inline int GetNumRetries() const{ return m_numRetries; }

    /**
     * <p>The maximum number of retries for Kinesis Data Streams API requests. The
     * default value is <code>3</code>.</p>
     */
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }

    /**
     * <p>The maximum number of retries for Kinesis Data Streams API requests. The
     * default value is <code>3</code>.</p>
     */
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }

    /**
     * <p>The maximum number of retries for Kinesis Data Streams API requests. The
     * default value is <code>3</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithNumRetries(int value) { SetNumRetries(value); return *this;}


    /**
     * <p>The cool-off time period (specified in ms) before retrying the Kinesis Data
     * Streams API call. The default value is <code>1000</code>.</p>
     */
    inline long long GetRetryIntervalMs() const{ return m_retryIntervalMs; }

    /**
     * <p>The cool-off time period (specified in ms) before retrying the Kinesis Data
     * Streams API call. The default value is <code>1000</code>.</p>
     */
    inline bool RetryIntervalMsHasBeenSet() const { return m_retryIntervalMsHasBeenSet; }

    /**
     * <p>The cool-off time period (specified in ms) before retrying the Kinesis Data
     * Streams API call. The default value is <code>1000</code>.</p>
     */
    inline void SetRetryIntervalMs(long long value) { m_retryIntervalMsHasBeenSet = true; m_retryIntervalMs = value; }

    /**
     * <p>The cool-off time period (specified in ms) before retrying the Kinesis Data
     * Streams API call. The default value is <code>1000</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRetryIntervalMs(long long value) { SetRetryIntervalMs(value); return *this;}


    /**
     * <p>The maximum cool-off time period (specified in ms) between two retries of a
     * Kinesis Data Streams API call. The default value is <code>10000</code>.</p>
     */
    inline long long GetMaxRetryIntervalMs() const{ return m_maxRetryIntervalMs; }

    /**
     * <p>The maximum cool-off time period (specified in ms) between two retries of a
     * Kinesis Data Streams API call. The default value is <code>10000</code>.</p>
     */
    inline bool MaxRetryIntervalMsHasBeenSet() const { return m_maxRetryIntervalMsHasBeenSet; }

    /**
     * <p>The maximum cool-off time period (specified in ms) between two retries of a
     * Kinesis Data Streams API call. The default value is <code>10000</code>.</p>
     */
    inline void SetMaxRetryIntervalMs(long long value) { m_maxRetryIntervalMsHasBeenSet = true; m_maxRetryIntervalMs = value; }

    /**
     * <p>The maximum cool-off time period (specified in ms) between two retries of a
     * Kinesis Data Streams API call. The default value is <code>10000</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithMaxRetryIntervalMs(long long value) { SetMaxRetryIntervalMs(value); return *this;}


    /**
     * <p>Avoids creating an empty microbatch job by checking for unread data in the
     * Kinesis data stream before the batch is started. The default value is
     * <code>"False"</code>.</p>
     */
    inline bool GetAvoidEmptyBatches() const{ return m_avoidEmptyBatches; }

    /**
     * <p>Avoids creating an empty microbatch job by checking for unread data in the
     * Kinesis data stream before the batch is started. The default value is
     * <code>"False"</code>.</p>
     */
    inline bool AvoidEmptyBatchesHasBeenSet() const { return m_avoidEmptyBatchesHasBeenSet; }

    /**
     * <p>Avoids creating an empty microbatch job by checking for unread data in the
     * Kinesis data stream before the batch is started. The default value is
     * <code>"False"</code>.</p>
     */
    inline void SetAvoidEmptyBatches(bool value) { m_avoidEmptyBatchesHasBeenSet = true; m_avoidEmptyBatches = value; }

    /**
     * <p>Avoids creating an empty microbatch job by checking for unread data in the
     * Kinesis data stream before the batch is started. The default value is
     * <code>"False"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithAvoidEmptyBatches(bool value) { SetAvoidEmptyBatches(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline KinesisStreamingSourceOptions& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline KinesisStreamingSourceOptions& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline KinesisStreamingSourceOptions& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline const Aws::String& GetRoleSessionName() const{ return m_roleSessionName; }

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline bool RoleSessionNameHasBeenSet() const { return m_roleSessionNameHasBeenSet; }

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline void SetRoleSessionName(const Aws::String& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = value; }

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline void SetRoleSessionName(Aws::String&& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = std::move(value); }

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline void SetRoleSessionName(const char* value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName.assign(value); }

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRoleSessionName(const Aws::String& value) { SetRoleSessionName(value); return *this;}

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRoleSessionName(Aws::String&& value) { SetRoleSessionName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline KinesisStreamingSourceOptions& WithRoleSessionName(const char* value) { SetRoleSessionName(value); return *this;}

  private:

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    StartingPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;

    long long m_maxFetchTimeInMs;
    bool m_maxFetchTimeInMsHasBeenSet = false;

    long long m_maxFetchRecordsPerShard;
    bool m_maxFetchRecordsPerShardHasBeenSet = false;

    long long m_maxRecordPerRead;
    bool m_maxRecordPerReadHasBeenSet = false;

    bool m_addIdleTimeBetweenReads;
    bool m_addIdleTimeBetweenReadsHasBeenSet = false;

    long long m_idleTimeBetweenReadsInMs;
    bool m_idleTimeBetweenReadsInMsHasBeenSet = false;

    long long m_describeShardInterval;
    bool m_describeShardIntervalHasBeenSet = false;

    int m_numRetries;
    bool m_numRetriesHasBeenSet = false;

    long long m_retryIntervalMs;
    bool m_retryIntervalMsHasBeenSet = false;

    long long m_maxRetryIntervalMs;
    bool m_maxRetryIntervalMsHasBeenSet = false;

    bool m_avoidEmptyBatches;
    bool m_avoidEmptyBatchesHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_roleSessionName;
    bool m_roleSessionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
