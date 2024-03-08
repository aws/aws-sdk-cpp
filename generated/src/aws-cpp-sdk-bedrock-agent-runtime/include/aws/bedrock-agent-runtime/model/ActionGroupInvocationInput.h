/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the action group being invoked.</p><p><h3>See
   * Also:</h3>   <a
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


    /**
     * <p>The name of the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const{ return m_actionGroupName; }

    /**
     * <p>The name of the action group.</p>
     */
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }

    /**
     * <p>The name of the action group.</p>
     */
    inline void SetActionGroupName(const Aws::String& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = value; }

    /**
     * <p>The name of the action group.</p>
     */
    inline void SetActionGroupName(Aws::String&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::move(value); }

    /**
     * <p>The name of the action group.</p>
     */
    inline void SetActionGroupName(const char* value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName.assign(value); }

    /**
     * <p>The name of the action group.</p>
     */
    inline ActionGroupInvocationInput& WithActionGroupName(const Aws::String& value) { SetActionGroupName(value); return *this;}

    /**
     * <p>The name of the action group.</p>
     */
    inline ActionGroupInvocationInput& WithActionGroupName(Aws::String&& value) { SetActionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the action group.</p>
     */
    inline ActionGroupInvocationInput& WithActionGroupName(const char* value) { SetActionGroupName(value); return *this;}


    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline const Aws::String& GetApiPath() const{ return m_apiPath; }

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline void SetApiPath(const Aws::String& value) { m_apiPathHasBeenSet = true; m_apiPath = value; }

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline void SetApiPath(Aws::String&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::move(value); }

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline void SetApiPath(const char* value) { m_apiPathHasBeenSet = true; m_apiPath.assign(value); }

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline ActionGroupInvocationInput& WithApiPath(const Aws::String& value) { SetApiPath(value); return *this;}

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline ActionGroupInvocationInput& WithApiPath(Aws::String&& value) { SetApiPath(std::move(value)); return *this;}

    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline ActionGroupInvocationInput& WithApiPath(const char* value) { SetApiPath(value); return *this;}


    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline ActionGroupInvocationInput& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline ActionGroupInvocationInput& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline ActionGroupInvocationInput& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline ActionGroupInvocationInput& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline const RequestBody& GetRequestBody() const{ return m_requestBody; }

    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }

    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline void SetRequestBody(const RequestBody& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline void SetRequestBody(RequestBody&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }

    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline ActionGroupInvocationInput& WithRequestBody(const RequestBody& value) { SetRequestBody(value); return *this;}

    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline ActionGroupInvocationInput& WithRequestBody(RequestBody&& value) { SetRequestBody(std::move(value)); return *this;}


    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline const Aws::String& GetVerb() const{ return m_verb; }

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline void SetVerb(const Aws::String& value) { m_verbHasBeenSet = true; m_verb = value; }

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline void SetVerb(Aws::String&& value) { m_verbHasBeenSet = true; m_verb = std::move(value); }

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline void SetVerb(const char* value) { m_verbHasBeenSet = true; m_verb.assign(value); }

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline ActionGroupInvocationInput& WithVerb(const Aws::String& value) { SetVerb(value); return *this;}

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline ActionGroupInvocationInput& WithVerb(Aws::String&& value) { SetVerb(std::move(value)); return *this;}

    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline ActionGroupInvocationInput& WithVerb(const char* value) { SetVerb(value); return *this;}

  private:

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

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
