/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowInputContent.h>
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
   * <p>Contains information about an input into the prompt flow and where to send
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowInput">AWS
   * API Reference</a></p>
   */
  class FlowInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about an input into the prompt flow.</p>
     */
    inline const FlowInputContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = FlowInputContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = FlowInputContent>
    FlowInput& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input from the flow input node.</p>
     */
    inline const Aws::String& GetNodeInputName() const { return m_nodeInputName; }
    inline bool NodeInputNameHasBeenSet() const { return m_nodeInputNameHasBeenSet; }
    template<typename NodeInputNameT = Aws::String>
    void SetNodeInputName(NodeInputNameT&& value) { m_nodeInputNameHasBeenSet = true; m_nodeInputName = std::forward<NodeInputNameT>(value); }
    template<typename NodeInputNameT = Aws::String>
    FlowInput& WithNodeInputName(NodeInputNameT&& value) { SetNodeInputName(std::forward<NodeInputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow input node that begins the prompt flow.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    FlowInput& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the output from the flow input node that begins the prompt
     * flow.</p>
     */
    inline const Aws::String& GetNodeOutputName() const { return m_nodeOutputName; }
    inline bool NodeOutputNameHasBeenSet() const { return m_nodeOutputNameHasBeenSet; }
    template<typename NodeOutputNameT = Aws::String>
    void SetNodeOutputName(NodeOutputNameT&& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = std::forward<NodeOutputNameT>(value); }
    template<typename NodeOutputNameT = Aws::String>
    FlowInput& WithNodeOutputName(NodeOutputNameT&& value) { SetNodeOutputName(std::forward<NodeOutputNameT>(value)); return *this;}
    ///@}
  private:

    FlowInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeInputName;
    bool m_nodeInputNameHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_nodeOutputName;
    bool m_nodeOutputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
