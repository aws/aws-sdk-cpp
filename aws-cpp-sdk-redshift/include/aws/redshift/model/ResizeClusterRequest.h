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
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API ResizeClusterRequest : public RedshiftRequest
  {
  public:
    ResizeClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResizeCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline ResizeClusterRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline ResizeClusterRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline ResizeClusterRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline ResizeClusterRequest& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline ResizeClusterRequest& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline ResizeClusterRequest& WithClusterType(const char* value) { SetClusterType(value); return *this;}


    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline ResizeClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline ResizeClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The new node type for the nodes you are adding.</p>
     */
    inline ResizeClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The new number of nodes for the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The new number of nodes for the cluster.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The new number of nodes for the cluster.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The new number of nodes for the cluster.</p>
     */
    inline ResizeClusterRequest& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>A boolean value indicating whether the resize operation is using the classic
     * resize process. If you don't provide this parameter or set the value to
     * <code>false</code>, the resize type is elastic. </p>
     */
    inline bool GetClassic() const{ return m_classic; }

    /**
     * <p>A boolean value indicating whether the resize operation is using the classic
     * resize process. If you don't provide this parameter or set the value to
     * <code>false</code>, the resize type is elastic. </p>
     */
    inline bool ClassicHasBeenSet() const { return m_classicHasBeenSet; }

    /**
     * <p>A boolean value indicating whether the resize operation is using the classic
     * resize process. If you don't provide this parameter or set the value to
     * <code>false</code>, the resize type is elastic. </p>
     */
    inline void SetClassic(bool value) { m_classicHasBeenSet = true; m_classic = value; }

    /**
     * <p>A boolean value indicating whether the resize operation is using the classic
     * resize process. If you don't provide this parameter or set the value to
     * <code>false</code>, the resize type is elastic. </p>
     */
    inline ResizeClusterRequest& WithClassic(bool value) { SetClassic(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;

    bool m_classic;
    bool m_classicHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
