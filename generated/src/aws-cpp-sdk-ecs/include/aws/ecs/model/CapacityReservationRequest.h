/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/CapacityReservationPreference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The Capacity Reservation configurations to be used when using the
 * <code>RESERVED</code> capacity option type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CapacityReservationRequest">AWS
 * API Reference</a></p>
 */
class CapacityReservationRequest {
 public:
  AWS_ECS_API CapacityReservationRequest() = default;
  AWS_ECS_API CapacityReservationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API CapacityReservationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Capacity Reservation resource group in which to run the
   * instance.</p>
   */
  inline const Aws::String& GetReservationGroupArn() const { return m_reservationGroupArn; }
  inline bool ReservationGroupArnHasBeenSet() const { return m_reservationGroupArnHasBeenSet; }
  template <typename ReservationGroupArnT = Aws::String>
  void SetReservationGroupArn(ReservationGroupArnT&& value) {
    m_reservationGroupArnHasBeenSet = true;
    m_reservationGroupArn = std::forward<ReservationGroupArnT>(value);
  }
  template <typename ReservationGroupArnT = Aws::String>
  CapacityReservationRequest& WithReservationGroupArn(ReservationGroupArnT&& value) {
    SetReservationGroupArn(std::forward<ReservationGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preference on when capacity reservations should be used.</p> <p>Valid
   * values are:</p> <ul> <li> <p> <code>RESERVATIONS_ONLY</code> - Exclusively
   * launch instances into capacity reservations that match the instance requirements
   * configured for the capacity provider. If none exist, instances will fail to
   * provision.</p> </li> <li> <p> <code>RESERVATIONS_FIRST</code> - Prefer to launch
   * instances into a capacity reservation if any exist that match the instance
   * requirements configured for the capacity provider. If none exist, fall back to
   * launching instances On-Demand.</p> </li> <li> <p>
   * <code>RESERVATIONS_EXCLUDED</code> - Avoid using capacity reservations and
   * launch exclusively On-Demand.</p> </li> </ul>
   */
  inline CapacityReservationPreference GetReservationPreference() const { return m_reservationPreference; }
  inline bool ReservationPreferenceHasBeenSet() const { return m_reservationPreferenceHasBeenSet; }
  inline void SetReservationPreference(CapacityReservationPreference value) {
    m_reservationPreferenceHasBeenSet = true;
    m_reservationPreference = value;
  }
  inline CapacityReservationRequest& WithReservationPreference(CapacityReservationPreference value) {
    SetReservationPreference(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_reservationGroupArn;

  CapacityReservationPreference m_reservationPreference{CapacityReservationPreference::NOT_SET};
  bool m_reservationGroupArnHasBeenSet = false;
  bool m_reservationPreferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
