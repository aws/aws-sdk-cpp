/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AutoEvaluationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AutoEvaluationDetails::AutoEvaluationDetails(JsonView jsonValue) { *this = jsonValue; }

AutoEvaluationDetails& AutoEvaluationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AutoEvaluationEnabled")) {
    m_autoEvaluationEnabled = jsonValue.GetBool("AutoEvaluationEnabled");
    m_autoEvaluationEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoEvaluationStatus")) {
    m_autoEvaluationStatus = AutoEvaluationStatusMapper::GetAutoEvaluationStatusForName(jsonValue.GetString("AutoEvaluationStatus"));
    m_autoEvaluationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoEvaluationDetails::Jsonize() const {
  JsonValue payload;

  if (m_autoEvaluationEnabledHasBeenSet) {
    payload.WithBool("AutoEvaluationEnabled", m_autoEvaluationEnabled);
  }

  if (m_autoEvaluationStatusHasBeenSet) {
    payload.WithString("AutoEvaluationStatus", AutoEvaluationStatusMapper::GetNameForAutoEvaluationStatus(m_autoEvaluationStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
