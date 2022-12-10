/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline const Aws::String& GetBootstrapServers() const{ return m_bootstrapServers; }

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline bool BootstrapServersHasBeenSet() const { return m_bootstrapServersHasBeenSet; }

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline void SetBootstrapServers(const Aws::String& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = value; }

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline void SetBootstrapServers(Aws::String&& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = std::move(value); }

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline void SetBootstrapServers(const char* value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers.assign(value); }

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline KafkaStreamingSourceOptions& WithBootstrapServers(const Aws::String& value) { SetBootstrapServers(value); return *this;}

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline KafkaStreamingSourceOptions& WithBootstrapServers(Aws::String&& value) { SetBootstrapServers(std::move(value)); return *this;}

    /**
     * <p>A list of bootstrap server URLs, for example, as
     * <code>b-1.vpc-test-2.o4q88o.c6.kafka.us-east-1.amazonaws.com:9094</code>. This
     * option must be specified in the API call or defined in the table metadata in the
     * Data Catalog.</p>
     */
    inline KafkaStreamingSourceOptions& WithBootstrapServers(const char* value) { SetBootstrapServers(value); return *this;}


    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline const Aws::String& GetSecurityProtocol() const{ return m_securityProtocol; }

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline bool SecurityProtocolHasBeenSet() const { return m_securityProtocolHasBeenSet; }

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline void SetSecurityProtocol(const Aws::String& value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = value; }

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline void SetSecurityProtocol(Aws::String&& value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = std::move(value); }

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline void SetSecurityProtocol(const char* value) { m_securityProtocolHasBeenSet = true; m_securityProtocol.assign(value); }

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithSecurityProtocol(const Aws::String& value) { SetSecurityProtocol(value); return *this;}

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithSecurityProtocol(Aws::String&& value) { SetSecurityProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol used to communicate with brokers. The possible values are
     * <code>"SSL"</code> or <code>"PLAINTEXT"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithSecurityProtocol(const char* value) { SetSecurityProtocol(value); return *this;}


    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline KafkaStreamingSourceOptions& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline KafkaStreamingSourceOptions& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline KafkaStreamingSourceOptions& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The topic name as specified in Apache Kafka. You must specify at least one of
     * <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithTopicName(const char* value) { SetTopicName(value); return *this;}


    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline const Aws::String& GetAssign() const{ return m_assign; }

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline bool AssignHasBeenSet() const { return m_assignHasBeenSet; }

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetAssign(const Aws::String& value) { m_assignHasBeenSet = true; m_assign = value; }

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetAssign(Aws::String&& value) { m_assignHasBeenSet = true; m_assign = std::move(value); }

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetAssign(const char* value) { m_assignHasBeenSet = true; m_assign.assign(value); }

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithAssign(const Aws::String& value) { SetAssign(value); return *this;}

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithAssign(Aws::String&& value) { SetAssign(std::move(value)); return *this;}

    /**
     * <p>The specific <code>TopicPartitions</code> to consume. You must specify at
     * least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithAssign(const char* value) { SetAssign(value); return *this;}


    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline const Aws::String& GetSubscribePattern() const{ return m_subscribePattern; }

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline bool SubscribePatternHasBeenSet() const { return m_subscribePatternHasBeenSet; }

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetSubscribePattern(const Aws::String& value) { m_subscribePatternHasBeenSet = true; m_subscribePattern = value; }

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetSubscribePattern(Aws::String&& value) { m_subscribePatternHasBeenSet = true; m_subscribePattern = std::move(value); }

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline void SetSubscribePattern(const char* value) { m_subscribePatternHasBeenSet = true; m_subscribePattern.assign(value); }

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithSubscribePattern(const Aws::String& value) { SetSubscribePattern(value); return *this;}

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithSubscribePattern(Aws::String&& value) { SetSubscribePattern(std::move(value)); return *this;}

    /**
     * <p>A Java regex string that identifies the topic list to subscribe to. You must
     * specify at least one of <code>"topicName"</code>, <code>"assign"</code> or
     * <code>"subscribePattern"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithSubscribePattern(const char* value) { SetSubscribePattern(value); return *this;}


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
    inline KafkaStreamingSourceOptions& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An optional classification.</p>
     */
    inline KafkaStreamingSourceOptions& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An optional classification.</p>
     */
    inline KafkaStreamingSourceOptions& WithClassification(const char* value) { SetClassification(value); return *this;}


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
    inline KafkaStreamingSourceOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline KafkaStreamingSourceOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>Specifies the delimiter character.</p>
     */
    inline KafkaStreamingSourceOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}


    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline const Aws::String& GetStartingOffsets() const{ return m_startingOffsets; }

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline bool StartingOffsetsHasBeenSet() const { return m_startingOffsetsHasBeenSet; }

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline void SetStartingOffsets(const Aws::String& value) { m_startingOffsetsHasBeenSet = true; m_startingOffsets = value; }

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline void SetStartingOffsets(Aws::String&& value) { m_startingOffsetsHasBeenSet = true; m_startingOffsets = std::move(value); }

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline void SetStartingOffsets(const char* value) { m_startingOffsetsHasBeenSet = true; m_startingOffsets.assign(value); }

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithStartingOffsets(const Aws::String& value) { SetStartingOffsets(value); return *this;}

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithStartingOffsets(Aws::String&& value) { SetStartingOffsets(std::move(value)); return *this;}

    /**
     * <p>The starting position in the Kafka topic to read data from. The possible
     * values are <code>"earliest"</code> or <code>"latest"</code>. The default value
     * is <code>"latest"</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithStartingOffsets(const char* value) { SetStartingOffsets(value); return *this;}


    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline const Aws::String& GetEndingOffsets() const{ return m_endingOffsets; }

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline bool EndingOffsetsHasBeenSet() const { return m_endingOffsetsHasBeenSet; }

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline void SetEndingOffsets(const Aws::String& value) { m_endingOffsetsHasBeenSet = true; m_endingOffsets = value; }

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline void SetEndingOffsets(Aws::String&& value) { m_endingOffsetsHasBeenSet = true; m_endingOffsets = std::move(value); }

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline void SetEndingOffsets(const char* value) { m_endingOffsetsHasBeenSet = true; m_endingOffsets.assign(value); }

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithEndingOffsets(const Aws::String& value) { SetEndingOffsets(value); return *this;}

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithEndingOffsets(Aws::String&& value) { SetEndingOffsets(std::move(value)); return *this;}

    /**
     * <p>The end point when a batch query is ended. Possible values are either
     * <code>"latest"</code> or a JSON string that specifies an ending offset for each
     * <code>TopicPartition</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithEndingOffsets(const char* value) { SetEndingOffsets(value); return *this;}


    /**
     * <p>The timeout in milliseconds to poll data from Kafka in Spark job executors.
     * The default value is <code>512</code>.</p>
     */
    inline long long GetPollTimeoutMs() const{ return m_pollTimeoutMs; }

    /**
     * <p>The timeout in milliseconds to poll data from Kafka in Spark job executors.
     * The default value is <code>512</code>.</p>
     */
    inline bool PollTimeoutMsHasBeenSet() const { return m_pollTimeoutMsHasBeenSet; }

    /**
     * <p>The timeout in milliseconds to poll data from Kafka in Spark job executors.
     * The default value is <code>512</code>.</p>
     */
    inline void SetPollTimeoutMs(long long value) { m_pollTimeoutMsHasBeenSet = true; m_pollTimeoutMs = value; }

    /**
     * <p>The timeout in milliseconds to poll data from Kafka in Spark job executors.
     * The default value is <code>512</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithPollTimeoutMs(long long value) { SetPollTimeoutMs(value); return *this;}


    /**
     * <p>The number of times to retry before failing to fetch Kafka offsets. The
     * default value is <code>3</code>.</p>
     */
    inline int GetNumRetries() const{ return m_numRetries; }

    /**
     * <p>The number of times to retry before failing to fetch Kafka offsets. The
     * default value is <code>3</code>.</p>
     */
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }

    /**
     * <p>The number of times to retry before failing to fetch Kafka offsets. The
     * default value is <code>3</code>.</p>
     */
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }

    /**
     * <p>The number of times to retry before failing to fetch Kafka offsets. The
     * default value is <code>3</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithNumRetries(int value) { SetNumRetries(value); return *this;}


    /**
     * <p>The time in milliseconds to wait before retrying to fetch Kafka offsets. The
     * default value is <code>10</code>.</p>
     */
    inline long long GetRetryIntervalMs() const{ return m_retryIntervalMs; }

    /**
     * <p>The time in milliseconds to wait before retrying to fetch Kafka offsets. The
     * default value is <code>10</code>.</p>
     */
    inline bool RetryIntervalMsHasBeenSet() const { return m_retryIntervalMsHasBeenSet; }

    /**
     * <p>The time in milliseconds to wait before retrying to fetch Kafka offsets. The
     * default value is <code>10</code>.</p>
     */
    inline void SetRetryIntervalMs(long long value) { m_retryIntervalMsHasBeenSet = true; m_retryIntervalMs = value; }

    /**
     * <p>The time in milliseconds to wait before retrying to fetch Kafka offsets. The
     * default value is <code>10</code>.</p>
     */
    inline KafkaStreamingSourceOptions& WithRetryIntervalMs(long long value) { SetRetryIntervalMs(value); return *this;}


    /**
     * <p>The rate limit on the maximum number of offsets that are processed per
     * trigger interval. The specified total number of offsets is proportionally split
     * across <code>topicPartitions</code> of different volumes. The default value is
     * null, which means that the consumer reads all offsets until the known latest
     * offset.</p>
     */
    inline long long GetMaxOffsetsPerTrigger() const{ return m_maxOffsetsPerTrigger; }

    /**
     * <p>The rate limit on the maximum number of offsets that are processed per
     * trigger interval. The specified total number of offsets is proportionally split
     * across <code>topicPartitions</code> of different volumes. The default value is
     * null, which means that the consumer reads all offsets until the known latest
     * offset.</p>
     */
    inline bool MaxOffsetsPerTriggerHasBeenSet() const { return m_maxOffsetsPerTriggerHasBeenSet; }

    /**
     * <p>The rate limit on the maximum number of offsets that are processed per
     * trigger interval. The specified total number of offsets is proportionally split
     * across <code>topicPartitions</code> of different volumes. The default value is
     * null, which means that the consumer reads all offsets until the known latest
     * offset.</p>
     */
    inline void SetMaxOffsetsPerTrigger(long long value) { m_maxOffsetsPerTriggerHasBeenSet = true; m_maxOffsetsPerTrigger = value; }

    /**
     * <p>The rate limit on the maximum number of offsets that are processed per
     * trigger interval. The specified total number of offsets is proportionally split
     * across <code>topicPartitions</code> of different volumes. The default value is
     * null, which means that the consumer reads all offsets until the known latest
     * offset.</p>
     */
    inline KafkaStreamingSourceOptions& WithMaxOffsetsPerTrigger(long long value) { SetMaxOffsetsPerTrigger(value); return *this;}


    /**
     * <p>The desired minimum number of partitions to read from Kafka. The default
     * value is null, which means that the number of spark partitions is equal to the
     * number of Kafka partitions.</p>
     */
    inline int GetMinPartitions() const{ return m_minPartitions; }

    /**
     * <p>The desired minimum number of partitions to read from Kafka. The default
     * value is null, which means that the number of spark partitions is equal to the
     * number of Kafka partitions.</p>
     */
    inline bool MinPartitionsHasBeenSet() const { return m_minPartitionsHasBeenSet; }

    /**
     * <p>The desired minimum number of partitions to read from Kafka. The default
     * value is null, which means that the number of spark partitions is equal to the
     * number of Kafka partitions.</p>
     */
    inline void SetMinPartitions(int value) { m_minPartitionsHasBeenSet = true; m_minPartitions = value; }

    /**
     * <p>The desired minimum number of partitions to read from Kafka. The default
     * value is null, which means that the number of spark partitions is equal to the
     * number of Kafka partitions.</p>
     */
    inline KafkaStreamingSourceOptions& WithMinPartitions(int value) { SetMinPartitions(value); return *this;}

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
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
