/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/HorizontalPodAutoscalerControllerConfigResponse.h>

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
 * <p>The Kubernetes controller manager configuration for an Amazon EKS
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeControllerManagerConfigResponse">AWS
 * API Reference</a></p>
 */
class KubeControllerManagerConfigResponse {
 public:
  AWS_EKS_API KubeControllerManagerConfigResponse() = default;
  AWS_EKS_API KubeControllerManagerConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeControllerManagerConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The horizontal pod autoscaler controller configuration.</p>
   */
  inline const HorizontalPodAutoscalerControllerConfigResponse& GetHorizontalPodAutoscalerControllerConfig() const {
    return m_horizontalPodAutoscalerControllerConfig;
  }
  inline bool HorizontalPodAutoscalerControllerConfigHasBeenSet() const { return m_horizontalPodAutoscalerControllerConfigHasBeenSet; }
  template <typename HorizontalPodAutoscalerControllerConfigT = HorizontalPodAutoscalerControllerConfigResponse>
  void SetHorizontalPodAutoscalerControllerConfig(HorizontalPodAutoscalerControllerConfigT&& value) {
    m_horizontalPodAutoscalerControllerConfigHasBeenSet = true;
    m_horizontalPodAutoscalerControllerConfig = std::forward<HorizontalPodAutoscalerControllerConfigT>(value);
  }
  template <typename HorizontalPodAutoscalerControllerConfigT = HorizontalPodAutoscalerControllerConfigResponse>
  KubeControllerManagerConfigResponse& WithHorizontalPodAutoscalerControllerConfig(HorizontalPodAutoscalerControllerConfigT&& value) {
    SetHorizontalPodAutoscalerControllerConfig(std::forward<HorizontalPodAutoscalerControllerConfigT>(value));
    return *this;
  }
  ///@}
 private:
  HorizontalPodAutoscalerControllerConfigResponse m_horizontalPodAutoscalerControllerConfig;
  bool m_horizontalPodAutoscalerControllerConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
