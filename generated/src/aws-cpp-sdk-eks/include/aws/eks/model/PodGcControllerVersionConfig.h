/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/IntegerParameterConfig.h>

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
 * <p>The pod garbage collection controller version configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PodGcControllerVersionConfig">AWS
 * API Reference</a></p>
 */
class PodGcControllerVersionConfig {
 public:
  AWS_EKS_API PodGcControllerVersionConfig() = default;
  AWS_EKS_API PodGcControllerVersionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API PodGcControllerVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The terminated pod garbage collection threshold configuration with default
   * value and constraints.</p>
   */
  inline const IntegerParameterConfig& GetTerminatedPodGcThreshold() const { return m_terminatedPodGcThreshold; }
  inline bool TerminatedPodGcThresholdHasBeenSet() const { return m_terminatedPodGcThresholdHasBeenSet; }
  template <typename TerminatedPodGcThresholdT = IntegerParameterConfig>
  void SetTerminatedPodGcThreshold(TerminatedPodGcThresholdT&& value) {
    m_terminatedPodGcThresholdHasBeenSet = true;
    m_terminatedPodGcThreshold = std::forward<TerminatedPodGcThresholdT>(value);
  }
  template <typename TerminatedPodGcThresholdT = IntegerParameterConfig>
  PodGcControllerVersionConfig& WithTerminatedPodGcThreshold(TerminatedPodGcThresholdT&& value) {
    SetTerminatedPodGcThreshold(std::forward<TerminatedPodGcThresholdT>(value));
    return *this;
  }
  ///@}
 private:
  IntegerParameterConfig m_terminatedPodGcThreshold;
  bool m_terminatedPodGcThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
