/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MessageFormatValue.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes an Apache Kafka endpoint. This
   * information includes the output format of records applied to the endpoint and
   * details of transaction and control table data information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/KafkaSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings
  {
  public:
    KafkaSettings();
    KafkaSettings(Aws::Utils::Json::JsonView jsonValue);
    KafkaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline const Aws::String& GetBroker() const{ return m_broker; }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline bool BrokerHasBeenSet() const { return m_brokerHasBeenSet; }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline void SetBroker(const Aws::String& value) { m_brokerHasBeenSet = true; m_broker = value; }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline void SetBroker(Aws::String&& value) { m_brokerHasBeenSet = true; m_broker = std::move(value); }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline void SetBroker(const char* value) { m_brokerHasBeenSet = true; m_broker.assign(value); }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline KafkaSettings& WithBroker(const Aws::String& value) { SetBroker(value); return *this;}

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline KafkaSettings& WithBroker(Aws::String&& value) { SetBroker(std::move(value)); return *this;}

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline KafkaSettings& WithBroker(const char* value) { SetBroker(value); return *this;}


    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline const MessageFormatValue& GetMessageFormat() const{ return m_messageFormat; }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline void SetMessageFormat(const MessageFormatValue& value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline void SetMessageFormat(MessageFormatValue&& value) { m_messageFormatHasBeenSet = true; m_messageFormat = std::move(value); }

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline KafkaSettings& WithMessageFormat(const MessageFormatValue& value) { SetMessageFormat(value); return *this;}

    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline KafkaSettings& WithMessageFormat(MessageFormatValue&& value) { SetMessageFormat(std::move(value)); return *this;}


    /**
     * <p>Provides detailed transaction information from the source database. This
     * information includes a commit timestamp, a log position, and values for
     * <code>transaction_id</code>, previous <code>transaction_id</code>, and
     * <code>transaction_record_id</code> (the record offset within a transaction). The
     * default is <code>false</code>.</p>
     */
    inline bool GetIncludeTransactionDetails() const{ return m_includeTransactionDetails; }

    /**
     * <p>Provides detailed transaction information from the source database. This
     * information includes a commit timestamp, a log position, and values for
     * <code>transaction_id</code>, previous <code>transaction_id</code>, and
     * <code>transaction_record_id</code> (the record offset within a transaction). The
     * default is <code>false</code>.</p>
     */
    inline bool IncludeTransactionDetailsHasBeenSet() const { return m_includeTransactionDetailsHasBeenSet; }

    /**
     * <p>Provides detailed transaction information from the source database. This
     * information includes a commit timestamp, a log position, and values for
     * <code>transaction_id</code>, previous <code>transaction_id</code>, and
     * <code>transaction_record_id</code> (the record offset within a transaction). The
     * default is <code>false</code>.</p>
     */
    inline void SetIncludeTransactionDetails(bool value) { m_includeTransactionDetailsHasBeenSet = true; m_includeTransactionDetails = value; }

    /**
     * <p>Provides detailed transaction information from the source database. This
     * information includes a commit timestamp, a log position, and values for
     * <code>transaction_id</code>, previous <code>transaction_id</code>, and
     * <code>transaction_record_id</code> (the record offset within a transaction). The
     * default is <code>false</code>.</p>
     */
    inline KafkaSettings& WithIncludeTransactionDetails(bool value) { SetIncludeTransactionDetails(value); return *this;}


    /**
     * <p>Shows the partition value within the Kafka message output, unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludePartitionValue() const{ return m_includePartitionValue; }

    /**
     * <p>Shows the partition value within the Kafka message output, unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool IncludePartitionValueHasBeenSet() const { return m_includePartitionValueHasBeenSet; }

    /**
     * <p>Shows the partition value within the Kafka message output, unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline void SetIncludePartitionValue(bool value) { m_includePartitionValueHasBeenSet = true; m_includePartitionValue = value; }

    /**
     * <p>Shows the partition value within the Kafka message output, unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline KafkaSettings& WithIncludePartitionValue(bool value) { SetIncludePartitionValue(value); return *this;}


    /**
     * <p>Prefixes schema and table names to partition values, when the partition type
     * is <code>primary-key-type</code>. Doing this increases data distribution among
     * Kafka partitions. For example, suppose that a SysBench schema has thousands of
     * tables and each table has only limited range for a primary key. In this case,
     * the same primary key is sent from thousands of tables to the same partition,
     * which causes throttling. The default is <code>false</code>.</p>
     */
    inline bool GetPartitionIncludeSchemaTable() const{ return m_partitionIncludeSchemaTable; }

    /**
     * <p>Prefixes schema and table names to partition values, when the partition type
     * is <code>primary-key-type</code>. Doing this increases data distribution among
     * Kafka partitions. For example, suppose that a SysBench schema has thousands of
     * tables and each table has only limited range for a primary key. In this case,
     * the same primary key is sent from thousands of tables to the same partition,
     * which causes throttling. The default is <code>false</code>.</p>
     */
    inline bool PartitionIncludeSchemaTableHasBeenSet() const { return m_partitionIncludeSchemaTableHasBeenSet; }

    /**
     * <p>Prefixes schema and table names to partition values, when the partition type
     * is <code>primary-key-type</code>. Doing this increases data distribution among
     * Kafka partitions. For example, suppose that a SysBench schema has thousands of
     * tables and each table has only limited range for a primary key. In this case,
     * the same primary key is sent from thousands of tables to the same partition,
     * which causes throttling. The default is <code>false</code>.</p>
     */
    inline void SetPartitionIncludeSchemaTable(bool value) { m_partitionIncludeSchemaTableHasBeenSet = true; m_partitionIncludeSchemaTable = value; }

    /**
     * <p>Prefixes schema and table names to partition values, when the partition type
     * is <code>primary-key-type</code>. Doing this increases data distribution among
     * Kafka partitions. For example, suppose that a SysBench schema has thousands of
     * tables and each table has only limited range for a primary key. In this case,
     * the same primary key is sent from thousands of tables to the same partition,
     * which causes throttling. The default is <code>false</code>.</p>
     */
    inline KafkaSettings& WithPartitionIncludeSchemaTable(bool value) { SetPartitionIncludeSchemaTable(value); return *this;}


    /**
     * <p>Includes any data definition language (DDL) operations that change the table
     * in the control data, such as <code>rename-table</code>, <code>drop-table</code>,
     * <code>add-column</code>, <code>drop-column</code>, and
     * <code>rename-column</code>. The default is <code>false</code>.</p>
     */
    inline bool GetIncludeTableAlterOperations() const{ return m_includeTableAlterOperations; }

    /**
     * <p>Includes any data definition language (DDL) operations that change the table
     * in the control data, such as <code>rename-table</code>, <code>drop-table</code>,
     * <code>add-column</code>, <code>drop-column</code>, and
     * <code>rename-column</code>. The default is <code>false</code>.</p>
     */
    inline bool IncludeTableAlterOperationsHasBeenSet() const { return m_includeTableAlterOperationsHasBeenSet; }

    /**
     * <p>Includes any data definition language (DDL) operations that change the table
     * in the control data, such as <code>rename-table</code>, <code>drop-table</code>,
     * <code>add-column</code>, <code>drop-column</code>, and
     * <code>rename-column</code>. The default is <code>false</code>.</p>
     */
    inline void SetIncludeTableAlterOperations(bool value) { m_includeTableAlterOperationsHasBeenSet = true; m_includeTableAlterOperations = value; }

    /**
     * <p>Includes any data definition language (DDL) operations that change the table
     * in the control data, such as <code>rename-table</code>, <code>drop-table</code>,
     * <code>add-column</code>, <code>drop-column</code>, and
     * <code>rename-column</code>. The default is <code>false</code>.</p>
     */
    inline KafkaSettings& WithIncludeTableAlterOperations(bool value) { SetIncludeTableAlterOperations(value); return *this;}


    /**
     * <p>Shows detailed control information for table definition, column definition,
     * and table and column changes in the Kafka message output. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludeControlDetails() const{ return m_includeControlDetails; }

    /**
     * <p>Shows detailed control information for table definition, column definition,
     * and table and column changes in the Kafka message output. The default is
     * <code>false</code>.</p>
     */
    inline bool IncludeControlDetailsHasBeenSet() const { return m_includeControlDetailsHasBeenSet; }

    /**
     * <p>Shows detailed control information for table definition, column definition,
     * and table and column changes in the Kafka message output. The default is
     * <code>false</code>.</p>
     */
    inline void SetIncludeControlDetails(bool value) { m_includeControlDetailsHasBeenSet = true; m_includeControlDetails = value; }

    /**
     * <p>Shows detailed control information for table definition, column definition,
     * and table and column changes in the Kafka message output. The default is
     * <code>false</code>.</p>
     */
    inline KafkaSettings& WithIncludeControlDetails(bool value) { SetIncludeControlDetails(value); return *this;}


    /**
     * <p>The maximum size in bytes for records created on the endpoint The default is
     * 1,000,000.</p>
     */
    inline int GetMessageMaxBytes() const{ return m_messageMaxBytes; }

    /**
     * <p>The maximum size in bytes for records created on the endpoint The default is
     * 1,000,000.</p>
     */
    inline bool MessageMaxBytesHasBeenSet() const { return m_messageMaxBytesHasBeenSet; }

    /**
     * <p>The maximum size in bytes for records created on the endpoint The default is
     * 1,000,000.</p>
     */
    inline void SetMessageMaxBytes(int value) { m_messageMaxBytesHasBeenSet = true; m_messageMaxBytes = value; }

    /**
     * <p>The maximum size in bytes for records created on the endpoint The default is
     * 1,000,000.</p>
     */
    inline KafkaSettings& WithMessageMaxBytes(int value) { SetMessageMaxBytes(value); return *this;}


    /**
     * <p>Include NULL and empty columns for records migrated to the endpoint. The
     * default is <code>false</code>.</p>
     */
    inline bool GetIncludeNullAndEmpty() const{ return m_includeNullAndEmpty; }

    /**
     * <p>Include NULL and empty columns for records migrated to the endpoint. The
     * default is <code>false</code>.</p>
     */
    inline bool IncludeNullAndEmptyHasBeenSet() const { return m_includeNullAndEmptyHasBeenSet; }

    /**
     * <p>Include NULL and empty columns for records migrated to the endpoint. The
     * default is <code>false</code>.</p>
     */
    inline void SetIncludeNullAndEmpty(bool value) { m_includeNullAndEmptyHasBeenSet = true; m_includeNullAndEmpty = value; }

    /**
     * <p>Include NULL and empty columns for records migrated to the endpoint. The
     * default is <code>false</code>.</p>
     */
    inline KafkaSettings& WithIncludeNullAndEmpty(bool value) { SetIncludeNullAndEmpty(value); return *this;}

  private:

    Aws::String m_broker;
    bool m_brokerHasBeenSet;

    Aws::String m_topic;
    bool m_topicHasBeenSet;

    MessageFormatValue m_messageFormat;
    bool m_messageFormatHasBeenSet;

    bool m_includeTransactionDetails;
    bool m_includeTransactionDetailsHasBeenSet;

    bool m_includePartitionValue;
    bool m_includePartitionValueHasBeenSet;

    bool m_partitionIncludeSchemaTable;
    bool m_partitionIncludeSchemaTableHasBeenSet;

    bool m_includeTableAlterOperations;
    bool m_includeTableAlterOperationsHasBeenSet;

    bool m_includeControlDetails;
    bool m_includeControlDetailsHasBeenSet;

    int m_messageMaxBytes;
    bool m_messageMaxBytesHasBeenSet;

    bool m_includeNullAndEmpty;
    bool m_includeNullAndEmptyHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
