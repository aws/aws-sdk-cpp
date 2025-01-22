/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowMultiTurnInputContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/NodeType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Response object from the flow multi-turn node requesting additional
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowMultiTurnInputRequestEvent">AWS
   * API Reference</a></p>
   */
  class FlowMultiTurnInputRequestEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowMultiTurnInputRequestEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowMultiTurnInputRequestEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowMultiTurnInputRequestEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content payload containing the input request details for the multi-turn
     * interaction.</p>
     */
    inline const FlowMultiTurnInputContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const FlowMultiTurnInputContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(FlowMultiTurnInputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline FlowMultiTurnInputRequestEvent& WithContent(const FlowMultiTurnInputContent& value) { SetContent(value); return *this;}
    inline FlowMultiTurnInputRequestEvent& WithContent(FlowMultiTurnInputContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node in the flow that is requesting the input.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline FlowMultiTurnInputRequestEvent& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline FlowMultiTurnInputRequestEvent& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline FlowMultiTurnInputRequestEvent& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the node in the flow that is requesting the input.</p>
     */
    inline const NodeType& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const NodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(NodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline FlowMultiTurnInputRequestEvent& WithNodeType(const NodeType& value) { SetNodeType(value); return *this;}
    inline FlowMultiTurnInputRequestEvent& WithNodeType(NodeType&& value) { SetNodeType(std::move(value)); return *this;}
    ///@}
  private:

    FlowMultiTurnInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    NodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
