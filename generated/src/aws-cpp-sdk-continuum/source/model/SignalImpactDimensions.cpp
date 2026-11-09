/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalImpactDimensions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

SignalImpactDimensions::SignalImpactDimensions(JsonView jsonValue) { *this = jsonValue; }

SignalImpactDimensions& SignalImpactDimensions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attackerGains")) {
    m_attackerGains = jsonValue.GetObject("attackerGains");
    m_attackerGainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blastRadius")) {
    m_blastRadius = jsonValue.GetObject("blastRadius");
    m_blastRadiusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetValue")) {
    m_targetValue = jsonValue.GetObject("targetValue");
    m_targetValueHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalImpactDimensions::Jsonize() const {
  JsonValue payload;

  if (m_attackerGainsHasBeenSet) {
    payload.WithObject("attackerGains", m_attackerGains.Jsonize());
  }

  if (m_blastRadiusHasBeenSet) {
    payload.WithObject("blastRadius", m_blastRadius.Jsonize());
  }

  if (m_targetValueHasBeenSet) {
    payload.WithObject("targetValue", m_targetValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
