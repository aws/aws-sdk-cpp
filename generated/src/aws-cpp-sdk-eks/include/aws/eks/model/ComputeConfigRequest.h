﻿/**
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
   * <p>Request to update the configuration of the compute capability of your EKS
   * Auto Mode cluster. For example, enable the capability. For more information, see
   * EKS Auto Mode compute capability in the EKS User Guide.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ComputeConfigRequest">AWS
   * API Reference</a></p>
   */
  class ComputeConfigRequest
  {
  public:
    AWS_EKS_API ComputeConfigRequest();
    AWS_EKS_API ComputeConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ComputeConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request to enable or disable the compute capability on your EKS Auto Mode
     * cluster. If the compute capability is enabled, EKS Auto Mode will create and
     * delete EC2 Managed Instances in your Amazon Web Services account.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ComputeConfigRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for node pools that defines the compute resources for your EKS
     * Auto Mode cluster. For more information, see EKS Auto Mode Node Pools in the EKS
     * User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodePools() const{ return m_nodePools; }
    inline bool NodePoolsHasBeenSet() const { return m_nodePoolsHasBeenSet; }
    inline void SetNodePools(const Aws::Vector<Aws::String>& value) { m_nodePoolsHasBeenSet = true; m_nodePools = value; }
    inline void SetNodePools(Aws::Vector<Aws::String>&& value) { m_nodePoolsHasBeenSet = true; m_nodePools = std::move(value); }
    inline ComputeConfigRequest& WithNodePools(const Aws::Vector<Aws::String>& value) { SetNodePools(value); return *this;}
    inline ComputeConfigRequest& WithNodePools(Aws::Vector<Aws::String>&& value) { SetNodePools(std::move(value)); return *this;}
    inline ComputeConfigRequest& AddNodePools(const Aws::String& value) { m_nodePoolsHasBeenSet = true; m_nodePools.push_back(value); return *this; }
    inline ComputeConfigRequest& AddNodePools(Aws::String&& value) { m_nodePoolsHasBeenSet = true; m_nodePools.push_back(std::move(value)); return *this; }
    inline ComputeConfigRequest& AddNodePools(const char* value) { m_nodePoolsHasBeenSet = true; m_nodePools.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Role EKS will assign to EC2 Managed Instances in your EKS
     * Auto Mode cluster. This value cannot be changed after the compute capability of
     * EKS Auto Mode is enabled. For more information, see the IAM Reference in the EKS
     * User Guide.</p>
     */
    inline const Aws::String& GetNodeRoleArn() const{ return m_nodeRoleArn; }
    inline bool NodeRoleArnHasBeenSet() const { return m_nodeRoleArnHasBeenSet; }
    inline void SetNodeRoleArn(const Aws::String& value) { m_nodeRoleArnHasBeenSet = true; m_nodeRoleArn = value; }
    inline void SetNodeRoleArn(Aws::String&& value) { m_nodeRoleArnHasBeenSet = true; m_nodeRoleArn = std::move(value); }
    inline void SetNodeRoleArn(const char* value) { m_nodeRoleArnHasBeenSet = true; m_nodeRoleArn.assign(value); }
    inline ComputeConfigRequest& WithNodeRoleArn(const Aws::String& value) { SetNodeRoleArn(value); return *this;}
    inline ComputeConfigRequest& WithNodeRoleArn(Aws::String&& value) { SetNodeRoleArn(std::move(value)); return *this;}
    inline ComputeConfigRequest& WithNodeRoleArn(const char* value) { SetNodeRoleArn(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodePools;
    bool m_nodePoolsHasBeenSet = false;

    Aws::String m_nodeRoleArn;
    bool m_nodeRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
