/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>The horizontal pod autoscaler controller configuration for the Kubernetes
 * controller manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/HorizontalPodAutoscalerControllerConfigRequest">AWS
 * API Reference</a></p>
 */
class HorizontalPodAutoscalerControllerConfigRequest {
 public:
  AWS_EKS_API HorizontalPodAutoscalerControllerConfigRequest() = default;
  AWS_EKS_API HorizontalPodAutoscalerControllerConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API HorizontalPodAutoscalerControllerConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The interval between each sync of the horizontal pod autoscaler. Valid values
   * are single-unit durations such as <code>15s</code> or <code>1m</code>.</p>
   */
  inline const Aws::String& GetHorizontalPodAutoscalerSyncPeriod() const { return m_horizontalPodAutoscalerSyncPeriod; }
  inline bool HorizontalPodAutoscalerSyncPeriodHasBeenSet() const { return m_horizontalPodAutoscalerSyncPeriodHasBeenSet; }
  template <typename HorizontalPodAutoscalerSyncPeriodT = Aws::String>
  void SetHorizontalPodAutoscalerSyncPeriod(HorizontalPodAutoscalerSyncPeriodT&& value) {
    m_horizontalPodAutoscalerSyncPeriodHasBeenSet = true;
    m_horizontalPodAutoscalerSyncPeriod = std::forward<HorizontalPodAutoscalerSyncPeriodT>(value);
  }
  template <typename HorizontalPodAutoscalerSyncPeriodT = Aws::String>
  HorizontalPodAutoscalerControllerConfigRequest& WithHorizontalPodAutoscalerSyncPeriod(HorizontalPodAutoscalerSyncPeriodT&& value) {
    SetHorizontalPodAutoscalerSyncPeriod(std::forward<HorizontalPodAutoscalerSyncPeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_horizontalPodAutoscalerSyncPeriod;
  bool m_horizontalPodAutoscalerSyncPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
