/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetectMitigationActionExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

DetectMitigationActionExecution::DetectMitigationActionExecution() : 
    m_taskIdHasBeenSet(false),
    m_violationIdHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_executionStartDateHasBeenSet(false),
    m_executionEndDateHasBeenSet(false),
    m_status(DetectMitigationActionExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DetectMitigationActionExecution::DetectMitigationActionExecution(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_violationIdHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_executionStartDateHasBeenSet(false),
    m_executionEndDateHasBeenSet(false),
    m_status(DetectMitigationActionExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DetectMitigationActionExecution& DetectMitigationActionExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("violationId"))
  {
    m_violationId = jsonValue.GetString("violationId");

    m_violationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStartDate"))
  {
    m_executionStartDate = jsonValue.GetDouble("executionStartDate");

    m_executionStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionEndDate"))
  {
    m_executionEndDate = jsonValue.GetDouble("executionEndDate");

    m_executionEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectMitigationActionExecutionStatusMapper::GetDetectMitigationActionExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectMitigationActionExecution::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_violationIdHasBeenSet)
  {
   payload.WithString("violationId", m_violationId);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_executionStartDateHasBeenSet)
  {
   payload.WithDouble("executionStartDate", m_executionStartDate.SecondsWithMSPrecision());
  }

  if(m_executionEndDateHasBeenSet)
  {
   payload.WithDouble("executionEndDate", m_executionEndDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DetectMitigationActionExecutionStatusMapper::GetNameForDetectMitigationActionExecutionStatus(m_status));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
