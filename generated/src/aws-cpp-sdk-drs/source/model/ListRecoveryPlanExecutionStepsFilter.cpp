/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/ListRecoveryPlanExecutionStepsFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

ListRecoveryPlanExecutionStepsFilter::ListRecoveryPlanExecutionStepsFilter(JsonView jsonValue) { *this = jsonValue; }

ListRecoveryPlanExecutionStepsFilter& ListRecoveryPlanExecutionStepsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = RecoveryPlanExecutionStepStatusMapper::GetRecoveryPlanExecutionStepStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ListRecoveryPlanExecutionStepsFilter::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecoveryPlanExecutionStepStatusMapper::GetNameForRecoveryPlanExecutionStepStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
