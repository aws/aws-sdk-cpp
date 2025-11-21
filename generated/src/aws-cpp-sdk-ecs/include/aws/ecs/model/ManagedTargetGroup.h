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
 * <p>The target group associated with the Express service's Application Load
 * Balancer. For more information about load balancer target groups, see <a
 * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_CreateTargetGroup.html">CreateTargetGroup</a>
 * in the <i>Elastic Load Balancing API Reference</i> </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedTargetGroup">AWS
 * API Reference</a></p>
 */
class ManagedTargetGroup {
 public:
  AWS_ECS_API ManagedTargetGroup() = default;
  AWS_ECS_API ManagedTargetGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedTargetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the target group.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ManagedTargetGroup& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the target group.</p>
   */
  inline ManagedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ManagedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ManagedTargetGroup& WithStatus(ManagedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about why the target group is in the current status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ManagedTargetGroup& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for when the target group was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedTargetGroup& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for health checks on the targets.</p>
   */
  inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
  inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
  template <typename HealthCheckPathT = Aws::String>
  void SetHealthCheckPath(HealthCheckPathT&& value) {
    m_healthCheckPathHasBeenSet = true;
    m_healthCheckPath = std::forward<HealthCheckPathT>(value);
  }
  template <typename HealthCheckPathT = Aws::String>
  ManagedTargetGroup& WithHealthCheckPath(HealthCheckPathT&& value) {
    SetHealthCheckPath(std::forward<HealthCheckPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port the load balancer uses when performing health checks on targets.</p>
   */
  inline int GetHealthCheckPort() const { return m_healthCheckPort; }
  inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
  inline void SetHealthCheckPort(int value) {
    m_healthCheckPortHasBeenSet = true;
    m_healthCheckPort = value;
  }
  inline ManagedTargetGroup& WithHealthCheckPort(int value) {
    SetHealthCheckPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which the targets receive traffic.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ManagedTargetGroup& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::String m_healthCheckPath;
  bool m_healthCheckPathHasBeenSet = false;

  int m_healthCheckPort{0};
  bool m_healthCheckPortHasBeenSet = false;

  int m_port{0};
  bool m_portHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
