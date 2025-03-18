/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Configuration for SESSION_SUMMARY memory type enabled for the
   * agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SessionSummaryConfiguration">AWS
   * API Reference</a></p>
   */
  class SessionSummaryConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SessionSummaryConfiguration() = default;
    AWS_BEDROCKAGENT_API SessionSummaryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SessionSummaryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of recent session summaries to include in the agent's prompt
     * context.</p>
     */
    inline int GetMaxRecentSessions() const { return m_maxRecentSessions; }
    inline bool MaxRecentSessionsHasBeenSet() const { return m_maxRecentSessionsHasBeenSet; }
    inline void SetMaxRecentSessions(int value) { m_maxRecentSessionsHasBeenSet = true; m_maxRecentSessions = value; }
    inline SessionSummaryConfiguration& WithMaxRecentSessions(int value) { SetMaxRecentSessions(value); return *this;}
    ///@}
  private:

    int m_maxRecentSessions{0};
    bool m_maxRecentSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
