/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p>A pairing of a session with the specific trace IDs to evaluate within that
 * session. Use this to evaluate individual traces rather than an entire
 * session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SessionTraceIds">AWS
 * API Reference</a></p>
 */
class SessionTraceIds {
 public:
  AWS_BEDROCKAGENTCORE_API SessionTraceIds() = default;
  AWS_BEDROCKAGENTCORE_API SessionTraceIds(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SessionTraceIds& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the session that contains the traces to
   * evaluate.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SessionTraceIds& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of trace IDs within the session to evaluate.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTraceIds() const { return m_traceIds; }
  inline bool TraceIdsHasBeenSet() const { return m_traceIdsHasBeenSet; }
  template <typename TraceIdsT = Aws::Vector<Aws::String>>
  void SetTraceIds(TraceIdsT&& value) {
    m_traceIdsHasBeenSet = true;
    m_traceIds = std::forward<TraceIdsT>(value);
  }
  template <typename TraceIdsT = Aws::Vector<Aws::String>>
  SessionTraceIds& WithTraceIds(TraceIdsT&& value) {
    SetTraceIds(std::forward<TraceIdsT>(value));
    return *this;
  }
  template <typename TraceIdsT = Aws::String>
  SessionTraceIds& AddTraceIds(TraceIdsT&& value) {
    m_traceIdsHasBeenSet = true;
    m_traceIds.emplace_back(std::forward<TraceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::Vector<Aws::String> m_traceIds;
  bool m_sessionIdHasBeenSet = false;
  bool m_traceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
