/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/EventActionEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

EventActionEntry::EventActionEntry() : 
    m_actionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_idHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

EventActionEntry::EventActionEntry(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_idHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EventActionEntry& EventActionEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Event"))
  {
    m_event = jsonValue.GetObject("Event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EventActionEntry::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_eventHasBeenSet)
  {
   payload.WithObject("Event", m_event.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
