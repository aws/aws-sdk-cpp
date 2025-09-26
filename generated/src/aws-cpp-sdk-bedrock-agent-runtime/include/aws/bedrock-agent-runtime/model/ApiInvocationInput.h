/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/ApiRequestBody.h>
#include <aws/bedrock-agent-runtime/model/ActionInvocationType.h>
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
    AWS_BEDROCKAGENTRUNTIME_API ApiInvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API ApiInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ApiInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action group that the API operation belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const { return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    template<typename ActionGroupT = Aws::String>
    void SetActionGroup(ActionGroupT&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::forward<ActionGroupT>(value); }
    template<typename ActionGroupT = Aws::String>
    ApiInvocationInput& WithActionGroup(ActionGroupT&& value) { SetActionGroup(std::forward<ActionGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method of the API operation.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    ApiInvocationInput& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the API operation.</p>
     */
    inline const Aws::String& GetApiPath() const { return m_apiPath; }
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }
    template<typename ApiPathT = Aws::String>
    void SetApiPath(ApiPathT&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::forward<ApiPathT>(value); }
    template<typename ApiPathT = Aws::String>
    ApiInvocationInput& WithApiPath(ApiPathT&& value) { SetApiPath(std::forward<ApiPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to provide for the API request, as the agent elicited from the
     * user.</p>
     */
    inline const Aws::Vector<ApiParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<ApiParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<ApiParameter>>
    ApiInvocationInput& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = ApiParameter>
    ApiInvocationInput& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request body to provide for the API request, as the agent elicited from
     * the user.</p>
     */
    inline const ApiRequestBody& GetRequestBody() const { return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    template<typename RequestBodyT = ApiRequestBody>
    void SetRequestBody(RequestBodyT&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::forward<RequestBodyT>(value); }
    template<typename RequestBodyT = ApiRequestBody>
    ApiInvocationInput& WithRequestBody(RequestBodyT&& value) { SetRequestBody(std::forward<RequestBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the API operation to invoke.</p>
     */
    inline ActionInvocationType GetActionInvocationType() const { return m_actionInvocationType; }
    inline bool ActionInvocationTypeHasBeenSet() const { return m_actionInvocationTypeHasBeenSet; }
    inline void SetActionInvocationType(ActionInvocationType value) { m_actionInvocationTypeHasBeenSet = true; m_actionInvocationType = value; }
    inline ApiInvocationInput& WithActionInvocationType(ActionInvocationType value) { SetActionInvocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's ID.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    ApiInvocationInput& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent collaborator's name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    ApiInvocationInput& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

    Aws::Vector<ApiParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    ApiRequestBody m_requestBody;
    bool m_requestBodyHasBeenSet = false;

    ActionInvocationType m_actionInvocationType{ActionInvocationType::NOT_SET};
    bool m_actionInvocationTypeHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
