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
    AWS_BEDROCKAGENTRUNTIME_API MemorySessionSummary();
    AWS_BEDROCKAGENTRUNTIME_API MemorySessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API MemorySessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the memory where the session summary is stored.</p>
     */
    inline const Aws::String& GetMemoryId() const{ return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    inline void SetMemoryId(const Aws::String& value) { m_memoryIdHasBeenSet = true; m_memoryId = value; }
    inline void SetMemoryId(Aws::String&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::move(value); }
    inline void SetMemoryId(const char* value) { m_memoryIdHasBeenSet = true; m_memoryId.assign(value); }
    inline MemorySessionSummary& WithMemoryId(const Aws::String& value) { SetMemoryId(value); return *this;}
    inline MemorySessionSummary& WithMemoryId(Aws::String&& value) { SetMemoryId(std::move(value)); return *this;}
    inline MemorySessionSummary& WithMemoryId(const char* value) { SetMemoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the memory duration for the session is set to end.</p>
     */
    inline const Aws::Utils::DateTime& GetSessionExpiryTime() const{ return m_sessionExpiryTime; }
    inline bool SessionExpiryTimeHasBeenSet() const { return m_sessionExpiryTimeHasBeenSet; }
    inline void SetSessionExpiryTime(const Aws::Utils::DateTime& value) { m_sessionExpiryTimeHasBeenSet = true; m_sessionExpiryTime = value; }
    inline void SetSessionExpiryTime(Aws::Utils::DateTime&& value) { m_sessionExpiryTimeHasBeenSet = true; m_sessionExpiryTime = std::move(value); }
    inline MemorySessionSummary& WithSessionExpiryTime(const Aws::Utils::DateTime& value) { SetSessionExpiryTime(value); return *this;}
    inline MemorySessionSummary& WithSessionExpiryTime(Aws::Utils::DateTime&& value) { SetSessionExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for this session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline MemorySessionSummary& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline MemorySessionSummary& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline MemorySessionSummary& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time for this session.</p>
     */
    inline const Aws::Utils::DateTime& GetSessionStartTime() const{ return m_sessionStartTime; }
    inline bool SessionStartTimeHasBeenSet() const { return m_sessionStartTimeHasBeenSet; }
    inline void SetSessionStartTime(const Aws::Utils::DateTime& value) { m_sessionStartTimeHasBeenSet = true; m_sessionStartTime = value; }
    inline void SetSessionStartTime(Aws::Utils::DateTime&& value) { m_sessionStartTimeHasBeenSet = true; m_sessionStartTime = std::move(value); }
    inline MemorySessionSummary& WithSessionStartTime(const Aws::Utils::DateTime& value) { SetSessionStartTime(value); return *this;}
    inline MemorySessionSummary& WithSessionStartTime(Aws::Utils::DateTime&& value) { SetSessionStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summarized text for this session.</p>
     */
    inline const Aws::String& GetSummaryText() const{ return m_summaryText; }
    inline bool SummaryTextHasBeenSet() const { return m_summaryTextHasBeenSet; }
    inline void SetSummaryText(const Aws::String& value) { m_summaryTextHasBeenSet = true; m_summaryText = value; }
    inline void SetSummaryText(Aws::String&& value) { m_summaryTextHasBeenSet = true; m_summaryText = std::move(value); }
    inline void SetSummaryText(const char* value) { m_summaryTextHasBeenSet = true; m_summaryText.assign(value); }
    inline MemorySessionSummary& WithSummaryText(const Aws::String& value) { SetSummaryText(value); return *this;}
    inline MemorySessionSummary& WithSummaryText(Aws::String&& value) { SetSummaryText(std::move(value)); return *this;}
    inline MemorySessionSummary& WithSummaryText(const char* value) { SetSummaryText(value); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::Utils::DateTime m_sessionExpiryTime;
    bool m_sessionExpiryTimeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_sessionStartTime;
    bool m_sessionStartTimeHasBeenSet = false;

    Aws::String m_summaryText;
    bool m_summaryTextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
