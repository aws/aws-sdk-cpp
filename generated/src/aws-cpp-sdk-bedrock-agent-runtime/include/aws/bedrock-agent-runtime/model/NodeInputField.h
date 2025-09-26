/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/NodeExecutionContent.h>
#include <aws/bedrock-agent-runtime/model/NodeInputSource.h>
#include <aws/bedrock-agent-runtime/model/FlowNodeIODataType.h>
#include <aws/bedrock-agent-runtime/model/FlowNodeInputCategory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/NodeInputExecutionChainItem.h>
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
   * <p>Represents an input field provided to a node during a flow
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/NodeInputField">AWS
   * API Reference</a></p>
   */
  class NodeInputField
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API NodeInputField() = default;
    AWS_BEDROCKAGENTRUNTIME_API NodeInputField(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API NodeInputField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the input field as defined in the node's input schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NodeInputField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the input field, which can contain text or structured
     * data.</p>
     */
    inline const NodeExecutionContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = NodeExecutionContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = NodeExecutionContent>
    NodeInputField& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source node that provides input data to this field.</p>
     */
    inline const NodeInputSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = NodeInputSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = NodeInputSource>
    NodeInputField& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the input field for compatibility validation.</p>
     */
    inline FlowNodeIODataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowNodeIODataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline NodeInputField& WithType(FlowNodeIODataType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the input field.</p>
     */
    inline FlowNodeInputCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(FlowNodeInputCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline NodeInputField& WithCategory(FlowNodeInputCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution path through nested nodes like iterators and loops.</p>
     */
    inline const Aws::Vector<NodeInputExecutionChainItem>& GetExecutionChain() const { return m_executionChain; }
    inline bool ExecutionChainHasBeenSet() const { return m_executionChainHasBeenSet; }
    template<typename ExecutionChainT = Aws::Vector<NodeInputExecutionChainItem>>
    void SetExecutionChain(ExecutionChainT&& value) { m_executionChainHasBeenSet = true; m_executionChain = std::forward<ExecutionChainT>(value); }
    template<typename ExecutionChainT = Aws::Vector<NodeInputExecutionChainItem>>
    NodeInputField& WithExecutionChain(ExecutionChainT&& value) { SetExecutionChain(std::forward<ExecutionChainT>(value)); return *this;}
    template<typename ExecutionChainT = NodeInputExecutionChainItem>
    NodeInputField& AddExecutionChain(ExecutionChainT&& value) { m_executionChainHasBeenSet = true; m_executionChain.emplace_back(std::forward<ExecutionChainT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NodeExecutionContent m_content;
    bool m_contentHasBeenSet = false;

    NodeInputSource m_source;
    bool m_sourceHasBeenSet = false;

    FlowNodeIODataType m_type{FlowNodeIODataType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FlowNodeInputCategory m_category{FlowNodeInputCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::Vector<NodeInputExecutionChainItem> m_executionChain;
    bool m_executionChainHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
