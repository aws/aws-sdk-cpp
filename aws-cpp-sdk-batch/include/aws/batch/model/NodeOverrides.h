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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/NodePropertyOverride.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Object representing any node overrides to a job definition that is used in a
   * <a>SubmitJob</a> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NodeOverrides
  {
  public:
    NodeOverrides();
    NodeOverrides(Aws::Utils::Json::JsonView jsonValue);
    NodeOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of nodes to use with a multi-node parallel job. This value
     * overrides the number of nodes that are specified in the job definition. To use
     * this override:</p> <ul> <li> <p>There must be at least one node range in your
     * job definition that has an open upper boundary (such as <code>:</code> or
     * <code>n:</code>).</p> </li> <li> <p>The lower boundary of the node range
     * specified in the job definition must be fewer than the number of nodes specified
     * in the override.</p> </li> <li> <p>The main node index specified in the job
     * definition must be fewer than the number of nodes specified in the override.</p>
     * </li> </ul>
     */
    inline int GetNumNodes() const{ return m_numNodes; }

    /**
     * <p>The number of nodes to use with a multi-node parallel job. This value
     * overrides the number of nodes that are specified in the job definition. To use
     * this override:</p> <ul> <li> <p>There must be at least one node range in your
     * job definition that has an open upper boundary (such as <code>:</code> or
     * <code>n:</code>).</p> </li> <li> <p>The lower boundary of the node range
     * specified in the job definition must be fewer than the number of nodes specified
     * in the override.</p> </li> <li> <p>The main node index specified in the job
     * definition must be fewer than the number of nodes specified in the override.</p>
     * </li> </ul>
     */
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }

    /**
     * <p>The number of nodes to use with a multi-node parallel job. This value
     * overrides the number of nodes that are specified in the job definition. To use
     * this override:</p> <ul> <li> <p>There must be at least one node range in your
     * job definition that has an open upper boundary (such as <code>:</code> or
     * <code>n:</code>).</p> </li> <li> <p>The lower boundary of the node range
     * specified in the job definition must be fewer than the number of nodes specified
     * in the override.</p> </li> <li> <p>The main node index specified in the job
     * definition must be fewer than the number of nodes specified in the override.</p>
     * </li> </ul>
     */
    inline void SetNumNodes(int value) { m_numNodesHasBeenSet = true; m_numNodes = value; }

    /**
     * <p>The number of nodes to use with a multi-node parallel job. This value
     * overrides the number of nodes that are specified in the job definition. To use
     * this override:</p> <ul> <li> <p>There must be at least one node range in your
     * job definition that has an open upper boundary (such as <code>:</code> or
     * <code>n:</code>).</p> </li> <li> <p>The lower boundary of the node range
     * specified in the job definition must be fewer than the number of nodes specified
     * in the override.</p> </li> <li> <p>The main node index specified in the job
     * definition must be fewer than the number of nodes specified in the override.</p>
     * </li> </ul>
     */
    inline NodeOverrides& WithNumNodes(int value) { SetNumNodes(value); return *this;}


    /**
     * <p>The node property overrides for the job.</p>
     */
    inline const Aws::Vector<NodePropertyOverride>& GetNodePropertyOverrides() const{ return m_nodePropertyOverrides; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline bool NodePropertyOverridesHasBeenSet() const { return m_nodePropertyOverridesHasBeenSet; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline void SetNodePropertyOverrides(const Aws::Vector<NodePropertyOverride>& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides = value; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline void SetNodePropertyOverrides(Aws::Vector<NodePropertyOverride>&& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides = std::move(value); }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& WithNodePropertyOverrides(const Aws::Vector<NodePropertyOverride>& value) { SetNodePropertyOverrides(value); return *this;}

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& WithNodePropertyOverrides(Aws::Vector<NodePropertyOverride>&& value) { SetNodePropertyOverrides(std::move(value)); return *this;}

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& AddNodePropertyOverrides(const NodePropertyOverride& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides.push_back(value); return *this; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& AddNodePropertyOverrides(NodePropertyOverride&& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides.push_back(std::move(value)); return *this; }

  private:

    int m_numNodes;
    bool m_numNodesHasBeenSet;

    Aws::Vector<NodePropertyOverride> m_nodePropertyOverrides;
    bool m_nodePropertyOverridesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
