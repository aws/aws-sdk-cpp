/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/JobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

JobDetails::JobDetails() : 
    m_completedOnHasBeenSet(false),
    m_jobErrorHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

JobDetails::JobDetails(JsonView jsonValue) : 
    m_completedOnHasBeenSet(false),
    m_jobErrorHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetails& JobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completedOn"))
  {
    m_completedOn = jsonValue.GetString("completedOn");

    m_completedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobError"))
  {
    m_jobError = jsonValue.GetObject("jobError");

    m_jobErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedOn"))
  {
    m_startedOn = jsonValue.GetString("startedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_completedOnHasBeenSet)
  {
   payload.WithString("completedOn", m_completedOn.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_jobErrorHasBeenSet)
  {
   payload.WithObject("jobError", m_jobError.Jsonize());

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithString("startedOn", m_startedOn.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
