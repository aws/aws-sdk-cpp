/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ComputeScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

ComputeScalingPolicy::ComputeScalingPolicy(JsonView jsonValue) { *this = jsonValue; }

ComputeScalingPolicy& ComputeScalingPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minScaleDownDelayMinutes")) {
    m_minScaleDownDelayMinutes = jsonValue.GetInteger("minScaleDownDelayMinutes");
    m_minScaleDownDelayMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeScalingPolicy::Jsonize() const {
  JsonValue payload;

  if (m_minScaleDownDelayMinutesHasBeenSet) {
    payload.WithInteger("minScaleDownDelayMinutes", m_minScaleDownDelayMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
