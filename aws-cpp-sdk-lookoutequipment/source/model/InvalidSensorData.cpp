/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InvalidSensorData.h>
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

InvalidSensorData::InvalidSensorData() : 
    m_affectedSensorCount(0),
    m_affectedSensorCountHasBeenSet(false),
    m_totalNumberOfInvalidValues(0),
    m_totalNumberOfInvalidValuesHasBeenSet(false)
{
}

InvalidSensorData::InvalidSensorData(JsonView jsonValue) : 
    m_affectedSensorCount(0),
    m_affectedSensorCountHasBeenSet(false),
    m_totalNumberOfInvalidValues(0),
    m_totalNumberOfInvalidValuesHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidSensorData& InvalidSensorData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AffectedSensorCount"))
  {
    m_affectedSensorCount = jsonValue.GetInteger("AffectedSensorCount");

    m_affectedSensorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfInvalidValues"))
  {
    m_totalNumberOfInvalidValues = jsonValue.GetInteger("TotalNumberOfInvalidValues");

    m_totalNumberOfInvalidValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidSensorData::Jsonize() const
{
  JsonValue payload;

  if(m_affectedSensorCountHasBeenSet)
  {
   payload.WithInteger("AffectedSensorCount", m_affectedSensorCount);

  }

  if(m_totalNumberOfInvalidValuesHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfInvalidValues", m_totalNumberOfInvalidValues);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
