/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ObservationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ObservationSummary::ObservationSummary(JsonView jsonValue) { *this = jsonValue; }

ObservationSummary& ObservationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalObservations")) {
    m_totalObservations = jsonValue.GetInteger("TotalObservations");
    m_totalObservationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationsPassed")) {
    m_observationsPassed = jsonValue.GetInteger("ObservationsPassed");
    m_observationsPassedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationsFailed")) {
    m_observationsFailed = jsonValue.GetInteger("ObservationsFailed");
    m_observationsFailedHasBeenSet = true;
  }
  return *this;
}

JsonValue ObservationSummary::Jsonize() const {
  JsonValue payload;

  if (m_totalObservationsHasBeenSet) {
    payload.WithInteger("TotalObservations", m_totalObservations);
  }

  if (m_observationsPassedHasBeenSet) {
    payload.WithInteger("ObservationsPassed", m_observationsPassed);
  }

  if (m_observationsFailedHasBeenSet) {
    payload.WithInteger("ObservationsFailed", m_observationsFailed);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
