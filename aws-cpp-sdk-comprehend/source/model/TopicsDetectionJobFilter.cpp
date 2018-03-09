﻿/*
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

#include <aws/comprehend/model/TopicsDetectionJobFilter.h>
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

TopicsDetectionJobFilter::TopicsDetectionJobFilter() : 
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
}

TopicsDetectionJobFilter::TopicsDetectionJobFilter(const JsonValue& jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
  *this = jsonValue;
}

TopicsDetectionJobFilter& TopicsDetectionJobFilter::operator =(const JsonValue& jsonValue)
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

JsonValue TopicsDetectionJobFilter::Jsonize() const
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
