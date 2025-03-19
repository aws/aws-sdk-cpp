/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputContent.h>
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
   * <p>Contains information about a field in the input into a node. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeInputField">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeInputField
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputField() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputField(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the node input.</p>
     */
    inline const FlowTraceNodeInputContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = FlowTraceNodeInputContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = FlowTraceNodeInputContent>
    FlowTraceNodeInputField& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node input.</p>
     */
    inline const Aws::String& GetNodeInputName() const { return m_nodeInputName; }
    inline bool NodeInputNameHasBeenSet() const { return m_nodeInputNameHasBeenSet; }
    template<typename NodeInputNameT = Aws::String>
    void SetNodeInputName(NodeInputNameT&& value) { m_nodeInputNameHasBeenSet = true; m_nodeInputName = std::forward<NodeInputNameT>(value); }
    template<typename NodeInputNameT = Aws::String>
    FlowTraceNodeInputField& WithNodeInputName(NodeInputNameT&& value) { SetNodeInputName(std::forward<NodeInputNameT>(value)); return *this;}
    ///@}
  private:

    FlowTraceNodeInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeInputName;
    bool m_nodeInputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
