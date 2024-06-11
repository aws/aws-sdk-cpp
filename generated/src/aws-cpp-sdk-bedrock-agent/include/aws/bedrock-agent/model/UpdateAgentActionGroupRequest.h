/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/model/ActionGroupExecutor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ActionGroupState.h>
#include <aws/bedrock-agent/model/APISchema.h>
#include <aws/bedrock-agent/model/FunctionSchema.h>
#include <aws/bedrock-agent/model/ActionGroupSignature.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdateAgentActionGroupRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentActionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentActionGroup"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function containing the business
     * logic that is carried out upon invoking the action.</p>
     */
    inline const ActionGroupExecutor& GetActionGroupExecutor() const{ return m_actionGroupExecutor; }
    inline bool ActionGroupExecutorHasBeenSet() const { return m_actionGroupExecutorHasBeenSet; }
    inline void SetActionGroupExecutor(const ActionGroupExecutor& value) { m_actionGroupExecutorHasBeenSet = true; m_actionGroupExecutor = value; }
    inline void SetActionGroupExecutor(ActionGroupExecutor&& value) { m_actionGroupExecutorHasBeenSet = true; m_actionGroupExecutor = std::move(value); }
    inline UpdateAgentActionGroupRequest& WithActionGroupExecutor(const ActionGroupExecutor& value) { SetActionGroupExecutor(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithActionGroupExecutor(ActionGroupExecutor&& value) { SetActionGroupExecutor(std::move(value)); return *this;}
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
    inline UpdateAgentActionGroupRequest& WithActionGroupId(const Aws::String& value) { SetActionGroupId(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithActionGroupId(Aws::String&& value) { SetActionGroupId(std::move(value)); return *this;}
    inline UpdateAgentActionGroupRequest& WithActionGroupId(const char* value) { SetActionGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new name for the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const{ return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    inline void SetActionGroupName(const Aws::String& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = value; }
    inline void SetActionGroupName(Aws::String&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::move(value); }
    inline void SetActionGroupName(const char* value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName.assign(value); }
    inline UpdateAgentActionGroupRequest& WithActionGroupName(const Aws::String& value) { SetActionGroupName(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithActionGroupName(Aws::String&& value) { SetActionGroupName(std::move(value)); return *this;}
    inline UpdateAgentActionGroupRequest& WithActionGroupName(const char* value) { SetActionGroupName(value); return *this;}
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
    inline UpdateAgentActionGroupRequest& WithActionGroupState(const ActionGroupState& value) { SetActionGroupState(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithActionGroupState(ActionGroupState&& value) { SetActionGroupState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent for which to update the action group.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline UpdateAgentActionGroupRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline UpdateAgentActionGroupRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent version for which to update the action
     * group.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline UpdateAgentActionGroupRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline UpdateAgentActionGroupRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
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
    inline UpdateAgentActionGroupRequest& WithApiSchema(const APISchema& value) { SetApiSchema(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithApiSchema(APISchema&& value) { SetApiSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new name for the action group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAgentActionGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAgentActionGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the function schema for the action group or the JSON
     * or YAML-formatted payload defining the schema.</p>
     */
    inline const FunctionSchema& GetFunctionSchema() const{ return m_functionSchema; }
    inline bool FunctionSchemaHasBeenSet() const { return m_functionSchemaHasBeenSet; }
    inline void SetFunctionSchema(const FunctionSchema& value) { m_functionSchemaHasBeenSet = true; m_functionSchema = value; }
    inline void SetFunctionSchema(FunctionSchema&& value) { m_functionSchemaHasBeenSet = true; m_functionSchema = std::move(value); }
    inline UpdateAgentActionGroupRequest& WithFunctionSchema(const FunctionSchema& value) { SetFunctionSchema(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithFunctionSchema(FunctionSchema&& value) { SetFunctionSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To allow your agent to request the user for additional information when
     * trying to complete a task, set this field to <code>AMAZON.UserInput</code>. You
     * must leave the <code>description</code>, <code>apiSchema</code>, and
     * <code>actionGroupExecutor</code> fields blank for this action group.</p>
     * <p>During orchestration, if your agent determines that it needs to invoke an API
     * in an action group, but doesn't have enough information to complete the API
     * request, it will invoke this action group instead and return an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Observation.html">Observation</a>
     * reprompting the user for more information.</p>
     */
    inline const ActionGroupSignature& GetParentActionGroupSignature() const{ return m_parentActionGroupSignature; }
    inline bool ParentActionGroupSignatureHasBeenSet() const { return m_parentActionGroupSignatureHasBeenSet; }
    inline void SetParentActionGroupSignature(const ActionGroupSignature& value) { m_parentActionGroupSignatureHasBeenSet = true; m_parentActionGroupSignature = value; }
    inline void SetParentActionGroupSignature(ActionGroupSignature&& value) { m_parentActionGroupSignatureHasBeenSet = true; m_parentActionGroupSignature = std::move(value); }
    inline UpdateAgentActionGroupRequest& WithParentActionGroupSignature(const ActionGroupSignature& value) { SetParentActionGroupSignature(value); return *this;}
    inline UpdateAgentActionGroupRequest& WithParentActionGroupSignature(ActionGroupSignature&& value) { SetParentActionGroupSignature(std::move(value)); return *this;}
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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FunctionSchema m_functionSchema;
    bool m_functionSchemaHasBeenSet = false;

    ActionGroupSignature m_parentActionGroupSignature;
    bool m_parentActionGroupSignatureHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
