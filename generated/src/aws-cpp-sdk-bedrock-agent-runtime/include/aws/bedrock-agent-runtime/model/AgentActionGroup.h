/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupSignature.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupExecutor.h>
#include <aws/bedrock-agent-runtime/model/APISchema.h>
#include <aws/bedrock-agent-runtime/model/FunctionSchema.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p> Contains details of the inline agent's action group. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgentActionGroup">AWS
   * API Reference</a></p>
   */
  class AgentActionGroup
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API AgentActionGroup() = default;
    AWS_BEDROCKAGENTRUNTIME_API AgentActionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentActionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the action group. </p>
     */
    inline const Aws::String& GetActionGroupName() const { return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    template<typename ActionGroupNameT = Aws::String>
    void SetActionGroupName(ActionGroupNameT&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::forward<ActionGroupNameT>(value); }
    template<typename ActionGroupNameT = Aws::String>
    AgentActionGroup& WithActionGroupName(ActionGroupNameT&& value) { SetActionGroupName(std::forward<ActionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the action group. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentActionGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a built-in or computer use action for this action group. If you
     * specify a value, you must leave the <code>description</code>,
     * <code>apiSchema</code>, and <code>actionGroupExecutor</code> fields empty for
     * this action group. </p> <ul> <li> <p>To allow your agent to request the user for
     * additional information when trying to complete a task, set this field to
     * <code>AMAZON.UserInput</code>. </p> </li> <li> <p>To allow your agent to
     * generate, run, and troubleshoot code when trying to complete a task, set this
     * field to <code>AMAZON.CodeInterpreter</code>.</p> </li> <li> <p>To allow your
     * agent to use an Anthropic computer use tool, specify one of the following
     * values. </p>  <p> Computer use is a new Anthropic Claude model
     * capability (in beta) available with Anthropic Claude 3.7 Sonnet and Claude 3.5
     * Sonnet v2 only. When operating computer use functionality, we recommend taking
     * additional security precautions, such as executing computer actions in virtual
     * environments with restricted data access and limited internet connectivity. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agent-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>. </p>
     *  <ul> <li> <p> <code>ANTHROPIC.Computer</code> - Gives the agent
     * permission to use the mouse and keyboard and take screenshots.</p> </li> <li>
     * <p> <code>ANTHROPIC.TextEditor</code> - Gives the agent permission to view,
     * create and edit files.</p> </li> <li> <p> <code>ANTHROPIC.Bash</code> - Gives
     * the agent permission to run commands in a bash shell.</p> </li> </ul> </li>
     * </ul>
     */
    inline ActionGroupSignature GetParentActionGroupSignature() const { return m_parentActionGroupSignature; }
    inline bool ParentActionGroupSignatureHasBeenSet() const { return m_parentActionGroupSignatureHasBeenSet; }
    inline void SetParentActionGroupSignature(ActionGroupSignature value) { m_parentActionGroupSignatureHasBeenSet = true; m_parentActionGroupSignature = value; }
    inline AgentActionGroup& WithParentActionGroupSignature(ActionGroupSignature value) { SetParentActionGroupSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lambda function containing the
     * business logic that is carried out upon invoking the action or the custom
     * control method for handling the information elicited from the user. </p>
     */
    inline const ActionGroupExecutor& GetActionGroupExecutor() const { return m_actionGroupExecutor; }
    inline bool ActionGroupExecutorHasBeenSet() const { return m_actionGroupExecutorHasBeenSet; }
    template<typename ActionGroupExecutorT = ActionGroupExecutor>
    void SetActionGroupExecutor(ActionGroupExecutorT&& value) { m_actionGroupExecutorHasBeenSet = true; m_actionGroupExecutor = std::forward<ActionGroupExecutorT>(value); }
    template<typename ActionGroupExecutorT = ActionGroupExecutor>
    AgentActionGroup& WithActionGroupExecutor(ActionGroupExecutorT&& value) { SetActionGroupExecutor(std::forward<ActionGroupExecutorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains either details about the S3 object containing the OpenAPI schema
     * for the action group or the JSON or YAML-formatted payload defining the schema.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-api-schema.html">Action
     * group OpenAPI schemas</a>. </p>
     */
    inline const APISchema& GetApiSchema() const { return m_apiSchema; }
    inline bool ApiSchemaHasBeenSet() const { return m_apiSchemaHasBeenSet; }
    template<typename ApiSchemaT = APISchema>
    void SetApiSchema(ApiSchemaT&& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = std::forward<ApiSchemaT>(value); }
    template<typename ApiSchemaT = APISchema>
    AgentActionGroup& WithApiSchema(ApiSchemaT&& value) { SetApiSchema(std::forward<ApiSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains details about the function schema for the action group or the JSON
     * or YAML-formatted payload defining the schema. </p>
     */
    inline const FunctionSchema& GetFunctionSchema() const { return m_functionSchema; }
    inline bool FunctionSchemaHasBeenSet() const { return m_functionSchemaHasBeenSet; }
    template<typename FunctionSchemaT = FunctionSchema>
    void SetFunctionSchema(FunctionSchemaT&& value) { m_functionSchemaHasBeenSet = true; m_functionSchema = std::forward<FunctionSchemaT>(value); }
    template<typename FunctionSchemaT = FunctionSchema>
    AgentActionGroup& WithFunctionSchema(FunctionSchemaT&& value) { SetFunctionSchema(std::forward<FunctionSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration settings for a computer use action. </p> 
     * <p>Computer use is a new Anthropic Claude model capability (in beta) available
     * with Claude 3.7 Sonnet and Claude 3.5 Sonnet v2 only. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agent-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>.</p>
     * 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParentActionGroupSignatureParams() const { return m_parentActionGroupSignatureParams; }
    inline bool ParentActionGroupSignatureParamsHasBeenSet() const { return m_parentActionGroupSignatureParamsHasBeenSet; }
    template<typename ParentActionGroupSignatureParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetParentActionGroupSignatureParams(ParentActionGroupSignatureParamsT&& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams = std::forward<ParentActionGroupSignatureParamsT>(value); }
    template<typename ParentActionGroupSignatureParamsT = Aws::Map<Aws::String, Aws::String>>
    AgentActionGroup& WithParentActionGroupSignatureParams(ParentActionGroupSignatureParamsT&& value) { SetParentActionGroupSignatureParams(std::forward<ParentActionGroupSignatureParamsT>(value)); return *this;}
    template<typename ParentActionGroupSignatureParamsKeyT = Aws::String, typename ParentActionGroupSignatureParamsValueT = Aws::String>
    AgentActionGroup& AddParentActionGroupSignatureParams(ParentActionGroupSignatureParamsKeyT&& key, ParentActionGroupSignatureParamsValueT&& value) {
      m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(std::forward<ParentActionGroupSignatureParamsKeyT>(key), std::forward<ParentActionGroupSignatureParamsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionGroupSignature m_parentActionGroupSignature{ActionGroupSignature::NOT_SET};
    bool m_parentActionGroupSignatureHasBeenSet = false;

    ActionGroupExecutor m_actionGroupExecutor;
    bool m_actionGroupExecutorHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;

    FunctionSchema m_functionSchema;
    bool m_functionSchemaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parentActionGroupSignatureParams;
    bool m_parentActionGroupSignatureParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
