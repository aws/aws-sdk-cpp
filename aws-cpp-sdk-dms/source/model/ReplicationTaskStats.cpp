/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_tablesErroredHasBeenSet(false)
{
}

ReplicationTaskStats::ReplicationTaskStats(const JsonValue& jsonValue) : 
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
    m_tablesErroredHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTaskStats& ReplicationTaskStats::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws