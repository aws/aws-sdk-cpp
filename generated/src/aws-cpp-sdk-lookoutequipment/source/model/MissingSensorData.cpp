/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/MissingSensorData.h>
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

MissingSensorData::MissingSensorData() : 
    m_affectedSensorCount(0),
    m_affectedSensorCountHasBeenSet(false),
    m_totalNumberOfMissingValues(0),
    m_totalNumberOfMissingValuesHasBeenSet(false)
{
}

MissingSensorData::MissingSensorData(JsonView jsonValue) : 
    m_affectedSensorCount(0),
    m_affectedSensorCountHasBeenSet(false),
    m_totalNumberOfMissingValues(0),
    m_totalNumberOfMissingValuesHasBeenSet(false)
{
  *this = jsonValue;
}

MissingSensorData& MissingSensorData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AffectedSensorCount"))
  {
    m_affectedSensorCount = jsonValue.GetInteger("AffectedSensorCount");

    m_affectedSensorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfMissingValues"))
  {
    m_totalNumberOfMissingValues = jsonValue.GetInteger("TotalNumberOfMissingValues");

    m_totalNumberOfMissingValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue MissingSensorData::Jsonize() const
{
  JsonValue payload;

  if(m_affectedSensorCountHasBeenSet)
  {
   payload.WithInteger("AffectedSensorCount", m_affectedSensorCount);

  }

  if(m_totalNumberOfMissingValuesHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfMissingValues", m_totalNumberOfMissingValues);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
