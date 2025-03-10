/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupExecutor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/APISchema.h>
#include <aws/bedrock-agent-runtime/model/FunctionSchema.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupSignature.h>
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
    AWS_BEDROCKAGENTRUNTIME_API AgentActionGroup();
    AWS_BEDROCKAGENTRUNTIME_API AgentActionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentActionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lambda function containing the
     * business logic that is carried out upon invoking the action or the custom
     * control method for handling the information elicited from the user. </p>
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
     * <p> The name of the action group. </p>
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
     * <p> Contains either details about the S3 object containing the OpenAPI schema
     * for the action group or the JSON or YAML-formatted payload defining the schema.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-api-schema.html">Action
     * group OpenAPI schemas</a>. </p>
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
     * <p> A description of the action group. </p>
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
     * <p> Contains details about the function schema for the action group or the JSON
     * or YAML-formatted payload defining the schema. </p>
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
    inline const ActionGroupSignature& GetParentActionGroupSignature() const{ return m_parentActionGroupSignature; }
    inline bool ParentActionGroupSignatureHasBeenSet() const { return m_parentActionGroupSignatureHasBeenSet; }
    inline void SetParentActionGroupSignature(const ActionGroupSignature& value) { m_parentActionGroupSignatureHasBeenSet = true; m_parentActionGroupSignature = value; }
    inline void SetParentActionGroupSignature(ActionGroupSignature&& value) { m_parentActionGroupSignatureHasBeenSet = true; m_parentActionGroupSignature = std::move(value); }
    inline AgentActionGroup& WithParentActionGroupSignature(const ActionGroupSignature& value) { SetParentActionGroupSignature(value); return *this;}
    inline AgentActionGroup& WithParentActionGroupSignature(ActionGroupSignature&& value) { SetParentActionGroupSignature(std::move(value)); return *this;}
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
  private:

    ActionGroupExecutor m_actionGroupExecutor;
    bool m_actionGroupExecutorHasBeenSet = false;

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    APISchema m_apiSchema;
    bool m_apiSchemaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FunctionSchema m_functionSchema;
    bool m_functionSchemaHasBeenSet = false;

    ActionGroupSignature m_parentActionGroupSignature;
    bool m_parentActionGroupSignatureHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parentActionGroupSignatureParams;
    bool m_parentActionGroupSignatureParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
