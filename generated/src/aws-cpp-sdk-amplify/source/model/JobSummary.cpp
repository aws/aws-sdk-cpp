﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/JobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

JobSummary::JobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

JobSummary& JobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");
    m_commitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitMessage"))
  {
    m_commitMessage = jsonValue.GetString("commitMessage");
    m_commitMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commitTime"))
  {
    m_commitTime = jsonValue.GetDouble("commitTime");
    m_commitTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("jobType"));
    m_jobTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceUrl"))
  {
    m_sourceUrl = jsonValue.GetString("sourceUrl");
    m_sourceUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceUrlType"))
  {
    m_sourceUrlType = SourceUrlTypeMapper::GetSourceUrlTypeForName(jsonValue.GetString("sourceUrlType"));
    m_sourceUrlTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue JobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("commitMessage", m_commitMessage);

  }

  if(m_commitTimeHasBeenSet)
  {
   payload.WithDouble("commitTime", m_commitTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_sourceUrlHasBeenSet)
  {
   payload.WithString("sourceUrl", m_sourceUrl);

  }

  if(m_sourceUrlTypeHasBeenSet)
  {
   payload.WithString("sourceUrlType", SourceUrlTypeMapper::GetNameForSourceUrlType(m_sourceUrlType));
  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
