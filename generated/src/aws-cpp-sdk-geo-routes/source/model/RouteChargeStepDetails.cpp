/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteChargeStepDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteChargeStepDetails::RouteChargeStepDetails(JsonView jsonValue) { *this = jsonValue; }

RouteChargeStepDetails& RouteChargeStepDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ArrivalCharge")) {
    m_arrivalCharge = jsonValue.GetDouble("ArrivalCharge");
    m_arrivalChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConsumablePower")) {
    m_consumablePower = jsonValue.GetDouble("ConsumablePower");
    m_consumablePowerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredCharge")) {
    m_desiredCharge = jsonValue.GetDouble("DesiredCharge");
    m_desiredChargeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteChargeStepDetails::Jsonize() const {
  JsonValue payload;

  if (m_arrivalChargeHasBeenSet) {
    payload.WithDouble("ArrivalCharge", m_arrivalCharge);
  }

  if (m_consumablePowerHasBeenSet) {
    payload.WithDouble("ConsumablePower", m_consumablePower);
  }

  if (m_desiredChargeHasBeenSet) {
    payload.WithDouble("DesiredCharge", m_desiredCharge);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
