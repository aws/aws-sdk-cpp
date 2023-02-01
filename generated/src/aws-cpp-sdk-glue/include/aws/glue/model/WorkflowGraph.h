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
    AWS_GLUE_API WorkflowGraph();
    AWS_GLUE_API WorkflowGraph(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API WorkflowGraph& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodesHasBeenSet = true; m_nodes = value; }

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& AddNodes(const Node& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }

    /**
     * <p>A list of the the Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& AddNodes(Node&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const{ return m_edges; }

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline void SetEdges(const Aws::Vector<Edge>& value) { m_edgesHasBeenSet = true; m_edges = value; }

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline void SetEdges(Aws::Vector<Edge>&& value) { m_edgesHasBeenSet = true; m_edges = std::move(value); }

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline WorkflowGraph& WithEdges(const Aws::Vector<Edge>& value) { SetEdges(value); return *this;}

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline WorkflowGraph& WithEdges(Aws::Vector<Edge>&& value) { SetEdges(std::move(value)); return *this;}

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline WorkflowGraph& AddEdges(const Edge& value) { m_edgesHasBeenSet = true; m_edges.push_back(value); return *this; }

    /**
     * <p>A list of all the directed connections between the nodes belonging to the
     * workflow.</p>
     */
    inline WorkflowGraph& AddEdges(Edge&& value) { m_edgesHasBeenSet = true; m_edges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Node> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::Vector<Edge> m_edges;
    bool m_edgesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
