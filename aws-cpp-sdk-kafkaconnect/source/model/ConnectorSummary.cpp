/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ConnectorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

ConnectorSummary::ConnectorSummary() : 
    m_capacityHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_connectorDescriptionHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorState(ConnectorState::NOT_SET),
    m_connectorStateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
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

ConnectorSummary::ConnectorSummary(JsonView jsonValue) : 
    m_capacityHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_connectorDescriptionHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorState(ConnectorState::NOT_SET),
    m_connectorStateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_kafkaClusterHasBeenSet(false),
    m_kafkaClusterClientAuthenticationHasBeenSet(false),
    m_kafkaClusterEncryptionInTransitHasBeenSet(false),
    m_kafkaConnectVersionHasBeenSet(false),
    m_logDeliveryHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_serviceExecutionRoleArnHasBeenSet(false),
    m_workerConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorSummary& ConnectorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetObject("capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");

    m_connectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorDescription"))
  {
    m_connectorDescription = jsonValue.GetString("connectorDescription");

    m_connectorDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorName"))
  {
    m_connectorName = jsonValue.GetString("connectorName");

    m_connectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorState"))
  {
    m_connectorState = ConnectorStateMapper::GetConnectorStateForName(jsonValue.GetString("connectorState"));

    m_connectorStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaCluster"))
  {
    m_kafkaCluster = jsonValue.GetObject("kafkaCluster");

    m_kafkaClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaClusterClientAuthentication"))
  {
    m_kafkaClusterClientAuthentication = jsonValue.GetObject("kafkaClusterClientAuthentication");

    m_kafkaClusterClientAuthenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaClusterEncryptionInTransit"))
  {
    m_kafkaClusterEncryptionInTransit = jsonValue.GetObject("kafkaClusterEncryptionInTransit");

    m_kafkaClusterEncryptionInTransitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaConnectVersion"))
  {
    m_kafkaConnectVersion = jsonValue.GetString("kafkaConnectVersion");

    m_kafkaConnectVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logDelivery"))
  {
    m_logDelivery = jsonValue.GetObject("logDelivery");

    m_logDeliveryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("plugins"))
  {
    Aws::Utils::Array<JsonView> pluginsJsonList = jsonValue.GetArray("plugins");
    for(unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex)
    {
      m_plugins.push_back(pluginsJsonList[pluginsIndex].AsObject());
    }
    m_pluginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceExecutionRoleArn"))
  {
    m_serviceExecutionRoleArn = jsonValue.GetString("serviceExecutionRoleArn");

    m_serviceExecutionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerConfiguration"))
  {
    m_workerConfiguration = jsonValue.GetObject("workerConfiguration");

    m_workerConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithObject("capacity", m_capacity.Jsonize());

  }

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("connectorArn", m_connectorArn);

  }

  if(m_connectorDescriptionHasBeenSet)
  {
   payload.WithString("connectorDescription", m_connectorDescription);

  }

  if(m_connectorNameHasBeenSet)
  {
   payload.WithString("connectorName", m_connectorName);

  }

  if(m_connectorStateHasBeenSet)
  {
   payload.WithString("connectorState", ConnectorStateMapper::GetNameForConnectorState(m_connectorState));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

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

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
