/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/BatchJobExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

BatchJobExecutionSummary::BatchJobExecutionSummary() : 
    m_applicationIdHasBeenSet(false),
    m_batchJobIdentifierHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobType(BatchJobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_returnCodeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(BatchJobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

BatchJobExecutionSummary::BatchJobExecutionSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_batchJobIdentifierHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobType(BatchJobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_returnCodeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(BatchJobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

BatchJobExecutionSummary& BatchJobExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("batchJobIdentifier"))
  {
    m_batchJobIdentifier = jsonValue.GetObject("batchJobIdentifier");

    m_batchJobIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = BatchJobTypeMapper::GetBatchJobTypeForName(jsonValue.GetString("jobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("returnCode"))
  {
    m_returnCode = jsonValue.GetString("returnCode");

    m_returnCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = BatchJobExecutionStatusMapper::GetBatchJobExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchJobExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_batchJobIdentifierHasBeenSet)
  {
   payload.WithObject("batchJobIdentifier", m_batchJobIdentifier.Jsonize());

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", BatchJobTypeMapper::GetNameForBatchJobType(m_jobType));
  }

  if(m_returnCodeHasBeenSet)
  {
   payload.WithString("returnCode", m_returnCode);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", BatchJobExecutionStatusMapper::GetNameForBatchJobExecutionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
