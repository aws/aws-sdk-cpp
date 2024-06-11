/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Additional options for streaming.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/KafkaStreamingSourceOptions">AWS
   * API Reference</a></p>
   */
  class KafkaStreamingSourceOptions
  {
  public:
    AWS_GLUE_API KafkaStreamingSourceOptions();
    AWS_GLUE_API KafkaStreamingSourceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API KafkaStreamingSourceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline const Aws::String& GetBootstrapServers() const{ return m_bootstrapServers; }
    inline bool BootstrapServersHasBeenSet() const { return m_bootstrapServersHasBeenSet; }
    inline void SetBootstrapServers(const Aws::String& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = value; }
    inline void SetBootstrapServers(Aws::String&& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = std::move(value); }
    inline void SetBootstrapServers(const char* value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers.assign(value); }
    inline KafkaStreamingSourceOptions& WithBootstrapServers(const Aws::String& value) { SetBootstrapServers(value); return *this;}
    inline KafkaStreamingSourceOptions& WithBootstrapServers(Aws::String&& value) { SetBootstrapServers(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithBootstrapServers(const char* value) { SetBootstrapServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline const Aws::String& GetSecurityProtocol() const{ return m_securityProtocol; }
    inline bool SecurityProtocolHasBeenSet() const { return m_securityProtocolHasBeenSet; }
    inline void SetSecurityProtocol(const Aws::String& value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = value; }
    inline void SetSecurityProtocol(Aws::String&& value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = std::move(value); }
    inline void SetSecurityProtocol(const char* value) { m_securityProtocolHasBeenSet = true; m_securityProtocol.assign(value); }
    inline KafkaStreamingSourceOptions& WithSecurityProtocol(const Aws::String& value) { SetSecurityProtocol(value); return *this;}
    inline KafkaStreamingSourceOptions& WithSecurityProtocol(Aws::String&& value) { SetSecurityProtocol(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithSecurityProtocol(const char* value) { SetSecurityProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline KafkaStreamingSourceOptions& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline KafkaStreamingSourceOptions& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }
    inline KafkaStreamingSourceOptions& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}
    inline KafkaStreamingSourceOptions& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithTopicName(const char* value) { SetTopicName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline const Aws::String& GetAssign() const{ return m_assign; }
    inline bool AssignHasBeenSet() const { return m_assignHasBeenSet; }
    inline void SetAssign(const Aws::String& value) { m_assignHasBeenSet = true; m_assign = value; }
    inline void SetAssign(Aws::String&& value) { m_assignHasBeenSet = true; m_assign = std::move(value); }
    inline void SetAssign(const char* value) { m_assignHasBeenSet = true; m_assign.assign(value); }
    inline KafkaStreamingSourceOptions& WithAssign(const Aws::String& value) { SetAssign(value); return *this;}
    inline KafkaStreamingSourceOptions& WithAssign(Aws::String&& value) { SetAssign(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithAssign(const char* value) { SetAssign(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline const Aws::String& GetSubscribePattern() const{ return m_subscribePattern; }
    inline bool SubscribePatternHasBeenSet() const { return m_subscribePatternHasBeenSet; }
    inline void SetSubscribePattern(const Aws::String& value) { m_subscribePatternHasBeenSet = true; m_subscribePattern = value; }
    inline void SetSubscribePattern(Aws::String&& value) { m_subscribePatternHasBeenSet = true; m_subscribePattern = std::move(value); }
    inline void SetSubscribePattern(const char* value) { m_subscribePatternHasBeenSet = true; m_subscribePattern.assign(value); }
    inline KafkaStreamingSourceOptions& WithSubscribePattern(const Aws::String& value) { SetSubscribePattern(value); return *this;}
    inline KafkaStreamingSourceOptions& WithSubscribePattern(Aws::String&& value) { SetSubscribePattern(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithSubscribePattern(const char* value) { SetSubscribePattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional classification.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }
    inline KafkaStreamingSourceOptions& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline KafkaStreamingSourceOptions& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }
    inline KafkaStreamingSourceOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}
    inline KafkaStreamingSourceOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline const Aws::String& GetStartingOffsets() const{ return m_startingOffsets; }
    inline bool StartingOffsetsHasBeenSet() const { return m_startingOffsetsHasBeenSet; }
    inline void SetStartingOffsets(const Aws::String& value) { m_startingOffsetsHasBeenSet = true; m_startingOffsets = value; }
    inline void SetStartingOffsets(Aws::String&& value) { m_startingOffsetsHasBeenSet = true; m_startingOffsets = std::move(value); }
    inline void SetStartingOffsets(const char* value) { m_startingOffsetsHasBeenSet = true; m_startingOffsets.assign(value); }
    inline KafkaStreamingSourceOptions& WithStartingOffsets(const Aws::String& value) { SetStartingOffsets(value); return *this;}
    inline KafkaStreamingSourceOptions& WithStartingOffsets(Aws::String&& value) { SetStartingOffsets(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithStartingOffsets(const char* value) { SetStartingOffsets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline const Aws::String& GetEndingOffsets() const{ return m_endingOffsets; }
    inline bool EndingOffsetsHasBeenSet() const { return m_endingOffsetsHasBeenSet; }
    inline void SetEndingOffsets(const Aws::String& value) { m_endingOffsetsHasBeenSet = true; m_endingOffsets = value; }
    inline void SetEndingOffsets(Aws::String&& value) { m_endingOffsetsHasBeenSet = true; m_endingOffsets = std::move(value); }
    inline void SetEndingOffsets(const char* value) { m_endingOffsetsHasBeenSet = true; m_endingOffsets.assign(value); }
    inline KafkaStreamingSourceOptions& WithEndingOffsets(const Aws::String& value) { SetEndingOffsets(value); return *this;}
    inline KafkaStreamingSourceOptions& WithEndingOffsets(Aws::String&& value) { SetEndingOffsets(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithEndingOffsets(const char* value) { SetEndingOffsets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout in milliseconds to poll data from Kafka in Spark job executors.
     * The default value is <code>512</code>.</p>
     */
    inline long long GetPollTimeoutMs() const{ return m_pollTimeoutMs; }
    inline bool PollTimeoutMsHasBeenSet() const { return m_pollTimeoutMsHasBeenSet; }
    inline void SetPollTimeoutMs(long long value) { m_pollTimeoutMsHasBeenSet = true; m_pollTimeoutMs = value; }
    inline KafkaStreamingSourceOptions& WithPollTimeoutMs(long long value) { SetPollTimeoutMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times to retry before failing to fetch Kafka offsets. The
     * default value is <code>3</code>.</p>
     */
    inline int GetNumRetries() const{ return m_numRetries; }
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }
    inline KafkaStreamingSourceOptions& WithNumRetries(int value) { SetNumRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds to wait before retrying to fetch Kafka offsets. The
     * default value is <code>10</code>.</p>
     */
    inline long long GetRetryIntervalMs() const{ return m_retryIntervalMs; }
    inline bool RetryIntervalMsHasBeenSet() const { return m_retryIntervalMsHasBeenSet; }
    inline void SetRetryIntervalMs(long long value) { m_retryIntervalMsHasBeenSet = true; m_retryIntervalMs = value; }
    inline KafkaStreamingSourceOptions& WithRetryIntervalMs(long long value) { SetRetryIntervalMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate limit on the maximum number of offsets that are processed per
     * trigger interval. The specified total number of offsets is proportionally split
     * across <code>topicPartitions</code> of different volumes. The default value is
     * null, which means that the consumer reads all offsets until the known latest
     * offset.</p>
     */
    inline long long GetMaxOffsetsPerTrigger() const{ return m_maxOffsetsPerTrigger; }
    inline bool MaxOffsetsPerTriggerHasBeenSet() const { return m_maxOffsetsPerTriggerHasBeenSet; }
    inline void SetMaxOffsetsPerTrigger(long long value) { m_maxOffsetsPerTriggerHasBeenSet = true; m_maxOffsetsPerTrigger = value; }
    inline KafkaStreamingSourceOptions& WithMaxOffsetsPerTrigger(long long value) { SetMaxOffsetsPerTrigger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired minimum number of partitions to read from Kafka. The default
     * value is null, which means that the number of spark partitions is equal to the
     * number of Kafka partitions.</p>
     */
    inline int GetMinPartitions() const{ return m_minPartitions; }
    inline bool MinPartitionsHasBeenSet() const { return m_minPartitionsHasBeenSet; }
    inline void SetMinPartitions(int value) { m_minPartitionsHasBeenSet = true; m_minPartitions = value; }
    inline KafkaStreamingSourceOptions& WithMinPartitions(int value) { SetMinPartitions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to include the Kafka headers. When the option is set to "true", the
     * data output will contain an additional column named
     * "glue_streaming_kafka_headers" with type <code>Array[Struct(key: String, value:
     * String)]</code>. The default value is "false". This option is available in Glue
     * version 3.0 or later only.</p>
     */
    inline bool GetIncludeHeaders() const{ return m_includeHeaders; }
    inline bool IncludeHeadersHasBeenSet() const { return m_includeHeadersHasBeenSet; }
    inline void SetIncludeHeaders(bool value) { m_includeHeadersHasBeenSet = true; m_includeHeaders = value; }
    inline KafkaStreamingSourceOptions& WithIncludeHeaders(bool value) { SetIncludeHeaders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this option is set to 'true', the data output will contain an additional
     * column named "__src_timestamp" that indicates the time when the corresponding
     * record received by the topic. The default value is 'false'. This option is
     * supported in Glue version 4.0 or later.</p>
     */
    inline const Aws::String& GetAddRecordTimestamp() const{ return m_addRecordTimestamp; }
    inline bool AddRecordTimestampHasBeenSet() const { return m_addRecordTimestampHasBeenSet; }
    inline void SetAddRecordTimestamp(const Aws::String& value) { m_addRecordTimestampHasBeenSet = true; m_addRecordTimestamp = value; }
    inline void SetAddRecordTimestamp(Aws::String&& value) { m_addRecordTimestampHasBeenSet = true; m_addRecordTimestamp = std::move(value); }
    inline void SetAddRecordTimestamp(const char* value) { m_addRecordTimestampHasBeenSet = true; m_addRecordTimestamp.assign(value); }
    inline KafkaStreamingSourceOptions& WithAddRecordTimestamp(const Aws::String& value) { SetAddRecordTimestamp(value); return *this;}
    inline KafkaStreamingSourceOptions& WithAddRecordTimestamp(Aws::String&& value) { SetAddRecordTimestamp(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithAddRecordTimestamp(const char* value) { SetAddRecordTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this option is set to 'true', for each batch, it will emit the metrics
     * for the duration between the oldest record received by the topic and the time it
     * arrives in Glue to CloudWatch. The metric's name is
     * "glue.driver.streaming.maxConsumerLagInMs". The default value is 'false'. This
     * option is supported in Glue version 4.0 or later.</p>
     */
    inline const Aws::String& GetEmitConsumerLagMetrics() const{ return m_emitConsumerLagMetrics; }
    inline bool EmitConsumerLagMetricsHasBeenSet() const { return m_emitConsumerLagMetricsHasBeenSet; }
    inline void SetEmitConsumerLagMetrics(const Aws::String& value) { m_emitConsumerLagMetricsHasBeenSet = true; m_emitConsumerLagMetrics = value; }
    inline void SetEmitConsumerLagMetrics(Aws::String&& value) { m_emitConsumerLagMetricsHasBeenSet = true; m_emitConsumerLagMetrics = std::move(value); }
    inline void SetEmitConsumerLagMetrics(const char* value) { m_emitConsumerLagMetricsHasBeenSet = true; m_emitConsumerLagMetrics.assign(value); }
    inline KafkaStreamingSourceOptions& WithEmitConsumerLagMetrics(const Aws::String& value) { SetEmitConsumerLagMetrics(value); return *this;}
    inline KafkaStreamingSourceOptions& WithEmitConsumerLagMetrics(Aws::String&& value) { SetEmitConsumerLagMetrics(std::move(value)); return *this;}
    inline KafkaStreamingSourceOptions& WithEmitConsumerLagMetrics(const char* value) { SetEmitConsumerLagMetrics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the record in the Kafka topic to start reading data from.
     * The possible values are a timestamp string in UTC format of the pattern
     * <code>yyyy-mm-ddTHH:MM:SSZ</code> (where Z represents a UTC timezone offset with
     * a +/-. For example: "2023-04-04T08:00:00+08:00"). </p> <p>Only one of
     * <code>StartingTimestamp</code> or <code>StartingOffsets</code> must be set.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingTimestamp() const{ return m_startingTimestamp; }
    inline bool StartingTimestampHasBeenSet() const { return m_startingTimestampHasBeenSet; }
    inline void SetStartingTimestamp(const Aws::Utils::DateTime& value) { m_startingTimestampHasBeenSet = true; m_startingTimestamp = value; }
    inline void SetStartingTimestamp(Aws::Utils::DateTime&& value) { m_startingTimestampHasBeenSet = true; m_startingTimestamp = std::move(value); }
    inline KafkaStreamingSourceOptions& WithStartingTimestamp(const Aws::Utils::DateTime& value) { SetStartingTimestamp(value); return *this;}
    inline KafkaStreamingSourceOptions& WithStartingTimestamp(Aws::Utils::DateTime&& value) { SetStartingTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bootstrapServers;
    bool m_bootstrapServersHasBeenSet = false;

    Aws::String m_securityProtocol;
    bool m_securityProtocolHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_assign;
    bool m_assignHasBeenSet = false;

    Aws::String m_subscribePattern;
    bool m_subscribePatternHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::String m_startingOffsets;
    bool m_startingOffsetsHasBeenSet = false;

    Aws::String m_endingOffsets;
    bool m_endingOffsetsHasBeenSet = false;

    long long m_pollTimeoutMs;
    bool m_pollTimeoutMsHasBeenSet = false;

    int m_numRetries;
    bool m_numRetriesHasBeenSet = false;

    long long m_retryIntervalMs;
    bool m_retryIntervalMsHasBeenSet = false;

    long long m_maxOffsetsPerTrigger;
    bool m_maxOffsetsPerTriggerHasBeenSet = false;

    int m_minPartitions;
    bool m_minPartitionsHasBeenSet = false;

    bool m_includeHeaders;
    bool m_includeHeadersHasBeenSet = false;

    Aws::String m_addRecordTimestamp;
    bool m_addRecordTimestampHasBeenSet = false;

    Aws::String m_emitConsumerLagMetrics;
    bool m_emitConsumerLagMetricsHasBeenSet = false;

    Aws::Utils::DateTime m_startingTimestamp;
    bool m_startingTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
