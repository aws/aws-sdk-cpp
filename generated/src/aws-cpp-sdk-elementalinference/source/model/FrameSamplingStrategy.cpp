/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FrameSamplingStrategy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FrameSamplingStrategy::FrameSamplingStrategy(JsonView jsonValue) { *this = jsonValue; }

FrameSamplingStrategy& FrameSamplingStrategy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mode")) {
    m_mode = FrameSamplingModeMapper::GetFrameSamplingModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameSamplingStrategy::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", FrameSamplingModeMapper::GetNameForFrameSamplingMode(m_mode));
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
