/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/StepParameterChunks.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

StepParameterChunks::StepParameterChunks(JsonView jsonValue) { *this = jsonValue; }

StepParameterChunks& StepParameterChunks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("defaultTaskCount")) {
    m_defaultTaskCount = jsonValue.GetInteger("defaultTaskCount");
    m_defaultTaskCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetRuntimeSeconds")) {
    m_targetRuntimeSeconds = jsonValue.GetInteger("targetRuntimeSeconds");
    m_targetRuntimeSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rangeConstraint")) {
    m_rangeConstraint = RangeConstraintMapper::GetRangeConstraintForName(jsonValue.GetString("rangeConstraint"));
    m_rangeConstraintHasBeenSet = true;
  }
  return *this;
}

JsonValue StepParameterChunks::Jsonize() const {
  JsonValue payload;

  if (m_defaultTaskCountHasBeenSet) {
    payload.WithInteger("defaultTaskCount", m_defaultTaskCount);
  }

  if (m_targetRuntimeSecondsHasBeenSet) {
    payload.WithInteger("targetRuntimeSeconds", m_targetRuntimeSeconds);
  }

  if (m_rangeConstraintHasBeenSet) {
    payload.WithString("rangeConstraint", RangeConstraintMapper::GetNameForRangeConstraint(m_rangeConstraint));
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
