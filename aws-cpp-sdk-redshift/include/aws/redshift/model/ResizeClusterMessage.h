/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a resize cluster operation. For example, a scheduled action to run
   * the <code>ResizeCluster</code> API operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResizeClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ResizeClusterMessage
  {
  public:
    ResizeClusterMessage();
    ResizeClusterMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResizeClusterMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline ResizeClusterMessage& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline ResizeClusterMessage& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the cluster to resize.</p>
     */
    inline ResizeClusterMessage& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


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
    inline ResizeClusterMessage& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline ResizeClusterMessage& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}

    /**
     * <p>The new cluster type for the specified cluster.</p>
     */
    inline ResizeClusterMessage& WithClusterType(const char* value) { SetClusterType(value); return *this;}


    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline ResizeClusterMessage& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline ResizeClusterMessage& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The new node type for the nodes you are adding. If not specified, the
     * cluster's current node type is used.</p>
     */
    inline ResizeClusterMessage& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The new number of nodes for the cluster. If not specified, the cluster's
     * current number of nodes is used.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The new number of nodes for the cluster. If not specified, the cluster's
     * current number of nodes is used.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The new number of nodes for the cluster. If not specified, the cluster's
     * current number of nodes is used.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The new number of nodes for the cluster. If not specified, the cluster's
     * current number of nodes is used.</p>
     */
    inline ResizeClusterMessage& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


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
    inline ResizeClusterMessage& WithClassic(bool value) { SetClassic(value); return *this;}

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
