/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeNodegroupRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeNodegroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNodegroup"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline DescribeNodegroupRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline DescribeNodegroupRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the node group.</p>
     */
    inline DescribeNodegroupRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The name of the node group to describe.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline DescribeNodegroupRequest& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline DescribeNodegroupRequest& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the node group to describe.</p>
     */
    inline DescribeNodegroupRequest& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
