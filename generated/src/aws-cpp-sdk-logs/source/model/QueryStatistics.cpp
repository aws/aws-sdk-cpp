/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/QueryStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

QueryStatistics::QueryStatistics() : 
    m_recordsMatched(0.0),
    m_recordsMatchedHasBeenSet(false),
    m_recordsScanned(0.0),
    m_recordsScannedHasBeenSet(false),
    m_estimatedRecordsSkipped(0.0),
    m_estimatedRecordsSkippedHasBeenSet(false),
    m_bytesScanned(0.0),
    m_bytesScannedHasBeenSet(false),
    m_estimatedBytesSkipped(0.0),
    m_estimatedBytesSkippedHasBeenSet(false),
    m_logGroupsScanned(0.0),
    m_logGroupsScannedHasBeenSet(false)
{
}

QueryStatistics::QueryStatistics(JsonView jsonValue)
  : QueryStatistics()
{
  *this = jsonValue;
}

QueryStatistics& QueryStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordsMatched"))
  {
    m_recordsMatched = jsonValue.GetDouble("recordsMatched");

    m_recordsMatchedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordsScanned"))
  {
    m_recordsScanned = jsonValue.GetDouble("recordsScanned");

    m_recordsScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedRecordsSkipped"))
  {
    m_estimatedRecordsSkipped = jsonValue.GetDouble("estimatedRecordsSkipped");

    m_estimatedRecordsSkippedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bytesScanned"))
  {
    m_bytesScanned = jsonValue.GetDouble("bytesScanned");

    m_bytesScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedBytesSkipped"))
  {
    m_estimatedBytesSkipped = jsonValue.GetDouble("estimatedBytesSkipped");

    m_estimatedBytesSkippedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupsScanned"))
  {
    m_logGroupsScanned = jsonValue.GetDouble("logGroupsScanned");

    m_logGroupsScannedHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_recordsMatchedHasBeenSet)
  {
   payload.WithDouble("recordsMatched", m_recordsMatched);

  }

  if(m_recordsScannedHasBeenSet)
  {
   payload.WithDouble("recordsScanned", m_recordsScanned);

  }

  if(m_estimatedRecordsSkippedHasBeenSet)
  {
   payload.WithDouble("estimatedRecordsSkipped", m_estimatedRecordsSkipped);

  }

  if(m_bytesScannedHasBeenSet)
  {
   payload.WithDouble("bytesScanned", m_bytesScanned);

  }

  if(m_estimatedBytesSkippedHasBeenSet)
  {
   payload.WithDouble("estimatedBytesSkipped", m_estimatedBytesSkipped);

  }

  if(m_logGroupsScannedHasBeenSet)
  {
   payload.WithDouble("logGroupsScanned", m_logGroupsScanned);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
