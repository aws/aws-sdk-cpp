/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntitiesDetectionJobFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntitiesDetectionJobFilter::EntitiesDetectionJobFilter() : 
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
}

EntitiesDetectionJobFilter::EntitiesDetectionJobFilter(JsonView jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
  *this = jsonValue;
}

EntitiesDetectionJobFilter& EntitiesDetectionJobFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTimeBefore"))
  {
    m_submitTimeBefore = jsonValue.GetDouble("SubmitTimeBefore");

    m_submitTimeBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTimeAfter"))
  {
    m_submitTimeAfter = jsonValue.GetDouble("SubmitTimeAfter");

    m_submitTimeAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitiesDetectionJobFilter::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_submitTimeBeforeHasBeenSet)
  {
   payload.WithDouble("SubmitTimeBefore", m_submitTimeBefore.SecondsWithMSPrecision());
  }

  if(m_submitTimeAfterHasBeenSet)
  {
   payload.WithDouble("SubmitTimeAfter", m_submitTimeAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
