/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FlowNodeIODataType.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputNext.h>
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
     * <p>The name of the node output.</p>
     */
    inline const Aws::String& GetNodeOutputName() const { return m_nodeOutputName; }
    inline bool NodeOutputNameHasBeenSet() const { return m_nodeOutputNameHasBeenSet; }
    template<typename NodeOutputNameT = Aws::String>
    void SetNodeOutputName(NodeOutputNameT&& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = std::forward<NodeOutputNameT>(value); }
    template<typename NodeOutputNameT = Aws::String>
    FlowTraceNodeOutputField& WithNodeOutputName(NodeOutputNameT&& value) { SetNodeOutputName(std::forward<NodeOutputNameT>(value)); return *this;}
    ///@}

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
     * <p>The next node that receives output data from this field.</p>
     */
    inline const Aws::Vector<FlowTraceNodeOutputNext>& GetNext() const { return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    template<typename NextT = Aws::Vector<FlowTraceNodeOutputNext>>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::Vector<FlowTraceNodeOutputNext>>
    FlowTraceNodeOutputField& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = FlowTraceNodeOutputNext>
    FlowTraceNodeOutputField& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data type of the output field for compatibility validation.</p>
     */
    inline FlowNodeIODataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowNodeIODataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowTraceNodeOutputField& WithType(FlowNodeIODataType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeOutputName;
    bool m_nodeOutputNameHasBeenSet = false;

    FlowTraceNodeOutputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<FlowTraceNodeOutputNext> m_next;
    bool m_nextHasBeenSet = false;

    FlowNodeIODataType m_type{FlowNodeIODataType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
