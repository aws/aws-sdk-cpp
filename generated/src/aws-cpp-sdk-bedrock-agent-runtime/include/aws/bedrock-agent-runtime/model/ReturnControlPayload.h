/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/InvocationInputMember.h>
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
   * <p>Contains information to return from the action group that the agent has
   * predicted to invoke.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ReturnControlPayload">AWS
   * API Reference</a></p>
   */
  class ReturnControlPayload
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ReturnControlPayload();
    AWS_BEDROCKAGENTRUNTIME_API ReturnControlPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ReturnControlPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline ReturnControlPayload& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline ReturnControlPayload& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the action group invocation.</p>
     */
    inline ReturnControlPayload& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}


    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline const Aws::Vector<InvocationInputMember>& GetInvocationInputs() const{ return m_invocationInputs; }

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline bool InvocationInputsHasBeenSet() const { return m_invocationInputsHasBeenSet; }

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline void SetInvocationInputs(const Aws::Vector<InvocationInputMember>& value) { m_invocationInputsHasBeenSet = true; m_invocationInputs = value; }

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline void SetInvocationInputs(Aws::Vector<InvocationInputMember>&& value) { m_invocationInputsHasBeenSet = true; m_invocationInputs = std::move(value); }

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline ReturnControlPayload& WithInvocationInputs(const Aws::Vector<InvocationInputMember>& value) { SetInvocationInputs(value); return *this;}

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline ReturnControlPayload& WithInvocationInputs(Aws::Vector<InvocationInputMember>&& value) { SetInvocationInputs(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline ReturnControlPayload& AddInvocationInputs(const InvocationInputMember& value) { m_invocationInputsHasBeenSet = true; m_invocationInputs.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline ReturnControlPayload& AddInvocationInputs(InvocationInputMember&& value) { m_invocationInputsHasBeenSet = true; m_invocationInputs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::Vector<InvocationInputMember> m_invocationInputs;
    bool m_invocationInputsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
