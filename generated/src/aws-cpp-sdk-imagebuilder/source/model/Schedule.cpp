﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/Schedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

Schedule::Schedule(JsonView jsonValue) { *this = jsonValue; }

Schedule& Schedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = jsonValue.GetString("timezone");
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineExecutionStartCondition")) {
    m_pipelineExecutionStartCondition = PipelineExecutionStartConditionMapper::GetPipelineExecutionStartConditionForName(
        jsonValue.GetString("pipelineExecutionStartCondition"));
    m_pipelineExecutionStartConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoDisablePolicy")) {
    m_autoDisablePolicy = jsonValue.GetObject("autoDisablePolicy");
    m_autoDisablePolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue Schedule::Jsonize() const {
  JsonValue payload;

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("scheduleExpression", m_scheduleExpression);
  }

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", m_timezone);
  }

  if (m_pipelineExecutionStartConditionHasBeenSet) {
    payload.WithString("pipelineExecutionStartCondition",
                       PipelineExecutionStartConditionMapper::GetNameForPipelineExecutionStartCondition(m_pipelineExecutionStartCondition));
  }

  if (m_autoDisablePolicyHasBeenSet) {
    payload.WithObject("autoDisablePolicy", m_autoDisablePolicy.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
