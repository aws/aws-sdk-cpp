/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/UpdateLabelsPayload.h>
#include <aws/eks/model/UpdateTaintsPayload.h>
#include <aws/eks/model/NodegroupScalingConfig.h>
#include <aws/eks/model/NodegroupUpdateConfig.h>
#include <aws/eks/model/NodeRepairConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateNodegroupConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateNodegroupConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNodegroupConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateNodegroupConfigRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateNodegroupConfigRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed node group to update.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }
    inline UpdateNodegroupConfigRequest& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}
    inline UpdateNodegroupConfigRequest& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes <code>labels</code> to apply to the nodes in the node group
     * after the update.</p>
     */
    inline const UpdateLabelsPayload& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const UpdateLabelsPayload& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(UpdateLabelsPayload&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline UpdateNodegroupConfigRequest& WithLabels(const UpdateLabelsPayload& value) { SetLabels(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithLabels(UpdateLabelsPayload&& value) { SetLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes taints to be applied to the nodes in the node group after the
     * update. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
     * taints on managed node groups</a>.</p>
     */
    inline const UpdateTaintsPayload& GetTaints() const{ return m_taints; }
    inline bool TaintsHasBeenSet() const { return m_taintsHasBeenSet; }
    inline void SetTaints(const UpdateTaintsPayload& value) { m_taintsHasBeenSet = true; m_taints = value; }
    inline void SetTaints(UpdateTaintsPayload&& value) { m_taintsHasBeenSet = true; m_taints = std::move(value); }
    inline UpdateNodegroupConfigRequest& WithTaints(const UpdateTaintsPayload& value) { SetTaints(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithTaints(UpdateTaintsPayload&& value) { SetTaints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration details for the Auto Scaling group after the
     * update.</p>
     */
    inline const NodegroupScalingConfig& GetScalingConfig() const{ return m_scalingConfig; }
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
    inline void SetScalingConfig(const NodegroupScalingConfig& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = value; }
    inline void SetScalingConfig(NodegroupScalingConfig&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::move(value); }
    inline UpdateNodegroupConfigRequest& WithScalingConfig(const NodegroupScalingConfig& value) { SetScalingConfig(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithScalingConfig(NodegroupScalingConfig&& value) { SetScalingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node group update configuration.</p>
     */
    inline const NodegroupUpdateConfig& GetUpdateConfig() const{ return m_updateConfig; }
    inline bool UpdateConfigHasBeenSet() const { return m_updateConfigHasBeenSet; }
    inline void SetUpdateConfig(const NodegroupUpdateConfig& value) { m_updateConfigHasBeenSet = true; m_updateConfig = value; }
    inline void SetUpdateConfig(NodegroupUpdateConfig&& value) { m_updateConfigHasBeenSet = true; m_updateConfig = std::move(value); }
    inline UpdateNodegroupConfigRequest& WithUpdateConfig(const NodegroupUpdateConfig& value) { SetUpdateConfig(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithUpdateConfig(NodegroupUpdateConfig&& value) { SetUpdateConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node auto repair configuration for the node group.</p>
     */
    inline const NodeRepairConfig& GetNodeRepairConfig() const{ return m_nodeRepairConfig; }
    inline bool NodeRepairConfigHasBeenSet() const { return m_nodeRepairConfigHasBeenSet; }
    inline void SetNodeRepairConfig(const NodeRepairConfig& value) { m_nodeRepairConfigHasBeenSet = true; m_nodeRepairConfig = value; }
    inline void SetNodeRepairConfig(NodeRepairConfig&& value) { m_nodeRepairConfigHasBeenSet = true; m_nodeRepairConfig = std::move(value); }
    inline UpdateNodegroupConfigRequest& WithNodeRepairConfig(const NodeRepairConfig& value) { SetNodeRepairConfig(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithNodeRepairConfig(NodeRepairConfig&& value) { SetNodeRepairConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline UpdateNodegroupConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline UpdateNodegroupConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline UpdateNodegroupConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    UpdateLabelsPayload m_labels;
    bool m_labelsHasBeenSet = false;

    UpdateTaintsPayload m_taints;
    bool m_taintsHasBeenSet = false;

    NodegroupScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet = false;

    NodegroupUpdateConfig m_updateConfig;
    bool m_updateConfigHasBeenSet = false;

    NodeRepairConfig m_nodeRepairConfig;
    bool m_nodeRepairConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
