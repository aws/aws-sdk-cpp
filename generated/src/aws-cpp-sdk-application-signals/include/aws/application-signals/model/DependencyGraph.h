/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/Edge.h>
#include <aws/application-signals/model/Node.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that represents the dependency relationships relevant to an audit
 * finding, containing nodes and edges that show how services and resources are
 * connected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/DependencyGraph">AWS
 * API Reference</a></p>
 */
class DependencyGraph {
 public:
  AWS_APPLICATIONSIGNALS_API DependencyGraph() = default;
  AWS_APPLICATIONSIGNALS_API DependencyGraph(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API DependencyGraph& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of nodes representing the services, resources, or other entities in
   * the dependency graph.</p>
   */
  inline const Aws::Vector<Node>& GetNodes() const { return m_nodes; }
  inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
  template <typename NodesT = Aws::Vector<Node>>
  void SetNodes(NodesT&& value) {
    m_nodesHasBeenSet = true;
    m_nodes = std::forward<NodesT>(value);
  }
  template <typename NodesT = Aws::Vector<Node>>
  DependencyGraph& WithNodes(NodesT&& value) {
    SetNodes(std::forward<NodesT>(value));
    return *this;
  }
  template <typename NodesT = Node>
  DependencyGraph& AddNodes(NodesT&& value) {
    m_nodesHasBeenSet = true;
    m_nodes.emplace_back(std::forward<NodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of edges representing the connections and relationships between the
   * nodes in the dependency graph.</p>
   */
  inline const Aws::Vector<Edge>& GetEdges() const { return m_edges; }
  inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
  template <typename EdgesT = Aws::Vector<Edge>>
  void SetEdges(EdgesT&& value) {
    m_edgesHasBeenSet = true;
    m_edges = std::forward<EdgesT>(value);
  }
  template <typename EdgesT = Aws::Vector<Edge>>
  DependencyGraph& WithEdges(EdgesT&& value) {
    SetEdges(std::forward<EdgesT>(value));
    return *this;
  }
  template <typename EdgesT = Edge>
  DependencyGraph& AddEdges(EdgesT&& value) {
    m_edgesHasBeenSet = true;
    m_edges.emplace_back(std::forward<EdgesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Node> m_nodes;

  Aws::Vector<Edge> m_edges;
  bool m_nodesHasBeenSet = false;
  bool m_edgesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
