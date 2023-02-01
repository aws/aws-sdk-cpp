/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/FastRestoreRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

FastRestoreRule::FastRestoreRule() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(RetentionIntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
}

FastRestoreRule::FastRestoreRule(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(RetentionIntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
  *this = jsonValue;
}

FastRestoreRule& FastRestoreRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntervalUnit"))
  {
    m_intervalUnit = RetentionIntervalUnitValuesMapper::GetRetentionIntervalUnitValuesForName(jsonValue.GetString("IntervalUnit"));

    m_intervalUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  return *this;
}

JsonValue FastRestoreRule::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  if(m_intervalUnitHasBeenSet)
  {
   payload.WithString("IntervalUnit", RetentionIntervalUnitValuesMapper::GetNameForRetentionIntervalUnitValues(m_intervalUnit));
  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
