/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ProvisionedControlPlaneTier.h>

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
 * <p>The control plane scaling tier configuration. For more information, see EKS
 * Provisioned Control Plane in the Amazon EKS User Guide.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ControlPlaneScalingConfig">AWS
 * API Reference</a></p>
 */
class ControlPlaneScalingConfig {
 public:
  AWS_EKS_API ControlPlaneScalingConfig() = default;
  AWS_EKS_API ControlPlaneScalingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ControlPlaneScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The control plane scaling tier configuration. Available options are
   * <code>standard</code>, <code>tier-xl</code>, <code>tier-2xl</code>, or
   * <code>tier-4xl</code>. For more information, see EKS Provisioned Control Plane
   * in the Amazon EKS User Guide.</p>
   */
  inline ProvisionedControlPlaneTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(ProvisionedControlPlaneTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline ControlPlaneScalingConfig& WithTier(ProvisionedControlPlaneTier value) {
    SetTier(value);
    return *this;
  }
  ///@}
 private:
  ProvisionedControlPlaneTier m_tier{ProvisionedControlPlaneTier::NOT_SET};
  bool m_tierHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
