/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataMigrationStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DataMigrationStatistics::DataMigrationStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

DataMigrationStatistics& DataMigrationStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TablesLoaded"))
  {
    m_tablesLoaded = jsonValue.GetInteger("TablesLoaded");
    m_tablesLoadedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ElapsedTimeMillis"))
  {
    m_elapsedTimeMillis = jsonValue.GetInt64("ElapsedTimeMillis");
    m_elapsedTimeMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TablesLoading"))
  {
    m_tablesLoading = jsonValue.GetInteger("TablesLoading");
    m_tablesLoadingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FullLoadPercentage"))
  {
    m_fullLoadPercentage = jsonValue.GetInteger("FullLoadPercentage");
    m_fullLoadPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CDCLatency"))
  {
    m_cDCLatency = jsonValue.GetInteger("CDCLatency");
    m_cDCLatencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TablesQueued"))
  {
    m_tablesQueued = jsonValue.GetInteger("TablesQueued");
    m_tablesQueuedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TablesErrored"))
  {
    m_tablesErrored = jsonValue.GetInteger("TablesErrored");
    m_tablesErroredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StopTime"))
  {
    m_stopTime = jsonValue.GetString("StopTime");
    m_stopTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataMigrationStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_tablesLoadedHasBeenSet)
  {
   payload.WithInteger("TablesLoaded", m_tablesLoaded);

  }

  if(m_elapsedTimeMillisHasBeenSet)
  {
   payload.WithInt64("ElapsedTimeMillis", m_elapsedTimeMillis);

  }

  if(m_tablesLoadingHasBeenSet)
  {
   payload.WithInteger("TablesLoading", m_tablesLoading);

  }

  if(m_fullLoadPercentageHasBeenSet)
  {
   payload.WithInteger("FullLoadPercentage", m_fullLoadPercentage);

  }

  if(m_cDCLatencyHasBeenSet)
  {
   payload.WithInteger("CDCLatency", m_cDCLatency);

  }

  if(m_tablesQueuedHasBeenSet)
  {
   payload.WithInteger("TablesQueued", m_tablesQueued);

  }

  if(m_tablesErroredHasBeenSet)
  {
   payload.WithInteger("TablesErrored", m_tablesErrored);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stopTimeHasBeenSet)
  {
   payload.WithString("StopTime", m_stopTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
