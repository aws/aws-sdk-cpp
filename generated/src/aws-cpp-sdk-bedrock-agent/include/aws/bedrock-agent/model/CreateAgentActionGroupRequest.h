/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ActionGroupSignature.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent/model/ActionGroupExecutor.h>
#include <aws/bedrock-agent/model/APISchema.h>
#include <aws/bedrock-agent/model/ActionGroupState.h>
#include <aws/bedrock-agent/model/FunctionSchema.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class CreateAgentActionGroupRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API CreateAgentActionGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAgentActionGroup"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the agent for which to create the action group.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    CreateAgentActionGroupRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent for which to create the action group.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    CreateAgentActionGroupRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to give the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const { return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    template<typename ActionGroupNameT = Aws::String>
    void SetActionGroupName(ActionGroupNameT&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::forward<ActionGroupNameT>(value); }
    template<typename ActionGroupNameT = Aws::String>
    CreateAgentActionGroupRequest& WithActionGroupName(ActionGroupNameT&& value) { SetActionGroupName(std::forward<ActionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAgentActionGroupRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the action group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAgentActionGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-computer-use.html">Configure
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
    inline CreateAgentActionGroupRequest& WithParentActionGroupSignature(ActionGroupSignature value) { SetParentActionGroupSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a computer use action.</p>  <p>
     * Computer use is a new Anthropic Claude model capability (in beta) available with
     * Anthropic Claude 3.7 Sonnet and Claude 3.5 Sonnet v2 only. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>. </p>
     * 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParentActionGroupSignatureParams() const { return m_parentActionGroupSignatureParams; }
    inline bool ParentActionGroupSignatureParamsHasBeenSet() const { return m_parentActionGroupSignatureParamsHasBeenSet; }
    template<typename ParentActionGroupSignatureParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetParentActionGroupSignatureParams(ParentActionGroupSignatureParamsT&& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams = std::forward<ParentActionGroupSignatureParamsT>(value); }
    template<typename ParentActionGroupSignatureParamsT = Aws::Map<Aws::String, Aws::String>>
    CreateAgentActionGroupRequest& WithParentActionGroupSignatureParams(ParentActionGroupSignatureParamsT&& value) { SetParentActionGroupSignatureParams(std::forward<ParentActionGroupSignatureParamsT>(value)); return *this;}
    template<typename ParentActionGroupSignatureParamsKeyT = Aws::String, typename ParentActionGroupSignatureParamsValueT = Aws::String>
    CreateAgentActionGroupRequest& AddParentActionGroupSignatureParams(ParentActionGroupSignatureParamsKeyT&& key, ParentActionGroupSignatureParamsValueT&& value) {
      m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(std::forward<ParentActionGroupSignatureParamsKeyT>(key), std::forward<ParentActionGroupSignatureParamsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action or the custom control method
     * for handling the information elicited from the user.</p>
     */
    inline const ActionGroupExecutor& GetActionGroupExecutor() const { return m_actionGroupExecutor; }
    inline bool ActionGroupExecutorHasBeenSet() const { return m_actionGroupExecutorHasBeenSet; }
    template<typename ActionGroupExecutorT = ActionGroupExecutor>
    void SetActionGroupExecutor(ActionGroupExecutorT&& value) { m_actionGroupExecutorHasBeenSet = true; m_actionGroupExecutor = std::forward<ActionGroupExecutorT>(value); }
    template<typename ActionGroupExecutorT = ActionGroupExecutor>
    CreateAgentActionGroupRequest& WithActionGroupExecutor(ActionGroupExecutorT&& value) { SetActionGroupExecutor(std::forward<ActionGroupExecutorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-api-schema.html">Action
     * group OpenAPI schemas</a>.</p>
     */
    inline const APISchema& GetApiSchema() const { return m_apiSchema; }
    inline bool ApiSchemaHasBeenSet() const { return m_apiSchemaHasBeenSet; }
    template<typename ApiSchemaT = APISchema>
    void SetApiSchema(ApiSchemaT&& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = std::forward<ApiSchemaT>(value); }
    template<typename ApiSchemaT = APISchema>
    CreateAgentActionGroupRequest& WithApiSchema(ApiSchemaT&& value) { SetApiSchema(std::forward<ApiSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline ActionGroupState GetActionGroupState() const { return m_actionGroupState; }
    inline bool ActionGroupStateHasBeenSet() const { return m_actionGroupStateHasBeenSet; }
    inline void SetActionGroupState(ActionGroupState value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = value; }
    inline CreateAgentActionGroupRequest& WithActionGroupState(ActionGroupState value) { SetActionGroupState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the function schema for the action group or the JSON
     * or YAML-formatted payload defining the schema.</p>
     */
    inline const FunctionSchema& GetFunctionSchema() const { return m_functionSchema; }
    inline bool FunctionSchemaHasBeenSet() const { return m_functionSchemaHasBeenSet; }
    template<typename FunctionSchemaT = FunctionSchema>
    void SetFunctionSchema(FunctionSchemaT&& value) { m_functionSchemaHasBeenSet = true; m_functionSchema = std::forward<FunctionSchemaT>(value); }
    template<typename FunctionSchemaT = FunctionSchema>
    CreateAgentActionGroupRequest& WithFunctionSchema(FunctionSchemaT&& value) { SetFunctionSchema(std::forward<FunctionSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionGroupSignature m_parentActionGroupSignature{ActionGroupSignature::NOT_SET};
    bool m_parentActionGroupSignatureHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parentActionGroupSignatureParams;
    bool m_parentActionGroupSignatureParamsHasBeenSet = false;

    ActionGroupExecutor m_actionGroupExecutor;
    bool m_actionGroupExecutorHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;

    ActionGroupState m_actionGroupState{ActionGroupState::NOT_SET};
    bool m_actionGroupStateHasBeenSet = false;

    FunctionSchema m_functionSchema;
    bool m_functionSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
