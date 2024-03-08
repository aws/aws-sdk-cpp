/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneDriftStatusSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

LandingZoneDriftStatusSummary::LandingZoneDriftStatusSummary() : 
    m_status(LandingZoneDriftStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

LandingZoneDriftStatusSummary::LandingZoneDriftStatusSummary(JsonView jsonValue) : 
    m_status(LandingZoneDriftStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LandingZoneDriftStatusSummary& LandingZoneDriftStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = LandingZoneDriftStatusMapper::GetLandingZoneDriftStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LandingZoneDriftStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LandingZoneDriftStatusMapper::GetNameForLandingZoneDriftStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
