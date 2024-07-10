/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowConnection.h>
#include <aws/bedrock-agent/model/FlowNode.h>
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

  /**
   * <p>The definition of the nodes and connections between nodes in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowDefinition">AWS
   * API Reference</a></p>
   */
  class FlowDefinition
  {
  public:
    AWS_BEDROCKAGENT_API FlowDefinition();
    AWS_BEDROCKAGENT_API FlowDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of connection definitions in the flow.</p>
     */
    inline const Aws::Vector<FlowConnection>& GetConnections() const{ return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    inline void SetConnections(const Aws::Vector<FlowConnection>& value) { m_connectionsHasBeenSet = true; m_connections = value; }
    inline void SetConnections(Aws::Vector<FlowConnection>&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }
    inline FlowDefinition& WithConnections(const Aws::Vector<FlowConnection>& value) { SetConnections(value); return *this;}
    inline FlowDefinition& WithConnections(Aws::Vector<FlowConnection>&& value) { SetConnections(std::move(value)); return *this;}
    inline FlowDefinition& AddConnections(const FlowConnection& value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }
    inline FlowDefinition& AddConnections(FlowConnection&& value) { m_connectionsHasBeenSet = true; m_connections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of node definitions in the flow.</p>
     */
    inline const Aws::Vector<FlowNode>& GetNodes() const{ return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    inline void SetNodes(const Aws::Vector<FlowNode>& value) { m_nodesHasBeenSet = true; m_nodes = value; }
    inline void SetNodes(Aws::Vector<FlowNode>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }
    inline FlowDefinition& WithNodes(const Aws::Vector<FlowNode>& value) { SetNodes(value); return *this;}
    inline FlowDefinition& WithNodes(Aws::Vector<FlowNode>&& value) { SetNodes(std::move(value)); return *this;}
    inline FlowDefinition& AddNodes(const FlowNode& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }
    inline FlowDefinition& AddNodes(FlowNode&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FlowConnection> m_connections;
    bool m_connectionsHasBeenSet = false;

    Aws::Vector<FlowNode> m_nodes;
    bool m_nodesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
