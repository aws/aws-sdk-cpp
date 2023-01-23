/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/Tunnel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

Tunnel::Tunnel() : 
    m_tunnelIdHasBeenSet(false),
    m_tunnelArnHasBeenSet(false),
    m_status(TunnelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceConnectionStateHasBeenSet(false),
    m_destinationConnectionStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_timeoutConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

Tunnel::Tunnel(JsonView jsonValue) : 
    m_tunnelIdHasBeenSet(false),
    m_tunnelArnHasBeenSet(false),
    m_status(TunnelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceConnectionStateHasBeenSet(false),
    m_destinationConnectionStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_timeoutConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Tunnel& Tunnel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tunnelId"))
  {
    m_tunnelId = jsonValue.GetString("tunnelId");

    m_tunnelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tunnelArn"))
  {
    m_tunnelArn = jsonValue.GetString("tunnelArn");

    m_tunnelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TunnelStatusMapper::GetTunnelStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceConnectionState"))
  {
    m_sourceConnectionState = jsonValue.GetObject("sourceConnectionState");

    m_sourceConnectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationConnectionState"))
  {
    m_destinationConnectionState = jsonValue.GetObject("destinationConnectionState");

    m_destinationConnectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationConfig"))
  {
    m_destinationConfig = jsonValue.GetObject("destinationConfig");

    m_destinationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");

    m_timeoutConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Tunnel::Jsonize() const
{
  JsonValue payload;

  if(m_tunnelIdHasBeenSet)
  {
   payload.WithString("tunnelId", m_tunnelId);

  }

  if(m_tunnelArnHasBeenSet)
  {
   payload.WithString("tunnelArn", m_tunnelArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TunnelStatusMapper::GetNameForTunnelStatus(m_status));
  }

  if(m_sourceConnectionStateHasBeenSet)
  {
   payload.WithObject("sourceConnectionState", m_sourceConnectionState.Jsonize());

  }

  if(m_destinationConnectionStateHasBeenSet)
  {
   payload.WithObject("destinationConnectionState", m_destinationConnectionState.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_destinationConfigHasBeenSet)
  {
   payload.WithObject("destinationConfig", m_destinationConfig.Jsonize());

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
