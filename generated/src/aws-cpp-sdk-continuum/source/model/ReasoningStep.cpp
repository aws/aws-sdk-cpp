/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ReasoningStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ReasoningStep::ReasoningStep(JsonView jsonValue) { *this = jsonValue; }

ReasoningStep& ReasoningStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("step")) {
    m_step = jsonValue.GetInteger("step");
    m_stepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("claim")) {
    m_claim = jsonValue.GetString("claim");
    m_claimHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue ReasoningStep::Jsonize() const {
  JsonValue payload;

  if (m_stepHasBeenSet) {
    payload.WithInteger("step", m_step);
  }

  if (m_claimHasBeenSet) {
    payload.WithString("claim", m_claim);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", m_source);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
