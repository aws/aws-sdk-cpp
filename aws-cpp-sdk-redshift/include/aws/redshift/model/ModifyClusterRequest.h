/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ModifyClusterRequest : public RedshiftRequest
  {
  public:
    ModifyClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline ModifyClusterRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline ModifyClusterRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster to be modified.</p> <p>Example:
     * <code>examplecluster</code> </p>
     */
    inline ModifyClusterRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline ModifyClusterRequest& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline ModifyClusterRequest& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}

    /**
     * <p>The new cluster type.</p> <p>When you submit your cluster resize request,
     * your existing cluster goes into a read-only mode. After Amazon Redshift
     * provisions a new cluster based on your resize requirements, there will be outage
     * for a period while the old cluster is deleted and your connection is switched to
     * the new cluster. You can use <a>DescribeResize</a> to track the progress of the
     * resize request. </p> <p>Valid Values: <code> multi-node | single-node </code>
     * </p>
     */
    inline ModifyClusterRequest& WithClusterType(const char* value) { SetClusterType(value); return *this;}


    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline ModifyClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline ModifyClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The new node type of the cluster. If you specify a new node type, you must
     * also specify the number of nodes parameter.</p> <p>When you submit your request
     * to resize a cluster, Amazon Redshift sets access permissions for the cluster to
     * read-only. After Amazon Redshift provisions a new cluster according to your
     * resize requirements, there will be a temporary outage while the old cluster is
     * deleted and your connection is switched to the new cluster. When the new
     * connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: <code>ds2.xlarge</code> |
     * <code>ds2.8xlarge</code> | <code>dc1.large</code> | <code>dc1.8xlarge</code> |
     * <code>dc2.large</code> | <code>dc2.8xlarge</code> </p>
     */
    inline ModifyClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The new number of nodes of the cluster. If you specify a new number of nodes,
     * you must also specify the node type parameter.</p> <p>When you submit your
     * request to resize a cluster, Amazon Redshift sets access permissions for the
     * cluster to read-only. After Amazon Redshift provisions a new cluster according
     * to your resize requirements, there will be a temporary outage while the old
     * cluster is deleted and your connection is switched to the new cluster. When the
     * new connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: Integer greater than <code>0</code>.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The new number of nodes of the cluster. If you specify a new number of nodes,
     * you must also specify the node type parameter.</p> <p>When you submit your
     * request to resize a cluster, Amazon Redshift sets access permissions for the
     * cluster to read-only. After Amazon Redshift provisions a new cluster according
     * to your resize requirements, there will be a temporary outage while the old
     * cluster is deleted and your connection is switched to the new cluster. When the
     * new connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: Integer greater than <code>0</code>.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The new number of nodes of the cluster. If you specify a new number of nodes,
     * you must also specify the node type parameter.</p> <p>When you submit your
     * request to resize a cluster, Amazon Redshift sets access permissions for the
     * cluster to read-only. After Amazon Redshift provisions a new cluster according
     * to your resize requirements, there will be a temporary outage while the old
     * cluster is deleted and your connection is switched to the new cluster. When the
     * new connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: Integer greater than <code>0</code>.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The new number of nodes of the cluster. If you specify a new number of nodes,
     * you must also specify the node type parameter.</p> <p>When you submit your
     * request to resize a cluster, Amazon Redshift sets access permissions for the
     * cluster to read-only. After Amazon Redshift provisions a new cluster according
     * to your resize requirements, there will be a temporary outage while the old
     * cluster is deleted and your connection is switched to the new cluster. When the
     * new connection is complete, the original access permissions for the cluster are
     * restored. You can use <a>DescribeResize</a> to track the progress of the resize
     * request. </p> <p>Valid Values: Integer greater than <code>0</code>.</p>
     */
    inline ModifyClusterRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline bool ClusterSecurityGroupsHasBeenSet() const { return m_clusterSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline void SetClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = std::move(value); }

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline ModifyClusterRequest& WithClusterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClusterSecurityGroups(value); return *this;}

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline ModifyClusterRequest& WithClusterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline ModifyClusterRequest& AddClusterSecurityGroups(const Aws::String& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline ModifyClusterRequest& AddClusterSecurityGroups(Aws::String&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cluster security groups to be authorized on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>Security groups
     * currently associated with the cluster, and not in the list of groups to apply,
     * will be revoked from the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1
     * to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul>
     */
    inline ModifyClusterRequest& AddClusterSecurityGroups(const char* value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline ModifyClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline ModifyClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline ModifyClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline ModifyClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of virtual private cloud (VPC) security groups to be associated with
     * the cluster. This change is asynchronously applied as soon as possible.</p>
     */
    inline ModifyClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline ModifyClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline ModifyClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The new password for the cluster master user. This change is asynchronously
     * applied as soon as possible. Between the time of the request and the completion
     * of the request, the <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p>
     * <note> <p>Operations never return the password, so this operation provides a way
     * to regain access to the master user account for a cluster if the password is
     * lost.</p> </note> <p>Default: Uses existing setting.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be between 8 and 64 characters in length.</p> </li> <li>
     * <p>Must contain at least one uppercase letter.</p> </li> <li> <p>Must contain at
     * least one lowercase letter.</p> </li> <li> <p>Must contain one number.</p> </li>
     * <li> <p>Can be any printable ASCII character (ASCII code 33 to 126) except '
     * (single quote), " (double quote), \, /, @, or space.</p> </li> </ul>
     */
    inline ModifyClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline const Aws::String& GetClusterParameterGroupName() const{ return m_clusterParameterGroupName; }

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline bool ClusterParameterGroupNameHasBeenSet() const { return m_clusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline void SetClusterParameterGroupName(const Aws::String& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline void SetClusterParameterGroupName(Aws::String&& value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline void SetClusterParameterGroupName(const char* value) { m_clusterParameterGroupNameHasBeenSet = true; m_clusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline ModifyClusterRequest& WithClusterParameterGroupName(const Aws::String& value) { SetClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline ModifyClusterRequest& WithClusterParameterGroupName(Aws::String&& value) { SetClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group to apply to this cluster. This change
     * is applied only after the cluster is rebooted. To reboot a cluster use
     * <a>RebootCluster</a>. </p> <p>Default: Uses existing setting.</p>
     * <p>Constraints: The cluster parameter group must be in the same parameter group
     * family that matches the cluster version.</p>
     */
    inline ModifyClusterRequest& WithClusterParameterGroupName(const char* value) { SetClusterParameterGroupName(value); return *this;}


    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>If you decrease the automated snapshot
     * retention period from its current value, existing automated snapshots that fall
     * outside of the new retention period will be immediately deleted.</p> <p>Default:
     * Uses existing setting.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>If you decrease the automated snapshot
     * retention period from its current value, existing automated snapshots that fall
     * outside of the new retention period will be immediately deleted.</p> <p>Default:
     * Uses existing setting.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>If you decrease the automated snapshot
     * retention period from its current value, existing automated snapshots that fall
     * outside of the new retention period will be immediately deleted.</p> <p>Default:
     * Uses existing setting.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that automated snapshots are retained. If the value is 0,
     * automated snapshots are disabled. Even if automated snapshots are disabled, you
     * can still create manual snapshots when you want with
     * <a>CreateClusterSnapshot</a>. </p> <p>If you decrease the automated snapshot
     * retention period from its current value, existing automated snapshots that fall
     * outside of the new retention period will be immediately deleted.</p> <p>Default:
     * Uses existing setting.</p> <p>Constraints: Must be a value from 0 to 35.</p>
     */
    inline ModifyClusterRequest& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The default for number of days that a newly created manual snapshot is
     * retained. If the value is -1, the manual snapshot is retained indefinitely. This
     * value doesn't retroactively change the retention periods of existing manual
     * snapshots.</p> <p>The value must be either -1 or an integer between 1 and
     * 3,653.</p> <p>The default value is -1.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The default for number of days that a newly created manual snapshot is
     * retained. If the value is -1, the manual snapshot is retained indefinitely. This
     * value doesn't retroactively change the retention periods of existing manual
     * snapshots.</p> <p>The value must be either -1 or an integer between 1 and
     * 3,653.</p> <p>The default value is -1.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The default for number of days that a newly created manual snapshot is
     * retained. If the value is -1, the manual snapshot is retained indefinitely. This
     * value doesn't retroactively change the retention periods of existing manual
     * snapshots.</p> <p>The value must be either -1 or an integer between 1 and
     * 3,653.</p> <p>The default value is -1.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The default for number of days that a newly created manual snapshot is
     * retained. If the value is -1, the manual snapshot is retained indefinitely. This
     * value doesn't retroactively change the retention periods of existing manual
     * snapshots.</p> <p>The value must be either -1 or an integer between 1 and
     * 3,653.</p> <p>The default value is -1.</p>
     */
    inline ModifyClusterRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline ModifyClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline ModifyClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur, if
     * necessary. If system maintenance is necessary during the window, it may result
     * in an outage.</p> <p>This maintenance window change is made immediately. If the
     * new maintenance window indicates the current time, there must be at least 120
     * minutes between the current time and end of the window in order to ensure that
     * pending changes are applied.</p> <p>Default: Uses existing setting.</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi, for example
     * <code>wed:07:30-wed:08:00</code>.</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri
     * | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes.</p>
     */
    inline ModifyClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline ModifyClusterRequest& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline ModifyClusterRequest& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}

    /**
     * <p>The new version number of the Amazon Redshift engine to upgrade to.</p>
     * <p>For major version upgrades, if a non-default cluster parameter group is
     * currently in use, a new cluster parameter group in the cluster parameter group
     * family for the new version must be specified. The new cluster parameter group
     * can be the default for that cluster parameter group family. For more information
     * about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p> <p>Example: <code>1.0</code> </p>
     */
    inline ModifyClusterRequest& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}


    /**
     * <p>If <code>true</code>, major version upgrades will be applied automatically to
     * the cluster during the maintenance window. </p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }

    /**
     * <p>If <code>true</code>, major version upgrades will be applied automatically to
     * the cluster during the maintenance window. </p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool AllowVersionUpgradeHasBeenSet() const { return m_allowVersionUpgradeHasBeenSet; }

    /**
     * <p>If <code>true</code>, major version upgrades will be applied automatically to
     * the cluster during the maintenance window. </p> <p>Default: <code>false</code>
     * </p>
     */
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }

    /**
     * <p>If <code>true</code>, major version upgrades will be applied automatically to
     * the cluster during the maintenance window. </p> <p>Default: <code>false</code>
     * </p>
     */
    inline ModifyClusterRequest& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}


    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline ModifyClusterRequest& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline ModifyClusterRequest& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline ModifyClusterRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}


    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline ModifyClusterRequest& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline ModifyClusterRequest& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline ModifyClusterRequest& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}


    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetNewClusterIdentifier() const{ return m_newClusterIdentifier; }

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline bool NewClusterIdentifierHasBeenSet() const { return m_newClusterIdentifierHasBeenSet; }

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetNewClusterIdentifier(const Aws::String& value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier = value; }

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetNewClusterIdentifier(Aws::String&& value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier = std::move(value); }

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetNewClusterIdentifier(const char* value) { m_newClusterIdentifierHasBeenSet = true; m_newClusterIdentifier.assign(value); }

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline ModifyClusterRequest& WithNewClusterIdentifier(const Aws::String& value) { SetNewClusterIdentifier(value); return *this;}

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline ModifyClusterRequest& WithNewClusterIdentifier(Aws::String&& value) { SetNewClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The new identifier for the cluster.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>Alphabetic characters must be lowercase.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for all clusters within an
     * AWS account.</p> </li> </ul> <p>Example: <code>examplecluster</code> </p>
     */
    inline ModifyClusterRequest& WithNewClusterIdentifier(const char* value) { SetNewClusterIdentifier(value); return *this;}


    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. Only
     * clusters in VPCs can be set to be publicly available.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. Only
     * clusters in VPCs can be set to be publicly available.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. Only
     * clusters in VPCs can be set to be publicly available.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>If <code>true</code>, the cluster can be accessed from a public network. Only
     * clusters in VPCs can be set to be publicly available.</p>
     */
    inline ModifyClusterRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline ModifyClusterRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline ModifyClusterRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP (EIP) address for the cluster.</p> <p>Constraints: The cluster
     * must be provisioned in EC2-VPC and publicly-accessible through an Internet
     * gateway. For more information about provisioning clusters in EC2-VPC, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-clusters.html#cluster-platforms">Supported
     * Platforms to Launch Your Cluster</a> in the Amazon Redshift Cluster Management
     * Guide.</p>
     */
    inline ModifyClusterRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}


    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline ModifyClusterRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline ModifyClusterRequest& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline ModifyClusterRequest& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name for the maintenance track that you want to assign for the cluster.
     * This name change is asynchronous. The new track name stays in the
     * <code>PendingModifiedValues</code> for the cluster until the next maintenance
     * window. When the maintenance track changes, the cluster is switched to the
     * latest cluster release available for the maintenance track. At this point, the
     * maintenance track name is applied.</p>
     */
    inline ModifyClusterRequest& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>Indicates whether the cluster is encrypted. If the cluster is encrypted and
     * you provide a value for the <code>KmsKeyId</code> parameter, we will encrypt the
     * cluster with the provided <code>KmsKeyId</code>. If you don't provide a
     * <code>KmsKeyId</code>, we will encrypt with the default key. In the China region
     * we will use legacy encryption if you specify that the cluster is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the cluster is encrypted. If the cluster is encrypted and
     * you provide a value for the <code>KmsKeyId</code> parameter, we will encrypt the
     * cluster with the provided <code>KmsKeyId</code>. If you don't provide a
     * <code>KmsKeyId</code>, we will encrypt with the default key. In the China region
     * we will use legacy encryption if you specify that the cluster is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the cluster is encrypted. If the cluster is encrypted and
     * you provide a value for the <code>KmsKeyId</code> parameter, we will encrypt the
     * cluster with the provided <code>KmsKeyId</code>. If you don't provide a
     * <code>KmsKeyId</code>, we will encrypt with the default key. In the China region
     * we will use legacy encryption if you specify that the cluster is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the cluster is encrypted. If the cluster is encrypted and
     * you provide a value for the <code>KmsKeyId</code> parameter, we will encrypt the
     * cluster with the provided <code>KmsKeyId</code>. If you don't provide a
     * <code>KmsKeyId</code>, we will encrypt with the default key. In the China region
     * we will use legacy encryption if you specify that the cluster is encrypted.</p>
     */
    inline ModifyClusterRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline ModifyClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline ModifyClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that you
     * want to use to encrypt data in the cluster.</p>
     */
    inline ModifyClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;

    Aws::Vector<Aws::String> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::String m_clusterParameterGroupName;
    bool m_clusterParameterGroupNameHasBeenSet;

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet;

    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet;

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet;

    Aws::String m_newClusterIdentifier;
    bool m_newClusterIdentifierHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
