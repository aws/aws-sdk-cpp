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
    AWS_BATCH_API NodeDetails() = default;
    AWS_BATCH_API NodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The node index for the node. Node index numbering starts at zero. This index
     * is also available on the node with the <code>AWS_BATCH_JOB_NODE_INDEX</code>
     * environment variable.</p>
     */
    inline int GetNodeIndex() const { return m_nodeIndex; }
    inline bool NodeIndexHasBeenSet() const { return m_nodeIndexHasBeenSet; }
    inline void SetNodeIndex(int value) { m_nodeIndexHasBeenSet = true; m_nodeIndex = value; }
    inline NodeDetails& WithNodeIndex(int value) { SetNodeIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the current node is the main node for a multi-node parallel
     * job.</p>
     */
    inline bool GetIsMainNode() const { return m_isMainNode; }
    inline bool IsMainNodeHasBeenSet() const { return m_isMainNodeHasBeenSet; }
    inline void SetIsMainNode(bool value) { m_isMainNodeHasBeenSet = true; m_isMainNode = value; }
    inline NodeDetails& WithIsMainNode(bool value) { SetIsMainNode(value); return *this;}
    ///@}
  private:

    int m_nodeIndex{0};
    bool m_nodeIndexHasBeenSet = false;

    bool m_isMainNode{false};
    bool m_isMainNodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
