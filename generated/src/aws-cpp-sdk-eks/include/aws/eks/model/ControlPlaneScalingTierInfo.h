/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ControlPlaneConfigInfo.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>Information about a provisioned control plane scaling tier.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ControlPlaneScalingTierInfo">AWS
 * API Reference</a></p>
 */
class ControlPlaneScalingTierInfo {
 public:
  AWS_EKS_API ControlPlaneScalingTierInfo() = default;
  AWS_EKS_API ControlPlaneScalingTierInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ControlPlaneScalingTierInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the scaling tier.</p>
   */
  inline const Aws::String& GetTierName() const { return m_tierName; }
  inline bool TierNameHasBeenSet() const { return m_tierNameHasBeenSet; }
  template <typename TierNameT = Aws::String>
  void SetTierName(TierNameT&& value) {
    m_tierNameHasBeenSet = true;
    m_tierName = std::forward<TierNameT>(value);
  }
  template <typename TierNameT = Aws::String>
  ControlPlaneScalingTierInfo& WithTierName(TierNameT&& value) {
    SetTierName(std::forward<TierNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum API request concurrency supported by this tier.</p>
   */
  inline int GetApiRequestConcurrency() const { return m_apiRequestConcurrency; }
  inline bool ApiRequestConcurrencyHasBeenSet() const { return m_apiRequestConcurrencyHasBeenSet; }
  inline void SetApiRequestConcurrency(int value) {
    m_apiRequestConcurrencyHasBeenSet = true;
    m_apiRequestConcurrency = value;
  }
  inline ControlPlaneScalingTierInfo& WithApiRequestConcurrency(int value) {
    SetApiRequestConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum pod scheduling rate per second supported by this tier.</p>
   */
  inline int GetPodSchedulingRatePerSecond() const { return m_podSchedulingRatePerSecond; }
  inline bool PodSchedulingRatePerSecondHasBeenSet() const { return m_podSchedulingRatePerSecondHasBeenSet; }
  inline void SetPodSchedulingRatePerSecond(int value) {
    m_podSchedulingRatePerSecondHasBeenSet = true;
    m_podSchedulingRatePerSecond = value;
  }
  inline ControlPlaneScalingTierInfo& WithPodSchedulingRatePerSecond(int value) {
    SetPodSchedulingRatePerSecond(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum cluster database size in GB supported by this tier.</p>
   */
  inline int GetClusterDatabaseSizeGb() const { return m_clusterDatabaseSizeGb; }
  inline bool ClusterDatabaseSizeGbHasBeenSet() const { return m_clusterDatabaseSizeGbHasBeenSet; }
  inline void SetClusterDatabaseSizeGb(int value) {
    m_clusterDatabaseSizeGbHasBeenSet = true;
    m_clusterDatabaseSizeGb = value;
  }
  inline ControlPlaneScalingTierInfo& WithClusterDatabaseSizeGb(int value) {
    SetClusterDatabaseSizeGb(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The control plane component configuration overrides specific to this scaling
   * tier.</p>
   */
  inline const ControlPlaneConfigInfo& GetControlPlaneComponentConfigOverrides() const { return m_controlPlaneComponentConfigOverrides; }
  inline bool ControlPlaneComponentConfigOverridesHasBeenSet() const { return m_controlPlaneComponentConfigOverridesHasBeenSet; }
  template <typename ControlPlaneComponentConfigOverridesT = ControlPlaneConfigInfo>
  void SetControlPlaneComponentConfigOverrides(ControlPlaneComponentConfigOverridesT&& value) {
    m_controlPlaneComponentConfigOverridesHasBeenSet = true;
    m_controlPlaneComponentConfigOverrides = std::forward<ControlPlaneComponentConfigOverridesT>(value);
  }
  template <typename ControlPlaneComponentConfigOverridesT = ControlPlaneConfigInfo>
  ControlPlaneScalingTierInfo& WithControlPlaneComponentConfigOverrides(ControlPlaneComponentConfigOverridesT&& value) {
    SetControlPlaneComponentConfigOverrides(std::forward<ControlPlaneComponentConfigOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tierName;

  int m_apiRequestConcurrency{0};

  int m_podSchedulingRatePerSecond{0};

  int m_clusterDatabaseSizeGb{0};

  ControlPlaneConfigInfo m_controlPlaneComponentConfigOverrides;
  bool m_tierNameHasBeenSet = false;
  bool m_apiRequestConcurrencyHasBeenSet = false;
  bool m_podSchedulingRatePerSecondHasBeenSet = false;
  bool m_clusterDatabaseSizeGbHasBeenSet = false;
  bool m_controlPlaneComponentConfigOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
