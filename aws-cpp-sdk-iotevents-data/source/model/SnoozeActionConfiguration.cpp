/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/SnoozeActionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

SnoozeActionConfiguration::SnoozeActionConfiguration() : 
    m_snoozeDuration(0),
    m_snoozeDurationHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

SnoozeActionConfiguration::SnoozeActionConfiguration(JsonView jsonValue) : 
    m_snoozeDuration(0),
    m_snoozeDurationHasBeenSet(false),
    m_noteHasBeenSet(false)
{
  *this = jsonValue;
}

SnoozeActionConfiguration& SnoozeActionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("snoozeDuration"))
  {
    m_snoozeDuration = jsonValue.GetInteger("snoozeDuration");

    m_snoozeDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("note"))
  {
    m_note = jsonValue.GetString("note");

    m_noteHasBeenSet = true;
  }

  return *this;
}

JsonValue SnoozeActionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snoozeDurationHasBeenSet)
  {
   payload.WithInteger("snoozeDuration", m_snoozeDuration);

  }

  if(m_noteHasBeenSet)
  {
   payload.WithString("note", m_note);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
