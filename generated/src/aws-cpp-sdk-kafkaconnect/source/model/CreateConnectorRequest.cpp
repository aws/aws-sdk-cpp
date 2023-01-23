/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CreateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectorRequest::CreateConnectorRequest() : 
    m_capacityHasBeenSet(false),
    m_connectorConfigurationHasBeenSet(false),
    m_connectorDescriptionHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_kafkaClusterHasBeenSet(false),
    m_kafkaClusterClientAuthenticationHasBeenSet(false),
    m_kafkaClusterEncryptionInTransitHasBeenSet(false),
    m_kafkaConnectVersionHasBeenSet(false),
    m_logDeliveryHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_serviceExecutionRoleArnHasBeenSet(false),
    m_workerConfigurationHasBeenSet(false)
{
}

Aws::String CreateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithObject("capacity", m_capacity.Jsonize());

  }

  if(m_connectorConfigurationHasBeenSet)
  {
   JsonValue connectorConfigurationJsonMap;
   for(auto& connectorConfigurationItem : m_connectorConfiguration)
   {
     connectorConfigurationJsonMap.WithString(connectorConfigurationItem.first, connectorConfigurationItem.second);
   }
   payload.WithObject("connectorConfiguration", std::move(connectorConfigurationJsonMap));

  }

  if(m_connectorDescriptionHasBeenSet)
  {
   payload.WithString("connectorDescription", m_connectorDescription);

  }

  if(m_connectorNameHasBeenSet)
  {
   payload.WithString("connectorName", m_connectorName);

  }

  if(m_kafkaClusterHasBeenSet)
  {
   payload.WithObject("kafkaCluster", m_kafkaCluster.Jsonize());

  }

  if(m_kafkaClusterClientAuthenticationHasBeenSet)
  {
   payload.WithObject("kafkaClusterClientAuthentication", m_kafkaClusterClientAuthentication.Jsonize());

  }

  if(m_kafkaClusterEncryptionInTransitHasBeenSet)
  {
   payload.WithObject("kafkaClusterEncryptionInTransit", m_kafkaClusterEncryptionInTransit.Jsonize());

  }

  if(m_kafkaConnectVersionHasBeenSet)
  {
   payload.WithString("kafkaConnectVersion", m_kafkaConnectVersion);

  }

  if(m_logDeliveryHasBeenSet)
  {
   payload.WithObject("logDelivery", m_logDelivery.Jsonize());

  }

  if(m_pluginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pluginsJsonList(m_plugins.size());
   for(unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex)
   {
     pluginsJsonList[pluginsIndex].AsObject(m_plugins[pluginsIndex].Jsonize());
   }
   payload.WithArray("plugins", std::move(pluginsJsonList));

  }

  if(m_serviceExecutionRoleArnHasBeenSet)
  {
   payload.WithString("serviceExecutionRoleArn", m_serviceExecutionRoleArn);

  }

  if(m_workerConfigurationHasBeenSet)
  {
   payload.WithObject("workerConfiguration", m_workerConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




