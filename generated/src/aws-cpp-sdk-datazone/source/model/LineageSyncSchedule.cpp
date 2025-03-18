/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageSyncSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

LineageSyncSchedule::LineageSyncSchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

LineageSyncSchedule& LineageSyncSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetString("schedule");
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageSyncSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("schedule", m_schedule);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
