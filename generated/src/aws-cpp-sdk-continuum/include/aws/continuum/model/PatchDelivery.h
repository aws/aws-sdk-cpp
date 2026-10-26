/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/DeliveryStatus.h>
#include <aws/continuum/model/DestinationTarget.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Delivery of a patch to a destination the customer owns: an object in the
 * environment's source bucket or a pull request in the source
 * repository.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PatchDelivery">AWS
 * API Reference</a></p>
 */
class PatchDelivery {
 public:
  AWS_CONTINUUM_API PatchDelivery() = default;
  AWS_CONTINUUM_API PatchDelivery(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API PatchDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How far delivery to the destination has progressed.</p>
   */
  inline DeliveryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DeliveryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PatchDelivery& WithStatus(DeliveryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where the patch was or will be delivered. Absent while the destination is
   * still being resolved, or when delivery was skipped before a destination was
   * known.</p>
   */
  inline const DestinationTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = DestinationTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = DestinationTarget>
  PatchDelivery& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the delivery status last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PatchDelivery& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  DeliveryStatus m_status{DeliveryStatus::NOT_SET};

  DestinationTarget m_target;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_statusHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
