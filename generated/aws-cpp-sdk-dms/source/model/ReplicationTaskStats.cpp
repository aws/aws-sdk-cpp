/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationTaskStats.h>
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

ReplicationTaskStats::ReplicationTaskStats() : 
    m_fullLoadProgressPercent(0),
    m_fullLoadProgressPercentHasBeenSet(false),
    m_elapsedTimeMillis(0),
    m_elapsedTimeMillisHasBeenSet(false),
    m_tablesLoaded(0),
    m_tablesLoadedHasBeenSet(false),
    m_tablesLoading(0),
    m_tablesLoadingHasBeenSet(false),
    m_tablesQueued(0),
    m_tablesQueuedHasBeenSet(false),
    m_tablesErrored(0),
    m_tablesErroredHasBeenSet(false),
    m_freshStartDateHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false),
    m_fullLoadStartDateHasBeenSet(false),
    m_fullLoadFinishDateHasBeenSet(false)
{
}

ReplicationTaskStats::ReplicationTaskStats(JsonView jsonValue) : 
    m_fullLoadProgressPercent(0),
    m_fullLoadProgressPercentHasBeenSet(false),
    m_elapsedTimeMillis(0),
    m_elapsedTimeMillisHasBeenSet(false),
    m_tablesLoaded(0),
    m_tablesLoadedHasBeenSet(false),
    m_tablesLoading(0),
    m_tablesLoadingHasBeenSet(false),
    m_tablesQueued(0),
    m_tablesQueuedHasBeenSet(false),
    m_tablesErrored(0),
    m_tablesErroredHasBeenSet(false),
    m_freshStartDateHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false),
    m_fullLoadStartDateHasBeenSet(false),
    m_fullLoadFinishDateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTaskStats& ReplicationTaskStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FullLoadProgressPercent"))
  {
    m_fullLoadProgressPercent = jsonValue.GetInteger("FullLoadProgressPercent");

    m_fullLoadProgressPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElapsedTimeMillis"))
  {
    m_elapsedTimeMillis = jsonValue.GetInt64("ElapsedTimeMillis");

    m_elapsedTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablesLoaded"))
  {
    m_tablesLoaded = jsonValue.GetInteger("TablesLoaded");

    m_tablesLoadedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TablesLoading"))
  {
    m_tablesLoading = jsonValue.GetInteger("TablesLoading");

    m_tablesLoadingHasBeenSet = true;
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

  if(jsonValue.ValueExists("FreshStartDate"))
  {
    m_freshStartDate = jsonValue.GetDouble("FreshStartDate");

    m_freshStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopDate"))
  {
    m_stopDate = jsonValue.GetDouble("StopDate");

    m_stopDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FullLoadStartDate"))
  {
    m_fullLoadStartDate = jsonValue.GetDouble("FullLoadStartDate");

    m_fullLoadStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FullLoadFinishDate"))
  {
    m_fullLoadFinishDate = jsonValue.GetDouble("FullLoadFinishDate");

    m_fullLoadFinishDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationTaskStats::Jsonize() const
{
  JsonValue payload;

  if(m_fullLoadProgressPercentHasBeenSet)
  {
   payload.WithInteger("FullLoadProgressPercent", m_fullLoadProgressPercent);

  }

  if(m_elapsedTimeMillisHasBeenSet)
  {
   payload.WithInt64("ElapsedTimeMillis", m_elapsedTimeMillis);

  }

  if(m_tablesLoadedHasBeenSet)
  {
   payload.WithInteger("TablesLoaded", m_tablesLoaded);

  }

  if(m_tablesLoadingHasBeenSet)
  {
   payload.WithInteger("TablesLoading", m_tablesLoading);

  }

  if(m_tablesQueuedHasBeenSet)
  {
   payload.WithInteger("TablesQueued", m_tablesQueued);

  }

  if(m_tablesErroredHasBeenSet)
  {
   payload.WithInteger("TablesErrored", m_tablesErrored);

  }

  if(m_freshStartDateHasBeenSet)
  {
   payload.WithDouble("FreshStartDate", m_freshStartDate.SecondsWithMSPrecision());
  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_stopDateHasBeenSet)
  {
   payload.WithDouble("StopDate", m_stopDate.SecondsWithMSPrecision());
  }

  if(m_fullLoadStartDateHasBeenSet)
  {
   payload.WithDouble("FullLoadStartDate", m_fullLoadStartDate.SecondsWithMSPrecision());
  }

  if(m_fullLoadFinishDateHasBeenSet)
  {
   payload.WithDouble("FullLoadFinishDate", m_fullLoadFinishDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
