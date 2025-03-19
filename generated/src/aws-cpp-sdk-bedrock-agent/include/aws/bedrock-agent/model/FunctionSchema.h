/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/Function.h>
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
   * <p>Defines functions that each define parameters that the agent needs to invoke
   * from the user. Each function represents an action in an action group.</p>
   * <p>This data type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_CreateAgentActionGroup.html#API_agent_CreateAgentActionGroup_RequestSyntax">CreateAgentActionGroup
   * request</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_CreateAgentActionGroup.html#API_agent_CreateAgentActionGroup_ResponseSyntax">CreateAgentActionGroup
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_UpdateAgentActionGroup.html#API_agent_UpdateAgentActionGroup_RequestSyntax">UpdateAgentActionGroup
   * request</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_UpdateAgentActionGroup.html#API_agent_UpdateAgentActionGroup_ResponseSyntax">UpdateAgentActionGroup
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetAgentActionGroup.html#API_agent_GetAgentActionGroup_ResponseSyntax">GetAgentActionGroup
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FunctionSchema">AWS
   * API Reference</a></p>
   */
  class FunctionSchema
  {
  public:
    AWS_BEDROCKAGENT_API FunctionSchema() = default;
    AWS_BEDROCKAGENT_API FunctionSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FunctionSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of functions that each define an action in the action group.</p>
     */
    inline const Aws::Vector<Function>& GetFunctions() const { return m_functions; }
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }
    template<typename FunctionsT = Aws::Vector<Function>>
    void SetFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions = std::forward<FunctionsT>(value); }
    template<typename FunctionsT = Aws::Vector<Function>>
    FunctionSchema& WithFunctions(FunctionsT&& value) { SetFunctions(std::forward<FunctionsT>(value)); return *this;}
    template<typename FunctionsT = Function>
    FunctionSchema& AddFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions.emplace_back(std::forward<FunctionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
