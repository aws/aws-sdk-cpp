/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/JobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

JobSummary::JobSummary() : 
    m_bucketCriteriaHasBeenSet(false),
    m_bucketDefinitionsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_lastRunErrorStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userPausedDetailsHasBeenSet(false)
{
}

JobSummary::JobSummary(JsonView jsonValue) : 
    m_bucketCriteriaHasBeenSet(false),
    m_bucketDefinitionsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_lastRunErrorStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userPausedDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

JobSummary& JobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketCriteria"))
  {
    m_bucketCriteria = jsonValue.GetObject("bucketCriteria");

    m_bucketCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketDefinitions"))
  {
    Aws::Utils::Array<JsonView> bucketDefinitionsJsonList = jsonValue.GetArray("bucketDefinitions");
    for(unsigned bucketDefinitionsIndex = 0; bucketDefinitionsIndex < bucketDefinitionsJsonList.GetLength(); ++bucketDefinitionsIndex)
    {
      m_bucketDefinitions.push_back(bucketDefinitionsJsonList[bucketDefinitionsIndex].AsObject());
    }
    m_bucketDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("jobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRunErrorStatus"))
  {
    m_lastRunErrorStatus = jsonValue.GetObject("lastRunErrorStatus");

    m_lastRunErrorStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userPausedDetails"))
  {
    m_userPausedDetails = jsonValue.GetObject("userPausedDetails");

    m_userPausedDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_bucketCriteriaHasBeenSet)
  {
   payload.WithObject("bucketCriteria", m_bucketCriteria.Jsonize());

  }

  if(m_bucketDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bucketDefinitionsJsonList(m_bucketDefinitions.size());
   for(unsigned bucketDefinitionsIndex = 0; bucketDefinitionsIndex < bucketDefinitionsJsonList.GetLength(); ++bucketDefinitionsIndex)
   {
     bucketDefinitionsJsonList[bucketDefinitionsIndex].AsObject(m_bucketDefinitions[bucketDefinitionsIndex].Jsonize());
   }
   payload.WithArray("bucketDefinitions", std::move(bucketDefinitionsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("jobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_lastRunErrorStatusHasBeenSet)
  {
   payload.WithObject("lastRunErrorStatus", m_lastRunErrorStatus.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_userPausedDetailsHasBeenSet)
  {
   payload.WithObject("userPausedDetails", m_userPausedDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
