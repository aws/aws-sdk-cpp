/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a field in the output from a node. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeOutputField">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeOutputField
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputField() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputField(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the node output.</p>
     */
    inline const FlowTraceNodeOutputContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = FlowTraceNodeOutputContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = FlowTraceNodeOutputContent>
    FlowTraceNodeOutputField& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node output.</p>
     */
    inline const Aws::String& GetNodeOutputName() const { return m_nodeOutputName; }
    inline bool NodeOutputNameHasBeenSet() const { return m_nodeOutputNameHasBeenSet; }
    template<typename NodeOutputNameT = Aws::String>
    void SetNodeOutputName(NodeOutputNameT&& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = std::forward<NodeOutputNameT>(value); }
    template<typename NodeOutputNameT = Aws::String>
    FlowTraceNodeOutputField& WithNodeOutputName(NodeOutputNameT&& value) { SetNodeOutputName(std::forward<NodeOutputNameT>(value)); return *this;}
    ///@}
  private:

    FlowTraceNodeOutputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeOutputName;
    bool m_nodeOutputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
