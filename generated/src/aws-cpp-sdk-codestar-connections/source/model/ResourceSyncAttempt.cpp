/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/ResourceSyncAttempt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

ResourceSyncAttempt::ResourceSyncAttempt() : 
    m_eventsHasBeenSet(false),
    m_initialRevisionHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(ResourceSyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetRevisionHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

ResourceSyncAttempt::ResourceSyncAttempt(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_initialRevisionHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(ResourceSyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetRevisionHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSyncAttempt& ResourceSyncAttempt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialRevision"))
  {
    m_initialRevision = jsonValue.GetObject("InitialRevision");

    m_initialRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceSyncStatusMapper::GetResourceSyncStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetRevision"))
  {
    m_targetRevision = jsonValue.GetObject("TargetRevision");

    m_targetRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSyncAttempt::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  if(m_initialRevisionHasBeenSet)
  {
   payload.WithObject("InitialRevision", m_initialRevision.Jsonize());

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceSyncStatusMapper::GetNameForResourceSyncStatus(m_status));
  }

  if(m_targetRevisionHasBeenSet)
  {
   payload.WithObject("TargetRevision", m_targetRevision.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
