/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/SensorStatisticsSummary.h>
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

SensorStatisticsSummary::SensorStatisticsSummary() : 
    m_componentNameHasBeenSet(false),
    m_sensorNameHasBeenSet(false),
    m_dataExists(false),
    m_dataExistsHasBeenSet(false),
    m_missingValuesHasBeenSet(false),
    m_invalidValuesHasBeenSet(false),
    m_invalidDateEntriesHasBeenSet(false),
    m_duplicateTimestampsHasBeenSet(false),
    m_categoricalValuesHasBeenSet(false),
    m_multipleOperatingModesHasBeenSet(false),
    m_largeTimestampGapsHasBeenSet(false),
    m_monotonicValuesHasBeenSet(false),
    m_dataStartTimeHasBeenSet(false),
    m_dataEndTimeHasBeenSet(false)
{
}

SensorStatisticsSummary::SensorStatisticsSummary(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_sensorNameHasBeenSet(false),
    m_dataExists(false),
    m_dataExistsHasBeenSet(false),
    m_missingValuesHasBeenSet(false),
    m_invalidValuesHasBeenSet(false),
    m_invalidDateEntriesHasBeenSet(false),
    m_duplicateTimestampsHasBeenSet(false),
    m_categoricalValuesHasBeenSet(false),
    m_multipleOperatingModesHasBeenSet(false),
    m_largeTimestampGapsHasBeenSet(false),
    m_monotonicValuesHasBeenSet(false),
    m_dataStartTimeHasBeenSet(false),
    m_dataEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SensorStatisticsSummary& SensorStatisticsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentName"))
  {
    m_componentName = jsonValue.GetString("ComponentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SensorName"))
  {
    m_sensorName = jsonValue.GetString("SensorName");

    m_sensorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataExists"))
  {
    m_dataExists = jsonValue.GetBool("DataExists");

    m_dataExistsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingValues"))
  {
    m_missingValues = jsonValue.GetObject("MissingValues");

    m_missingValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidValues"))
  {
    m_invalidValues = jsonValue.GetObject("InvalidValues");

    m_invalidValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidDateEntries"))
  {
    m_invalidDateEntries = jsonValue.GetObject("InvalidDateEntries");

    m_invalidDateEntriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DuplicateTimestamps"))
  {
    m_duplicateTimestamps = jsonValue.GetObject("DuplicateTimestamps");

    m_duplicateTimestampsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoricalValues"))
  {
    m_categoricalValues = jsonValue.GetObject("CategoricalValues");

    m_categoricalValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultipleOperatingModes"))
  {
    m_multipleOperatingModes = jsonValue.GetObject("MultipleOperatingModes");

    m_multipleOperatingModesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LargeTimestampGaps"))
  {
    m_largeTimestampGaps = jsonValue.GetObject("LargeTimestampGaps");

    m_largeTimestampGapsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonotonicValues"))
  {
    m_monotonicValues = jsonValue.GetObject("MonotonicValues");

    m_monotonicValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataStartTime"))
  {
    m_dataStartTime = jsonValue.GetDouble("DataStartTime");

    m_dataStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataEndTime"))
  {
    m_dataEndTime = jsonValue.GetDouble("DataEndTime");

    m_dataEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SensorStatisticsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_sensorNameHasBeenSet)
  {
   payload.WithString("SensorName", m_sensorName);

  }

  if(m_dataExistsHasBeenSet)
  {
   payload.WithBool("DataExists", m_dataExists);

  }

  if(m_missingValuesHasBeenSet)
  {
   payload.WithObject("MissingValues", m_missingValues.Jsonize());

  }

  if(m_invalidValuesHasBeenSet)
  {
   payload.WithObject("InvalidValues", m_invalidValues.Jsonize());

  }

  if(m_invalidDateEntriesHasBeenSet)
  {
   payload.WithObject("InvalidDateEntries", m_invalidDateEntries.Jsonize());

  }

  if(m_duplicateTimestampsHasBeenSet)
  {
   payload.WithObject("DuplicateTimestamps", m_duplicateTimestamps.Jsonize());

  }

  if(m_categoricalValuesHasBeenSet)
  {
   payload.WithObject("CategoricalValues", m_categoricalValues.Jsonize());

  }

  if(m_multipleOperatingModesHasBeenSet)
  {
   payload.WithObject("MultipleOperatingModes", m_multipleOperatingModes.Jsonize());

  }

  if(m_largeTimestampGapsHasBeenSet)
  {
   payload.WithObject("LargeTimestampGaps", m_largeTimestampGaps.Jsonize());

  }

  if(m_monotonicValuesHasBeenSet)
  {
   payload.WithObject("MonotonicValues", m_monotonicValues.Jsonize());

  }

  if(m_dataStartTimeHasBeenSet)
  {
   payload.WithDouble("DataStartTime", m_dataStartTime.SecondsWithMSPrecision());
  }

  if(m_dataEndTimeHasBeenSet)
  {
   payload.WithDouble("DataEndTime", m_dataEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
