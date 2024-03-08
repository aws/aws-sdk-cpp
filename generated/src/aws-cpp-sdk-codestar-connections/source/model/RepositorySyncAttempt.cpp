/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/RepositorySyncAttempt.h>
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

RepositorySyncAttempt::RepositorySyncAttempt() : 
    m_startedAtHasBeenSet(false),
    m_status(RepositorySyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

RepositorySyncAttempt::RepositorySyncAttempt(JsonView jsonValue) : 
    m_startedAtHasBeenSet(false),
    m_status(RepositorySyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySyncAttempt& RepositorySyncAttempt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RepositorySyncStatusMapper::GetRepositorySyncStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySyncAttempt::Jsonize() const
{
  JsonValue payload;

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RepositorySyncStatusMapper::GetNameForRepositorySyncStatus(m_status));
  }

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
