/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LifeCycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LifeCycle::LifeCycle() : 
    m_addedToServiceDateTimeHasBeenSet(false),
    m_elapsedReplicationDurationHasBeenSet(false),
    m_firstByteDateTimeHasBeenSet(false),
    m_lastLaunchHasBeenSet(false),
    m_lastSeenByServiceDateTimeHasBeenSet(false)
{
}

LifeCycle::LifeCycle(JsonView jsonValue) : 
    m_addedToServiceDateTimeHasBeenSet(false),
    m_elapsedReplicationDurationHasBeenSet(false),
    m_firstByteDateTimeHasBeenSet(false),
    m_lastLaunchHasBeenSet(false),
    m_lastSeenByServiceDateTimeHasBeenSet(false)
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

  if(jsonValue.ValueExists("lastLaunch"))
  {
    m_lastLaunch = jsonValue.GetObject("lastLaunch");

    m_lastLaunchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeenByServiceDateTime"))
  {
    m_lastSeenByServiceDateTime = jsonValue.GetString("lastSeenByServiceDateTime");

    m_lastSeenByServiceDateTimeHasBeenSet = true;
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

  if(m_lastLaunchHasBeenSet)
  {
   payload.WithObject("lastLaunch", m_lastLaunch.Jsonize());

  }

  if(m_lastSeenByServiceDateTimeHasBeenSet)
  {
   payload.WithString("lastSeenByServiceDateTime", m_lastSeenByServiceDateTime);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
