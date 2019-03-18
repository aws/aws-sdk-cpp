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

#include <aws/dms/model/CreateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEndpointRequest::CreateEndpointRequest() : 
    m_endpointIdentifierHasBeenSet(false),
    m_endpointType(ReplicationEndpointTypeValue::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_extraConnectionAttributesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_sslMode(DmsSslModeValue::NOT_SET),
    m_sslModeHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_externalTableDefinitionHasBeenSet(false),
    m_dynamoDbSettingsHasBeenSet(false),
    m_s3SettingsHasBeenSet(false),
    m_dmsTransferSettingsHasBeenSet(false),
    m_mongoDbSettingsHasBeenSet(false),
    m_kinesisSettingsHasBeenSet(false),
    m_elasticsearchSettingsHasBeenSet(false),
    m_redshiftSettingsHasBeenSet(false)
{
}

Aws::String CreateEndpointRequest::SerializePayload() const
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

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

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

  if(m_elasticsearchSettingsHasBeenSet)
  {
   payload.WithObject("ElasticsearchSettings", m_elasticsearchSettings.Jsonize());

  }

  if(m_redshiftSettingsHasBeenSet)
  {
   payload.WithObject("RedshiftSettings", m_redshiftSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateEndpoint"));
  return headers;

}




