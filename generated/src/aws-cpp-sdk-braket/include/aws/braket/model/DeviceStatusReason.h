/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/DeviceStatusReasonCode.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Braket {
namespace Model {

/**
 * <p>Provides information about the reason for the current status of a
 * device.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/DeviceStatusReason">AWS
 * API Reference</a></p>
 */
class DeviceStatusReason {
 public:
  AWS_BRAKET_API DeviceStatusReason() = default;
  AWS_BRAKET_API DeviceStatusReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API DeviceStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason code for the current status of the device.</p>
   */
  inline DeviceStatusReasonCode GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(DeviceStatusReasonCode value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline DeviceStatusReason& WithReason(DeviceStatusReasonCode value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the device status reason started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DeviceStatusReason& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated time at which the current status reason will end.</p>
   */
  inline const Aws::Utils::DateTime& GetEstimatedEndAt() const { return m_estimatedEndAt; }
  inline bool EstimatedEndAtHasBeenSet() const { return m_estimatedEndAtHasBeenSet; }
  template <typename EstimatedEndAtT = Aws::Utils::DateTime>
  void SetEstimatedEndAt(EstimatedEndAtT&& value) {
    m_estimatedEndAtHasBeenSet = true;
    m_estimatedEndAt = std::forward<EstimatedEndAtT>(value);
  }
  template <typename EstimatedEndAtT = Aws::Utils::DateTime>
  DeviceStatusReason& WithEstimatedEndAt(EstimatedEndAtT&& value) {
    SetEstimatedEndAt(std::forward<EstimatedEndAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of the most recent update to the device status reason.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DeviceStatusReason& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  DeviceStatusReasonCode m_reason{DeviceStatusReasonCode::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_estimatedEndAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_reasonHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_estimatedEndAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
