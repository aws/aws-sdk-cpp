/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MessageFormatValue.h>
#include <aws/dms/model/KafkaSecurityProtocol.h>
#include <aws/dms/model/KafkaSaslMechanism.h>
#include <aws/dms/model/KafkaSslEndpointIdentificationAlgorithm.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::String& GetBroker() const { return m_broker; }
    inline bool BrokerHasBeenSet() const { return m_brokerHasBeenSet; }
    template<typename BrokerT = Aws::String>
    void SetBroker(BrokerT&& value) { m_brokerHasBeenSet = true; m_broker = std::forward<BrokerT>(value); }
    template<typename BrokerT = Aws::String>
    KafkaSettings& WithBroker(BrokerT&& value) { SetBroker(std::forward<BrokerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, DMS
     * specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    KafkaSettings& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline MessageFormatValue GetMessageFormat() const { return m_messageFormat; }
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }
    inline void SetMessageFormat(MessageFormatValue value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }
    inline KafkaSettings& WithMessageFormat(MessageFormatValue value) { SetMessageFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed transaction information from the source database. This
     * information includes a commit timestamp, a log position, and values for
     * <code>transaction_id</code>, previous <code>transaction_id</code>, and
     * <code>transaction_record_id</code> (the record offset within a transaction). The
     * default is <code>false</code>.</p>
     */
    inline bool GetIncludeTransactionDetails() const { return m_includeTransactionDetails; }
    inline bool IncludeTransactionDetailsHasBeenSet() const { return m_includeTransactionDetailsHasBeenSet; }
    inline void SetIncludeTransactionDetails(bool value) { m_includeTransactionDetailsHasBeenSet = true; m_includeTransactionDetails = value; }
    inline KafkaSettings& WithIncludeTransactionDetails(bool value) { SetIncludeTransactionDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the partition value within the Kafka message output unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludePartitionValue() const { return m_includePartitionValue; }
    inline bool IncludePartitionValueHasBeenSet() const { return m_includePartitionValueHasBeenSet; }
    inline void SetIncludePartitionValue(bool value) { m_includePartitionValueHasBeenSet = true; m_includePartitionValue = value; }
    inline KafkaSettings& WithIncludePartitionValue(bool value) { SetIncludePartitionValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefixes schema and table names to partition values, when the partition type
     * is <code>primary-key-type</code>. Doing this increases data distribution among
     * Kafka partitions. For example, suppose that a SysBench schema has thousands of
     * tables and each table has only limited range for a primary key. In this case,
     * the same primary key is sent from thousands of tables to the same partition,
     * which causes throttling. The default is <code>false</code>.</p>
     */
    inline bool GetPartitionIncludeSchemaTable() const { return m_partitionIncludeSchemaTable; }
    inline bool PartitionIncludeSchemaTableHasBeenSet() const { return m_partitionIncludeSchemaTableHasBeenSet; }
    inline void SetPartitionIncludeSchemaTable(bool value) { m_partitionIncludeSchemaTableHasBeenSet = true; m_partitionIncludeSchemaTable = value; }
    inline KafkaSettings& WithPartitionIncludeSchemaTable(bool value) { SetPartitionIncludeSchemaTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Includes any data definition language (DDL) operations that change the table
     * in the control data, such as <code>rename-table</code>, <code>drop-table</code>,
     * <code>add-column</code>, <code>drop-column</code>, and
     * <code>rename-column</code>. The default is <code>false</code>.</p>
     */
    inline bool GetIncludeTableAlterOperations() const { return m_includeTableAlterOperations; }
    inline bool IncludeTableAlterOperationsHasBeenSet() const { return m_includeTableAlterOperationsHasBeenSet; }
    inline void SetIncludeTableAlterOperations(bool value) { m_includeTableAlterOperationsHasBeenSet = true; m_includeTableAlterOperations = value; }
    inline KafkaSettings& WithIncludeTableAlterOperations(bool value) { SetIncludeTableAlterOperations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows detailed control information for table definition, column definition,
     * and table and column changes in the Kafka message output. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludeControlDetails() const { return m_includeControlDetails; }
    inline bool IncludeControlDetailsHasBeenSet() const { return m_includeControlDetailsHasBeenSet; }
    inline void SetIncludeControlDetails(bool value) { m_includeControlDetailsHasBeenSet = true; m_includeControlDetails = value; }
    inline KafkaSettings& WithIncludeControlDetails(bool value) { SetIncludeControlDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size in bytes for records created on the endpoint The default is
     * 1,000,000.</p>
     */
    inline int GetMessageMaxBytes() const { return m_messageMaxBytes; }
    inline bool MessageMaxBytesHasBeenSet() const { return m_messageMaxBytesHasBeenSet; }
    inline void SetMessageMaxBytes(int value) { m_messageMaxBytesHasBeenSet = true; m_messageMaxBytes = value; }
    inline KafkaSettings& WithMessageMaxBytes(int value) { SetMessageMaxBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include NULL and empty columns for records migrated to the endpoint. The
     * default is <code>false</code>.</p>
     */
    inline bool GetIncludeNullAndEmpty() const { return m_includeNullAndEmpty; }
    inline bool IncludeNullAndEmptyHasBeenSet() const { return m_includeNullAndEmptyHasBeenSet; }
    inline void SetIncludeNullAndEmpty(bool value) { m_includeNullAndEmptyHasBeenSet = true; m_includeNullAndEmpty = value; }
    inline KafkaSettings& WithIncludeNullAndEmpty(bool value) { SetIncludeNullAndEmpty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set secure connection to a Kafka target endpoint using Transport Layer
     * Security (TLS). Options include <code>ssl-encryption</code>,
     * <code>ssl-authentication</code>, and <code>sasl-ssl</code>.
     * <code>sasl-ssl</code> requires <code>SaslUsername</code> and
     * <code>SaslPassword</code>.</p>
     */
    inline KafkaSecurityProtocol GetSecurityProtocol() const { return m_securityProtocol; }
    inline bool SecurityProtocolHasBeenSet() const { return m_securityProtocolHasBeenSet; }
    inline void SetSecurityProtocol(KafkaSecurityProtocol value) { m_securityProtocolHasBeenSet = true; m_securityProtocol = value; }
    inline KafkaSettings& WithSecurityProtocol(KafkaSecurityProtocol value) { SetSecurityProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the client certificate used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline const Aws::String& GetSslClientCertificateArn() const { return m_sslClientCertificateArn; }
    inline bool SslClientCertificateArnHasBeenSet() const { return m_sslClientCertificateArnHasBeenSet; }
    template<typename SslClientCertificateArnT = Aws::String>
    void SetSslClientCertificateArn(SslClientCertificateArnT&& value) { m_sslClientCertificateArnHasBeenSet = true; m_sslClientCertificateArn = std::forward<SslClientCertificateArnT>(value); }
    template<typename SslClientCertificateArnT = Aws::String>
    KafkaSettings& WithSslClientCertificateArn(SslClientCertificateArnT&& value) { SetSslClientCertificateArn(std::forward<SslClientCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the client private key used to securely
     * connect to a Kafka target endpoint.</p>
     */
    inline const Aws::String& GetSslClientKeyArn() const { return m_sslClientKeyArn; }
    inline bool SslClientKeyArnHasBeenSet() const { return m_sslClientKeyArnHasBeenSet; }
    template<typename SslClientKeyArnT = Aws::String>
    void SetSslClientKeyArn(SslClientKeyArnT&& value) { m_sslClientKeyArnHasBeenSet = true; m_sslClientKeyArn = std::forward<SslClientKeyArnT>(value); }
    template<typename SslClientKeyArnT = Aws::String>
    KafkaSettings& WithSslClientKeyArn(SslClientKeyArnT&& value) { SetSslClientKeyArn(std::forward<SslClientKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The password for the client private key used to securely connect to a Kafka
     * target endpoint.</p>
     */
    inline const Aws::String& GetSslClientKeyPassword() const { return m_sslClientKeyPassword; }
    inline bool SslClientKeyPasswordHasBeenSet() const { return m_sslClientKeyPasswordHasBeenSet; }
    template<typename SslClientKeyPasswordT = Aws::String>
    void SetSslClientKeyPassword(SslClientKeyPasswordT&& value) { m_sslClientKeyPasswordHasBeenSet = true; m_sslClientKeyPassword = std::forward<SslClientKeyPasswordT>(value); }
    template<typename SslClientKeyPasswordT = Aws::String>
    KafkaSettings& WithSslClientKeyPassword(SslClientKeyPasswordT&& value) { SetSslClientKeyPassword(std::forward<SslClientKeyPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the private certificate authority (CA)
     * cert that DMS uses to securely connect to your Kafka target endpoint.</p>
     */
    inline const Aws::String& GetSslCaCertificateArn() const { return m_sslCaCertificateArn; }
    inline bool SslCaCertificateArnHasBeenSet() const { return m_sslCaCertificateArnHasBeenSet; }
    template<typename SslCaCertificateArnT = Aws::String>
    void SetSslCaCertificateArn(SslCaCertificateArnT&& value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn = std::forward<SslCaCertificateArnT>(value); }
    template<typename SslCaCertificateArnT = Aws::String>
    KafkaSettings& WithSslCaCertificateArn(SslCaCertificateArnT&& value) { SetSslCaCertificateArn(std::forward<SslCaCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The secure user name you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline const Aws::String& GetSaslUsername() const { return m_saslUsername; }
    inline bool SaslUsernameHasBeenSet() const { return m_saslUsernameHasBeenSet; }
    template<typename SaslUsernameT = Aws::String>
    void SetSaslUsername(SaslUsernameT&& value) { m_saslUsernameHasBeenSet = true; m_saslUsername = std::forward<SaslUsernameT>(value); }
    template<typename SaslUsernameT = Aws::String>
    KafkaSettings& WithSaslUsername(SaslUsernameT&& value) { SetSaslUsername(std::forward<SaslUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure password you created when you first set up your MSK cluster to
     * validate a client identity and make an encrypted connection between server and
     * client using SASL-SSL authentication.</p>
     */
    inline const Aws::String& GetSaslPassword() const { return m_saslPassword; }
    inline bool SaslPasswordHasBeenSet() const { return m_saslPasswordHasBeenSet; }
    template<typename SaslPasswordT = Aws::String>
    void SetSaslPassword(SaslPasswordT&& value) { m_saslPasswordHasBeenSet = true; m_saslPassword = std::forward<SaslPasswordT>(value); }
    template<typename SaslPasswordT = Aws::String>
    KafkaSettings& WithSaslPassword(SaslPasswordT&& value) { SetSaslPassword(std::forward<SaslPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this optional parameter to <code>true</code> to avoid adding a '0x'
     * prefix to raw data in hexadecimal format. For example, by default, DMS adds a
     * '0x' prefix to the LOB column type in hexadecimal format moving from an Oracle
     * source to a Kafka target. Use the <code>NoHexPrefix</code> endpoint setting to
     * enable migration of RAW data type columns without adding the '0x' prefix.</p>
     */
    inline bool GetNoHexPrefix() const { return m_noHexPrefix; }
    inline bool NoHexPrefixHasBeenSet() const { return m_noHexPrefixHasBeenSet; }
    inline void SetNoHexPrefix(bool value) { m_noHexPrefixHasBeenSet = true; m_noHexPrefix = value; }
    inline KafkaSettings& WithNoHexPrefix(bool value) { SetNoHexPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For SASL/SSL authentication, DMS supports the <code>SCRAM-SHA-512</code>
     * mechanism by default. DMS versions 3.5.0 and later also support the
     * <code>PLAIN</code> mechanism. To use the <code>PLAIN</code> mechanism, set this
     * parameter to <code>PLAIN.</code> </p>
     */
    inline KafkaSaslMechanism GetSaslMechanism() const { return m_saslMechanism; }
    inline bool SaslMechanismHasBeenSet() const { return m_saslMechanismHasBeenSet; }
    inline void SetSaslMechanism(KafkaSaslMechanism value) { m_saslMechanismHasBeenSet = true; m_saslMechanism = value; }
    inline KafkaSettings& WithSaslMechanism(KafkaSaslMechanism value) { SetSaslMechanism(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets hostname verification for the certificate. This setting is supported in
     * DMS version 3.5.1 and later. </p>
     */
    inline KafkaSslEndpointIdentificationAlgorithm GetSslEndpointIdentificationAlgorithm() const { return m_sslEndpointIdentificationAlgorithm; }
    inline bool SslEndpointIdentificationAlgorithmHasBeenSet() const { return m_sslEndpointIdentificationAlgorithmHasBeenSet; }
    inline void SetSslEndpointIdentificationAlgorithm(KafkaSslEndpointIdentificationAlgorithm value) { m_sslEndpointIdentificationAlgorithmHasBeenSet = true; m_sslEndpointIdentificationAlgorithm = value; }
    inline KafkaSettings& WithSslEndpointIdentificationAlgorithm(KafkaSslEndpointIdentificationAlgorithm value) { SetSslEndpointIdentificationAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies using the large integer value with Kafka.</p>
     */
    inline bool GetUseLargeIntegerValue() const { return m_useLargeIntegerValue; }
    inline bool UseLargeIntegerValueHasBeenSet() const { return m_useLargeIntegerValueHasBeenSet; }
    inline void SetUseLargeIntegerValue(bool value) { m_useLargeIntegerValueHasBeenSet = true; m_useLargeIntegerValue = value; }
    inline KafkaSettings& WithUseLargeIntegerValue(bool value) { SetUseLargeIntegerValue(value); return *this;}
    ///@}
  private:

    Aws::String m_broker;
    bool m_brokerHasBeenSet = false;

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    MessageFormatValue m_messageFormat{MessageFormatValue::NOT_SET};
    bool m_messageFormatHasBeenSet = false;

    bool m_includeTransactionDetails{false};
    bool m_includeTransactionDetailsHasBeenSet = false;

    bool m_includePartitionValue{false};
    bool m_includePartitionValueHasBeenSet = false;

    bool m_partitionIncludeSchemaTable{false};
    bool m_partitionIncludeSchemaTableHasBeenSet = false;

    bool m_includeTableAlterOperations{false};
    bool m_includeTableAlterOperationsHasBeenSet = false;

    bool m_includeControlDetails{false};
    bool m_includeControlDetailsHasBeenSet = false;

    int m_messageMaxBytes{0};
    bool m_messageMaxBytesHasBeenSet = false;

    bool m_includeNullAndEmpty{false};
    bool m_includeNullAndEmptyHasBeenSet = false;

    KafkaSecurityProtocol m_securityProtocol{KafkaSecurityProtocol::NOT_SET};
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

    bool m_noHexPrefix{false};
    bool m_noHexPrefixHasBeenSet = false;

    KafkaSaslMechanism m_saslMechanism{KafkaSaslMechanism::NOT_SET};
    bool m_saslMechanismHasBeenSet = false;

    KafkaSslEndpointIdentificationAlgorithm m_sslEndpointIdentificationAlgorithm{KafkaSslEndpointIdentificationAlgorithm::NOT_SET};
    bool m_sslEndpointIdentificationAlgorithmHasBeenSet = false;

    bool m_useLargeIntegerValue{false};
    bool m_useLargeIntegerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
