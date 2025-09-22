/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/NodeRepairConfigOverrides.h>
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
   * <p>The node auto repair configuration for the node group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodeRepairConfig">AWS
   * API Reference</a></p>
   */
  class NodeRepairConfig
  {
  public:
    AWS_EKS_API NodeRepairConfig() = default;
    AWS_EKS_API NodeRepairConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodeRepairConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to enable node auto repair for the node group. Node auto
     * repair is disabled by default.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline NodeRepairConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a count threshold of unhealthy nodes, above which node auto repair
     * actions will stop. When using this, you cannot also set
     * <code>maxUnhealthyNodeThresholdPercentage</code> at the same time.</p>
     */
    inline int GetMaxUnhealthyNodeThresholdCount() const { return m_maxUnhealthyNodeThresholdCount; }
    inline bool MaxUnhealthyNodeThresholdCountHasBeenSet() const { return m_maxUnhealthyNodeThresholdCountHasBeenSet; }
    inline void SetMaxUnhealthyNodeThresholdCount(int value) { m_maxUnhealthyNodeThresholdCountHasBeenSet = true; m_maxUnhealthyNodeThresholdCount = value; }
    inline NodeRepairConfig& WithMaxUnhealthyNodeThresholdCount(int value) { SetMaxUnhealthyNodeThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a percentage threshold of unhealthy nodes, above which node auto
     * repair actions will stop. When using this, you cannot also set
     * <code>maxUnhealthyNodeThresholdCount</code> at the same time.</p>
     */
    inline int GetMaxUnhealthyNodeThresholdPercentage() const { return m_maxUnhealthyNodeThresholdPercentage; }
    inline bool MaxUnhealthyNodeThresholdPercentageHasBeenSet() const { return m_maxUnhealthyNodeThresholdPercentageHasBeenSet; }
    inline void SetMaxUnhealthyNodeThresholdPercentage(int value) { m_maxUnhealthyNodeThresholdPercentageHasBeenSet = true; m_maxUnhealthyNodeThresholdPercentage = value; }
    inline NodeRepairConfig& WithMaxUnhealthyNodeThresholdPercentage(int value) { SetMaxUnhealthyNodeThresholdPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum number of nodes that can be repaired concurrently or in
     * parallel, expressed as a count of unhealthy nodes. This gives you finer-grained
     * control over the pace of node replacements. When using this, you cannot also set
     * <code>maxParallelNodesRepairedPercentage</code> at the same time.</p>
     */
    inline int GetMaxParallelNodesRepairedCount() const { return m_maxParallelNodesRepairedCount; }
    inline bool MaxParallelNodesRepairedCountHasBeenSet() const { return m_maxParallelNodesRepairedCountHasBeenSet; }
    inline void SetMaxParallelNodesRepairedCount(int value) { m_maxParallelNodesRepairedCountHasBeenSet = true; m_maxParallelNodesRepairedCount = value; }
    inline NodeRepairConfig& WithMaxParallelNodesRepairedCount(int value) { SetMaxParallelNodesRepairedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum number of nodes that can be repaired concurrently or in
     * parallel, expressed as a percentage of unhealthy nodes. This gives you
     * finer-grained control over the pace of node replacements. When using this, you
     * cannot also set <code>maxParallelNodesRepairedCount</code> at the same time.</p>
     */
    inline int GetMaxParallelNodesRepairedPercentage() const { return m_maxParallelNodesRepairedPercentage; }
    inline bool MaxParallelNodesRepairedPercentageHasBeenSet() const { return m_maxParallelNodesRepairedPercentageHasBeenSet; }
    inline void SetMaxParallelNodesRepairedPercentage(int value) { m_maxParallelNodesRepairedPercentageHasBeenSet = true; m_maxParallelNodesRepairedPercentage = value; }
    inline NodeRepairConfig& WithMaxParallelNodesRepairedPercentage(int value) { SetMaxParallelNodesRepairedPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify granular overrides for specific repair actions. These overrides
     * control the repair action and the repair delay time before a node is considered
     * eligible for repair. If you use this, you must specify all the values.</p>
     */
    inline const Aws::Vector<NodeRepairConfigOverrides>& GetNodeRepairConfigOverrides() const { return m_nodeRepairConfigOverrides; }
    inline bool NodeRepairConfigOverridesHasBeenSet() const { return m_nodeRepairConfigOverridesHasBeenSet; }
    template<typename NodeRepairConfigOverridesT = Aws::Vector<NodeRepairConfigOverrides>>
    void SetNodeRepairConfigOverrides(NodeRepairConfigOverridesT&& value) { m_nodeRepairConfigOverridesHasBeenSet = true; m_nodeRepairConfigOverrides = std::forward<NodeRepairConfigOverridesT>(value); }
    template<typename NodeRepairConfigOverridesT = Aws::Vector<NodeRepairConfigOverrides>>
    NodeRepairConfig& WithNodeRepairConfigOverrides(NodeRepairConfigOverridesT&& value) { SetNodeRepairConfigOverrides(std::forward<NodeRepairConfigOverridesT>(value)); return *this;}
    template<typename NodeRepairConfigOverridesT = NodeRepairConfigOverrides>
    NodeRepairConfig& AddNodeRepairConfigOverrides(NodeRepairConfigOverridesT&& value) { m_nodeRepairConfigOverridesHasBeenSet = true; m_nodeRepairConfigOverrides.emplace_back(std::forward<NodeRepairConfigOverridesT>(value)); return *this; }
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_maxUnhealthyNodeThresholdCount{0};
    bool m_maxUnhealthyNodeThresholdCountHasBeenSet = false;

    int m_maxUnhealthyNodeThresholdPercentage{0};
    bool m_maxUnhealthyNodeThresholdPercentageHasBeenSet = false;

    int m_maxParallelNodesRepairedCount{0};
    bool m_maxParallelNodesRepairedCountHasBeenSet = false;

    int m_maxParallelNodesRepairedPercentage{0};
    bool m_maxParallelNodesRepairedPercentageHasBeenSet = false;

    Aws::Vector<NodeRepairConfigOverrides> m_nodeRepairConfigOverrides;
    bool m_nodeRepairConfigOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
