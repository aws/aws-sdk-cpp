/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Details about the EV charge at the current step.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteChargeStepDetails">AWS
 * API Reference</a></p>
 */
class RouteChargeStepDetails {
 public:
  AWS_GEOROUTES_API RouteChargeStepDetails() = default;
  AWS_GEOROUTES_API RouteChargeStepDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteChargeStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Estimated vehicle battery charge before this step (in kWh). </p>
   */
  inline double GetArrivalCharge() const { return m_arrivalCharge; }
  inline bool ArrivalChargeHasBeenSet() const { return m_arrivalChargeHasBeenSet; }
  inline void SetArrivalCharge(double value) {
    m_arrivalChargeHasBeenSet = true;
    m_arrivalCharge = value;
  }
  inline RouteChargeStepDetails& WithArrivalCharge(double value) {
    SetArrivalCharge(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum charging power available to the vehicle.</p> <p> <b>Unit</b>:
   * <code>KwH</code> </p>
   */
  inline double GetConsumablePower() const { return m_consumablePower; }
  inline bool ConsumablePowerHasBeenSet() const { return m_consumablePowerHasBeenSet; }
  inline void SetConsumablePower(double value) {
    m_consumablePowerHasBeenSet = true;
    m_consumablePower = value;
  }
  inline RouteChargeStepDetails& WithConsumablePower(double value) {
    SetConsumablePower(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details that are specific to a Charge step.</p> <p> <b>Unit</b>:
   * <code>KwH</code> </p>
   */
  inline double GetDesiredCharge() const { return m_desiredCharge; }
  inline bool DesiredChargeHasBeenSet() const { return m_desiredChargeHasBeenSet; }
  inline void SetDesiredCharge(double value) {
    m_desiredChargeHasBeenSet = true;
    m_desiredCharge = value;
  }
  inline RouteChargeStepDetails& WithDesiredCharge(double value) {
    SetDesiredCharge(value);
    return *this;
  }
  ///@}
 private:
  double m_arrivalCharge{0.0};

  double m_consumablePower{0.0};

  double m_desiredCharge{0.0};
  bool m_arrivalChargeHasBeenSet = false;
  bool m_consumablePowerHasBeenSet = false;
  bool m_desiredChargeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
