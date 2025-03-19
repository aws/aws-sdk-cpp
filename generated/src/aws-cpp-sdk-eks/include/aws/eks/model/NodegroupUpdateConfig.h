/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/NodegroupUpdateStrategies.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{

  /**
   * <p>The node group update configuration. An Amazon EKS managed node group updates
   * by replacing nodes with new nodes of newer AMI versions in parallel. You choose
   * the <i>maximum unavailable</i> and the <i>update strategy</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupUpdateConfig">AWS
   * API Reference</a></p>
   */
  class NodegroupUpdateConfig
  {
  public:
    AWS_EKS_API NodegroupUpdateConfig() = default;
    AWS_EKS_API NodegroupUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodegroupUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of nodes unavailable at once during a version update.
     * Nodes are updated in parallel. This value or
     * <code>maxUnavailablePercentage</code> is required to have a value.The maximum
     * number is 100.</p>
     */
    inline int GetMaxUnavailable() const { return m_maxUnavailable; }
    inline bool MaxUnavailableHasBeenSet() const { return m_maxUnavailableHasBeenSet; }
    inline void SetMaxUnavailable(int value) { m_maxUnavailableHasBeenSet = true; m_maxUnavailable = value; }
    inline NodegroupUpdateConfig& WithMaxUnavailable(int value) { SetMaxUnavailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum percentage of nodes unavailable during a version update. This
     * percentage of nodes are updated in parallel, up to 100 nodes at once. This value
     * or <code>maxUnavailable</code> is required to have a value.</p>
     */
    inline int GetMaxUnavailablePercentage() const { return m_maxUnavailablePercentage; }
    inline bool MaxUnavailablePercentageHasBeenSet() const { return m_maxUnavailablePercentageHasBeenSet; }
    inline void SetMaxUnavailablePercentage(int value) { m_maxUnavailablePercentageHasBeenSet = true; m_maxUnavailablePercentage = value; }
    inline NodegroupUpdateConfig& WithMaxUnavailablePercentage(int value) { SetMaxUnavailablePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the behavior to follow during a node group version
     * update of this managed node group. You choose between two possible strategies
     * for replacing nodes during an <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_UpdateNodegroupVersion.html">
     * <code>UpdateNodegroupVersion</code> </a> action.</p> <p>An Amazon EKS managed
     * node group updates by replacing nodes with new nodes of newer AMI versions in
     * parallel. The <i>update strategy</i> changes the managed node update behavior of
     * the managed node group for each quantity. The <i>default</i> strategy has
     * guardrails to protect you from misconfiguration and launches the new instances
     * first, before terminating the old instances. The <i>minimal</i> strategy removes
     * the guardrails and terminates the old instances before launching the new
     * instances. This minimal strategy is useful in scenarios where you are
     * constrained to resources or costs (for example, with hardware accelerators such
     * as GPUs).</p>
     */
    inline NodegroupUpdateStrategies GetUpdateStrategy() const { return m_updateStrategy; }
    inline bool UpdateStrategyHasBeenSet() const { return m_updateStrategyHasBeenSet; }
    inline void SetUpdateStrategy(NodegroupUpdateStrategies value) { m_updateStrategyHasBeenSet = true; m_updateStrategy = value; }
    inline NodegroupUpdateConfig& WithUpdateStrategy(NodegroupUpdateStrategies value) { SetUpdateStrategy(value); return *this;}
    ///@}
  private:

    int m_maxUnavailable{0};
    bool m_maxUnavailableHasBeenSet = false;

    int m_maxUnavailablePercentage{0};
    bool m_maxUnavailablePercentageHasBeenSet = false;

    NodegroupUpdateStrategies m_updateStrategy{NodegroupUpdateStrategies::NOT_SET};
    bool m_updateStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
