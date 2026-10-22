/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SessionFinding.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>A session affected by an insight or root cause. Use the session ID to find
 * the per-session evaluation results in CloudWatch Logs.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SampleSession">AWS
 * API Reference</a></p>
 */
class SampleSession {
 public:
  AWS_BEDROCKAGENTCORE_API SampleSession() = default;
  AWS_BEDROCKAGENTCORE_API SampleSession(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SampleSession& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SampleSession& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest timestamp observed for the session in the batch evaluation
   * input.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSeenAt() const { return m_lastSeenAt; }
  inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  void SetLastSeenAt(LastSeenAtT&& value) {
    m_lastSeenAtHasBeenSet = true;
    m_lastSeenAt = std::forward<LastSeenAtT>(value);
  }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  SampleSession& WithLastSeenAt(LastSeenAtT&& value) {
    SetLastSeenAt(std::forward<LastSeenAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failures found in the session that belong to the insight or root cause,
   * up to 10.</p>
   */
  inline const Aws::Vector<SessionFinding>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<SessionFinding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<SessionFinding>>
  SampleSession& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = SessionFinding>
  SampleSession& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::Utils::DateTime m_lastSeenAt{};

  Aws::Vector<SessionFinding> m_findings;
  bool m_sessionIdHasBeenSet = false;
  bool m_lastSeenAtHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
