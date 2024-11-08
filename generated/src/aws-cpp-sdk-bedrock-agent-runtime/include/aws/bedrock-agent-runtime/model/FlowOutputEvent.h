/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowOutputContent.h>
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
   * <p>Contains information about an output from prompt flow
   * invoction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowOutputEvent">AWS
   * API Reference</a></p>
   */
  class FlowOutputEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowOutputEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowOutputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowOutputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content in the output.</p>
     */
    inline const FlowOutputContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const FlowOutputContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(FlowOutputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline FlowOutputEvent& WithContent(const FlowOutputContent& value) { SetContent(value); return *this;}
    inline FlowOutputEvent& WithContent(FlowOutputContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow output node that the output is from.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline FlowOutputEvent& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline FlowOutputEvent& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline FlowOutputEvent& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the node that the output is from.</p>
     */
    inline const NodeType& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const NodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(NodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline FlowOutputEvent& WithNodeType(const NodeType& value) { SetNodeType(value); return *this;}
    inline FlowOutputEvent& WithNodeType(NodeType&& value) { SetNodeType(std::move(value)); return *this;}
    ///@}
  private:

    FlowOutputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    NodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
