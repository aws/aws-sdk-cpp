/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_elasticsearchSettingsHasBeenSet(false),
    m_redshiftSettingsHasBeenSet(false)
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
    m_elasticsearchSettingsHasBeenSet(false),
    m_redshiftSettingsHasBeenSet(false)
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

  if(jsonValue.ValueExists("ElasticsearchSettings"))
  {
    m_elasticsearchSettings = jsonValue.GetObject("ElasticsearchSettings");

    m_elasticsearchSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftSettings"))
  {
    m_redshiftSettings = jsonValue.GetObject("RedshiftSettings");

    m_redshiftSettingsHasBeenSet = true;
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

  if(m_elasticsearchSettingsHasBeenSet)
  {
   payload.WithObject("ElasticsearchSettings", m_elasticsearchSettings.Jsonize());

  }

  if(m_redshiftSettingsHasBeenSet)
  {
   payload.WithObject("RedshiftSettings", m_redshiftSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
