/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/Endpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

Endpoint::Endpoint() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_routingConfigHasBeenSet(false),
    m_replicationConfigHasBeenSet(false),
    m_eventBusesHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_state(EndpointState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_routingConfigHasBeenSet(false),
    m_replicationConfigHasBeenSet(false),
    m_eventBusesHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_state(EndpointState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingConfig"))
  {
    m_routingConfig = jsonValue.GetObject("RoutingConfig");

    m_routingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationConfig"))
  {
    m_replicationConfig = jsonValue.GetObject("ReplicationConfig");

    m_replicationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBuses"))
  {
    Aws::Utils::Array<JsonView> eventBusesJsonList = jsonValue.GetArray("EventBuses");
    for(unsigned eventBusesIndex = 0; eventBusesIndex < eventBusesJsonList.GetLength(); ++eventBusesIndex)
    {
      m_eventBuses.push_back(eventBusesJsonList[eventBusesIndex].AsObject());
    }
    m_eventBusesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointUrl"))
  {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");

    m_endpointUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EndpointStateMapper::GetEndpointStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_routingConfigHasBeenSet)
  {
   payload.WithObject("RoutingConfig", m_routingConfig.Jsonize());

  }

  if(m_replicationConfigHasBeenSet)
  {
   payload.WithObject("ReplicationConfig", m_replicationConfig.Jsonize());

  }

  if(m_eventBusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventBusesJsonList(m_eventBuses.size());
   for(unsigned eventBusesIndex = 0; eventBusesIndex < eventBusesJsonList.GetLength(); ++eventBusesIndex)
   {
     eventBusesJsonList[eventBusesIndex].AsObject(m_eventBuses[eventBusesIndex].Jsonize());
   }
   payload.WithArray("EventBuses", std::move(eventBusesJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_endpointUrlHasBeenSet)
  {
   payload.WithString("EndpointUrl", m_endpointUrl);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EndpointStateMapper::GetNameForEndpointState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
