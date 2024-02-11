/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/JobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

JobSummary::JobSummary() : 
    m_endTimeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

JobSummary::JobSummary(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

JobSummary& JobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue JobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
