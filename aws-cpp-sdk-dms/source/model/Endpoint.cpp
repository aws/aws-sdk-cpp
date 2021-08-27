/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Endpoint.h>
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

Endpoint::Endpoint() : 
    m_endpointIdentifierHasBeenSet(false),
    m_endpointType(ReplicationEndpointTypeValue::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_engineDisplayNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_extraConnectionAttributesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_sslMode(DmsSslModeValue::NOT_SET),
    m_sslModeHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_externalTableDefinitionHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_dynamoDbSettingsHasBeenSet(false),
    m_s3SettingsHasBeenSet(false),
    m_dmsTransferSettingsHasBeenSet(false),
    m_mongoDbSettingsHasBeenSet(false),
    m_kinesisSettingsHasBeenSet(false),
    m_kafkaSettingsHasBeenSet(false),
    m_elasticsearchSettingsHasBeenSet(false),
    m_neptuneSettingsHasBeenSet(false),
    m_redshiftSettingsHasBeenSet(false),
    m_postgreSQLSettingsHasBeenSet(false),
    m_mySQLSettingsHasBeenSet(false),
    m_oracleSettingsHasBeenSet(false),
    m_sybaseSettingsHasBeenSet(false),
    m_microsoftSQLServerSettingsHasBeenSet(false),
    m_iBMDb2SettingsHasBeenSet(false),
    m_docDbSettingsHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_endpointIdentifierHasBeenSet(false),
    m_endpointType(ReplicationEndpointTypeValue::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_engineDisplayNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_extraConnectionAttributesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_sslMode(DmsSslModeValue::NOT_SET),
    m_sslModeHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_externalTableDefinitionHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_dynamoDbSettingsHasBeenSet(false),
    m_s3SettingsHasBeenSet(false),
    m_dmsTransferSettingsHasBeenSet(false),
    m_mongoDbSettingsHasBeenSet(false),
    m_kinesisSettingsHasBeenSet(false),
    m_kafkaSettingsHasBeenSet(false),
    m_elasticsearchSettingsHasBeenSet(false),
    m_neptuneSettingsHasBeenSet(false),
    m_redshiftSettingsHasBeenSet(false),
    m_postgreSQLSettingsHasBeenSet(false),
    m_mySQLSettingsHasBeenSet(false),
    m_oracleSettingsHasBeenSet(false),
    m_sybaseSettingsHasBeenSet(false),
    m_microsoftSQLServerSettingsHasBeenSet(false),
    m_iBMDb2SettingsHasBeenSet(false),
    m_docDbSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointIdentifier"))
  {
    m_endpointIdentifier = jsonValue.GetString("EndpointIdentifier");

    m_endpointIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = ReplicationEndpointTypeValueMapper::GetReplicationEndpointTypeValueForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineName"))
  {
    m_engineName = jsonValue.GetString("EngineName");

    m_engineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineDisplayName"))
  {
    m_engineDisplayName = jsonValue.GetString("EngineDisplayName");

    m_engineDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraConnectionAttributes"))
  {
    m_extraConnectionAttributes = jsonValue.GetString("ExtraConnectionAttributes");

    m_extraConnectionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslMode"))
  {
    m_sslMode = DmsSslModeValueMapper::GetDmsSslModeValueForName(jsonValue.GetString("SslMode"));

    m_sslModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalTableDefinition"))
  {
    m_externalTableDefinition = jsonValue.GetString("ExternalTableDefinition");

    m_externalTableDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamoDbSettings"))
  {
    m_dynamoDbSettings = jsonValue.GetObject("DynamoDbSettings");

    m_dynamoDbSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Settings"))
  {
    m_s3Settings = jsonValue.GetObject("S3Settings");

    m_s3SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DmsTransferSettings"))
  {
    m_dmsTransferSettings = jsonValue.GetObject("DmsTransferSettings");

    m_dmsTransferSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MongoDbSettings"))
  {
    m_mongoDbSettings = jsonValue.GetObject("MongoDbSettings");

    m_mongoDbSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisSettings"))
  {
    m_kinesisSettings = jsonValue.GetObject("KinesisSettings");

    m_kinesisSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KafkaSettings"))
  {
    m_kafkaSettings = jsonValue.GetObject("KafkaSettings");

    m_kafkaSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticsearchSettings"))
  {
    m_elasticsearchSettings = jsonValue.GetObject("ElasticsearchSettings");

    m_elasticsearchSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NeptuneSettings"))
  {
    m_neptuneSettings = jsonValue.GetObject("NeptuneSettings");

    m_neptuneSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftSettings"))
  {
    m_redshiftSettings = jsonValue.GetObject("RedshiftSettings");

    m_redshiftSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostgreSQLSettings"))
  {
    m_postgreSQLSettings = jsonValue.GetObject("PostgreSQLSettings");

    m_postgreSQLSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MySQLSettings"))
  {
    m_mySQLSettings = jsonValue.GetObject("MySQLSettings");

    m_mySQLSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OracleSettings"))
  {
    m_oracleSettings = jsonValue.GetObject("OracleSettings");

    m_oracleSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SybaseSettings"))
  {
    m_sybaseSettings = jsonValue.GetObject("SybaseSettings");

    m_sybaseSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MicrosoftSQLServerSettings"))
  {
    m_microsoftSQLServerSettings = jsonValue.GetObject("MicrosoftSQLServerSettings");

    m_microsoftSQLServerSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IBMDb2Settings"))
  {
    m_iBMDb2Settings = jsonValue.GetObject("IBMDb2Settings");

    m_iBMDb2SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocDbSettings"))
  {
    m_docDbSettings = jsonValue.GetObject("DocDbSettings");

    m_docDbSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdentifierHasBeenSet)
  {
   payload.WithString("EndpointIdentifier", m_endpointIdentifier);

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", ReplicationEndpointTypeValueMapper::GetNameForReplicationEndpointTypeValue(m_endpointType));
  }

  if(m_engineNameHasBeenSet)
  {
   payload.WithString("EngineName", m_engineName);

  }

  if(m_engineDisplayNameHasBeenSet)
  {
   payload.WithString("EngineDisplayName", m_engineDisplayName);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_extraConnectionAttributesHasBeenSet)
  {
   payload.WithString("ExtraConnectionAttributes", m_extraConnectionAttributes);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_sslModeHasBeenSet)
  {
   payload.WithString("SslMode", DmsSslModeValueMapper::GetNameForDmsSslModeValue(m_sslMode));
  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_externalTableDefinitionHasBeenSet)
  {
   payload.WithString("ExternalTableDefinition", m_externalTableDefinition);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_dynamoDbSettingsHasBeenSet)
  {
   payload.WithObject("DynamoDbSettings", m_dynamoDbSettings.Jsonize());

  }

  if(m_s3SettingsHasBeenSet)
  {
   payload.WithObject("S3Settings", m_s3Settings.Jsonize());

  }

  if(m_dmsTransferSettingsHasBeenSet)
  {
   payload.WithObject("DmsTransferSettings", m_dmsTransferSettings.Jsonize());

  }

  if(m_mongoDbSettingsHasBeenSet)
  {
   payload.WithObject("MongoDbSettings", m_mongoDbSettings.Jsonize());

  }

  if(m_kinesisSettingsHasBeenSet)
  {
   payload.WithObject("KinesisSettings", m_kinesisSettings.Jsonize());

  }

  if(m_kafkaSettingsHasBeenSet)
  {
   payload.WithObject("KafkaSettings", m_kafkaSettings.Jsonize());

  }

  if(m_elasticsearchSettingsHasBeenSet)
  {
   payload.WithObject("ElasticsearchSettings", m_elasticsearchSettings.Jsonize());

  }

  if(m_neptuneSettingsHasBeenSet)
  {
   payload.WithObject("NeptuneSettings", m_neptuneSettings.Jsonize());

  }

  if(m_redshiftSettingsHasBeenSet)
  {
   payload.WithObject("RedshiftSettings", m_redshiftSettings.Jsonize());

  }

  if(m_postgreSQLSettingsHasBeenSet)
  {
   payload.WithObject("PostgreSQLSettings", m_postgreSQLSettings.Jsonize());

  }

  if(m_mySQLSettingsHasBeenSet)
  {
   payload.WithObject("MySQLSettings", m_mySQLSettings.Jsonize());

  }

  if(m_oracleSettingsHasBeenSet)
  {
   payload.WithObject("OracleSettings", m_oracleSettings.Jsonize());

  }

  if(m_sybaseSettingsHasBeenSet)
  {
   payload.WithObject("SybaseSettings", m_sybaseSettings.Jsonize());

  }

  if(m_microsoftSQLServerSettingsHasBeenSet)
  {
   payload.WithObject("MicrosoftSQLServerSettings", m_microsoftSQLServerSettings.Jsonize());

  }

  if(m_iBMDb2SettingsHasBeenSet)
  {
   payload.WithObject("IBMDb2Settings", m_iBMDb2Settings.Jsonize());

  }

  if(m_docDbSettingsHasBeenSet)
  {
   payload.WithObject("DocDbSettings", m_docDbSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
