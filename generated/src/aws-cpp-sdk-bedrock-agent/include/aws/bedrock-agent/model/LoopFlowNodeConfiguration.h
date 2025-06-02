/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
  class FlowDefinition;

  /**
   * <p>Contains configurations for the nodes of a DoWhile loop in your flow.</p>
   * <p>A DoWhile loop is made up of the following nodes:</p> <ul> <li> <p>
   * <code>Loop</code> - The container node that holds the loop's flow definition.
   * This node encompasses the entire loop structure.</p> </li> <li> <p>
   * <code>LoopInput</code> - The entry point node for the loop. This node receives
   * inputs from nodes outside the loop and from previous loop iterations.</p> </li>
   * <li> <p>Body nodes - The processing nodes that execute within each loop
   * iteration. These can be nodes for handling data in your flow, such as a prompt
   * or Lambda function nodes. Some node types aren't supported inside a DoWhile loop
   * body. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_LoopIncompatibleNodeTypeFlowValidationDetails.html">LoopIncompatibleNodeTypeFlowValidationDetails</a>.</p>
   * </li> <li> <p> <code>LoopController</code> - The node that evaluates whether the
   * loop should continue or exit based on a condition.</p> </li> </ul> <p>These
   * nodes work together to create a loop that runs at least once and continues until
   * a specified condition is met or a maximum number of iterations is
   * reached.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LoopFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class LoopFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API LoopFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API LoopFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LoopFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The definition of the DoWhile loop nodes and connections between nodes in the
     * flow.</p>
     */
    inline const FlowDefinition& GetDefinition() const{
      return *m_definition;
    }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = FlowDefinition>
    void SetDefinition(DefinitionT&& value) {
      m_definitionHasBeenSet = true; 
      m_definition = Aws::MakeShared<FlowDefinition>("LoopFlowNodeConfiguration", std::forward<DefinitionT>(value));
    }
    template<typename DefinitionT = FlowDefinition>
    LoopFlowNodeConfiguration& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}
  private:

    std::shared_ptr<FlowDefinition> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
