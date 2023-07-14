/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DataQualitySummary.h>
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

DataQualitySummary::DataQualitySummary() : 
    m_insufficientSensorDataHasBeenSet(false),
    m_missingSensorDataHasBeenSet(false),
    m_invalidSensorDataHasBeenSet(false),
    m_unsupportedTimestampsHasBeenSet(false),
    m_duplicateTimestampsHasBeenSet(false)
{
}

DataQualitySummary::DataQualitySummary(JsonView jsonValue) : 
    m_insufficientSensorDataHasBeenSet(false),
    m_missingSensorDataHasBeenSet(false),
    m_invalidSensorDataHasBeenSet(false),
    m_unsupportedTimestampsHasBeenSet(false),
    m_duplicateTimestampsHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualitySummary& DataQualitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsufficientSensorData"))
  {
    m_insufficientSensorData = jsonValue.GetObject("InsufficientSensorData");

    m_insufficientSensorDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingSensorData"))
  {
    m_missingSensorData = jsonValue.GetObject("MissingSensorData");

    m_missingSensorDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidSensorData"))
  {
    m_invalidSensorData = jsonValue.GetObject("InvalidSensorData");

    m_invalidSensorDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnsupportedTimestamps"))
  {
    m_unsupportedTimestamps = jsonValue.GetObject("UnsupportedTimestamps");

    m_unsupportedTimestampsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DuplicateTimestamps"))
  {
    m_duplicateTimestamps = jsonValue.GetObject("DuplicateTimestamps");

    m_duplicateTimestampsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_insufficientSensorDataHasBeenSet)
  {
   payload.WithObject("InsufficientSensorData", m_insufficientSensorData.Jsonize());

  }

  if(m_missingSensorDataHasBeenSet)
  {
   payload.WithObject("MissingSensorData", m_missingSensorData.Jsonize());

  }

  if(m_invalidSensorDataHasBeenSet)
  {
   payload.WithObject("InvalidSensorData", m_invalidSensorData.Jsonize());

  }

  if(m_unsupportedTimestampsHasBeenSet)
  {
   payload.WithObject("UnsupportedTimestamps", m_unsupportedTimestamps.Jsonize());

  }

  if(m_duplicateTimestampsHasBeenSet)
  {
   payload.WithObject("DuplicateTimestamps", m_duplicateTimestamps.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
