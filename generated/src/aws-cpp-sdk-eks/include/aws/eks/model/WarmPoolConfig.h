/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/WarmPoolState.h>

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
 * <p>The configuration for an Amazon EC2 Auto Scaling warm pool attached to an
 * Amazon EKS managed node group. Warm pools maintain pre-initialized EC2 instances
 * alongside your Auto Scaling group that have already completed the bootup
 * initialization process and can be kept in a <code>Stopped</code>,
 * <code>Running</code>, or <code>Hibernated</code> state.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/WarmPoolConfig">AWS
 * API Reference</a></p>
 */
class WarmPoolConfig {
 public:
  AWS_EKS_API WarmPoolConfig() = default;
  AWS_EKS_API WarmPoolConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API WarmPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to attach warm pools on the managed node group. Set to
   * <code>true</code> to enable the warm pool, or <code>false</code> to disable and
   * remove it. If not specified during an update, the current value is
   * preserved.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline WarmPoolConfig& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of instances to maintain in the warm pool. Default:
   * <code>0</code>. Size your warm pool based on scaling patterns to balance cost
   * and availability. Start with 10-20% of expected peak capacity.</p>
   */
  inline int GetMinSize() const { return m_minSize; }
  inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
  inline void SetMinSize(int value) {
    m_minSizeHasBeenSet = true;
    m_minSize = value;
  }
  inline WarmPoolConfig& WithMinSize(int value) {
    SetMinSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total number of instances across the warm pool and Auto Scaling
   * group combined. This value controls the total prepared capacity available for
   * your node group.</p>
   */
  inline int GetMaxGroupPreparedCapacity() const { return m_maxGroupPreparedCapacity; }
  inline bool MaxGroupPreparedCapacityHasBeenSet() const { return m_maxGroupPreparedCapacityHasBeenSet; }
  inline void SetMaxGroupPreparedCapacity(int value) {
    m_maxGroupPreparedCapacityHasBeenSet = true;
    m_maxGroupPreparedCapacity = value;
  }
  inline WarmPoolConfig& WithMaxGroupPreparedCapacity(int value) {
    SetMaxGroupPreparedCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired state for warm pool instances. Default: <code>Stopped</code>.
   * Valid values are <code>Stopped</code> (most cost-effective with EBS storage
   * costs only), <code>Running</code> (fastest transition time with full EC2 costs),
   * and <code>Hibernated</code> (balance between cost and speed, only supported on
   * specific instance types). Warm pool instances in the <code>Hibernated</code>
   * state are not supported with Bottlerocket AMIs.</p>
   */
  inline WarmPoolState GetPoolState() const { return m_poolState; }
  inline bool PoolStateHasBeenSet() const { return m_poolStateHasBeenSet; }
  inline void SetPoolState(WarmPoolState value) {
    m_poolStateHasBeenSet = true;
    m_poolState = value;
  }
  inline WarmPoolConfig& WithPoolState(WarmPoolState value) {
    SetPoolState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether instances should return to the warm pool during scale-in
   * events instead of being terminated. Default: <code>false</code>. Enable this to
   * reduce costs by reusing instances. This feature is not supported for
   * Bottlerocket AMIs.</p>
   */
  inline bool GetReuseOnScaleIn() const { return m_reuseOnScaleIn; }
  inline bool ReuseOnScaleInHasBeenSet() const { return m_reuseOnScaleInHasBeenSet; }
  inline void SetReuseOnScaleIn(bool value) {
    m_reuseOnScaleInHasBeenSet = true;
    m_reuseOnScaleIn = value;
  }
  inline WarmPoolConfig& WithReuseOnScaleIn(bool value) {
    SetReuseOnScaleIn(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  int m_minSize{0};

  int m_maxGroupPreparedCapacity{0};

  WarmPoolState m_poolState{WarmPoolState::NOT_SET};

  bool m_reuseOnScaleIn{false};
  bool m_enabledHasBeenSet = false;
  bool m_minSizeHasBeenSet = false;
  bool m_maxGroupPreparedCapacityHasBeenSet = false;
  bool m_poolStateHasBeenSet = false;
  bool m_reuseOnScaleInHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
