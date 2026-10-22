/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/PrevalidationSignal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

PrevalidationSignal::PrevalidationSignal(JsonView jsonValue) { *this = jsonValue; }

PrevalidationSignal& PrevalidationSignal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("subjectRef")) {
    m_subjectRef = jsonValue.GetString("subjectRef");
    m_subjectRefHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimension")) {
    m_dimension = SignalDimensionMapper::GetSignalDimensionForName(jsonValue.GetString("dimension"));
    m_dimensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signalStrength")) {
    m_signalStrength = SignalStrengthMapper::GetSignalStrengthForName(jsonValue.GetString("signalStrength"));
    m_signalStrengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conclusion")) {
    m_conclusion = jsonValue.GetString("conclusion");
    m_conclusionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producerId")) {
    m_producerId = jsonValue.GetString("producerId");
    m_producerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producerVersion")) {
    m_producerVersion = jsonValue.GetString("producerVersion");
    m_producerVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceReasoning")) {
    m_confidenceReasoning = jsonValue.GetObject("confidenceReasoning");
    m_confidenceReasoningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computed")) {
    m_computed = jsonValue.GetObject("computed");
    m_computedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preconditions")) {
    m_preconditions = jsonValue.GetObject("preconditions");
    m_preconditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactDimensions")) {
    m_impactDimensions = jsonValue.GetObject("impactDimensions");
    m_impactDimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exploitability")) {
    m_exploitability = jsonValue.GetObject("exploitability");
    m_exploitabilityHasBeenSet = true;
  }
  return *this;
}

JsonValue PrevalidationSignal::Jsonize() const {
  JsonValue payload;

  if (m_subjectRefHasBeenSet) {
    payload.WithString("subjectRef", m_subjectRef);
  }

  if (m_dimensionHasBeenSet) {
    payload.WithString("dimension", SignalDimensionMapper::GetNameForSignalDimension(m_dimension));
  }

  if (m_signalStrengthHasBeenSet) {
    payload.WithString("signalStrength", SignalStrengthMapper::GetNameForSignalStrength(m_signalStrength));
  }

  if (m_conclusionHasBeenSet) {
    payload.WithString("conclusion", m_conclusion);
  }

  if (m_producerIdHasBeenSet) {
    payload.WithString("producerId", m_producerId);
  }

  if (m_producerVersionHasBeenSet) {
    payload.WithString("producerVersion", m_producerVersion);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  if (m_confidenceReasoningHasBeenSet) {
    payload.WithObject("confidenceReasoning", m_confidenceReasoning.Jsonize());
  }

  if (m_computedHasBeenSet) {
    payload.WithObject("computed", m_computed.Jsonize());
  }

  if (m_preconditionsHasBeenSet) {
    payload.WithObject("preconditions", m_preconditions.Jsonize());
  }

  if (m_impactDimensionsHasBeenSet) {
    payload.WithObject("impactDimensions", m_impactDimensions.Jsonize());
  }

  if (m_exploitabilityHasBeenSet) {
    payload.WithObject("exploitability", m_exploitability.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
