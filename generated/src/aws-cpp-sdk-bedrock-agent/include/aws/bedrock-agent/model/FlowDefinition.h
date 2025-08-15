/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowNode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowConnection.h>
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
namespace BedrockAgent
{
namespace Model
{
  class FlowNode;

  /**
   * <p>The definition of the nodes and connections between nodes in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowDefinition">AWS
   * API Reference</a></p>
   */
  class FlowDefinition
  {
  public:
    AWS_BEDROCKAGENT_API FlowDefinition() = default;
    AWS_BEDROCKAGENT_API FlowDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of node definitions in the flow.</p>
     */
    inline const Aws::Vector<FlowNode>& GetNodes() const { return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    template<typename NodesT = Aws::Vector<FlowNode>>
    void SetNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes = std::forward<NodesT>(value); }
    template<typename NodesT = Aws::Vector<FlowNode>>
    FlowDefinition& WithNodes(NodesT&& value) { SetNodes(std::forward<NodesT>(value)); return *this;}
    template<typename NodesT = FlowNode>
    FlowDefinition& AddNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes.emplace_back(std::forward<NodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of connection definitions in the flow.</p>
     */
    inline const Aws::Vector<FlowConnection>& GetConnections() const { return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    template<typename ConnectionsT = Aws::Vector<FlowConnection>>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = Aws::Vector<FlowConnection>>
    FlowDefinition& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    template<typename ConnectionsT = FlowConnection>
    FlowDefinition& AddConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections.emplace_back(std::forward<ConnectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FlowNode> m_nodes;
    bool m_nodesHasBeenSet = false;

    Aws::Vector<FlowConnection> m_connections;
    bool m_connectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
