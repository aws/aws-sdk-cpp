/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/NodeExecutionContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FlowNodeIODataType.h>
#include <aws/bedrock-agent-runtime/model/NodeOutputNext.h>
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
   * <p>Represents an output field produced by a node during a flow execution.</p>
   *  <p>Flow executions is in preview release for Amazon Bedrock and is
   * subject to change.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/NodeOutputField">AWS
   * API Reference</a></p>
   */
  class NodeOutputField
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API NodeOutputField() = default;
    AWS_BEDROCKAGENTRUNTIME_API NodeOutputField(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API NodeOutputField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output field as defined in the node's output schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NodeOutputField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the output field, which can contain text or structured
     * data.</p>
     */
    inline const NodeExecutionContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = NodeExecutionContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = NodeExecutionContent>
    NodeOutputField& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next node that receives output data from this field.</p>
     */
    inline const Aws::Vector<NodeOutputNext>& GetNext() const { return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    template<typename NextT = Aws::Vector<NodeOutputNext>>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::Vector<NodeOutputNext>>
    NodeOutputField& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    template<typename NextT = NodeOutputNext>
    NodeOutputField& AddNext(NextT&& value) { m_nextHasBeenSet = true; m_next.emplace_back(std::forward<NextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data type of the output field for compatibility validation.</p>
     */
    inline FlowNodeIODataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowNodeIODataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline NodeOutputField& WithType(FlowNodeIODataType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NodeExecutionContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<NodeOutputNext> m_next;
    bool m_nextHasBeenSet = false;

    FlowNodeIODataType m_type{FlowNodeIODataType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
