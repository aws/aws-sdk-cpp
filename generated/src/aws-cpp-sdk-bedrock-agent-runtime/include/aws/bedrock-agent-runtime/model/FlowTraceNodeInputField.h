/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputContent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputSource.h>
#include <aws/bedrock-agent-runtime/model/FlowNodeIODataType.h>
#include <aws/bedrock-agent-runtime/model/FlowNodeInputCategory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputExecutionChainItem.h>
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
     * <p>The name of the node input.</p>
     */
    inline const Aws::String& GetNodeInputName() const { return m_nodeInputName; }
    inline bool NodeInputNameHasBeenSet() const { return m_nodeInputNameHasBeenSet; }
    template<typename NodeInputNameT = Aws::String>
    void SetNodeInputName(NodeInputNameT&& value) { m_nodeInputNameHasBeenSet = true; m_nodeInputName = std::forward<NodeInputNameT>(value); }
    template<typename NodeInputNameT = Aws::String>
    FlowTraceNodeInputField& WithNodeInputName(NodeInputNameT&& value) { SetNodeInputName(std::forward<NodeInputNameT>(value)); return *this;}
    ///@}

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
     * <p>The source node that provides input data to this field.</p>
     */
    inline const FlowTraceNodeInputSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = FlowTraceNodeInputSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = FlowTraceNodeInputSource>
    FlowTraceNodeInputField& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the input field for compatibility validation.</p>
     */
    inline FlowNodeIODataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowNodeIODataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowTraceNodeInputField& WithType(FlowNodeIODataType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the input field.</p>
     */
    inline FlowNodeInputCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(FlowNodeInputCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline FlowTraceNodeInputField& WithCategory(FlowNodeInputCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution path through nested nodes like iterators and loops.</p>
     */
    inline const Aws::Vector<FlowTraceNodeInputExecutionChainItem>& GetExecutionChain() const { return m_executionChain; }
    inline bool ExecutionChainHasBeenSet() const { return m_executionChainHasBeenSet; }
    template<typename ExecutionChainT = Aws::Vector<FlowTraceNodeInputExecutionChainItem>>
    void SetExecutionChain(ExecutionChainT&& value) { m_executionChainHasBeenSet = true; m_executionChain = std::forward<ExecutionChainT>(value); }
    template<typename ExecutionChainT = Aws::Vector<FlowTraceNodeInputExecutionChainItem>>
    FlowTraceNodeInputField& WithExecutionChain(ExecutionChainT&& value) { SetExecutionChain(std::forward<ExecutionChainT>(value)); return *this;}
    template<typename ExecutionChainT = FlowTraceNodeInputExecutionChainItem>
    FlowTraceNodeInputField& AddExecutionChain(ExecutionChainT&& value) { m_executionChainHasBeenSet = true; m_executionChain.emplace_back(std::forward<ExecutionChainT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeInputName;
    bool m_nodeInputNameHasBeenSet = false;

    FlowTraceNodeInputContent m_content;
    bool m_contentHasBeenSet = false;

    FlowTraceNodeInputSource m_source;
    bool m_sourceHasBeenSet = false;

    FlowNodeIODataType m_type{FlowNodeIODataType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FlowNodeInputCategory m_category{FlowNodeInputCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::Vector<FlowTraceNodeInputExecutionChainItem> m_executionChain;
    bool m_executionChainHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
