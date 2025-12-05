/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ManagedResourceStatus.h>

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
 * <p>Represents a scalable target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedScalableTarget">AWS
 * API Reference</a></p>
 */
class ManagedScalableTarget {
 public:
  AWS_ECS_API ManagedScalableTarget() = default;
  AWS_ECS_API ManagedScalableTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedScalableTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the scalable target.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ManagedScalableTarget& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the scalable target.</p>
   */
  inline ManagedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ManagedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ManagedScalableTarget& WithStatus(ManagedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about why the scalable target is in the current status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ManagedScalableTarget& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the target was most recently updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedScalableTarget& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum value to scale to in response to a scale-in activity.</p>
   */
  inline int GetMinCapacity() const { return m_minCapacity; }
  inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
  inline void SetMinCapacity(int value) {
    m_minCapacityHasBeenSet = true;
    m_minCapacity = value;
  }
  inline ManagedScalableTarget& WithMinCapacity(int value) {
    SetMinCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum value to scale to in response to a scale-out activity.</p>
   */
  inline int GetMaxCapacity() const { return m_maxCapacity; }
  inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
  inline void SetMaxCapacity(int value) {
    m_maxCapacityHasBeenSet = true;
    m_maxCapacity = value;
  }
  inline ManagedScalableTarget& WithMaxCapacity(int value) {
    SetMaxCapacity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_updatedAt{};

  int m_minCapacity{0};

  int m_maxCapacity{0};
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_minCapacityHasBeenSet = false;
  bool m_maxCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
