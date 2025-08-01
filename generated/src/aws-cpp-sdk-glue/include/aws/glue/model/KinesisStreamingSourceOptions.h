/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/StartingPosition.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_GLUE_API KinesisStreamingSourceOptions() = default;
    AWS_GLUE_API KinesisStreamingSourceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API KinesisStreamingSourceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the Kinesis endpoint.</p>
     */
    inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }
    template<typename EndpointUrlT = Aws::String>
    void SetEndpointUrl(EndpointUrlT&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::forward<EndpointUrlT>(value); }
    template<typename EndpointUrlT = Aws::String>
    KinesisStreamingSourceOptions& WithEndpointUrl(EndpointUrlT&& value) { SetEndpointUrl(std::forward<EndpointUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    KinesisStreamingSourceOptions& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional classification.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    KinesisStreamingSourceOptions& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    KinesisStreamingSourceOptions& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting position in the Kinesis data stream to read data from. The
     * possible values are <code>"latest"</code>, <code>"trim_horizon"</code>,
     * <code>"earliest"</code>, or a timestamp string in UTC format in the pattern
     * <code>yyyy-mm-ddTHH:MM:SSZ</code> (where <code>Z</code> represents a UTC
     * timezone offset with a +/-. For example: "2023-04-04T08:00:00-04:00"). The
     * default value is <code>"latest"</code>.</p> <p>Note: Using a value that is a
     * timestamp string in UTC format for "startingPosition" is supported only for Glue
     * version 4.0 or later.</p>
     */
    inline StartingPosition GetStartingPosition() const { return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(StartingPosition value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline KinesisStreamingSourceOptions& WithStartingPosition(StartingPosition value) { SetStartingPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time spent for the job executor to read records for the current
     * batch from the Kinesis data stream, specified in milliseconds (ms). Multiple
     * <code>GetRecords</code> API calls may be made within this time. The default
     * value is <code>1000</code>.</p>
     */
    inline long long GetMaxFetchTimeInMs() const { return m_maxFetchTimeInMs; }
    inline bool MaxFetchTimeInMsHasBeenSet() const { return m_maxFetchTimeInMsHasBeenSet; }
    inline void SetMaxFetchTimeInMs(long long value) { m_maxFetchTimeInMsHasBeenSet = true; m_maxFetchTimeInMs = value; }
    inline KinesisStreamingSourceOptions& WithMaxFetchTimeInMs(long long value) { SetMaxFetchTimeInMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to fetch per shard in the Kinesis data stream
     * per microbatch. Note: The client can exceed this limit if the streaming job has
     * already read extra records from Kinesis (in the same get-records call). If
     * <code>MaxFetchRecordsPerShard</code> needs to be strict then it needs to be a
     * multiple of <code>MaxRecordPerRead</code>. The default value is
     * <code>100000</code>.</p>
     */
    inline long long GetMaxFetchRecordsPerShard() const { return m_maxFetchRecordsPerShard; }
    inline bool MaxFetchRecordsPerShardHasBeenSet() const { return m_maxFetchRecordsPerShardHasBeenSet; }
    inline void SetMaxFetchRecordsPerShard(long long value) { m_maxFetchRecordsPerShardHasBeenSet = true; m_maxFetchRecordsPerShard = value; }
    inline KinesisStreamingSourceOptions& WithMaxFetchRecordsPerShard(long long value) { SetMaxFetchRecordsPerShard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to fetch from the Kinesis data stream in each
     * getRecords operation. The default value is <code>10000</code>.</p>
     */
    inline long long GetMaxRecordPerRead() const { return m_maxRecordPerRead; }
    inline bool MaxRecordPerReadHasBeenSet() const { return m_maxRecordPerReadHasBeenSet; }
    inline void SetMaxRecordPerRead(long long value) { m_maxRecordPerReadHasBeenSet = true; m_maxRecordPerRead = value; }
    inline KinesisStreamingSourceOptions& WithMaxRecordPerRead(long long value) { SetMaxRecordPerRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds a time delay between two consecutive getRecords operations. The default
     * value is <code>"False"</code>. This option is only configurable for Glue version
     * 2.0 and above.</p>
     */
    inline bool GetAddIdleTimeBetweenReads() const { return m_addIdleTimeBetweenReads; }
    inline bool AddIdleTimeBetweenReadsHasBeenSet() const { return m_addIdleTimeBetweenReadsHasBeenSet; }
    inline void SetAddIdleTimeBetweenReads(bool value) { m_addIdleTimeBetweenReadsHasBeenSet = true; m_addIdleTimeBetweenReads = value; }
    inline KinesisStreamingSourceOptions& WithAddIdleTimeBetweenReads(bool value) { SetAddIdleTimeBetweenReads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum time delay between two consecutive getRecords operations,
     * specified in ms. The default value is <code>1000</code>. This option is only
     * configurable for Glue version 2.0 and above.</p>
     */
    inline long long GetIdleTimeBetweenReadsInMs() const { return m_idleTimeBetweenReadsInMs; }
    inline bool IdleTimeBetweenReadsInMsHasBeenSet() const { return m_idleTimeBetweenReadsInMsHasBeenSet; }
    inline void SetIdleTimeBetweenReadsInMs(long long value) { m_idleTimeBetweenReadsInMsHasBeenSet = true; m_idleTimeBetweenReadsInMs = value; }
    inline KinesisStreamingSourceOptions& WithIdleTimeBetweenReadsInMs(long long value) { SetIdleTimeBetweenReadsInMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum time interval between two ListShards API calls for your script to
     * consider resharding. The default value is <code>1s</code>.</p>
     */
    inline long long GetDescribeShardInterval() const { return m_describeShardInterval; }
    inline bool DescribeShardIntervalHasBeenSet() const { return m_describeShardIntervalHasBeenSet; }
    inline void SetDescribeShardInterval(long long value) { m_describeShardIntervalHasBeenSet = true; m_describeShardInterval = value; }
    inline KinesisStreamingSourceOptions& WithDescribeShardInterval(long long value) { SetDescribeShardInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of retries for Kinesis Data Streams API requests. The
     * default value is <code>3</code>.</p>
     */
    inline int GetNumRetries() const { return m_numRetries; }
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }
    inline KinesisStreamingSourceOptions& WithNumRetries(int value) { SetNumRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cool-off time period (specified in ms) before retrying the Kinesis Data
     * Streams API call. The default value is <code>1000</code>.</p>
     */
    inline long long GetRetryIntervalMs() const { return m_retryIntervalMs; }
    inline bool RetryIntervalMsHasBeenSet() const { return m_retryIntervalMsHasBeenSet; }
    inline void SetRetryIntervalMs(long long value) { m_retryIntervalMsHasBeenSet = true; m_retryIntervalMs = value; }
    inline KinesisStreamingSourceOptions& WithRetryIntervalMs(long long value) { SetRetryIntervalMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum cool-off time period (specified in ms) between two retries of a
     * Kinesis Data Streams API call. The default value is <code>10000</code>.</p>
     */
    inline long long GetMaxRetryIntervalMs() const { return m_maxRetryIntervalMs; }
    inline bool MaxRetryIntervalMsHasBeenSet() const { return m_maxRetryIntervalMsHasBeenSet; }
    inline void SetMaxRetryIntervalMs(long long value) { m_maxRetryIntervalMsHasBeenSet = true; m_maxRetryIntervalMs = value; }
    inline KinesisStreamingSourceOptions& WithMaxRetryIntervalMs(long long value) { SetMaxRetryIntervalMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoids creating an empty microbatch job by checking for unread data in the
     * Kinesis data stream before the batch is started. The default value is
     * <code>"False"</code>.</p>
     */
    inline bool GetAvoidEmptyBatches() const { return m_avoidEmptyBatches; }
    inline bool AvoidEmptyBatchesHasBeenSet() const { return m_avoidEmptyBatchesHasBeenSet; }
    inline void SetAvoidEmptyBatches(bool value) { m_avoidEmptyBatchesHasBeenSet = true; m_avoidEmptyBatches = value; }
    inline KinesisStreamingSourceOptions& WithAvoidEmptyBatches(bool value) { SetAvoidEmptyBatches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    KinesisStreamingSourceOptions& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume using AWS Security Token
     * Service (AWS STS). This role must have permissions for describe or read record
     * operations for the Kinesis data stream. You must use this parameter when
     * accessing a data stream in a different account. Used in conjunction with
     * <code>"awsSTSSessionName"</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    KinesisStreamingSourceOptions& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the session assuming the role using AWS STS. You must use
     * this parameter when accessing a data stream in a different account. Used in
     * conjunction with <code>"awsSTSRoleARN"</code>.</p>
     */
    inline const Aws::String& GetRoleSessionName() const { return m_roleSessionName; }
    inline bool RoleSessionNameHasBeenSet() const { return m_roleSessionNameHasBeenSet; }
    template<typename RoleSessionNameT = Aws::String>
    void SetRoleSessionName(RoleSessionNameT&& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = std::forward<RoleSessionNameT>(value); }
    template<typename RoleSessionNameT = Aws::String>
    KinesisStreamingSourceOptions& WithRoleSessionName(RoleSessionNameT&& value) { SetRoleSessionName(std::forward<RoleSessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this option is set to 'true', the data output will contain an additional
     * column named "__src_timestamp" that indicates the time when the corresponding
     * record received by the stream. The default value is 'false'. This option is
     * supported in Glue version 4.0 or later.</p>
     */
    inline const Aws::String& GetAddRecordTimestamp() const { return m_addRecordTimestamp; }
    inline bool AddRecordTimestampHasBeenSet() const { return m_addRecordTimestampHasBeenSet; }
    template<typename AddRecordTimestampT = Aws::String>
    void SetAddRecordTimestamp(AddRecordTimestampT&& value) { m_addRecordTimestampHasBeenSet = true; m_addRecordTimestamp = std::forward<AddRecordTimestampT>(value); }
    template<typename AddRecordTimestampT = Aws::String>
    KinesisStreamingSourceOptions& WithAddRecordTimestamp(AddRecordTimestampT&& value) { SetAddRecordTimestamp(std::forward<AddRecordTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this option is set to 'true', for each batch, it will emit the metrics
     * for the duration between the oldest record received by the stream and the time
     * it arrives in Glue to CloudWatch. The metric's name is
     * "glue.driver.streaming.maxConsumerLagInMs". The default value is 'false'. This
     * option is supported in Glue version 4.0 or later.</p>
     */
    inline const Aws::String& GetEmitConsumerLagMetrics() const { return m_emitConsumerLagMetrics; }
    inline bool EmitConsumerLagMetricsHasBeenSet() const { return m_emitConsumerLagMetricsHasBeenSet; }
    template<typename EmitConsumerLagMetricsT = Aws::String>
    void SetEmitConsumerLagMetrics(EmitConsumerLagMetricsT&& value) { m_emitConsumerLagMetricsHasBeenSet = true; m_emitConsumerLagMetrics = std::forward<EmitConsumerLagMetricsT>(value); }
    template<typename EmitConsumerLagMetricsT = Aws::String>
    KinesisStreamingSourceOptions& WithEmitConsumerLagMetrics(EmitConsumerLagMetricsT&& value) { SetEmitConsumerLagMetrics(std::forward<EmitConsumerLagMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the record in the Kinesis data stream to start reading data
     * from. The possible values are a timestamp string in UTC format of the pattern
     * <code>yyyy-mm-ddTHH:MM:SSZ</code> (where Z represents a UTC timezone offset with
     * a +/-. For example: "2023-04-04T08:00:00+08:00"). </p>
     */
    inline const Aws::Utils::DateTime& GetStartingTimestamp() const { return m_startingTimestamp; }
    inline bool StartingTimestampHasBeenSet() const { return m_startingTimestampHasBeenSet; }
    template<typename StartingTimestampT = Aws::Utils::DateTime>
    void SetStartingTimestamp(StartingTimestampT&& value) { m_startingTimestampHasBeenSet = true; m_startingTimestamp = std::forward<StartingTimestampT>(value); }
    template<typename StartingTimestampT = Aws::Utils::DateTime>
    KinesisStreamingSourceOptions& WithStartingTimestamp(StartingTimestampT&& value) { SetStartingTimestamp(std::forward<StartingTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Streams enhanced fan-out
     * consumer. When specified, enables enhanced fan-out for dedicated throughput and
     * lower latency data consumption.</p>
     */
    inline const Aws::String& GetFanoutConsumerARN() const { return m_fanoutConsumerARN; }
    inline bool FanoutConsumerARNHasBeenSet() const { return m_fanoutConsumerARNHasBeenSet; }
    template<typename FanoutConsumerARNT = Aws::String>
    void SetFanoutConsumerARN(FanoutConsumerARNT&& value) { m_fanoutConsumerARNHasBeenSet = true; m_fanoutConsumerARN = std::forward<FanoutConsumerARNT>(value); }
    template<typename FanoutConsumerARNT = Aws::String>
    KinesisStreamingSourceOptions& WithFanoutConsumerARN(FanoutConsumerARNT&& value) { SetFanoutConsumerARN(std::forward<FanoutConsumerARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    StartingPosition m_startingPosition{StartingPosition::NOT_SET};
    bool m_startingPositionHasBeenSet = false;

    long long m_maxFetchTimeInMs{0};
    bool m_maxFetchTimeInMsHasBeenSet = false;

    long long m_maxFetchRecordsPerShard{0};
    bool m_maxFetchRecordsPerShardHasBeenSet = false;

    long long m_maxRecordPerRead{0};
    bool m_maxRecordPerReadHasBeenSet = false;

    bool m_addIdleTimeBetweenReads{false};
    bool m_addIdleTimeBetweenReadsHasBeenSet = false;

    long long m_idleTimeBetweenReadsInMs{0};
    bool m_idleTimeBetweenReadsInMsHasBeenSet = false;

    long long m_describeShardInterval{0};
    bool m_describeShardIntervalHasBeenSet = false;

    int m_numRetries{0};
    bool m_numRetriesHasBeenSet = false;

    long long m_retryIntervalMs{0};
    bool m_retryIntervalMsHasBeenSet = false;

    long long m_maxRetryIntervalMs{0};
    bool m_maxRetryIntervalMsHasBeenSet = false;

    bool m_avoidEmptyBatches{false};
    bool m_avoidEmptyBatchesHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_roleSessionName;
    bool m_roleSessionNameHasBeenSet = false;

    Aws::String m_addRecordTimestamp;
    bool m_addRecordTimestampHasBeenSet = false;

    Aws::String m_emitConsumerLagMetrics;
    bool m_emitConsumerLagMetricsHasBeenSet = false;

    Aws::Utils::DateTime m_startingTimestamp{};
    bool m_startingTimestampHasBeenSet = false;

    Aws::String m_fanoutConsumerARN;
    bool m_fanoutConsumerARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
