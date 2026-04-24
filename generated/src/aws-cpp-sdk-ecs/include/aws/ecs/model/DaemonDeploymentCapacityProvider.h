/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>Information about a capacity provider during a daemon
 * deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDeploymentCapacityProvider">AWS
 * API Reference</a></p>
 */
class DaemonDeploymentCapacityProvider {
 public:
  AWS_ECS_API DaemonDeploymentCapacityProvider() = default;
  AWS_ECS_API DaemonDeploymentCapacityProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDeploymentCapacityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DaemonDeploymentCapacityProvider& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances running daemon tasks on this capacity provider.</p>
   */
  inline int GetRunningInstanceCount() const { return m_runningInstanceCount; }
  inline bool RunningInstanceCountHasBeenSet() const { return m_runningInstanceCountHasBeenSet; }
  inline void SetRunningInstanceCount(int value) {
    m_runningInstanceCountHasBeenSet = true;
    m_runningInstanceCount = value;
  }
  inline DaemonDeploymentCapacityProvider& WithRunningInstanceCount(int value) {
    SetRunningInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances being drained on this capacity provider during the
   * deployment.</p>
   */
  inline int GetDrainingInstanceCount() const { return m_drainingInstanceCount; }
  inline bool DrainingInstanceCountHasBeenSet() const { return m_drainingInstanceCountHasBeenSet; }
  inline void SetDrainingInstanceCount(int value) {
    m_drainingInstanceCountHasBeenSet = true;
    m_drainingInstanceCount = value;
  }
  inline DaemonDeploymentCapacityProvider& WithDrainingInstanceCount(int value) {
    SetDrainingInstanceCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  int m_runningInstanceCount{0};

  int m_drainingInstanceCount{0};
  bool m_arnHasBeenSet = false;
  bool m_runningInstanceCountHasBeenSet = false;
  bool m_drainingInstanceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
