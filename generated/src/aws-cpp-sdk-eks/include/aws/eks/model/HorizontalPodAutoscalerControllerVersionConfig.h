/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/DurationParameterConfig.h>

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
 * <p>The horizontal pod autoscaler controller version configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/HorizontalPodAutoscalerControllerVersionConfig">AWS
 * API Reference</a></p>
 */
class HorizontalPodAutoscalerControllerVersionConfig {
 public:
  AWS_EKS_API HorizontalPodAutoscalerControllerVersionConfig() = default;
  AWS_EKS_API HorizontalPodAutoscalerControllerVersionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API HorizontalPodAutoscalerControllerVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HPA sync period configuration with default value and constraints.</p>
   */
  inline const DurationParameterConfig& GetHorizontalPodAutoscalerSyncPeriod() const { return m_horizontalPodAutoscalerSyncPeriod; }
  inline bool HorizontalPodAutoscalerSyncPeriodHasBeenSet() const { return m_horizontalPodAutoscalerSyncPeriodHasBeenSet; }
  template <typename HorizontalPodAutoscalerSyncPeriodT = DurationParameterConfig>
  void SetHorizontalPodAutoscalerSyncPeriod(HorizontalPodAutoscalerSyncPeriodT&& value) {
    m_horizontalPodAutoscalerSyncPeriodHasBeenSet = true;
    m_horizontalPodAutoscalerSyncPeriod = std::forward<HorizontalPodAutoscalerSyncPeriodT>(value);
  }
  template <typename HorizontalPodAutoscalerSyncPeriodT = DurationParameterConfig>
  HorizontalPodAutoscalerControllerVersionConfig& WithHorizontalPodAutoscalerSyncPeriod(HorizontalPodAutoscalerSyncPeriodT&& value) {
    SetHorizontalPodAutoscalerSyncPeriod(std::forward<HorizontalPodAutoscalerSyncPeriodT>(value));
    return *this;
  }
  ///@}
 private:
  DurationParameterConfig m_horizontalPodAutoscalerSyncPeriod;
  bool m_horizontalPodAutoscalerSyncPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
