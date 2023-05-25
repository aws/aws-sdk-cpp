/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/SensorsWithShortDateRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

SensorsWithShortDateRange::SensorsWithShortDateRange() : 
    m_affectedSensorCount(0),
    m_affectedSensorCountHasBeenSet(false)
{
}

SensorsWithShortDateRange::SensorsWithShortDateRange(JsonView jsonValue) : 
    m_affectedSensorCount(0),
    m_affectedSensorCountHasBeenSet(false)
{
  *this = jsonValue;
}

SensorsWithShortDateRange& SensorsWithShortDateRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AffectedSensorCount"))
  {
    m_affectedSensorCount = jsonValue.GetInteger("AffectedSensorCount");

    m_affectedSensorCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SensorsWithShortDateRange::Jsonize() const
{
  JsonValue payload;

  if(m_affectedSensorCountHasBeenSet)
  {
   payload.WithInteger("AffectedSensorCount", m_affectedSensorCount);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
