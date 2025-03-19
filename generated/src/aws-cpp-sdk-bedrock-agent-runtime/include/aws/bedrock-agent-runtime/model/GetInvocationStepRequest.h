/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class GetInvocationStepRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInvocationStep"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the invocation in UUID format.</p>
     */
    inline const Aws::String& GetInvocationIdentifier() const { return m_invocationIdentifier; }
    inline bool InvocationIdentifierHasBeenSet() const { return m_invocationIdentifierHasBeenSet; }
    template<typename InvocationIdentifierT = Aws::String>
    void SetInvocationIdentifier(InvocationIdentifierT&& value) { m_invocationIdentifierHasBeenSet = true; m_invocationIdentifier = std::forward<InvocationIdentifierT>(value); }
    template<typename InvocationIdentifierT = Aws::String>
    GetInvocationStepRequest& WithInvocationIdentifier(InvocationIdentifierT&& value) { SetInvocationIdentifier(std::forward<InvocationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (in UUID format) for the specific invocation step to
     * retrieve.</p>
     */
    inline const Aws::String& GetInvocationStepId() const { return m_invocationStepId; }
    inline bool InvocationStepIdHasBeenSet() const { return m_invocationStepIdHasBeenSet; }
    template<typename InvocationStepIdT = Aws::String>
    void SetInvocationStepId(InvocationStepIdT&& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = std::forward<InvocationStepIdT>(value); }
    template<typename InvocationStepIdT = Aws::String>
    GetInvocationStepRequest& WithInvocationStepId(InvocationStepIdT&& value) { SetInvocationStepId(std::forward<InvocationStepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the invocation step's associated session. You can
     * specify either the session's <code>sessionId</code> or its Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::String& GetSessionIdentifier() const { return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    template<typename SessionIdentifierT = Aws::String>
    void SetSessionIdentifier(SessionIdentifierT&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::forward<SessionIdentifierT>(value); }
    template<typename SessionIdentifierT = Aws::String>
    GetInvocationStepRequest& WithSessionIdentifier(SessionIdentifierT&& value) { SetSessionIdentifier(std::forward<SessionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationIdentifier;
    bool m_invocationIdentifierHasBeenSet = false;

    Aws::String m_invocationStepId;
    bool m_invocationStepIdHasBeenSet = false;

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
