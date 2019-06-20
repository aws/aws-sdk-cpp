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
   * <p>A workflow graph represents the complete workflow containing all the AWS Glue
   * components present in the workflow and all the directed connections between
   * them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/WorkflowGraph">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API WorkflowGraph
  {
  public:
    WorkflowGraph();
    WorkflowGraph(Aws::Utils::Json::JsonView jsonValue);
    WorkflowGraph& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodesHasBeenSet = true; m_nodes = value; }

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
     * nodes.</p>
     */
    inline WorkflowGraph& AddNodes(const Node& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }

    /**
     * <p>A list of the the AWS Glue components belong to the workflow represented as
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
    bool m_nodesHasBeenSet;

    Aws::Vector<Edge> m_edges;
    bool m_edgesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
