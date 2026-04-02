/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/WeightedBalancedSchedulingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

WeightedBalancedSchedulingConfiguration::WeightedBalancedSchedulingConfiguration(JsonView jsonValue) { *this = jsonValue; }

WeightedBalancedSchedulingConfiguration& WeightedBalancedSchedulingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("priorityWeight")) {
    m_priorityWeight = jsonValue.GetDouble("priorityWeight");
    m_priorityWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorWeight")) {
    m_errorWeight = jsonValue.GetDouble("errorWeight");
    m_errorWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submissionTimeWeight")) {
    m_submissionTimeWeight = jsonValue.GetDouble("submissionTimeWeight");
    m_submissionTimeWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("renderingTaskWeight")) {
    m_renderingTaskWeight = jsonValue.GetDouble("renderingTaskWeight");
    m_renderingTaskWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("renderingTaskBuffer")) {
    m_renderingTaskBuffer = jsonValue.GetInteger("renderingTaskBuffer");
    m_renderingTaskBufferHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxPriorityOverride")) {
    m_maxPriorityOverride = jsonValue.GetObject("maxPriorityOverride");
    m_maxPriorityOverrideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minPriorityOverride")) {
    m_minPriorityOverride = jsonValue.GetObject("minPriorityOverride");
    m_minPriorityOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue WeightedBalancedSchedulingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_priorityWeightHasBeenSet) {
    payload.WithDouble("priorityWeight", m_priorityWeight);
  }

  if (m_errorWeightHasBeenSet) {
    payload.WithDouble("errorWeight", m_errorWeight);
  }

  if (m_submissionTimeWeightHasBeenSet) {
    payload.WithDouble("submissionTimeWeight", m_submissionTimeWeight);
  }

  if (m_renderingTaskWeightHasBeenSet) {
    payload.WithDouble("renderingTaskWeight", m_renderingTaskWeight);
  }

  if (m_renderingTaskBufferHasBeenSet) {
    payload.WithInteger("renderingTaskBuffer", m_renderingTaskBuffer);
  }

  if (m_maxPriorityOverrideHasBeenSet) {
    payload.WithObject("maxPriorityOverride", m_maxPriorityOverride.Jsonize());
  }

  if (m_minPriorityOverrideHasBeenSet) {
    payload.WithObject("minPriorityOverride", m_minPriorityOverride.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
