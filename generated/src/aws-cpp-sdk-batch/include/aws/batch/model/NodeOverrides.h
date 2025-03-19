/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents any node overrides to a job definition that's used
   * in a <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_SubmitJob.html">SubmitJob</a>
   * API operation.</p>  <p>This parameter isn't applicable to jobs that are
   * running on Fargate resources. Don't provide it for these jobs. Rather, use
   * <code>containerOverrides</code> instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeOverrides">AWS
   * API Reference</a></p>
   */
  class NodeOverrides
  {
  public:
    AWS_BATCH_API NodeOverrides() = default;
    AWS_BATCH_API NodeOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of nodes to use with a multi-node parallel job. This value
     * overrides the number of nodes that are specified in the job definition. To use
     * this override, you must meet the following conditions:</p> <ul> <li> <p>There
     * must be at least one node range in your job definition that has an open upper
     * boundary, such as <code>:</code> or <code>n:</code>.</p> </li> <li> <p>The lower
     * boundary of the node range that's specified in the job definition must be fewer
     * than the number of nodes specified in the override.</p> </li> <li> <p>The main
     * node index that's specified in the job definition must be fewer than the number
     * of nodes specified in the override.</p> </li> </ul>
     */
    inline int GetNumNodes() const { return m_numNodes; }
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }
    inline void SetNumNodes(int value) { m_numNodesHasBeenSet = true; m_numNodes = value; }
    inline NodeOverrides& WithNumNodes(int value) { SetNumNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node property overrides for the job.</p>
     */
    inline const Aws::Vector<NodePropertyOverride>& GetNodePropertyOverrides() const { return m_nodePropertyOverrides; }
    inline bool NodePropertyOverridesHasBeenSet() const { return m_nodePropertyOverridesHasBeenSet; }
    template<typename NodePropertyOverridesT = Aws::Vector<NodePropertyOverride>>
    void SetNodePropertyOverrides(NodePropertyOverridesT&& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides = std::forward<NodePropertyOverridesT>(value); }
    template<typename NodePropertyOverridesT = Aws::Vector<NodePropertyOverride>>
    NodeOverrides& WithNodePropertyOverrides(NodePropertyOverridesT&& value) { SetNodePropertyOverrides(std::forward<NodePropertyOverridesT>(value)); return *this;}
    template<typename NodePropertyOverridesT = NodePropertyOverride>
    NodeOverrides& AddNodePropertyOverrides(NodePropertyOverridesT&& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides.emplace_back(std::forward<NodePropertyOverridesT>(value)); return *this; }
    ///@}
  private:

    int m_numNodes{0};
    bool m_numNodesHasBeenSet = false;

    Aws::Vector<NodePropertyOverride> m_nodePropertyOverrides;
    bool m_nodePropertyOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
