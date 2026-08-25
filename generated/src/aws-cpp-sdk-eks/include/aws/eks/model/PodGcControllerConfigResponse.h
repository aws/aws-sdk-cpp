/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>The pod garbage collection controller configuration for the Kubernetes
 * controller manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PodGcControllerConfigResponse">AWS
 * API Reference</a></p>
 */
class PodGcControllerConfigResponse {
 public:
  AWS_EKS_API PodGcControllerConfigResponse() = default;
  AWS_EKS_API PodGcControllerConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API PodGcControllerConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of terminated pods that can exist before the garbage collector
   * starts deleting them.</p>
   */
  inline int GetTerminatedPodGcThreshold() const { return m_terminatedPodGcThreshold; }
  inline bool TerminatedPodGcThresholdHasBeenSet() const { return m_terminatedPodGcThresholdHasBeenSet; }
  inline void SetTerminatedPodGcThreshold(int value) {
    m_terminatedPodGcThresholdHasBeenSet = true;
    m_terminatedPodGcThreshold = value;
  }
  inline PodGcControllerConfigResponse& WithTerminatedPodGcThreshold(int value) {
    SetTerminatedPodGcThreshold(value);
    return *this;
  }
  ///@}
 private:
  int m_terminatedPodGcThreshold{0};
  bool m_terminatedPodGcThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
