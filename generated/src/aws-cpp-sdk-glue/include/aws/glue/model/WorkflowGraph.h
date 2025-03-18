/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Node.h>
#include <aws/glue/model/Edge.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A workflow graph represents the complete workflow containing all the Glue
   * components present in the workflow and all the directed connections between
   * them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/WorkflowGraph">AWS
   * API Reference</a></p>
   */
  class WorkflowGraph
  {
  public:
    AWS_GLUE_API WorkflowGraph() = default;
    AWS_GLUE_API WorkflowGraph(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API WorkflowGraph& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const { return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    template<typename NodesT = Aws::Vector<Node>>
    void SetNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes = std::forward<NodesT>(value); }
    template<typename NodesT = Aws::Vector<Node>>
    WorkflowGraph& WithNodes(NodesT&& value) { SetNodes(std::forward<NodesT>(value)); return *this;}
    template<typename NodesT = Node>
    WorkflowGraph& AddNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes.emplace_back(std::forward<NodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const { return m_edges; }
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
    template<typename EdgesT = Aws::Vector<Edge>>
    void SetEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges = std::forward<EdgesT>(value); }
    template<typename EdgesT = Aws::Vector<Edge>>
    WorkflowGraph& WithEdges(EdgesT&& value) { SetEdges(std::forward<EdgesT>(value)); return *this;}
    template<typename EdgesT = Edge>
    WorkflowGraph& AddEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges.emplace_back(std::forward<EdgesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Node> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::Vector<Edge> m_edges;
    bool m_edgesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
