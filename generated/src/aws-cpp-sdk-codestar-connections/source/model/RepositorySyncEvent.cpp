/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/RepositorySyncEvent.h>
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

RepositorySyncEvent::RepositorySyncEvent() : 
    m_eventHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

RepositorySyncEvent::RepositorySyncEvent(JsonView jsonValue) : 
    m_eventHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySyncEvent& RepositorySyncEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Event"))
  {
    m_event = jsonValue.GetString("Event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetDouble("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySyncEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("Event", m_event);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("Time", m_time.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
