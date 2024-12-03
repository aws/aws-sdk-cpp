/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ActionInvocationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/ApiRequestBody.h>
#include <aws/bedrock-agent-runtime/model/ApiParameter.h>
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
   * <p>Contains information about the API operation that the agent predicts should
   * be called.</p> <p>This data type is used in the following API operations:</p>
   * <ul> <li> <p>In the <code>returnControl</code> field of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ApiInvocationInput">AWS
   * API Reference</a></p>
   */
  class ApiInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ApiInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API ApiInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ApiInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action group that the API operation belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const{ return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    inline void SetActionGroup(const Aws::String& value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }
    inline void SetActionGroup(Aws::String&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::move(value); }
    inline void SetActionGroup(const char* value) { m_actionGroupHasBeenSet = true; m_actionGroup.assign(value); }
    inline ApiInvocationInput& WithActionGroup(const Aws::String& value) { SetActionGroup(value); return *this;}
    inline ApiInvocationInput& WithActionGroup(Aws::String&& value) { SetActionGroup(std::move(value)); return *this;}
    inline ApiInvocationInput& WithActionGroup(const char* value) { SetActionGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the API operation to invoke.</p>
     */
    inline const ActionInvocationType& GetActionInvocationType() const{ return m_actionInvocationType; }
    inline bool ActionInvocationTypeHasBeenSet() const { return m_actionInvocationTypeHasBeenSet; }
    inline void SetActionInvocationType(const ActionInvocationType& value) { m_actionInvocationTypeHasBeenSet = true; m_actionInvocationType = value; }
    inline void SetActionInvocationType(ActionInvocationType&& value) { m_actionInvocationTypeHasBeenSet = true; m_actionInvocationType = std::move(value); }
    inline ApiInvocationInput& WithActionInvocationType(const ActionInvocationType& value) { SetActionInvocationType(value); return *this;}
    inline ApiInvocationInput& WithActionInvocationType(ActionInvocationType&& value) { SetActionInvocationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline ApiInvocationInput& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline ApiInvocationInput& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline ApiInvocationInput& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the API operation.</p>
     */
    inline const Aws::String& GetApiPath() const{ return m_apiPath; }
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }
    inline void SetApiPath(const Aws::String& value) { m_apiPathHasBeenSet = true; m_apiPath = value; }
    inline void SetApiPath(Aws::String&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::move(value); }
    inline void SetApiPath(const char* value) { m_apiPathHasBeenSet = true; m_apiPath.assign(value); }
    inline ApiInvocationInput& WithApiPath(const Aws::String& value) { SetApiPath(value); return *this;}
    inline ApiInvocationInput& WithApiPath(Aws::String&& value) { SetApiPath(std::move(value)); return *this;}
    inline ApiInvocationInput& WithApiPath(const char* value) { SetApiPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent collaborator's name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const{ return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    inline void SetCollaboratorName(const Aws::String& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = value; }
    inline void SetCollaboratorName(Aws::String&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::move(value); }
    inline void SetCollaboratorName(const char* value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName.assign(value); }
    inline ApiInvocationInput& WithCollaboratorName(const Aws::String& value) { SetCollaboratorName(value); return *this;}
    inline ApiInvocationInput& WithCollaboratorName(Aws::String&& value) { SetCollaboratorName(std::move(value)); return *this;}
    inline ApiInvocationInput& WithCollaboratorName(const char* value) { SetCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method of the API operation.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline ApiInvocationInput& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline ApiInvocationInput& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline ApiInvocationInput& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to provide for the API request, as the agent elicited from the
     * user.</p>
     */
    inline const Aws::Vector<ApiParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<ApiParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<ApiParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ApiInvocationInput& WithParameters(const Aws::Vector<ApiParameter>& value) { SetParameters(value); return *this;}
    inline ApiInvocationInput& WithParameters(Aws::Vector<ApiParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline ApiInvocationInput& AddParameters(const ApiParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline ApiInvocationInput& AddParameters(ApiParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request body to provide for the API request, as the agent elicited from
     * the user.</p>
     */
    inline const ApiRequestBody& GetRequestBody() const{ return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    inline void SetRequestBody(const ApiRequestBody& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }
    inline void SetRequestBody(ApiRequestBody&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }
    inline ApiInvocationInput& WithRequestBody(const ApiRequestBody& value) { SetRequestBody(value); return *this;}
    inline ApiInvocationInput& WithRequestBody(ApiRequestBody&& value) { SetRequestBody(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    ActionInvocationType m_actionInvocationType;
    bool m_actionInvocationTypeHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::Vector<ApiParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    ApiRequestBody m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
