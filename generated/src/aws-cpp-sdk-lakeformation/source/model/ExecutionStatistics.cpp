/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ExecutionStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

ExecutionStatistics::ExecutionStatistics() : 
    m_averageExecutionTimeMillis(0),
    m_averageExecutionTimeMillisHasBeenSet(false),
    m_dataScannedBytes(0),
    m_dataScannedBytesHasBeenSet(false),
    m_workUnitsExecutedCount(0),
    m_workUnitsExecutedCountHasBeenSet(false)
{
}

ExecutionStatistics::ExecutionStatistics(JsonView jsonValue) : 
    m_averageExecutionTimeMillis(0),
    m_averageExecutionTimeMillisHasBeenSet(false),
    m_dataScannedBytes(0),
    m_dataScannedBytesHasBeenSet(false),
    m_workUnitsExecutedCount(0),
    m_workUnitsExecutedCountHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionStatistics& ExecutionStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AverageExecutionTimeMillis"))
  {
    m_averageExecutionTimeMillis = jsonValue.GetInt64("AverageExecutionTimeMillis");

    m_averageExecutionTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataScannedBytes"))
  {
    m_dataScannedBytes = jsonValue.GetInt64("DataScannedBytes");

    m_dataScannedBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkUnitsExecutedCount"))
  {
    m_workUnitsExecutedCount = jsonValue.GetInt64("WorkUnitsExecutedCount");

    m_workUnitsExecutedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_averageExecutionTimeMillisHasBeenSet)
  {
   payload.WithInt64("AverageExecutionTimeMillis", m_averageExecutionTimeMillis);

  }

  if(m_dataScannedBytesHasBeenSet)
  {
   payload.WithInt64("DataScannedBytes", m_dataScannedBytes);

  }

  if(m_workUnitsExecutedCountHasBeenSet)
  {
   payload.WithInt64("WorkUnitsExecutedCount", m_workUnitsExecutedCount);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
