/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

Destination::Destination() : 
    m_configurationHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(DestinationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Destination::Destination(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(DestinationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detail"))
  {
    m_detail = jsonValue.GetObject("detail");

    m_detailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = DestinationStateMapper::GetDestinationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_detailHasBeenSet)
  {
   payload.WithObject("detail", m_detail.Jsonize());

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", DestinationStateMapper::GetNameForDestinationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
