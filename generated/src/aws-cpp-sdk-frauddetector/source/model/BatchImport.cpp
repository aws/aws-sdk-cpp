﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/BatchImport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

BatchImport::BatchImport(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchImport& BatchImport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AsyncJobStatusMapper::GetAsyncJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputPath"))
  {
    m_inputPath = jsonValue.GetString("inputPath");
    m_inputPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputPath"))
  {
    m_outputPath = jsonValue.GetString("outputPath");
    m_outputPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("eventTypeName");
    m_eventTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("iamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("processedRecordsCount"))
  {
    m_processedRecordsCount = jsonValue.GetInteger("processedRecordsCount");
    m_processedRecordsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedRecordsCount"))
  {
    m_failedRecordsCount = jsonValue.GetInteger("failedRecordsCount");
    m_failedRecordsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalRecordsCount"))
  {
    m_totalRecordsCount = jsonValue.GetInteger("totalRecordsCount");
    m_totalRecordsCountHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchImport::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AsyncJobStatusMapper::GetNameForAsyncJobStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithString("completionTime", m_completionTime);

  }

  if(m_inputPathHasBeenSet)
  {
   payload.WithString("inputPath", m_inputPath);

  }

  if(m_outputPathHasBeenSet)
  {
   payload.WithString("outputPath", m_outputPath);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("iamRoleArn", m_iamRoleArn);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_processedRecordsCountHasBeenSet)
  {
   payload.WithInteger("processedRecordsCount", m_processedRecordsCount);

  }

  if(m_failedRecordsCountHasBeenSet)
  {
   payload.WithInteger("failedRecordsCount", m_failedRecordsCount);

  }

  if(m_totalRecordsCountHasBeenSet)
  {
   payload.WithInteger("totalRecordsCount", m_totalRecordsCount);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
