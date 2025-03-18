/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/HookProgressEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

HookProgressEvent::HookProgressEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

HookProgressEvent& HookProgressEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HookTypeName"))
  {
    m_hookTypeName = jsonValue.GetString("HookTypeName");
    m_hookTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HookTypeVersionId"))
  {
    m_hookTypeVersionId = jsonValue.GetString("HookTypeVersionId");
    m_hookTypeVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HookTypeArn"))
  {
    m_hookTypeArn = jsonValue.GetString("HookTypeArn");
    m_hookTypeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvocationPoint"))
  {
    m_invocationPoint = jsonValue.GetString("InvocationPoint");
    m_invocationPointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HookStatus"))
  {
    m_hookStatus = jsonValue.GetString("HookStatus");
    m_hookStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HookEventTime"))
  {
    m_hookEventTime = jsonValue.GetDouble("HookEventTime");
    m_hookEventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HookStatusMessage"))
  {
    m_hookStatusMessage = jsonValue.GetString("HookStatusMessage");
    m_hookStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureMode"))
  {
    m_failureMode = jsonValue.GetString("FailureMode");
    m_failureModeHasBeenSet = true;
  }
  return *this;
}

JsonValue HookProgressEvent::Jsonize() const
{
  JsonValue payload;

  if(m_hookTypeNameHasBeenSet)
  {
   payload.WithString("HookTypeName", m_hookTypeName);

  }

  if(m_hookTypeVersionIdHasBeenSet)
  {
   payload.WithString("HookTypeVersionId", m_hookTypeVersionId);

  }

  if(m_hookTypeArnHasBeenSet)
  {
   payload.WithString("HookTypeArn", m_hookTypeArn);

  }

  if(m_invocationPointHasBeenSet)
  {
   payload.WithString("InvocationPoint", m_invocationPoint);

  }

  if(m_hookStatusHasBeenSet)
  {
   payload.WithString("HookStatus", m_hookStatus);

  }

  if(m_hookEventTimeHasBeenSet)
  {
   payload.WithDouble("HookEventTime", m_hookEventTime.SecondsWithMSPrecision());
  }

  if(m_hookStatusMessageHasBeenSet)
  {
   payload.WithString("HookStatusMessage", m_hookStatusMessage);

  }

  if(m_failureModeHasBeenSet)
  {
   payload.WithString("FailureMode", m_failureMode);

  }

  return payload;
}

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
