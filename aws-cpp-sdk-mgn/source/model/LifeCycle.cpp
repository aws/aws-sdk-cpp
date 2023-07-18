/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LifeCycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LifeCycle::LifeCycle() : 
    m_addedToServiceDateTimeHasBeenSet(false),
    m_elapsedReplicationDurationHasBeenSet(false),
    m_firstByteDateTimeHasBeenSet(false),
    m_lastCutoverHasBeenSet(false),
    m_lastSeenByServiceDateTimeHasBeenSet(false),
    m_lastTestHasBeenSet(false),
    m_state(LifeCycleState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

LifeCycle::LifeCycle(JsonView jsonValue) : 
    m_addedToServiceDateTimeHasBeenSet(false),
    m_elapsedReplicationDurationHasBeenSet(false),
    m_firstByteDateTimeHasBeenSet(false),
    m_lastCutoverHasBeenSet(false),
    m_lastSeenByServiceDateTimeHasBeenSet(false),
    m_lastTestHasBeenSet(false),
    m_state(LifeCycleState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

LifeCycle& LifeCycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addedToServiceDateTime"))
  {
    m_addedToServiceDateTime = jsonValue.GetString("addedToServiceDateTime");

    m_addedToServiceDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elapsedReplicationDuration"))
  {
    m_elapsedReplicationDuration = jsonValue.GetString("elapsedReplicationDuration");

    m_elapsedReplicationDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstByteDateTime"))
  {
    m_firstByteDateTime = jsonValue.GetString("firstByteDateTime");

    m_firstByteDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastCutover"))
  {
    m_lastCutover = jsonValue.GetObject("lastCutover");

    m_lastCutoverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeenByServiceDateTime"))
  {
    m_lastSeenByServiceDateTime = jsonValue.GetString("lastSeenByServiceDateTime");

    m_lastSeenByServiceDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastTest"))
  {
    m_lastTest = jsonValue.GetObject("lastTest");

    m_lastTestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue LifeCycle::Jsonize() const
{
  JsonValue payload;

  if(m_addedToServiceDateTimeHasBeenSet)
  {
   payload.WithString("addedToServiceDateTime", m_addedToServiceDateTime);

  }

  if(m_elapsedReplicationDurationHasBeenSet)
  {
   payload.WithString("elapsedReplicationDuration", m_elapsedReplicationDuration);

  }

  if(m_firstByteDateTimeHasBeenSet)
  {
   payload.WithString("firstByteDateTime", m_firstByteDateTime);

  }

  if(m_lastCutoverHasBeenSet)
  {
   payload.WithObject("lastCutover", m_lastCutover.Jsonize());

  }

  if(m_lastSeenByServiceDateTimeHasBeenSet)
  {
   payload.WithString("lastSeenByServiceDateTime", m_lastSeenByServiceDateTime);

  }

  if(m_lastTestHasBeenSet)
  {
   payload.WithObject("lastTest", m_lastTest.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", LifeCycleStateMapper::GetNameForLifeCycleState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
