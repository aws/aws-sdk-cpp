/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ProcessingJobSummary::ProcessingJobSummary() : 
    m_processingJobNameHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_processingEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_processingJobStatus(ProcessingJobStatus::NOT_SET),
    m_processingJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_exitMessageHasBeenSet(false)
{
}

ProcessingJobSummary::ProcessingJobSummary(JsonView jsonValue) : 
    m_processingJobNameHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_processingEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_processingJobStatus(ProcessingJobStatus::NOT_SET),
    m_processingJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_exitMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingJobSummary& ProcessingJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProcessingJobName"))
  {
    m_processingJobName = jsonValue.GetString("ProcessingJobName");

    m_processingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobArn"))
  {
    m_processingJobArn = jsonValue.GetString("ProcessingJobArn");

    m_processingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingEndTime"))
  {
    m_processingEndTime = jsonValue.GetDouble("ProcessingEndTime");

    m_processingEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobStatus"))
  {
    m_processingJobStatus = ProcessingJobStatusMapper::GetProcessingJobStatusForName(jsonValue.GetString("ProcessingJobStatus"));

    m_processingJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExitMessage"))
  {
    m_exitMessage = jsonValue.GetString("ExitMessage");

    m_exitMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_processingJobNameHasBeenSet)
  {
   payload.WithString("ProcessingJobName", m_processingJobName);

  }

  if(m_processingJobArnHasBeenSet)
  {
   payload.WithString("ProcessingJobArn", m_processingJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_processingEndTimeHasBeenSet)
  {
   payload.WithDouble("ProcessingEndTime", m_processingEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_processingJobStatusHasBeenSet)
  {
   payload.WithString("ProcessingJobStatus", ProcessingJobStatusMapper::GetNameForProcessingJobStatus(m_processingJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_exitMessageHasBeenSet)
  {
   payload.WithString("ExitMessage", m_exitMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
