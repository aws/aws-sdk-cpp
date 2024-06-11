﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
   * <p>An object representing the scaling configuration details for the Auto Scaling
   * group that is associated with your node group. When creating a node group, you
   * must specify all or none of the properties. When updating a node group, you can
   * specify any or none of the properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupScalingConfig">AWS
   * API Reference</a></p>
   */
  class NodegroupScalingConfig
  {
  public:
    AWS_EKS_API NodegroupScalingConfig();
    AWS_EKS_API NodegroupScalingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodegroupScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of nodes that the managed node group can scale in to.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline NodegroupScalingConfig& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of nodes that the managed node group can scale out to. For
     * information about the maximum number that you can specify, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service-quotas.html">Amazon
     * EKS service quotas</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline NodegroupScalingConfig& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of nodes that the managed node group should maintain.</p>
     *  <p>If you use the Kubernetes <a
     * href="https://github.com/kubernetes/autoscaler#kubernetes-autoscaler">Cluster
     * Autoscaler</a>, you shouldn't change the <code>desiredSize</code> value
     * directly, as this can cause the Cluster Autoscaler to suddenly scale up or scale
     * down.</p>  <p>Whenever this parameter changes, the number of worker
     * nodes in the node group is updated to the specified size. If this parameter is
     * given a value that is smaller than the current number of running worker nodes,
     * the necessary number of worker nodes are terminated to match the given value.
     * When using CloudFormation, no action occurs if you remove this parameter from
     * your CFN template.</p> <p>This parameter can be different from
     * <code>minSize</code> in some cases, such as when starting with extra hosts for
     * testing. This parameter can also be different when you want to start with an
     * estimated number of needed hosts, but let the Cluster Autoscaler reduce the
     * number if there are too many. When the Cluster Autoscaler is used, the
     * <code>desiredSize</code> parameter is altered by the Cluster Autoscaler (but can
     * be out-of-date for short periods of time). the Cluster Autoscaler doesn't scale
     * a managed node group lower than <code>minSize</code> or higher than
     * <code>maxSize</code>.</p>
     */
    inline int GetDesiredSize() const{ return m_desiredSize; }
    inline bool DesiredSizeHasBeenSet() const { return m_desiredSizeHasBeenSet; }
    inline void SetDesiredSize(int value) { m_desiredSizeHasBeenSet = true; m_desiredSize = value; }
    inline NodegroupScalingConfig& WithDesiredSize(int value) { SetDesiredSize(value); return *this;}
    ///@}
  private:

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    int m_desiredSize;
    bool m_desiredSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
