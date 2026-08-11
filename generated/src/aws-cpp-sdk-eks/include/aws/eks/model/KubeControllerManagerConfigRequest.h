/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/HorizontalPodAutoscalerControllerConfigRequest.h>

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
 * <p>The configuration for the Kubernetes controller manager on an Amazon EKS
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeControllerManagerConfigRequest">AWS
 * API Reference</a></p>
 */
class KubeControllerManagerConfigRequest {
 public:
  AWS_EKS_API KubeControllerManagerConfigRequest() = default;
  AWS_EKS_API KubeControllerManagerConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeControllerManagerConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The horizontal pod autoscaler controller configuration.</p>
   */
  inline const HorizontalPodAutoscalerControllerConfigRequest& GetHorizontalPodAutoscalerControllerConfig() const {
    return m_horizontalPodAutoscalerControllerConfig;
  }
  inline bool HorizontalPodAutoscalerControllerConfigHasBeenSet() const { return m_horizontalPodAutoscalerControllerConfigHasBeenSet; }
  template <typename HorizontalPodAutoscalerControllerConfigT = HorizontalPodAutoscalerControllerConfigRequest>
  void SetHorizontalPodAutoscalerControllerConfig(HorizontalPodAutoscalerControllerConfigT&& value) {
    m_horizontalPodAutoscalerControllerConfigHasBeenSet = true;
    m_horizontalPodAutoscalerControllerConfig = std::forward<HorizontalPodAutoscalerControllerConfigT>(value);
  }
  template <typename HorizontalPodAutoscalerControllerConfigT = HorizontalPodAutoscalerControllerConfigRequest>
  KubeControllerManagerConfigRequest& WithHorizontalPodAutoscalerControllerConfig(HorizontalPodAutoscalerControllerConfigT&& value) {
    SetHorizontalPodAutoscalerControllerConfig(std::forward<HorizontalPodAutoscalerControllerConfigT>(value));
    return *this;
  }
  ///@}
 private:
  HorizontalPodAutoscalerControllerConfigRequest m_horizontalPodAutoscalerControllerConfig;
  bool m_horizontalPodAutoscalerControllerConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
