﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ActionGroupExecutor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ActionGroupState.h>
#include <aws/bedrock-agent/model/APISchema.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/FunctionSchema.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent/model/ActionGroupSignature.h>
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
    AWS_BEDROCKAGENT_API AgentActionGroup();
    AWS_BEDROCKAGENT_API AgentActionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentActionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action or the custom control method
     * for handling the information elicited from the user.</p>
     */
    inline const ActionGroupExecutor& GetActionGroupExecutor() const{ return m_actionGroupExecutor; }
    inline bool ActionGroupExecutorHasBeenSet() const { return m_actionGroupExecutorHasBeenSet; }
    inline void SetActionGroupExecutor(const ActionGroupExecutor& value) { m_actionGroupExecutorHasBeenSet = true; m_actionGroupExecutor = value; }
    inline void SetActionGroupExecutor(ActionGroupExecutor&& value) { m_actionGroupExecutorHasBeenSet = true; m_actionGroupExecutor = std::move(value); }
    inline AgentActionGroup& WithActionGroupExecutor(const ActionGroupExecutor& value) { SetActionGroupExecutor(value); return *this;}
    inline AgentActionGroup& WithActionGroupExecutor(ActionGroupExecutor&& value) { SetActionGroupExecutor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline const Aws::String& GetActionGroupId() const{ return m_actionGroupId; }
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }
    inline void SetActionGroupId(const Aws::String& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = value; }
    inline void SetActionGroupId(Aws::String&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::move(value); }
    inline void SetActionGroupId(const char* value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId.assign(value); }
    inline AgentActionGroup& WithActionGroupId(const Aws::String& value) { SetActionGroupId(value); return *this;}
    inline AgentActionGroup& WithActionGroupId(Aws::String&& value) { SetActionGroupId(std::move(value)); return *this;}
    inline AgentActionGroup& WithActionGroupId(const char* value) { SetActionGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const{ return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    inline void SetActionGroupName(const Aws::String& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = value; }
    inline void SetActionGroupName(Aws::String&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::move(value); }
    inline void SetActionGroupName(const char* value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName.assign(value); }
    inline AgentActionGroup& WithActionGroupName(const Aws::String& value) { SetActionGroupName(value); return *this;}
    inline AgentActionGroup& WithActionGroupName(Aws::String&& value) { SetActionGroupName(std::move(value)); return *this;}
    inline AgentActionGroup& WithActionGroupName(const char* value) { SetActionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline const ActionGroupState& GetActionGroupState() const{ return m_actionGroupState; }
    inline bool ActionGroupStateHasBeenSet() const { return m_actionGroupStateHasBeenSet; }
    inline void SetActionGroupState(const ActionGroupState& value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = value; }
    inline void SetActionGroupState(ActionGroupState&& value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = std::move(value); }
    inline AgentActionGroup& WithActionGroupState(const ActionGroupState& value) { SetActionGroupState(value); return *this;}
    inline AgentActionGroup& WithActionGroupState(ActionGroupState&& value) { SetActionGroupState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent to which the action group belongs.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AgentActionGroup& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AgentActionGroup& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AgentActionGroup& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent to which the action group belongs.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline AgentActionGroup& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline AgentActionGroup& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline AgentActionGroup& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains either details about the S3 object containing the OpenAPI schema for
     * the action group or the JSON or YAML-formatted payload defining the schema. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-api-schema.html">Action
     * group OpenAPI schemas</a>.</p>
     */
    inline const APISchema& GetApiSchema() const{ return m_apiSchema; }
    inline bool ApiSchemaHasBeenSet() const { return m_apiSchemaHasBeenSet; }
    inline void SetApiSchema(const APISchema& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = value; }
    inline void SetApiSchema(APISchema&& value) { m_apiSchemaHasBeenSet = true; m_apiSchema = std::move(value); }
    inline AgentActionGroup& WithApiSchema(const APISchema& value) { SetApiSchema(value); return *this;}
    inline AgentActionGroup& WithApiSchema(APISchema&& value) { SetApiSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AgentActionGroup& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AgentActionGroup& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AgentActionGroup& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the action group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AgentActionGroup& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AgentActionGroup& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the action group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AgentActionGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AgentActionGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AgentActionGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines functions that each define parameters that the agent needs to invoke
     * from the user. Each function represents an action in an action group.</p>
     */
    inline const FunctionSchema& GetFunctionSchema() const{ return m_functionSchema; }
    inline bool FunctionSchemaHasBeenSet() const { return m_functionSchemaHasBeenSet; }
    inline void SetFunctionSchema(const FunctionSchema& value) { m_functionSchemaHasBeenSet = true; m_functionSchema = value; }
    inline void SetFunctionSchema(FunctionSchema&& value) { m_functionSchemaHasBeenSet = true; m_functionSchema = std::move(value); }
    inline AgentActionGroup& WithFunctionSchema(const FunctionSchema& value) { SetFunctionSchema(value); return *this;}
    inline AgentActionGroup& WithFunctionSchema(FunctionSchema&& value) { SetFunctionSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a computer use action.</p>  <p>
     * Computer use is a new Anthropic Claude model capability (in beta) available with
     * Claude 3.7 Sonnet and Claude 3.5 Sonnet v2 only. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agent-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>. </p>
     * 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParentActionGroupSignatureParams() const{ return m_parentActionGroupSignatureParams; }
    inline bool ParentActionGroupSignatureParamsHasBeenSet() const { return m_parentActionGroupSignatureParamsHasBeenSet; }
    inline void SetParentActionGroupSignatureParams(const Aws::Map<Aws::String, Aws::String>& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams = value; }
    inline void SetParentActionGroupSignatureParams(Aws::Map<Aws::String, Aws::String>&& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams = std::move(value); }
    inline AgentActionGroup& WithParentActionGroupSignatureParams(const Aws::Map<Aws::String, Aws::String>& value) { SetParentActionGroupSignatureParams(value); return *this;}
    inline AgentActionGroup& WithParentActionGroupSignatureParams(Aws::Map<Aws::String, Aws::String>&& value) { SetParentActionGroupSignatureParams(std::move(value)); return *this;}
    inline AgentActionGroup& AddParentActionGroupSignatureParams(const Aws::String& key, const Aws::String& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(key, value); return *this; }
    inline AgentActionGroup& AddParentActionGroupSignatureParams(Aws::String&& key, const Aws::String& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(std::move(key), value); return *this; }
    inline AgentActionGroup& AddParentActionGroupSignatureParams(const Aws::String& key, Aws::String&& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(key, std::move(value)); return *this; }
    inline AgentActionGroup& AddParentActionGroupSignatureParams(Aws::String&& key, Aws::String&& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(std::move(key), std::move(value)); return *this; }
    inline AgentActionGroup& AddParentActionGroupSignatureParams(const char* key, Aws::String&& value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(key, std::move(value)); return *this; }
    inline AgentActionGroup& AddParentActionGroupSignatureParams(Aws::String&& key, const char* value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(std::move(key), value); return *this; }
    inline AgentActionGroup& AddParentActionGroupSignatureParams(const char* key, const char* value) { m_parentActionGroupSignatureParamsHasBeenSet = true; m_parentActionGroupSignatureParams.emplace(key, value); return *this; }
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
    inline const ActionGroupSignature& GetParentActionSignature() const{ return m_parentActionSignature; }
    inline bool ParentActionSignatureHasBeenSet() const { return m_parentActionSignatureHasBeenSet; }
    inline void SetParentActionSignature(const ActionGroupSignature& value) { m_parentActionSignatureHasBeenSet = true; m_parentActionSignature = value; }
    inline void SetParentActionSignature(ActionGroupSignature&& value) { m_parentActionSignatureHasBeenSet = true; m_parentActionSignature = std::move(value); }
    inline AgentActionGroup& WithParentActionSignature(const ActionGroupSignature& value) { SetParentActionSignature(value); return *this;}
    inline AgentActionGroup& WithParentActionSignature(ActionGroupSignature&& value) { SetParentActionSignature(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline AgentActionGroup& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline AgentActionGroup& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    ActionGroupExecutor m_actionGroupExecutor;
    bool m_actionGroupExecutorHasBeenSet = false;

    Aws::String m_actionGroupId;
    bool m_actionGroupIdHasBeenSet = false;

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    ActionGroupState m_actionGroupState;
    bool m_actionGroupStateHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FunctionSchema m_functionSchema;
    bool m_functionSchemaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parentActionGroupSignatureParams;
    bool m_parentActionGroupSignatureParamsHasBeenSet = false;

    ActionGroupSignature m_parentActionSignature;
    bool m_parentActionSignatureHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
