/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/IncompatibleLoopNodeType.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about a flow that contains an incompatible node in a DoWhile
   * loop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LoopIncompatibleNodeTypeFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class LoopIncompatibleNodeTypeFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API LoopIncompatibleNodeTypeFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API LoopIncompatibleNodeTypeFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LoopIncompatibleNodeTypeFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>Loop</code> container node that contains an incompatible node.</p>
     */
    inline const Aws::String& GetNode() const { return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    template<typename NodeT = Aws::String>
    void SetNode(NodeT&& value) { m_nodeHasBeenSet = true; m_node = std::forward<NodeT>(value); }
    template<typename NodeT = Aws::String>
    LoopIncompatibleNodeTypeFlowValidationDetails& WithNode(NodeT&& value) { SetNode(std::forward<NodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the incompatible node in the DoWhile loop. Some node types,
     * like a condition node, aren't allowed in a DoWhile loop.</p>
     */
    inline IncompatibleLoopNodeType GetIncompatibleNodeType() const { return m_incompatibleNodeType; }
    inline bool IncompatibleNodeTypeHasBeenSet() const { return m_incompatibleNodeTypeHasBeenSet; }
    inline void SetIncompatibleNodeType(IncompatibleLoopNodeType value) { m_incompatibleNodeTypeHasBeenSet = true; m_incompatibleNodeType = value; }
    inline LoopIncompatibleNodeTypeFlowValidationDetails& WithIncompatibleNodeType(IncompatibleLoopNodeType value) { SetIncompatibleNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node that's incompatible in the DoWhile loop.</p>
     */
    inline const Aws::String& GetIncompatibleNodeName() const { return m_incompatibleNodeName; }
    inline bool IncompatibleNodeNameHasBeenSet() const { return m_incompatibleNodeNameHasBeenSet; }
    template<typename IncompatibleNodeNameT = Aws::String>
    void SetIncompatibleNodeName(IncompatibleNodeNameT&& value) { m_incompatibleNodeNameHasBeenSet = true; m_incompatibleNodeName = std::forward<IncompatibleNodeNameT>(value); }
    template<typename IncompatibleNodeNameT = Aws::String>
    LoopIncompatibleNodeTypeFlowValidationDetails& WithIncompatibleNodeName(IncompatibleNodeNameT&& value) { SetIncompatibleNodeName(std::forward<IncompatibleNodeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;

    IncompatibleLoopNodeType m_incompatibleNodeType{IncompatibleLoopNodeType::NOT_SET};
    bool m_incompatibleNodeTypeHasBeenSet = false;

    Aws::String m_incompatibleNodeName;
    bool m_incompatibleNodeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
