/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about multiple connections to a single node input.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MultipleNodeInputConnectionsFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class MultipleNodeInputConnectionsFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API MultipleNodeInputConnectionsFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API MultipleNodeInputConnectionsFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MultipleNodeInputConnectionsFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node containing the input with multiple connections.</p>
     */
    inline const Aws::String& GetNode() const { return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    template<typename NodeT = Aws::String>
    void SetNode(NodeT&& value) { m_nodeHasBeenSet = true; m_node = std::forward<NodeT>(value); }
    template<typename NodeT = Aws::String>
    MultipleNodeInputConnectionsFlowValidationDetails& WithNode(NodeT&& value) { SetNode(std::forward<NodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input with multiple connections to it.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    MultipleNodeInputConnectionsFlowValidationDetails& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
