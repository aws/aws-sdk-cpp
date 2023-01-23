/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MessageFormatValue.h>
#include <aws/dms/model/KafkaSecurityProtocol.h>
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
  class KafkaSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings();
    AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline const Aws::String& GetBroker() const{ return m_broker; }

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline bool BrokerHasBeenSet() const { return m_brokerHasBeenSet; }

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline void SetBroker(const Aws::String& value) { m_brokerHasBeenSet = true; m_broker = value; }

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline void SetBroker(Aws::String&& value) { m_brokerHasBeenSet = true; m_broker = std::move(value); }

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline void SetBroker(const char* value) { m_brokerHasBeenSet = true; m_broker.assign(value); }

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline KafkaSettings& WithBroker(const Aws::String& value) { SetBroker(value); return *this;}

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline KafkaSettings& WithBroker(Aws::String&& value) { SetBroker(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of one or more broker locations in your Kafka cluster
     * that host your Kafka instance. Specify each broker location in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>. For more
     * information and examples of specifying a list of broker locations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Kafka.html">Using
     * Apache Kafka as a target for Database Migration Service</a> in the <i>Database
     * Migration Service User Guide</i>. </p>
     */
    inline KafkaSettings& WithBroker(const char* value) { SetBroker(value); return *this;}


    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
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
     * <p>Shows the partition value within the Kafka message output unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludePartitionValue() const{ return m_includePartitionValue; }

    /**
     * <p>Shows the partition value within the Kafka message output unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool IncludePartitionValueHasBeenSet() const { return m_includePartitionValueHasBeenSet; }

    /**
     * <p>Shows the partition value within the Kafka message output unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline void SetIncludePartitionValue(bool value) { m_includePartitionValueHasBeenSet = true; m_includePartitionValue = value; }

    /**
     * <p>Shows the partition value within the Kafka message output unless the
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


    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline const KafkaSecurityProtocol& GetSecurityProtocol() const{ return m_securityProtocol; }

    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline bool SecurityProtocolHasBeenSet() const { return m_securityProtocolHasBeenSet; }

    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline void SetSecurityProtocol(const KafkaSecurityProtocol& value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = value; }

    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline void SetSecurityProtocol(KafkaSecurityProtocol&& value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = std::move(value); }

    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline KafkaSettings& WithSecurityProtocol(const KafkaSecurityProtocol& value) { SetSecurityProtocol(value); return *this;}

    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline KafkaSettings& WithSecurityProtocol(KafkaSecurityProtocol&& value) { SetSecurityProtocol(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline const Aws::String& GetSslClientCertificateArn() const{ return m_sslClientCertificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline bool SslClientCertificateArnHasBeenSet() const { return m_sslClientCertificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline void SetSslClientCertificateArn(const Aws::String& value) { m_sslClientCertificateArnHasBeenSet = true; m_sslClientCertificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline void SetSslClientCertificateArn(Aws::String&& value) { m_sslClientCertificateArnHasBeenSet = true; m_sslClientCertificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline void SetSslClientCertificateArn(const char* value) { m_sslClientCertificateArnHasBeenSet = true; m_sslClientCertificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientCertificateArn(const Aws::String& value) { SetSslClientCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientCertificateArn(Aws::String&& value) { SetSslClientCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientCertificateArn(const char* value) { SetSslClientCertificateArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline const Aws::String& GetSslClientKeyArn() const{ return m_sslClientKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline bool SslClientKeyArnHasBeenSet() const { return m_sslClientKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline void SetSslClientKeyArn(const Aws::String& value) { m_sslClientKeyArnHasBeenSet = true; m_sslClientKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline void SetSslClientKeyArn(Aws::String&& value) { m_sslClientKeyArnHasBeenSet = true; m_sslClientKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline void SetSslClientKeyArn(const char* value) { m_sslClientKeyArnHasBeenSet = true; m_sslClientKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientKeyArn(const Aws::String& value) { SetSslClientKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientKeyArn(Aws::String&& value) { SetSslClientKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientKeyArn(const char* value) { SetSslClientKeyArn(value); return *this;}


    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline const Aws::String& GetSslClientKeyPassword() const{ return m_sslClientKeyPassword; }

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline bool SslClientKeyPasswordHasBeenSet() const { return m_sslClientKeyPasswordHasBeenSet; }

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline void SetSslClientKeyPassword(const Aws::String& value) { m_sslClientKeyPasswordHasBeenSet = true; m_sslClientKeyPassword = value; }

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline void SetSslClientKeyPassword(Aws::String&& value) { m_sslClientKeyPasswordHasBeenSet = true; m_sslClientKeyPassword = std::move(value); }

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline void SetSslClientKeyPassword(const char* value) { m_sslClientKeyPasswordHasBeenSet = true; m_sslClientKeyPassword.assign(value); }

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientKeyPassword(const Aws::String& value) { SetSslClientKeyPassword(value); return *this;}

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientKeyPassword(Aws::String&& value) { SetSslClientKeyPassword(std::move(value)); return *this;}

    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline KafkaSettings& WithSslClientKeyPassword(const char* value) { SetSslClientKeyPassword(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline const Aws::String& GetSslCaCertificateArn() const{ return m_sslCaCertificateArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline bool SslCaCertificateArnHasBeenSet() const { return m_sslCaCertificateArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline void SetSslCaCertificateArn(const Aws::String& value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline void SetSslCaCertificateArn(Aws::String&& value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline void SetSslCaCertificateArn(const char* value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslCaCertificateArn(const Aws::String& value) { SetSslCaCertificateArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslCaCertificateArn(Aws::String&& value) { SetSslCaCertificateArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline KafkaSettings& WithSslCaCertificateArn(const char* value) { SetSslCaCertificateArn(value); return *this;}


    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline const Aws::String& GetSaslUsername() const{ return m_saslUsername; }

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline bool SaslUsernameHasBeenSet() const { return m_saslUsernameHasBeenSet; }

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline void SetSaslUsername(const Aws::String& value) { m_saslUsernameHasBeenSet = true; m_saslUsername = value; }

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline void SetSaslUsername(Aws::String&& value) { m_saslUsernameHasBeenSet = true; m_saslUsername = std::move(value); }

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline void SetSaslUsername(const char* value) { m_saslUsernameHasBeenSet = true; m_saslUsername.assign(value); }

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline KafkaSettings& WithSaslUsername(const Aws::String& value) { SetSaslUsername(value); return *this;}

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline KafkaSettings& WithSaslUsername(Aws::String&& value) { SetSaslUsername(std::move(value)); return *this;}

    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline KafkaSettings& WithSaslUsername(const char* value) { SetSaslUsername(value); return *this;}


    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline const Aws::String& GetSaslPassword() const{ return m_saslPassword; }

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline bool SaslPasswordHasBeenSet() const { return m_saslPasswordHasBeenSet; }

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline void SetSaslPassword(const Aws::String& value) { m_saslPasswordHasBeenSet = true; m_saslPassword = value; }

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline void SetSaslPassword(Aws::String&& value) { m_saslPasswordHasBeenSet = true; m_saslPassword = std::move(value); }

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline void SetSaslPassword(const char* value) { m_saslPasswordHasBeenSet = true; m_saslPassword.assign(value); }

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline KafkaSettings& WithSaslPassword(const Aws::String& value) { SetSaslPassword(value); return *this;}

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline KafkaSettings& WithSaslPassword(Aws::String&& value) { SetSaslPassword(std::move(value)); return *this;}

    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline KafkaSettings& WithSaslPassword(const char* value) { SetSaslPassword(value); return *this;}


    /**
     * <p>Set this optional parameter to <code>true</code> to avoid adding a '0x'
     * prefix to raw data in hexadecimal format. For example, by default, DMS adds a
     * '0x' prefix to the LOB column type in hexadecimal format moving from an Oracle
     * source to a Kafka target. Use the <code>NoHexPrefix</code> endpoint setting to
     * enable migration of RAW data type columns without adding the '0x' prefix.</p>
     */
    inline bool GetNoHexPrefix() const{ return m_noHexPrefix; }

    /**
     * <p>Set this optional parameter to <code>true</code> to avoid adding a '0x'
     * prefix to raw data in hexadecimal format. For example, by default, DMS adds a
     * '0x' prefix to the LOB column type in hexadecimal format moving from an Oracle
     * source to a Kafka target. Use the <code>NoHexPrefix</code> endpoint setting to
     * enable migration of RAW data type columns without adding the '0x' prefix.</p>
     */
    inline bool NoHexPrefixHasBeenSet() const { return m_noHexPrefixHasBeenSet; }

    /**
     * <p>Set this optional parameter to <code>true</code> to avoid adding a '0x'
     * prefix to raw data in hexadecimal format. For example, by default, DMS adds a
     * '0x' prefix to the LOB column type in hexadecimal format moving from an Oracle
     * source to a Kafka target. Use the <code>NoHexPrefix</code> endpoint setting to
     * enable migration of RAW data type columns without adding the '0x' prefix.</p>
     */
    inline void SetNoHexPrefix(bool value) { m_noHexPrefixHasBeenSet = true; m_noHexPrefix = value; }

    /**
     * <p>Set this optional parameter to <code>true</code> to avoid adding a '0x'
     * prefix to raw data in hexadecimal format. For example, by default, DMS adds a
     * '0x' prefix to the LOB column type in hexadecimal format moving from an Oracle
     * source to a Kafka target. Use the <code>NoHexPrefix</code> endpoint setting to
     * enable migration of RAW data type columns without adding the '0x' prefix.</p>
     */
    inline KafkaSettings& WithNoHexPrefix(bool value) { SetNoHexPrefix(value); return *this;}

  private:

    Aws::String m_broker;
    bool m_brokerHasBeenSet = false;

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    MessageFormatValue m_messageFormat;
    bool m_messageFormatHasBeenSet = false;

    bool m_includeTransactionDetails;
    bool m_includeTransactionDetailsHasBeenSet = false;

    bool m_includePartitionValue;
    bool m_includePartitionValueHasBeenSet = false;

    bool m_partitionIncludeSchemaTable;
    bool m_partitionIncludeSchemaTableHasBeenSet = false;

    bool m_includeTableAlterOperations;
    bool m_includeTableAlterOperationsHasBeenSet = false;

    bool m_includeControlDetails;
    bool m_includeControlDetailsHasBeenSet = false;

    int m_messageMaxBytes;
    bool m_messageMaxBytesHasBeenSet = false;

    bool m_includeNullAndEmpty;
    bool m_includeNullAndEmptyHasBeenSet = false;

    KafkaSecurityProtocol m_securityProtocol;
    bool m_securityProtocolHasBeenSet = false;

    Aws::String m_sslClientCertificateArn;
    bool m_sslClientCertificateArnHasBeenSet = false;

    Aws::String m_sslClientKeyArn;
    bool m_sslClientKeyArnHasBeenSet = false;

    Aws::String m_sslClientKeyPassword;
    bool m_sslClientKeyPasswordHasBeenSet = false;

    Aws::String m_sslCaCertificateArn;
    bool m_sslCaCertificateArnHasBeenSet = false;

    Aws::String m_saslUsername;
    bool m_saslUsernameHasBeenSet = false;

    Aws::String m_saslPassword;
    bool m_saslPasswordHasBeenSet = false;

    bool m_noHexPrefix;
    bool m_noHexPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
