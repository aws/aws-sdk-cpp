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
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepRequest();

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
    inline const Aws::String& GetInvocationIdentifier() const{ return m_invocationIdentifier; }
    inline bool InvocationIdentifierHasBeenSet() const { return m_invocationIdentifierHasBeenSet; }
    inline void SetInvocationIdentifier(const Aws::String& value) { m_invocationIdentifierHasBeenSet = true; m_invocationIdentifier = value; }
    inline void SetInvocationIdentifier(Aws::String&& value) { m_invocationIdentifierHasBeenSet = true; m_invocationIdentifier = std::move(value); }
    inline void SetInvocationIdentifier(const char* value) { m_invocationIdentifierHasBeenSet = true; m_invocationIdentifier.assign(value); }
    inline PutInvocationStepRequest& WithInvocationIdentifier(const Aws::String& value) { SetInvocationIdentifier(value); return *this;}
    inline PutInvocationStepRequest& WithInvocationIdentifier(Aws::String&& value) { SetInvocationIdentifier(std::move(value)); return *this;}
    inline PutInvocationStepRequest& WithInvocationIdentifier(const char* value) { SetInvocationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the invocation step in UUID format.</p>
     */
    inline const Aws::String& GetInvocationStepId() const{ return m_invocationStepId; }
    inline bool InvocationStepIdHasBeenSet() const { return m_invocationStepIdHasBeenSet; }
    inline void SetInvocationStepId(const Aws::String& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = value; }
    inline void SetInvocationStepId(Aws::String&& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = std::move(value); }
    inline void SetInvocationStepId(const char* value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId.assign(value); }
    inline PutInvocationStepRequest& WithInvocationStepId(const Aws::String& value) { SetInvocationStepId(value); return *this;}
    inline PutInvocationStepRequest& WithInvocationStepId(Aws::String&& value) { SetInvocationStepId(std::move(value)); return *this;}
    inline PutInvocationStepRequest& WithInvocationStepId(const char* value) { SetInvocationStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the invocation step occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStepTime() const{ return m_invocationStepTime; }
    inline bool InvocationStepTimeHasBeenSet() const { return m_invocationStepTimeHasBeenSet; }
    inline void SetInvocationStepTime(const Aws::Utils::DateTime& value) { m_invocationStepTimeHasBeenSet = true; m_invocationStepTime = value; }
    inline void SetInvocationStepTime(Aws::Utils::DateTime&& value) { m_invocationStepTimeHasBeenSet = true; m_invocationStepTime = std::move(value); }
    inline PutInvocationStepRequest& WithInvocationStepTime(const Aws::Utils::DateTime& value) { SetInvocationStepTime(value); return *this;}
    inline PutInvocationStepRequest& WithInvocationStepTime(Aws::Utils::DateTime&& value) { SetInvocationStepTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payload for the invocation step, including text and images for the
     * interaction.</p>
     */
    inline const InvocationStepPayload& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const InvocationStepPayload& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(InvocationStepPayload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline PutInvocationStepRequest& WithPayload(const InvocationStepPayload& value) { SetPayload(value); return *this;}
    inline PutInvocationStepRequest& WithPayload(InvocationStepPayload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session to add the invocation step to. You can
     * specify either the session's <code>sessionId</code> or its Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::String& GetSessionIdentifier() const{ return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    inline void SetSessionIdentifier(const Aws::String& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = value; }
    inline void SetSessionIdentifier(Aws::String&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::move(value); }
    inline void SetSessionIdentifier(const char* value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier.assign(value); }
    inline PutInvocationStepRequest& WithSessionIdentifier(const Aws::String& value) { SetSessionIdentifier(value); return *this;}
    inline PutInvocationStepRequest& WithSessionIdentifier(Aws::String&& value) { SetSessionIdentifier(std::move(value)); return *this;}
    inline PutInvocationStepRequest& WithSessionIdentifier(const char* value) { SetSessionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_invocationIdentifier;
    bool m_invocationIdentifierHasBeenSet = false;

    Aws::String m_invocationStepId;
    bool m_invocationStepIdHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStepTime;
    bool m_invocationStepTimeHasBeenSet = false;

    InvocationStepPayload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
