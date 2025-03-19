/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/InvocationStepPayload.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class PutInvocationStepRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInvocationStep"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier (in UUID format) of the invocation to add the
     * invocation step to.</p>
     */
    inline const Aws::String& GetInvocationIdentifier() const { return m_invocationIdentifier; }
    inline bool InvocationIdentifierHasBeenSet() const { return m_invocationIdentifierHasBeenSet; }
    template<typename InvocationIdentifierT = Aws::String>
    void SetInvocationIdentifier(InvocationIdentifierT&& value) { m_invocationIdentifierHasBeenSet = true; m_invocationIdentifier = std::forward<InvocationIdentifierT>(value); }
    template<typename InvocationIdentifierT = Aws::String>
    PutInvocationStepRequest& WithInvocationIdentifier(InvocationIdentifierT&& value) { SetInvocationIdentifier(std::forward<InvocationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the invocation step in UUID format.</p>
     */
    inline const Aws::String& GetInvocationStepId() const { return m_invocationStepId; }
    inline bool InvocationStepIdHasBeenSet() const { return m_invocationStepIdHasBeenSet; }
    template<typename InvocationStepIdT = Aws::String>
    void SetInvocationStepId(InvocationStepIdT&& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = std::forward<InvocationStepIdT>(value); }
    template<typename InvocationStepIdT = Aws::String>
    PutInvocationStepRequest& WithInvocationStepId(InvocationStepIdT&& value) { SetInvocationStepId(std::forward<InvocationStepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the invocation step occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStepTime() const { return m_invocationStepTime; }
    inline bool InvocationStepTimeHasBeenSet() const { return m_invocationStepTimeHasBeenSet; }
    template<typename InvocationStepTimeT = Aws::Utils::DateTime>
    void SetInvocationStepTime(InvocationStepTimeT&& value) { m_invocationStepTimeHasBeenSet = true; m_invocationStepTime = std::forward<InvocationStepTimeT>(value); }
    template<typename InvocationStepTimeT = Aws::Utils::DateTime>
    PutInvocationStepRequest& WithInvocationStepTime(InvocationStepTimeT&& value) { SetInvocationStepTime(std::forward<InvocationStepTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payload for the invocation step, including text and images for the
     * interaction.</p>
     */
    inline const InvocationStepPayload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = InvocationStepPayload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = InvocationStepPayload>
    PutInvocationStepRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session to add the invocation step to. You can
     * specify either the session's <code>sessionId</code> or its Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::String& GetSessionIdentifier() const { return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    template<typename SessionIdentifierT = Aws::String>
    void SetSessionIdentifier(SessionIdentifierT&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::forward<SessionIdentifierT>(value); }
    template<typename SessionIdentifierT = Aws::String>
    PutInvocationStepRequest& WithSessionIdentifier(SessionIdentifierT&& value) { SetSessionIdentifier(std::forward<SessionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationIdentifier;
    bool m_invocationIdentifierHasBeenSet = false;

    Aws::String m_invocationStepId;
    bool m_invocationStepIdHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStepTime{};
    bool m_invocationStepTimeHasBeenSet = false;

    InvocationStepPayload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
