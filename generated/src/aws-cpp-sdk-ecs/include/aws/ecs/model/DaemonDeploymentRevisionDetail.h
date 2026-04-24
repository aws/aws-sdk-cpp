/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonDeploymentCapacityProvider.h>

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
 * <p>Details about a daemon revision during a deployment, including running and
 * draining instance counts per capacity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDeploymentRevisionDetail">AWS
 * API Reference</a></p>
 */
class DaemonDeploymentRevisionDetail {
 public:
  AWS_ECS_API DaemonDeploymentRevisionDetail() = default;
  AWS_ECS_API DaemonDeploymentRevisionDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDeploymentRevisionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon revision.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DaemonDeploymentRevisionDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity providers associated with this daemon revision during the
   * deployment.</p>
   */
  inline const Aws::Vector<DaemonDeploymentCapacityProvider>& GetCapacityProviders() const { return m_capacityProviders; }
  inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }
  template <typename CapacityProvidersT = Aws::Vector<DaemonDeploymentCapacityProvider>>
  void SetCapacityProviders(CapacityProvidersT&& value) {
    m_capacityProvidersHasBeenSet = true;
    m_capacityProviders = std::forward<CapacityProvidersT>(value);
  }
  template <typename CapacityProvidersT = Aws::Vector<DaemonDeploymentCapacityProvider>>
  DaemonDeploymentRevisionDetail& WithCapacityProviders(CapacityProvidersT&& value) {
    SetCapacityProviders(std::forward<CapacityProvidersT>(value));
    return *this;
  }
  template <typename CapacityProvidersT = DaemonDeploymentCapacityProvider>
  DaemonDeploymentRevisionDetail& AddCapacityProviders(CapacityProvidersT&& value) {
    m_capacityProvidersHasBeenSet = true;
    m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of instances running daemon tasks for this revision.</p>
   */
  inline int GetTotalRunningInstanceCount() const { return m_totalRunningInstanceCount; }
  inline bool TotalRunningInstanceCountHasBeenSet() const { return m_totalRunningInstanceCountHasBeenSet; }
  inline void SetTotalRunningInstanceCount(int value) {
    m_totalRunningInstanceCountHasBeenSet = true;
    m_totalRunningInstanceCount = value;
  }
  inline DaemonDeploymentRevisionDetail& WithTotalRunningInstanceCount(int value) {
    SetTotalRunningInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of instances being drained for this revision during the
   * deployment.</p>
   */
  inline int GetTotalDrainingInstanceCount() const { return m_totalDrainingInstanceCount; }
  inline bool TotalDrainingInstanceCountHasBeenSet() const { return m_totalDrainingInstanceCountHasBeenSet; }
  inline void SetTotalDrainingInstanceCount(int value) {
    m_totalDrainingInstanceCountHasBeenSet = true;
    m_totalDrainingInstanceCount = value;
  }
  inline DaemonDeploymentRevisionDetail& WithTotalDrainingInstanceCount(int value) {
    SetTotalDrainingInstanceCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<DaemonDeploymentCapacityProvider> m_capacityProviders;

  int m_totalRunningInstanceCount{0};

  int m_totalDrainingInstanceCount{0};
  bool m_arnHasBeenSet = false;
  bool m_capacityProvidersHasBeenSet = false;
  bool m_totalRunningInstanceCountHasBeenSet = false;
  bool m_totalDrainingInstanceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
