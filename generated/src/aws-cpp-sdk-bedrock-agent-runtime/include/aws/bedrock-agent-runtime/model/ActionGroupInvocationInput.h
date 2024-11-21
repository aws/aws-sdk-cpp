/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ExecutionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RequestBody.h>
#include <aws/bedrock-agent-runtime/model/Parameter.h>
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
   * <p>Contains information about the action group being invoked. For more
   * information about the possible structures, see the InvocationInput tab in <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-orchestration.html">OrchestrationTrace</a>
   * in the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
   * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ActionGroupInvocationInput">AWS
   * API Reference</a></p>
   */
  class ActionGroupInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ActionGroupInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API ActionGroupInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ActionGroupInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const{ return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    inline void SetActionGroupName(const Aws::String& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = value; }
    inline void SetActionGroupName(Aws::String&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::move(value); }
    inline void SetActionGroupName(const char* value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName.assign(value); }
    inline ActionGroupInvocationInput& WithActionGroupName(const Aws::String& value) { SetActionGroupName(value); return *this;}
    inline ActionGroupInvocationInput& WithActionGroupName(Aws::String&& value) { SetActionGroupName(std::move(value)); return *this;}
    inline ActionGroupInvocationInput& WithActionGroupName(const char* value) { SetActionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline const Aws::String& GetApiPath() const{ return m_apiPath; }
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }
    inline void SetApiPath(const Aws::String& value) { m_apiPathHasBeenSet = true; m_apiPath = value; }
    inline void SetApiPath(Aws::String&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::move(value); }
    inline void SetApiPath(const char* value) { m_apiPathHasBeenSet = true; m_apiPath.assign(value); }
    inline ActionGroupInvocationInput& WithApiPath(const Aws::String& value) { SetApiPath(value); return *this;}
    inline ActionGroupInvocationInput& WithApiPath(Aws::String&& value) { SetApiPath(std::move(value)); return *this;}
    inline ActionGroupInvocationInput& WithApiPath(const char* value) { SetApiPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How fulfillment of the action is handled. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/action-handle.html">Handling
     * fulfillment of the action</a>.</p>
     */
    inline const ExecutionType& GetExecutionType() const{ return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    inline void SetExecutionType(const ExecutionType& value) { m_executionTypeHasBeenSet = true; m_executionType = value; }
    inline void SetExecutionType(ExecutionType&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::move(value); }
    inline ActionGroupInvocationInput& WithExecutionType(const ExecutionType& value) { SetExecutionType(value); return *this;}
    inline ActionGroupInvocationInput& WithExecutionType(ExecutionType&& value) { SetExecutionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function in the action group to call.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }
    inline ActionGroupInvocationInput& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}
    inline ActionGroupInvocationInput& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}
    inline ActionGroupInvocationInput& WithFunction(const char* value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the invocation. Only returned if the
     * <code>executionType</code> is <code>RETURN_CONTROL</code>.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }
    inline ActionGroupInvocationInput& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}
    inline ActionGroupInvocationInput& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}
    inline ActionGroupInvocationInput& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ActionGroupInvocationInput& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}
    inline ActionGroupInvocationInput& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline ActionGroupInvocationInput& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline ActionGroupInvocationInput& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline const RequestBody& GetRequestBody() const{ return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    inline void SetRequestBody(const RequestBody& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }
    inline void SetRequestBody(RequestBody&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }
    inline ActionGroupInvocationInput& WithRequestBody(const RequestBody& value) { SetRequestBody(value); return *this;}
    inline ActionGroupInvocationInput& WithRequestBody(RequestBody&& value) { SetRequestBody(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline const Aws::String& GetVerb() const{ return m_verb; }
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }
    inline void SetVerb(const Aws::String& value) { m_verbHasBeenSet = true; m_verb = value; }
    inline void SetVerb(Aws::String&& value) { m_verbHasBeenSet = true; m_verb = std::move(value); }
    inline void SetVerb(const char* value) { m_verbHasBeenSet = true; m_verb.assign(value); }
    inline ActionGroupInvocationInput& WithVerb(const Aws::String& value) { SetVerb(value); return *this;}
    inline ActionGroupInvocationInput& WithVerb(Aws::String&& value) { SetVerb(std::move(value)); return *this;}
    inline ActionGroupInvocationInput& WithVerb(const char* value) { SetVerb(value); return *this;}
    ///@}
  private:

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

    ExecutionType m_executionType;
    bool m_executionTypeHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    RequestBody m_requestBody;
    bool m_requestBodyHasBeenSet = false;

    Aws::String m_verb;
    bool m_verbHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
