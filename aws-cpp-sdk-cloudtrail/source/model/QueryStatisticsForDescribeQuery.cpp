/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/QueryStatisticsForDescribeQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

QueryStatisticsForDescribeQuery::QueryStatisticsForDescribeQuery() : 
    m_eventsMatched(0),
    m_eventsMatchedHasBeenSet(false),
    m_eventsScanned(0),
    m_eventsScannedHasBeenSet(false),
    m_bytesScanned(0),
    m_bytesScannedHasBeenSet(false),
    m_executionTimeInMillis(0),
    m_executionTimeInMillisHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

QueryStatisticsForDescribeQuery::QueryStatisticsForDescribeQuery(JsonView jsonValue) : 
    m_eventsMatched(0),
    m_eventsMatchedHasBeenSet(false),
    m_eventsScanned(0),
    m_eventsScannedHasBeenSet(false),
    m_bytesScanned(0),
    m_bytesScannedHasBeenSet(false),
    m_executionTimeInMillis(0),
    m_executionTimeInMillisHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStatisticsForDescribeQuery& QueryStatisticsForDescribeQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventsMatched"))
  {
    m_eventsMatched = jsonValue.GetInt64("EventsMatched");

    m_eventsMatchedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventsScanned"))
  {
    m_eventsScanned = jsonValue.GetInt64("EventsScanned");

    m_eventsScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesScanned"))
  {
    m_bytesScanned = jsonValue.GetInt64("BytesScanned");

    m_bytesScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionTimeInMillis"))
  {
    m_executionTimeInMillis = jsonValue.GetInteger("ExecutionTimeInMillis");

    m_executionTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStatisticsForDescribeQuery::Jsonize() const
{
  JsonValue payload;

  if(m_eventsMatchedHasBeenSet)
  {
   payload.WithInt64("EventsMatched", m_eventsMatched);

  }

  if(m_eventsScannedHasBeenSet)
  {
   payload.WithInt64("EventsScanned", m_eventsScanned);

  }

  if(m_bytesScannedHasBeenSet)
  {
   payload.WithInt64("BytesScanned", m_bytesScanned);

  }

  if(m_executionTimeInMillisHasBeenSet)
  {
   payload.WithInteger("ExecutionTimeInMillis", m_executionTimeInMillis);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
