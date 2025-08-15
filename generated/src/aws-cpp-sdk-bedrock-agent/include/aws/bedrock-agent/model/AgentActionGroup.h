/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/ActionGroupSignature.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent/model/ActionGroupExecutor.h>
#include <aws/bedrock-agent/model/APISchema.h>
#include <aws/bedrock-agent/model/FunctionSchema.h>
#include <aws/bedrock-agent/model/ActionGroupState.h>
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
   * <p>Contains details about an action group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentActionGroup">AWS
   * API Reference</a></p>
   */
  class AgentActionGroup
  {
  public:
    AWS_BEDROCKAGENT_API AgentActionGroup() = default;
    AWS_BEDROCKAGENT_API AgentActionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentActionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the agent to which the action group belongs.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentActionGroup& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent to which the action group belongs.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    AgentActionGroup& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline const Aws::String& GetActionGroupId() const { return m_actionGroupId; }
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }
    template<typename ActionGroupIdT = Aws::String>
    void SetActionGroupId(ActionGroupIdT&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::forward<ActionGroupIdT>(value); }
    template<typename ActionGroupIdT = Aws::String>
    AgentActionGroup& WithActionGroupId(ActionGroupIdT&& value) { SetActionGroupId(std::forward<ActionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action group.</p>
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
    AgentActionGroup& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the action group.</p>
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
     * <p>The time at which the action group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AgentActionGroup& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AgentActionGroup& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this field is set as <code>AMAZON.UserInput</code>, the agent can request
     * the user for additional information when trying to complete a task. The
     * <code>description</code>, <code>apiSchema</code>, and
     * <code>actionGroupExecutor</code> fields must be blank for this action group.</p>
     * <p>During orchestration, if the agent determines that it needs to invoke an API
     * in an action group, but doesn't have enough information to complete the API
     * request, it will invoke this action group instead and return an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Observation.html">Observation</a>
     * reprompting the user for more information.</p>
     */
    inline ActionGroupSignature GetParentActionSignature() const { return m_parentActionSignature; }
    inline bool ParentActionSignatureHasBeenSet() const { return m_parentActionSignatureHasBeenSet; }
    inline void SetParentActionSignature(ActionGroupSignature value) { m_parentActionSignatureHasBeenSet = true; m_parentActionSignature = value; }
    inline AgentActionGroup& WithParentActionSignature(ActionGroupSignature value) { SetParentActionSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a computer use action.</p>  <p>
     * Computer use is a new Anthropic Claude model capability (in beta) available with
     * Claude 3.7 Sonnet and Claude 3.5 Sonnet v2 only. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>. </p>
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
    AgentActionGroup& WithActionGroupExecutor(ActionGroupExecutorT&& value) { SetActionGroupExecutor(std::forward<ActionGroupExecutorT>(value)); return *this;}
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
    AgentActionGroup& WithApiSchema(ApiSchemaT&& value) { SetApiSchema(std::forward<ApiSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines functions that each define parameters that the agent needs to invoke
     * from the user. Each function represents an action in an action group.</p>
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
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline ActionGroupState GetActionGroupState() const { return m_actionGroupState; }
    inline bool ActionGroupStateHasBeenSet() const { return m_actionGroupStateHasBeenSet; }
    inline void SetActionGroupState(ActionGroupState value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = value; }
    inline AgentActionGroup& WithActionGroupState(ActionGroupState value) { SetActionGroupState(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_actionGroupId;
    bool m_actionGroupIdHasBeenSet = false;

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    ActionGroupSignature m_parentActionSignature{ActionGroupSignature::NOT_SET};
    bool m_parentActionSignatureHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parentActionGroupSignatureParams;
    bool m_parentActionGroupSignatureParamsHasBeenSet = false;

    ActionGroupExecutor m_actionGroupExecutor;
    bool m_actionGroupExecutorHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;

    FunctionSchema m_functionSchema;
    bool m_functionSchemaHasBeenSet = false;

    ActionGroupState m_actionGroupState{ActionGroupState::NOT_SET};
    bool m_actionGroupStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
