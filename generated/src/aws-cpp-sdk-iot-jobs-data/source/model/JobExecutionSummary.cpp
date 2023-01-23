/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/JobExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

JobExecutionSummary::JobExecutionSummary() : 
    m_jobIdHasBeenSet(false),
    m_queuedAt(0),
    m_queuedAtHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAt(0),
    m_lastUpdatedAtHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false)
{
}

JobExecutionSummary::JobExecutionSummary(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_queuedAt(0),
    m_queuedAtHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAt(0),
    m_lastUpdatedAtHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSummary& JobExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuedAt"))
  {
    m_queuedAt = jsonValue.GetInt64("queuedAt");

    m_queuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetInt64("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionNumber"))
  {
    m_executionNumber = jsonValue.GetInt64("executionNumber");

    m_executionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_queuedAtHasBeenSet)
  {
   payload.WithInt64("queuedAt", m_queuedAt);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithInt64("startedAt", m_startedAt);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithInt64("lastUpdatedAt", m_lastUpdatedAt);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  if(m_executionNumberHasBeenSet)
  {
   payload.WithInt64("executionNumber", m_executionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
