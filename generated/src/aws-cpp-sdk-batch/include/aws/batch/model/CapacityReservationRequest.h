/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The capacity reservation configuration for Amazon ECS Managed Instances. Use
 * this to target On-Demand Capacity Reservations or Reserved
 * Instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CapacityReservationRequest">AWS
 * API Reference</a></p>
 */
class CapacityReservationRequest {
 public:
  AWS_BATCH_API CapacityReservationRequest() = default;
  AWS_BATCH_API CapacityReservationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API CapacityReservationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity reservation group to
   * target.</p>
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
   * <p>The capacity reservation preference. Valid values:</p> <ul> <li> <p>
   * <code>RESERVATIONS_ONLY</code> — Use only capacity reservations.</p> </li> <li>
   * <p> <code>RESERVATIONS_FIRST</code> — Prefer capacity reservations but fall back
   * to On-Demand if unavailable.</p> </li> <li> <p>
   * <code>RESERVATIONS_EXCLUDED</code> — Do not use capacity reservations.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetReservationPreference() const { return m_reservationPreference; }
  inline bool ReservationPreferenceHasBeenSet() const { return m_reservationPreferenceHasBeenSet; }
  template <typename ReservationPreferenceT = Aws::String>
  void SetReservationPreference(ReservationPreferenceT&& value) {
    m_reservationPreferenceHasBeenSet = true;
    m_reservationPreference = std::forward<ReservationPreferenceT>(value);
  }
  template <typename ReservationPreferenceT = Aws::String>
  CapacityReservationRequest& WithReservationPreference(ReservationPreferenceT&& value) {
    SetReservationPreference(std::forward<ReservationPreferenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reservationGroupArn;

  Aws::String m_reservationPreference;
  bool m_reservationGroupArnHasBeenSet = false;
  bool m_reservationPreferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
