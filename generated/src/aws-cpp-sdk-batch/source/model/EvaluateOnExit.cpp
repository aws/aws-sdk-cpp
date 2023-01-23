/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EvaluateOnExit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EvaluateOnExit::EvaluateOnExit() : 
    m_onStatusReasonHasBeenSet(false),
    m_onReasonHasBeenSet(false),
    m_onExitCodeHasBeenSet(false),
    m_action(RetryAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

EvaluateOnExit::EvaluateOnExit(JsonView jsonValue) : 
    m_onStatusReasonHasBeenSet(false),
    m_onReasonHasBeenSet(false),
    m_onExitCodeHasBeenSet(false),
    m_action(RetryAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluateOnExit& EvaluateOnExit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("onStatusReason"))
  {
    m_onStatusReason = jsonValue.GetString("onStatusReason");

    m_onStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onReason"))
  {
    m_onReason = jsonValue.GetString("onReason");

    m_onReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onExitCode"))
  {
    m_onExitCode = jsonValue.GetString("onExitCode");

    m_onExitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = RetryActionMapper::GetRetryActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluateOnExit::Jsonize() const
{
  JsonValue payload;

  if(m_onStatusReasonHasBeenSet)
  {
   payload.WithString("onStatusReason", m_onStatusReason);

  }

  if(m_onReasonHasBeenSet)
  {
   payload.WithString("onReason", m_onReason);

  }

  if(m_onExitCodeHasBeenSet)
  {
   payload.WithString("onExitCode", m_onExitCode);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", RetryActionMapper::GetNameForRetryAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
