/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents the properties of a node that's associated with a
   * multi-node parallel job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodePropertiesSummary">AWS
   * API Reference</a></p>
   */
  class NodePropertiesSummary
  {
  public:
    AWS_BATCH_API NodePropertiesSummary();
    AWS_BATCH_API NodePropertiesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodePropertiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the current node is the main node for a multi-node parallel
     * job.</p>
     */
    inline bool GetIsMainNode() const{ return m_isMainNode; }

    /**
     * <p>Specifies whether the current node is the main node for a multi-node parallel
     * job.</p>
     */
    inline bool IsMainNodeHasBeenSet() const { return m_isMainNodeHasBeenSet; }

    /**
     * <p>Specifies whether the current node is the main node for a multi-node parallel
     * job.</p>
     */
    inline void SetIsMainNode(bool value) { m_isMainNodeHasBeenSet = true; m_isMainNode = value; }

    /**
     * <p>Specifies whether the current node is the main node for a multi-node parallel
     * job.</p>
     */
    inline NodePropertiesSummary& WithIsMainNode(bool value) { SetIsMainNode(value); return *this;}


    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline int GetNumNodes() const{ return m_numNodes; }

    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }

    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline void SetNumNodes(int value) { m_numNodesHasBeenSet = true; m_numNodes = value; }

    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline NodePropertiesSummary& WithNumNodes(int value) { SetNumNodes(value); return *this;}


    /**
     * <p>The node index for the node. Node index numbering begins at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline int GetNodeIndex() const{ return m_nodeIndex; }

    /**
     * <p>The node index for the node. Node index numbering begins at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline bool NodeIndexHasBeenSet() const { return m_nodeIndexHasBeenSet; }

    /**
     * <p>The node index for the node. Node index numbering begins at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline void SetNodeIndex(int value) { m_nodeIndexHasBeenSet = true; m_nodeIndex = value; }

    /**
     * <p>The node index for the node. Node index numbering begins at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline NodePropertiesSummary& WithNodeIndex(int value) { SetNodeIndex(value); return *this;}

  private:

    bool m_isMainNode;
    bool m_isMainNodeHasBeenSet = false;

    int m_numNodes;
    bool m_numNodesHasBeenSet = false;

    int m_nodeIndex;
    bool m_nodeIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
