/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Signal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Signal::Signal(JsonView jsonValue)
{
  *this = jsonValue;
}

Signal& Signal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SignalTypeMapper::GetSignalTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("firstSeenAt"))
  {
    m_firstSeenAt = jsonValue.GetDouble("firstSeenAt");
    m_firstSeenAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastSeenAt"))
  {
    m_lastSeenAt = jsonValue.GetDouble("lastSeenAt");
    m_lastSeenAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetDouble("severity");
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceUids"))
  {
    Aws::Utils::Array<JsonView> resourceUidsJsonList = jsonValue.GetArray("resourceUids");
    for(unsigned resourceUidsIndex = 0; resourceUidsIndex < resourceUidsJsonList.GetLength(); ++resourceUidsIndex)
    {
      m_resourceUids.push_back(resourceUidsJsonList[resourceUidsIndex].AsString());
    }
    m_resourceUidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actorIds"))
  {
    Aws::Utils::Array<JsonView> actorIdsJsonList = jsonValue.GetArray("actorIds");
    for(unsigned actorIdsIndex = 0; actorIdsIndex < actorIdsJsonList.GetLength(); ++actorIdsIndex)
    {
      m_actorIds.push_back(actorIdsJsonList[actorIdsIndex].AsString());
    }
    m_actorIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointIds"))
  {
    Aws::Utils::Array<JsonView> endpointIdsJsonList = jsonValue.GetArray("endpointIds");
    for(unsigned endpointIdsIndex = 0; endpointIdsIndex < endpointIdsJsonList.GetLength(); ++endpointIdsIndex)
    {
      m_endpointIds.push_back(endpointIdsJsonList[endpointIdsIndex].AsString());
    }
    m_endpointIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalIndicators"))
  {
    Aws::Utils::Array<JsonView> signalIndicatorsJsonList = jsonValue.GetArray("signalIndicators");
    for(unsigned signalIndicatorsIndex = 0; signalIndicatorsIndex < signalIndicatorsJsonList.GetLength(); ++signalIndicatorsIndex)
    {
      m_signalIndicators.push_back(signalIndicatorsJsonList[signalIndicatorsIndex].AsObject());
    }
    m_signalIndicatorsHasBeenSet = true;
  }
  return *this;
}

JsonValue Signal::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SignalTypeMapper::GetNameForSignalType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_firstSeenAtHasBeenSet)
  {
   payload.WithDouble("firstSeenAt", m_firstSeenAt.SecondsWithMSPrecision());
  }

  if(m_lastSeenAtHasBeenSet)
  {
   payload.WithDouble("lastSeenAt", m_lastSeenAt.SecondsWithMSPrecision());
  }

  if(m_severityHasBeenSet)
  {
   payload.WithDouble("severity", m_severity);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_resourceUidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceUidsJsonList(m_resourceUids.size());
   for(unsigned resourceUidsIndex = 0; resourceUidsIndex < resourceUidsJsonList.GetLength(); ++resourceUidsIndex)
   {
     resourceUidsJsonList[resourceUidsIndex].AsString(m_resourceUids[resourceUidsIndex]);
   }
   payload.WithArray("resourceUids", std::move(resourceUidsJsonList));

  }

  if(m_actorIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actorIdsJsonList(m_actorIds.size());
   for(unsigned actorIdsIndex = 0; actorIdsIndex < actorIdsJsonList.GetLength(); ++actorIdsIndex)
   {
     actorIdsJsonList[actorIdsIndex].AsString(m_actorIds[actorIdsIndex]);
   }
   payload.WithArray("actorIds", std::move(actorIdsJsonList));

  }

  if(m_endpointIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointIdsJsonList(m_endpointIds.size());
   for(unsigned endpointIdsIndex = 0; endpointIdsIndex < endpointIdsJsonList.GetLength(); ++endpointIdsIndex)
   {
     endpointIdsJsonList[endpointIdsIndex].AsString(m_endpointIds[endpointIdsIndex]);
   }
   payload.WithArray("endpointIds", std::move(endpointIdsJsonList));

  }

  if(m_signalIndicatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalIndicatorsJsonList(m_signalIndicators.size());
   for(unsigned signalIndicatorsIndex = 0; signalIndicatorsIndex < signalIndicatorsJsonList.GetLength(); ++signalIndicatorsIndex)
   {
     signalIndicatorsJsonList[signalIndicatorsIndex].AsObject(m_signalIndicators[signalIndicatorsIndex].Jsonize());
   }
   payload.WithArray("signalIndicators", std::move(signalIndicatorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
