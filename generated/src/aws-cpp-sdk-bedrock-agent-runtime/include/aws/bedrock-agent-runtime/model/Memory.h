/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/MemorySessionSummary.h>
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
   * <p>Contains sessions summaries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Memory">AWS
   * API Reference</a></p>
   */
  class Memory
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Memory();
    AWS_BEDROCKAGENTRUNTIME_API Memory(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Memory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains summary of a session.</p>
     */
    inline const MemorySessionSummary& GetSessionSummary() const{ return m_sessionSummary; }
    inline bool SessionSummaryHasBeenSet() const { return m_sessionSummaryHasBeenSet; }
    inline void SetSessionSummary(const MemorySessionSummary& value) { m_sessionSummaryHasBeenSet = true; m_sessionSummary = value; }
    inline void SetSessionSummary(MemorySessionSummary&& value) { m_sessionSummaryHasBeenSet = true; m_sessionSummary = std::move(value); }
    inline Memory& WithSessionSummary(const MemorySessionSummary& value) { SetSessionSummary(value); return *this;}
    inline Memory& WithSessionSummary(MemorySessionSummary&& value) { SetSessionSummary(std::move(value)); return *this;}
    ///@}
  private:

    MemorySessionSummary m_sessionSummary;
    bool m_sessionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
