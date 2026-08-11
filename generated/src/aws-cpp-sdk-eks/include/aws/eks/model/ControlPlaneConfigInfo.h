/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/KubeApiServerVersionConfig.h>
#include <aws/eks/model/KubeControllerManagerVersionConfig.h>
#include <aws/eks/model/KubeSchedulerVersionConfig.h>

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
 * <p>The control plane component configuration defaults and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ControlPlaneConfigInfo">AWS
 * API Reference</a></p>
 */
class ControlPlaneConfigInfo {
 public:
  AWS_EKS_API ControlPlaneConfigInfo() = default;
  AWS_EKS_API ControlPlaneConfigInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ControlPlaneConfigInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Kubernetes API server configuration defaults and constraints.</p>
   */
  inline const KubeApiServerVersionConfig& GetKubeApiServerConfig() const { return m_kubeApiServerConfig; }
  inline bool KubeApiServerConfigHasBeenSet() const { return m_kubeApiServerConfigHasBeenSet; }
  template <typename KubeApiServerConfigT = KubeApiServerVersionConfig>
  void SetKubeApiServerConfig(KubeApiServerConfigT&& value) {
    m_kubeApiServerConfigHasBeenSet = true;
    m_kubeApiServerConfig = std::forward<KubeApiServerConfigT>(value);
  }
  template <typename KubeApiServerConfigT = KubeApiServerVersionConfig>
  ControlPlaneConfigInfo& WithKubeApiServerConfig(KubeApiServerConfigT&& value) {
    SetKubeApiServerConfig(std::forward<KubeApiServerConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes scheduler configuration defaults and constraints.</p>
   */
  inline const KubeSchedulerVersionConfig& GetKubeSchedulerConfig() const { return m_kubeSchedulerConfig; }
  inline bool KubeSchedulerConfigHasBeenSet() const { return m_kubeSchedulerConfigHasBeenSet; }
  template <typename KubeSchedulerConfigT = KubeSchedulerVersionConfig>
  void SetKubeSchedulerConfig(KubeSchedulerConfigT&& value) {
    m_kubeSchedulerConfigHasBeenSet = true;
    m_kubeSchedulerConfig = std::forward<KubeSchedulerConfigT>(value);
  }
  template <typename KubeSchedulerConfigT = KubeSchedulerVersionConfig>
  ControlPlaneConfigInfo& WithKubeSchedulerConfig(KubeSchedulerConfigT&& value) {
    SetKubeSchedulerConfig(std::forward<KubeSchedulerConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes controller manager configuration defaults and constraints.</p>
   */
  inline const KubeControllerManagerVersionConfig& GetKubeControllerManagerConfig() const { return m_kubeControllerManagerConfig; }
  inline bool KubeControllerManagerConfigHasBeenSet() const { return m_kubeControllerManagerConfigHasBeenSet; }
  template <typename KubeControllerManagerConfigT = KubeControllerManagerVersionConfig>
  void SetKubeControllerManagerConfig(KubeControllerManagerConfigT&& value) {
    m_kubeControllerManagerConfigHasBeenSet = true;
    m_kubeControllerManagerConfig = std::forward<KubeControllerManagerConfigT>(value);
  }
  template <typename KubeControllerManagerConfigT = KubeControllerManagerVersionConfig>
  ControlPlaneConfigInfo& WithKubeControllerManagerConfig(KubeControllerManagerConfigT&& value) {
    SetKubeControllerManagerConfig(std::forward<KubeControllerManagerConfigT>(value));
    return *this;
  }
  ///@}
 private:
  KubeApiServerVersionConfig m_kubeApiServerConfig;

  KubeSchedulerVersionConfig m_kubeSchedulerConfig;

  KubeControllerManagerVersionConfig m_kubeControllerManagerConfig;
  bool m_kubeApiServerConfigHasBeenSet = false;
  bool m_kubeSchedulerConfigHasBeenSet = false;
  bool m_kubeControllerManagerConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
