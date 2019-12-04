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

#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
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

MonitoringExecutionSummary::MonitoringExecutionSummary() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringExecutionStatus(ExecutionStatus::NOT_SET),
    m_monitoringExecutionStatusHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

MonitoringExecutionSummary::MonitoringExecutionSummary(JsonView jsonValue) : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_monitoringExecutionStatus(ExecutionStatus::NOT_SET),
    m_monitoringExecutionStatusHasBeenSet(false),
    m_processingJobArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringExecutionSummary& MonitoringExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitoringScheduleName"))
  {
    m_monitoringScheduleName = jsonValue.GetString("MonitoringScheduleName");

    m_monitoringScheduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledTime"))
  {
    m_scheduledTime = jsonValue.GetDouble("ScheduledTime");

    m_scheduledTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringExecutionStatus"))
  {
    m_monitoringExecutionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("MonitoringExecutionStatus"));

    m_monitoringExecutionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJobArn"))
  {
    m_processingJobArn = jsonValue.GetString("ProcessingJobArn");

    m_processingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_scheduledTimeHasBeenSet)
  {
   payload.WithDouble("ScheduledTime", m_scheduledTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_monitoringExecutionStatusHasBeenSet)
  {
   payload.WithString("MonitoringExecutionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_monitoringExecutionStatus));
  }

  if(m_processingJobArnHasBeenSet)
  {
   payload.WithString("ProcessingJobArn", m_processingJobArn);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
