﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KafkaSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

KafkaSettings::KafkaSettings() : 
    m_brokerHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_messageFormat(MessageFormatValue::NOT_SET),
    m_messageFormatHasBeenSet(false),
    m_includeTransactionDetails(false),
    m_includeTransactionDetailsHasBeenSet(false),
    m_includePartitionValue(false),
    m_includePartitionValueHasBeenSet(false),
    m_partitionIncludeSchemaTable(false),
    m_partitionIncludeSchemaTableHasBeenSet(false),
    m_includeTableAlterOperations(false),
    m_includeTableAlterOperationsHasBeenSet(false),
    m_includeControlDetails(false),
    m_includeControlDetailsHasBeenSet(false),
    m_messageMaxBytes(0),
    m_messageMaxBytesHasBeenSet(false),
    m_includeNullAndEmpty(false),
    m_includeNullAndEmptyHasBeenSet(false),
    m_securityProtocol(KafkaSecurityProtocol::NOT_SET),
    m_securityProtocolHasBeenSet(false),
    m_sslClientCertificateArnHasBeenSet(false),
    m_sslClientKeyArnHasBeenSet(false),
    m_sslClientKeyPasswordHasBeenSet(false),
    m_sslCaCertificateArnHasBeenSet(false),
    m_saslUsernameHasBeenSet(false),
    m_saslPasswordHasBeenSet(false),
    m_noHexPrefix(false),
    m_noHexPrefixHasBeenSet(false)
{
}

