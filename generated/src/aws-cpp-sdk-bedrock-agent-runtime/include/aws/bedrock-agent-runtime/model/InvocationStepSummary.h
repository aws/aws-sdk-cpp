/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains details about an invocation step within an invocation in a session.
   * For more information about sessions, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
   * and retrieve conversation history and context with Amazon Bedrock
   * sessions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationStepSummary">AWS
   * API Reference</a></p>
   */
  class InvocationStepSummary
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationStepSummary() = default;
    AWS_BEDROCKAGENTRUNTIME_API InvocationStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the invocation in UUID format.</p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    InvocationStepSummary& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (in UUID format) for the invocation step.</p>
     */
    inline const Aws::String& GetInvocationStepId() const { return m_invocationStepId; }
    inline bool InvocationStepIdHasBeenSet() const { return m_invocationStepIdHasBeenSet; }
    template<typename InvocationStepIdT = Aws::String>
    void SetInvocationStepId(InvocationStepIdT&& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = std::forward<InvocationStepIdT>(value); }
    template<typename InvocationStepIdT = Aws::String>
    InvocationStepSummary& WithInvocationStepId(InvocationStepIdT&& value) { SetInvocationStepId(std::forward<InvocationStepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the invocation step was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStepTime() const { return m_invocationStepTime; }
    inline bool InvocationStepTimeHasBeenSet() const { return m_invocationStepTimeHasBeenSet; }
    template<typename InvocationStepTimeT = Aws::Utils::DateTime>
    void SetInvocationStepTime(InvocationStepTimeT&& value) { m_invocationStepTimeHasBeenSet = true; m_invocationStepTime = std::forward<InvocationStepTimeT>(value); }
    template<typename InvocationStepTimeT = Aws::Utils::DateTime>
    InvocationStepSummary& WithInvocationStepTime(InvocationStepTimeT&& value) { SetInvocationStepTime(std::forward<InvocationStepTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session associated with the invocation
     * step.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    InvocationStepSummary& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::String m_invocationStepId;
    bool m_invocationStepIdHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStepTime{};
    bool m_invocationStepTimeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
