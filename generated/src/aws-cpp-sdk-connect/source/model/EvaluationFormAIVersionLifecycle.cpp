/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormAIVersionLifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormAIVersionLifecycle::EvaluationFormAIVersionLifecycle(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormAIVersionLifecycle& EvaluationFormAIVersionLifecycle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationFormAIVersionStatusMapper::GetEvaluationFormAIVersionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartOfLifeTime")) {
    m_startOfLifeTime = jsonValue.GetDouble("StartOfLifeTime");
    m_startOfLifeTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndOfLifeTime")) {
    m_endOfLifeTime = jsonValue.GetDouble("EndOfLifeTime");
    m_endOfLifeTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormAIVersionLifecycle::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationFormAIVersionStatusMapper::GetNameForEvaluationFormAIVersionStatus(m_status));
  }

  if (m_startOfLifeTimeHasBeenSet) {
    payload.WithDouble("StartOfLifeTime", m_startOfLifeTime.SecondsWithMSPrecision());
  }

  if (m_endOfLifeTimeHasBeenSet) {
    payload.WithDouble("EndOfLifeTime", m_endOfLifeTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
