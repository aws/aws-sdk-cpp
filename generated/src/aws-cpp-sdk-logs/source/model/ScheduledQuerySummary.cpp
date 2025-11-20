/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ScheduledQuerySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

ScheduledQuerySummary::ScheduledQuerySummary(JsonView jsonValue) { *this = jsonValue; }

ScheduledQuerySummary& ScheduledQuerySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scheduledQueryArn")) {
    m_scheduledQueryArn = jsonValue.GetString("scheduledQueryArn");
    m_scheduledQueryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ScheduledQueryStateMapper::GetScheduledQueryStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastTriggeredTime")) {
    m_lastTriggeredTime = jsonValue.GetInt64("lastTriggeredTime");
    m_lastTriggeredTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastExecutionStatus")) {
    m_lastExecutionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("lastExecutionStatus"));
    m_lastExecutionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = jsonValue.GetString("timezone");
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationConfiguration")) {
    m_destinationConfiguration = jsonValue.GetObject("destinationConfiguration");
    m_destinationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetInt64("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledQuerySummary::Jsonize() const {
  JsonValue payload;

  if (m_scheduledQueryArnHasBeenSet) {
    payload.WithString("scheduledQueryArn", m_scheduledQueryArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ScheduledQueryStateMapper::GetNameForScheduledQueryState(m_state));
  }

  if (m_lastTriggeredTimeHasBeenSet) {
    payload.WithInt64("lastTriggeredTime", m_lastTriggeredTime);
  }

  if (m_lastExecutionStatusHasBeenSet) {
    payload.WithString("lastExecutionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_lastExecutionStatus));
  }

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("scheduleExpression", m_scheduleExpression);
  }

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", m_timezone);
  }

  if (m_destinationConfigurationHasBeenSet) {
    payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithInt64("creationTime", m_creationTime);
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithInt64("lastUpdatedTime", m_lastUpdatedTime);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
