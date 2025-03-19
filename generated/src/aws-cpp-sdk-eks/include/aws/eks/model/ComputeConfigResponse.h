/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Indicates the status of the request to update the compute capability of your
   * EKS Auto Mode cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ComputeConfigResponse">AWS
   * API Reference</a></p>
   */
  class ComputeConfigResponse
  {
  public:
    AWS_EKS_API ComputeConfigResponse() = default;
    AWS_EKS_API ComputeConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ComputeConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if the compute capability is enabled on your EKS Auto Mode cluster.
     * If the compute capability is enabled, EKS Auto Mode will create and delete EC2
     * Managed Instances in your Amazon Web Services account.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ComputeConfigResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current configuration of node pools in your EKS Auto Mode
     * cluster. For more information, see EKS Auto Mode Node Pools in the <i>Amazon EKS
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodePools() const { return m_nodePools; }
    inline bool NodePoolsHasBeenSet() const { return m_nodePoolsHasBeenSet; }
    template<typename NodePoolsT = Aws::Vector<Aws::String>>
    void SetNodePools(NodePoolsT&& value) { m_nodePoolsHasBeenSet = true; m_nodePools = std::forward<NodePoolsT>(value); }
    template<typename NodePoolsT = Aws::Vector<Aws::String>>
    ComputeConfigResponse& WithNodePools(NodePoolsT&& value) { SetNodePools(std::forward<NodePoolsT>(value)); return *this;}
    template<typename NodePoolsT = Aws::String>
    ComputeConfigResponse& AddNodePools(NodePoolsT&& value) { m_nodePoolsHasBeenSet = true; m_nodePools.emplace_back(std::forward<NodePoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Role EKS will assign to EC2 Managed Instances in your EKS
     * Auto Mode cluster.</p>
     */
    inline const Aws::String& GetNodeRoleArn() const { return m_nodeRoleArn; }
    inline bool NodeRoleArnHasBeenSet() const { return m_nodeRoleArnHasBeenSet; }
    template<typename NodeRoleArnT = Aws::String>
    void SetNodeRoleArn(NodeRoleArnT&& value) { m_nodeRoleArnHasBeenSet = true; m_nodeRoleArn = std::forward<NodeRoleArnT>(value); }
    template<typename NodeRoleArnT = Aws::String>
    ComputeConfigResponse& WithNodeRoleArn(NodeRoleArnT&& value) { SetNodeRoleArn(std::forward<NodeRoleArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodePools;
    bool m_nodePoolsHasBeenSet = false;

    Aws::String m_nodeRoleArn;
    bool m_nodeRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
