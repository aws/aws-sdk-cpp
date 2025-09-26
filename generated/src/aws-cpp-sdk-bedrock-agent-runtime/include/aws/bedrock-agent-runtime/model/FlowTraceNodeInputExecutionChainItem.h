/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FlowControlNodeType.h>
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
   * <p>Represents an item in the execution chain for flow trace node input
   * tracking.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeInputExecutionChainItem">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeInputExecutionChainItem
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputExecutionChainItem() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputExecutionChainItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputExecutionChainItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node in the execution chain.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    FlowTraceNodeInputExecutionChainItem& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index position of this item in the execution chain.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline FlowTraceNodeInputExecutionChainItem& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of execution chain item. Supported values are Iterator and Loop.</p>
     */
    inline FlowControlNodeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowControlNodeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowTraceNodeInputExecutionChainItem& WithType(FlowControlNodeType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    int m_index{0};
    bool m_indexHasBeenSet = false;

    FlowControlNodeType m_type{FlowControlNodeType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
