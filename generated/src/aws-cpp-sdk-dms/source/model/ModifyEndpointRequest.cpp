/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ModifyEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ModifyEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

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

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

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

  if(m_redisSettingsHasBeenSet)
  {
   payload.WithObject("RedisSettings", m_redisSettings.Jsonize());

  }

  if(m_exactSettingsHasBeenSet)
  {
   payload.WithBool("ExactSettings", m_exactSettings);

  }

  if(m_gcpMySQLSettingsHasBeenSet)
  {
   payload.WithObject("GcpMySQLSettings", m_gcpMySQLSettings.Jsonize());

  }

  if(m_timestreamSettingsHasBeenSet)
  {
   payload.WithObject("TimestreamSettings", m_timestreamSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyEndpoint"));
  return headers;

}




