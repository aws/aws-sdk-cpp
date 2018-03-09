/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/JobExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobExecutionSummary::JobExecutionSummary() : 
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_queuedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false)
{
}

JobExecutionSummary::JobExecutionSummary(const JsonValue& jsonValue) : 
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_queuedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionSummary& JobExecutionSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobExecutionStatusMapper::GetJobExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuedAt"))
  {
    m_queuedAt = jsonValue.GetDouble("queuedAt");

    m_queuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobExecutionStatusMapper::GetNameForJobExecutionStatus(m_status));
  }

  if(m_queuedAtHasBeenSet)
  {
   payload.WithDouble("queuedAt", m_queuedAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_executionNumberHasBeenSet)
  {
   payload.WithInt64("executionNumber", m_executionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
