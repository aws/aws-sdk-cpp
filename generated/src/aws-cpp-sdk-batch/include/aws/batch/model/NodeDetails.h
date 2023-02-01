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
   * <p>An object that represents the details of a multi-node parallel job
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeDetails">AWS
   * API Reference</a></p>
   */
  class NodeDetails
  {
  public:
    AWS_BATCH_API NodeDetails();
    AWS_BATCH_API NodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The node index for the node. Node index numbering starts at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline int GetNodeIndex() const{ return m_nodeIndex; }

    /**
     * <p>The node index for the node. Node index numbering starts at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline bool NodeIndexHasBeenSet() const { return m_nodeIndexHasBeenSet; }

    /**
     * <p>The node index for the node. Node index numbering starts at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline void SetNodeIndex(int value) { m_nodeIndexHasBeenSet = true; m_nodeIndex = value; }

    /**
     * <p>The node index for the node. Node index numbering starts at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline NodeDetails& WithNodeIndex(int value) { SetNodeIndex(value); return *this;}


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
    inline NodeDetails& WithIsMainNode(bool value) { SetIsMainNode(value); return *this;}

  private:

    int m_nodeIndex;
    bool m_nodeIndexHasBeenSet = false;

    bool m_isMainNode;
    bool m_isMainNodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
