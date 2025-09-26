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
   * <p>Contains details of a session summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/MemorySessionSummary">AWS
   * API Reference</a></p>
   */
  class MemorySessionSummary
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API MemorySessionSummary() = default;
    AWS_BEDROCKAGENTRUNTIME_API MemorySessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API MemorySessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the memory where the session summary is stored.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    MemorySessionSummary& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    MemorySessionSummary& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time for this session.</p>
     */
    inline const Aws::Utils::DateTime& GetSessionStartTime() const { return m_sessionStartTime; }
    inline bool SessionStartTimeHasBeenSet() const { return m_sessionStartTimeHasBeenSet; }
    template<typename SessionStartTimeT = Aws::Utils::DateTime>
    void SetSessionStartTime(SessionStartTimeT&& value) { m_sessionStartTimeHasBeenSet = true; m_sessionStartTime = std::forward<SessionStartTimeT>(value); }
    template<typename SessionStartTimeT = Aws::Utils::DateTime>
    MemorySessionSummary& WithSessionStartTime(SessionStartTimeT&& value) { SetSessionStartTime(std::forward<SessionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the memory duration for the session is set to end.</p>
     */
    inline const Aws::Utils::DateTime& GetSessionExpiryTime() const { return m_sessionExpiryTime; }
    inline bool SessionExpiryTimeHasBeenSet() const { return m_sessionExpiryTimeHasBeenSet; }
    template<typename SessionExpiryTimeT = Aws::Utils::DateTime>
    void SetSessionExpiryTime(SessionExpiryTimeT&& value) { m_sessionExpiryTimeHasBeenSet = true; m_sessionExpiryTime = std::forward<SessionExpiryTimeT>(value); }
    template<typename SessionExpiryTimeT = Aws::Utils::DateTime>
    MemorySessionSummary& WithSessionExpiryTime(SessionExpiryTimeT&& value) { SetSessionExpiryTime(std::forward<SessionExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summarized text for this session.</p>
     */
    inline const Aws::String& GetSummaryText() const { return m_summaryText; }
    inline bool SummaryTextHasBeenSet() const { return m_summaryTextHasBeenSet; }
    template<typename SummaryTextT = Aws::String>
    void SetSummaryText(SummaryTextT&& value) { m_summaryTextHasBeenSet = true; m_summaryText = std::forward<SummaryTextT>(value); }
    template<typename SummaryTextT = Aws::String>
    MemorySessionSummary& WithSummaryText(SummaryTextT&& value) { SetSummaryText(std::forward<SummaryTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_sessionStartTime{};
    bool m_sessionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_sessionExpiryTime{};
    bool m_sessionExpiryTimeHasBeenSet = false;

    Aws::String m_summaryText;
    bool m_summaryTextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
