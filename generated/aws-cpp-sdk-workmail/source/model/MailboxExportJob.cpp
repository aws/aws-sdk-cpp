/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MailboxExportJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

MailboxExportJob::MailboxExportJob() : 
    m_jobIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3PathHasBeenSet(false),
    m_estimatedProgress(0),
    m_estimatedProgressHasBeenSet(false),
    m_state(MailboxExportJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

MailboxExportJob::MailboxExportJob(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3PathHasBeenSet(false),
    m_estimatedProgress(0),
    m_estimatedProgressHasBeenSet(false),
    m_state(MailboxExportJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MailboxExportJob& MailboxExportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Path"))
  {
    m_s3Path = jsonValue.GetString("S3Path");

    m_s3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedProgress"))
  {
    m_estimatedProgress = jsonValue.GetInteger("EstimatedProgress");

    m_estimatedProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = MailboxExportJobStateMapper::GetMailboxExportJobStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MailboxExportJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3PathHasBeenSet)
  {
   payload.WithString("S3Path", m_s3Path);

  }

  if(m_estimatedProgressHasBeenSet)
  {
   payload.WithInteger("EstimatedProgress", m_estimatedProgress);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", MailboxExportJobStateMapper::GetNameForMailboxExportJobState(m_state));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
