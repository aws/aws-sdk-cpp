/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteChargeStepDetails.h>
#include <aws/geo-routes/model/RouteVehicleAfterTravelStepType.h>

#include <utility>

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
 * <p>Steps of a leg that must be performed after the travel portion of the
 * leg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleAfterTravelStep">AWS
 * API Reference</a></p>
 */
class RouteVehicleAfterTravelStep {
 public:
  AWS_GEOROUTES_API RouteVehicleAfterTravelStep() = default;
  AWS_GEOROUTES_API RouteVehicleAfterTravelStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteVehicleAfterTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details that are specific to a Charge step.</p> <p> <b>Unit</b>: <code>KwH
   * </code> </p>
   */
  inline const RouteChargeStepDetails& GetChargeStepDetails() const { return m_chargeStepDetails; }
  inline bool ChargeStepDetailsHasBeenSet() const { return m_chargeStepDetailsHasBeenSet; }
  template <typename ChargeStepDetailsT = RouteChargeStepDetails>
  void SetChargeStepDetails(ChargeStepDetailsT&& value) {
    m_chargeStepDetailsHasBeenSet = true;
    m_chargeStepDetails = std::forward<ChargeStepDetailsT>(value);
  }
  template <typename ChargeStepDetailsT = RouteChargeStepDetails>
  RouteVehicleAfterTravelStep& WithChargeStepDetails(ChargeStepDetailsT&& value) {
    SetChargeStepDetails(std::forward<ChargeStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
   */
  inline long long GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(long long value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline RouteVehicleAfterTravelStep& WithDuration(long long value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Brief description of the step in the requested language.</p>  <p>Only
   * available when the TravelStepType is Default.</p>
   */
  inline const Aws::String& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = Aws::String>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = Aws::String>
  RouteVehicleAfterTravelStep& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the step.</p>
   */
  inline RouteVehicleAfterTravelStepType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RouteVehicleAfterTravelStepType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RouteVehicleAfterTravelStep& WithType(RouteVehicleAfterTravelStepType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  RouteChargeStepDetails m_chargeStepDetails;

  long long m_duration{0};

  Aws::String m_instruction;

  RouteVehicleAfterTravelStepType m_type{RouteVehicleAfterTravelStepType::NOT_SET};
  bool m_chargeStepDetailsHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
