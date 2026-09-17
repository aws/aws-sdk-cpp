/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SessionFilterConfig.h>
#include <aws/bedrock-agentcore/model/SessionTraceIds.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Filter configuration for narrowing down CloudWatch Logs sessions for
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchFilterConfig">AWS
 * API Reference</a></p>
 */
class CloudWatchFilterConfig {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchFilterConfig() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchFilterConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of specific session IDs to evaluate. If specified, only these sessions
   * are included in the evaluation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionIds() const { return m_sessionIds; }
  inline bool SessionIdsHasBeenSet() const { return m_sessionIdsHasBeenSet; }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  void SetSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds = std::forward<SessionIdsT>(value);
  }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  CloudWatchFilterConfig& WithSessionIds(SessionIdsT&& value) {
    SetSessionIds(std::forward<SessionIdsT>(value));
    return *this;
  }
  template <typename SessionIdsT = Aws::String>
  CloudWatchFilterConfig& AddSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds.emplace_back(std::forward<SessionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range filter for selecting sessions to evaluate.</p>
   */
  inline const SessionFilterConfig& GetTimeRange() const { return m_timeRange; }
  inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
  template <typename TimeRangeT = SessionFilterConfig>
  void SetTimeRange(TimeRangeT&& value) {
    m_timeRangeHasBeenSet = true;
    m_timeRange = std::forward<TimeRangeT>(value);
  }
  template <typename TimeRangeT = SessionFilterConfig>
  CloudWatchFilterConfig& WithTimeRange(TimeRangeT&& value) {
    SetTimeRange(std::forward<TimeRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of session and trace ID pairs that restrict evaluation to specific
   * traces within a session. If specified, only the listed traces are evaluated
   * instead of the entire session.</p>
   */
  inline const Aws::Vector<SessionTraceIds>& GetSessionTraceIds() const { return m_sessionTraceIds; }
  inline bool SessionTraceIdsHasBeenSet() const { return m_sessionTraceIdsHasBeenSet; }
  template <typename SessionTraceIdsT = Aws::Vector<SessionTraceIds>>
  void SetSessionTraceIds(SessionTraceIdsT&& value) {
    m_sessionTraceIdsHasBeenSet = true;
    m_sessionTraceIds = std::forward<SessionTraceIdsT>(value);
  }
  template <typename SessionTraceIdsT = Aws::Vector<SessionTraceIds>>
  CloudWatchFilterConfig& WithSessionTraceIds(SessionTraceIdsT&& value) {
    SetSessionTraceIds(std::forward<SessionTraceIdsT>(value));
    return *this;
  }
  template <typename SessionTraceIdsT = SessionTraceIds>
  CloudWatchFilterConfig& AddSessionTraceIds(SessionTraceIdsT&& value) {
    m_sessionTraceIdsHasBeenSet = true;
    m_sessionTraceIds.emplace_back(std::forward<SessionTraceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_sessionIds;

  SessionFilterConfig m_timeRange;

  Aws::Vector<SessionTraceIds> m_sessionTraceIds;
  bool m_sessionIdsHasBeenSet = false;
  bool m_timeRangeHasBeenSet = false;
  bool m_sessionTraceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
