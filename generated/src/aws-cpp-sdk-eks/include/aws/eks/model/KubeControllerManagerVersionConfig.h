/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/HorizontalPodAutoscalerControllerVersionConfig.h>
#include <aws/eks/model/PodGcControllerVersionConfig.h>

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
 * <p>The Kubernetes controller manager version-specific configuration defaults and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeControllerManagerVersionConfig">AWS
 * API Reference</a></p>
 */
class KubeControllerManagerVersionConfig {
 public:
  AWS_EKS_API KubeControllerManagerVersionConfig() = default;
  AWS_EKS_API KubeControllerManagerVersionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeControllerManagerVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pod garbage collection controller configuration with default value and
   * constraints.</p>
   */
  inline const PodGcControllerVersionConfig& GetPodGcControllerConfig() const { return m_podGcControllerConfig; }
  inline bool PodGcControllerConfigHasBeenSet() const { return m_podGcControllerConfigHasBeenSet; }
  template <typename PodGcControllerConfigT = PodGcControllerVersionConfig>
  void SetPodGcControllerConfig(PodGcControllerConfigT&& value) {
    m_podGcControllerConfigHasBeenSet = true;
    m_podGcControllerConfig = std::forward<PodGcControllerConfigT>(value);
  }
  template <typename PodGcControllerConfigT = PodGcControllerVersionConfig>
  KubeControllerManagerVersionConfig& WithPodGcControllerConfig(PodGcControllerConfigT&& value) {
    SetPodGcControllerConfig(std::forward<PodGcControllerConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The horizontal pod autoscaler controller configuration with default value and
   * constraints.</p>
   */
  inline const HorizontalPodAutoscalerControllerVersionConfig& GetHorizontalPodAutoscalerControllerConfig() const {
    return m_horizontalPodAutoscalerControllerConfig;
  }
  inline bool HorizontalPodAutoscalerControllerConfigHasBeenSet() const { return m_horizontalPodAutoscalerControllerConfigHasBeenSet; }
  template <typename HorizontalPodAutoscalerControllerConfigT = HorizontalPodAutoscalerControllerVersionConfig>
  void SetHorizontalPodAutoscalerControllerConfig(HorizontalPodAutoscalerControllerConfigT&& value) {
    m_horizontalPodAutoscalerControllerConfigHasBeenSet = true;
    m_horizontalPodAutoscalerControllerConfig = std::forward<HorizontalPodAutoscalerControllerConfigT>(value);
  }
  template <typename HorizontalPodAutoscalerControllerConfigT = HorizontalPodAutoscalerControllerVersionConfig>
  KubeControllerManagerVersionConfig& WithHorizontalPodAutoscalerControllerConfig(HorizontalPodAutoscalerControllerConfigT&& value) {
    SetHorizontalPodAutoscalerControllerConfig(std::forward<HorizontalPodAutoscalerControllerConfigT>(value));
    return *this;
  }
  ///@}
 private:
  PodGcControllerVersionConfig m_podGcControllerConfig;

  HorizontalPodAutoscalerControllerVersionConfig m_horizontalPodAutoscalerControllerConfig;
  bool m_podGcControllerConfigHasBeenSet = false;
  bool m_horizontalPodAutoscalerControllerConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
