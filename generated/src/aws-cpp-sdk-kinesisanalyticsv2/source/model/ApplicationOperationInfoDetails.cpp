/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationOperationInfoDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationOperationInfoDetails::ApplicationOperationInfoDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationOperationInfoDetails& ApplicationOperationInfoDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");
    m_operationHasBeenSet = true;
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
  if(jsonValue.ValueExists("OperationStatus"))
  {
    m_operationStatus = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("OperationStatus"));
    m_operationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationVersionChangeDetails"))
  {
    m_applicationVersionChangeDetails = jsonValue.GetObject("ApplicationVersionChangeDetails");
    m_applicationVersionChangeDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperationFailureDetails"))
  {
    m_operationFailureDetails = jsonValue.GetObject("OperationFailureDetails");
    m_operationFailureDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationOperationInfoDetails::Jsonize() const
{
  JsonValue payload;

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", m_operation);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_operationStatusHasBeenSet)
  {
   payload.WithString("OperationStatus", OperationStatusMapper::GetNameForOperationStatus(m_operationStatus));
  }

  if(m_applicationVersionChangeDetailsHasBeenSet)
  {
   payload.WithObject("ApplicationVersionChangeDetails", m_applicationVersionChangeDetails.Jsonize());

  }

  if(m_operationFailureDetailsHasBeenSet)
  {
   payload.WithObject("OperationFailureDetails", m_operationFailureDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
