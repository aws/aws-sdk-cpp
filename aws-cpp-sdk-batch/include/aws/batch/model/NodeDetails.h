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
   * <p>An object representing the details of a multi-node parallel job
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeDetails">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NodeDetails
  {
  public:
    NodeDetails();
    NodeDetails(Aws::Utils::Json::JsonView jsonValue);
    NodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_nodeIndexHasBeenSet;

    bool m_isMainNode;
    bool m_isMainNodeHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
