﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ComputeCapacityStatus::ComputeCapacityStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeCapacityStatus& ComputeCapacityStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Desired"))
  {
    m_desired = jsonValue.GetInteger("Desired");
    m_desiredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Running"))
  {
    m_running = jsonValue.GetInteger("Running");
    m_runningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InUse"))
  {
    m_inUse = jsonValue.GetInteger("InUse");
    m_inUseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Available"))
  {
    m_available = jsonValue.GetInteger("Available");
    m_availableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredUserSessions"))
  {
    m_desiredUserSessions = jsonValue.GetInteger("DesiredUserSessions");
    m_desiredUserSessionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableUserSessions"))
  {
    m_availableUserSessions = jsonValue.GetInteger("AvailableUserSessions");
    m_availableUserSessionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveUserSessions"))
  {
    m_activeUserSessions = jsonValue.GetInteger("ActiveUserSessions");
    m_activeUserSessionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActualUserSessions"))
  {
    m_actualUserSessions = jsonValue.GetInteger("ActualUserSessions");
    m_actualUserSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeCapacityStatus::Jsonize() const
{
  JsonValue payload;

  if(m_desiredHasBeenSet)
  {
   payload.WithInteger("Desired", m_desired);

  }

  if(m_runningHasBeenSet)
  {
   payload.WithInteger("Running", m_running);

  }

  if(m_inUseHasBeenSet)
  {
   payload.WithInteger("InUse", m_inUse);

  }

  if(m_availableHasBeenSet)
  {
   payload.WithInteger("Available", m_available);

  }

  if(m_desiredUserSessionsHasBeenSet)
  {
   payload.WithInteger("DesiredUserSessions", m_desiredUserSessions);

  }

  if(m_availableUserSessionsHasBeenSet)
  {
   payload.WithInteger("AvailableUserSessions", m_availableUserSessions);

  }

  if(m_activeUserSessionsHasBeenSet)
  {
   payload.WithInteger("ActiveUserSessions", m_activeUserSessions);

  }

  if(m_actualUserSessionsHasBeenSet)
  {
   payload.WithInteger("ActualUserSessions", m_actualUserSessions);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