KafkaSettings::KafkaSettings(JsonView jsonValue) : 
    m_brokerHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_messageFormat(MessageFormatValue::NOT_SET),
    m_messageFormatHasBeenSet(false),
    m_includeTransactionDetails(false),
    m_includeTransactionDetailsHasBeenSet(false),
    m_includePartitionValue(false),
    m_includePartitionValueHasBeenSet(false),
    m_partitionIncludeSchemaTable(false),
    m_partitionIncludeSchemaTableHasBeenSet(false),
    m_includeTableAlterOperations(false),
    m_includeTableAlterOperationsHasBeenSet(false),
    m_includeControlDetails(false),
    m_includeControlDetailsHasBeenSet(false),
    m_messageMaxBytes(0),
    m_messageMaxBytesHasBeenSet(false),
    m_includeNullAndEmpty(false),
    m_includeNullAndEmptyHasBeenSet(false),
    m_securityProtocol(KafkaSecurityProtocol::NOT_SET),
    m_securityProtocolHasBeenSet(false),
    m_sslClientCertificateArnHasBeenSet(false),
    m_sslClientKeyArnHasBeenSet(false),
    m_sslClientKeyPasswordHasBeenSet(false),
    m_sslCaCertificateArnHasBeenSet(false),
    m_saslUsernameHasBeenSet(false),
    m_saslPasswordHasBeenSet(false),
    m_noHexPrefix(false),
    m_noHexPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaSettings& KafkaSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Broker"))
  {
    m_broker = jsonValue.GetString("Broker");

    m_brokerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Topic"))
  {
    m_topic = jsonValue.GetString("Topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageFormat"))
  {
    m_messageFormat = MessageFormatValueMapper::GetMessageFormatValueForName(jsonValue.GetString("MessageFormat"));

    m_messageFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeTransactionDetails"))
  {
    m_includeTransactionDetails = jsonValue.GetBool("IncludeTransactionDetails");

    m_includeTransactionDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludePartitionValue"))
  {
    m_includePartitionValue = jsonValue.GetBool("IncludePartitionValue");

    m_includePartitionValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionIncludeSchemaTable"))
  {
    m_partitionIncludeSchemaTable = jsonValue.GetBool("PartitionIncludeSchemaTable");

    m_partitionIncludeSchemaTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeTableAlterOperations"))
  {
    m_includeTableAlterOperations = jsonValue.GetBool("IncludeTableAlterOperations");

    m_includeTableAlterOperationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeControlDetails"))
  {
    m_includeControlDetails = jsonValue.GetBool("IncludeControlDetails");

    m_includeControlDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageMaxBytes"))
  {
    m_messageMaxBytes = jsonValue.GetInteger("MessageMaxBytes");

    m_messageMaxBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeNullAndEmpty"))
  {
    m_includeNullAndEmpty = jsonValue.GetBool("IncludeNullAndEmpty");

    m_includeNullAndEmptyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityProtocol"))
  {
    m_securityProtocol = KafkaSecurityProtocolMapper::GetKafkaSecurityProtocolForName(jsonValue.GetString("SecurityProtocol"));

    m_securityProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslClientCertificateArn"))
  {
    m_sslClientCertificateArn = jsonValue.GetString("SslClientCertificateArn");

    m_sslClientCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslClientKeyArn"))
  {
    m_sslClientKeyArn = jsonValue.GetString("SslClientKeyArn");

    m_sslClientKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslClientKeyPassword"))
  {
    m_sslClientKeyPassword = jsonValue.GetString("SslClientKeyPassword");

    m_sslClientKeyPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslCaCertificateArn"))
  {
    m_sslCaCertificateArn = jsonValue.GetString("SslCaCertificateArn");

    m_sslCaCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaslUsername"))
  {
    m_saslUsername = jsonValue.GetString("SaslUsername");

    m_saslUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaslPassword"))
  {
    m_saslPassword = jsonValue.GetString("SaslPassword");

    m_saslPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoHexPrefix"))
  {
    m_noHexPrefix = jsonValue.GetBool("NoHexPrefix");

    m_noHexPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaSettings::Jsonize() const
{
  JsonValue payload;

  if(m_brokerHasBeenSet)
  {
   payload.WithString("Broker", m_broker);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithString("Topic", m_topic);

  }

  if(m_messageFormatHasBeenSet)
  {
   payload.WithString("MessageFormat", MessageFormatValueMapper::GetNameForMessageFormatValue(m_messageFormat));
  }

  if(m_includeTransactionDetailsHasBeenSet)
  {
   payload.WithBool("IncludeTransactionDetails", m_includeTransactionDetails);

  }

  if(m_includePartitionValueHasBeenSet)
  {
   payload.WithBool("IncludePartitionValue", m_includePartitionValue);

  }

  if(m_partitionIncludeSchemaTableHasBeenSet)
  {
   payload.WithBool("PartitionIncludeSchemaTable", m_partitionIncludeSchemaTable);

  }

  if(m_includeTableAlterOperationsHasBeenSet)
  {
   payload.WithBool("IncludeTableAlterOperations", m_includeTableAlterOperations);

  }

  if(m_includeControlDetailsHasBeenSet)
  {
   payload.WithBool("IncludeControlDetails", m_includeControlDetails);

  }

  if(m_messageMaxBytesHasBeenSet)
  {
   payload.WithInteger("MessageMaxBytes", m_messageMaxBytes);

  }

  if(m_includeNullAndEmptyHasBeenSet)
  {
   payload.WithBool("IncludeNullAndEmpty", m_includeNullAndEmpty);

  }

  if(m_securityProtocolHasBeenSet)
  {
   payload.WithString("SecurityProtocol", KafkaSecurityProtocolMapper::GetNameForKafkaSecurityProtocol(m_securityProtocol));
  }

  if(m_sslClientCertificateArnHasBeenSet)
  {
   payload.WithString("SslClientCertificateArn", m_sslClientCertificateArn);

  }

  if(m_sslClientKeyArnHasBeenSet)
  {
   payload.WithString("SslClientKeyArn", m_sslClientKeyArn);

  }

  if(m_sslClientKeyPasswordHasBeenSet)
  {
   payload.WithString("SslClientKeyPassword", m_sslClientKeyPassword);

  }

  if(m_sslCaCertificateArnHasBeenSet)
  {
   payload.WithString("SslCaCertificateArn", m_sslCaCertificateArn);

  }

  if(m_saslUsernameHasBeenSet)
  {
   payload.WithString("SaslUsername", m_saslUsername);

  }

  if(m_saslPasswordHasBeenSet)
  {
   payload.WithString("SaslPassword", m_saslPassword);

  }

  if(m_noHexPrefixHasBeenSet)
  {
   payload.WithBool("NoHexPrefix", m_noHexPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
