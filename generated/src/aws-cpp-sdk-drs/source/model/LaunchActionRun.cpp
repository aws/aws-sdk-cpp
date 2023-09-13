/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchActionRun::LaunchActionRun() : 
    m_actionHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_status(LaunchActionRunStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

LaunchActionRun::LaunchActionRun(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_status(LaunchActionRunStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchActionRun& LaunchActionRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");

    m_runIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = LaunchActionRunStatusMapper::GetLaunchActionRunStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchActionRun::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LaunchActionRunStatusMapper::GetNameForLaunchActionRunStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
