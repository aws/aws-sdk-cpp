/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalComputation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

SignalComputation::SignalComputation(JsonView jsonValue) { *this = jsonValue; }

SignalComputation& SignalComputation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("likelihoodBand")) {
    m_likelihoodBand = SignalBandMapper::GetSignalBandForName(jsonValue.GetString("likelihoodBand"));
    m_likelihoodBandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactBand")) {
    m_impactBand = SignalBandMapper::GetSignalBandForName(jsonValue.GetString("impactBand"));
    m_impactBandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("barriers")) {
    m_barriers = jsonValue.GetInteger("barriers");
    m_barriersHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalComputation::Jsonize() const {
  JsonValue payload;

  if (m_likelihoodBandHasBeenSet) {
    payload.WithString("likelihoodBand", SignalBandMapper::GetNameForSignalBand(m_likelihoodBand));
  }

  if (m_impactBandHasBeenSet) {
    payload.WithString("impactBand", SignalBandMapper::GetNameForSignalBand(m_impactBand));
  }

  if (m_barriersHasBeenSet) {
    payload.WithInteger("barriers", m_barriers);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
