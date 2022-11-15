/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/PendingMaintenance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

PendingMaintenance::PendingMaintenance() : 
    m_engineVersionHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

PendingMaintenance::PendingMaintenance(JsonView jsonValue) : 
    m_engineVersionHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
  *this = jsonValue;
}

PendingMaintenance& PendingMaintenance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingMaintenance::Jsonize() const
{
  JsonValue payload;

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
