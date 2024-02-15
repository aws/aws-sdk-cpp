/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ImportJobProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

ImportJobProperties::ImportJobProperties() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_jobOutputDataConfigHasBeenSet(false),
    m_jobProgressReportHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ImportJobProperties::ImportJobProperties(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_jobOutputDataConfigHasBeenSet(false),
    m_jobProgressReportHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ImportJobProperties& ImportJobProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("SubmitTime"))
  {
    m_submitTime = jsonValue.GetDouble("SubmitTime");

    m_submitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatastoreId"))
  {
    m_datastoreId = jsonValue.GetString("DatastoreId");

    m_datastoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobOutputDataConfig"))
  {
    m_jobOutputDataConfig = jsonValue.GetObject("JobOutputDataConfig");

    m_jobOutputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobProgressReport"))
  {
    m_jobProgressReport = jsonValue.GetObject("JobProgressReport");

    m_jobProgressReportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportJobProperties::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("SubmitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("DatastoreId", m_datastoreId);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_jobOutputDataConfigHasBeenSet)
  {
   payload.WithObject("JobOutputDataConfig", m_jobOutputDataConfig.Jsonize());

  }

  if(m_jobProgressReportHasBeenSet)
  {
   payload.WithObject("JobProgressReport", m_jobProgressReport.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
