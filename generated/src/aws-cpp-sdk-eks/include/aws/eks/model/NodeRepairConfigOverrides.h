/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/RepairAction.h>
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
   * <p>Specify granular overrides for specific repair actions. These overrides
   * control the repair action and the repair delay time before a node is considered
   * eligible for repair. If you use this, you must specify all the
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodeRepairConfigOverrides">AWS
   * API Reference</a></p>
   */
  class NodeRepairConfigOverrides
  {
  public:
    AWS_EKS_API NodeRepairConfigOverrides() = default;
    AWS_EKS_API NodeRepairConfigOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodeRepairConfigOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify an unhealthy condition reported by the node monitoring agent that
     * this override would apply to.</p>
     */
    inline const Aws::String& GetNodeMonitoringCondition() const { return m_nodeMonitoringCondition; }
    inline bool NodeMonitoringConditionHasBeenSet() const { return m_nodeMonitoringConditionHasBeenSet; }
    template<typename NodeMonitoringConditionT = Aws::String>
    void SetNodeMonitoringCondition(NodeMonitoringConditionT&& value) { m_nodeMonitoringConditionHasBeenSet = true; m_nodeMonitoringCondition = std::forward<NodeMonitoringConditionT>(value); }
    template<typename NodeMonitoringConditionT = Aws::String>
    NodeRepairConfigOverrides& WithNodeMonitoringCondition(NodeMonitoringConditionT&& value) { SetNodeMonitoringCondition(std::forward<NodeMonitoringConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a reason reported by the node monitoring agent that this override
     * would apply to.</p>
     */
    inline const Aws::String& GetNodeUnhealthyReason() const { return m_nodeUnhealthyReason; }
    inline bool NodeUnhealthyReasonHasBeenSet() const { return m_nodeUnhealthyReasonHasBeenSet; }
    template<typename NodeUnhealthyReasonT = Aws::String>
    void SetNodeUnhealthyReason(NodeUnhealthyReasonT&& value) { m_nodeUnhealthyReasonHasBeenSet = true; m_nodeUnhealthyReason = std::forward<NodeUnhealthyReasonT>(value); }
    template<typename NodeUnhealthyReasonT = Aws::String>
    NodeRepairConfigOverrides& WithNodeUnhealthyReason(NodeUnhealthyReasonT&& value) { SetNodeUnhealthyReason(std::forward<NodeUnhealthyReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the minimum time in minutes to wait before attempting to repair a
     * node with this specific <code>nodeMonitoringCondition</code> and
     * <code>nodeUnhealthyReason</code>.</p>
     */
    inline int GetMinRepairWaitTimeMins() const { return m_minRepairWaitTimeMins; }
    inline bool MinRepairWaitTimeMinsHasBeenSet() const { return m_minRepairWaitTimeMinsHasBeenSet; }
    inline void SetMinRepairWaitTimeMins(int value) { m_minRepairWaitTimeMinsHasBeenSet = true; m_minRepairWaitTimeMins = value; }
    inline NodeRepairConfigOverrides& WithMinRepairWaitTimeMins(int value) { SetMinRepairWaitTimeMins(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the repair action to take for nodes when all of the specified
     * conditions are met.</p>
     */
    inline RepairAction GetRepairAction() const { return m_repairAction; }
    inline bool RepairActionHasBeenSet() const { return m_repairActionHasBeenSet; }
    inline void SetRepairAction(RepairAction value) { m_repairActionHasBeenSet = true; m_repairAction = value; }
    inline NodeRepairConfigOverrides& WithRepairAction(RepairAction value) { SetRepairAction(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeMonitoringCondition;
    bool m_nodeMonitoringConditionHasBeenSet = false;

    Aws::String m_nodeUnhealthyReason;
    bool m_nodeUnhealthyReasonHasBeenSet = false;

    int m_minRepairWaitTimeMins{0};
    bool m_minRepairWaitTimeMinsHasBeenSet = false;

    RepairAction m_repairAction{RepairAction::NOT_SET};
    bool m_repairActionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
