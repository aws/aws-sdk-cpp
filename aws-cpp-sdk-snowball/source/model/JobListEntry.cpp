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

#include <aws/snowball/model/JobListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

JobListEntry::JobListEntry() : 
    m_jobIdHasBeenSet(false),
    m_jobState(JobState::NOT_SET),
    m_jobStateHasBeenSet(false),
    m_isMaster(false),
    m_isMasterHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

JobListEntry::JobListEntry(const JsonValue& jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobState(JobState::NOT_SET),
    m_jobStateHasBeenSet(false),
    m_isMaster(false),
    m_isMasterHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

JobListEntry& JobListEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobState"))
  {
    m_jobState = JobStateMapper::GetJobStateForName(jsonValue.GetString("JobState"));

    m_jobStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsMaster"))
  {
    m_isMaster = jsonValue.GetBool("IsMaster");

    m_isMasterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("JobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowballType"))
  {
    m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(jsonValue.GetString("SnowballType"));

    m_snowballTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobStateHasBeenSet)
  {
   payload.WithString("JobState", JobStateMapper::GetNameForJobState(m_jobState));
  }

  if(m_isMasterHasBeenSet)
  {
   payload.WithBool("IsMaster", m_isMaster);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws