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
 * <p>The sessions and traces to generate examples from. Specify at least one
 * session ID or trace ID. A session with more than 100 turns is reported as an
 * error and produces no example.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationIdentifiers">AWS
 * API Reference</a></p>
 */
class GenerationIdentifiers {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationIdentifiers() = default;
  AWS_BEDROCKAGENTCORE_API GenerationIdentifiers(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IDs of the sessions to use, up to 25.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionIds() const { return m_sessionIds; }
  inline bool SessionIdsHasBeenSet() const { return m_sessionIdsHasBeenSet; }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  void SetSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds = std::forward<SessionIdsT>(value);
  }
  template <typename SessionIdsT = Aws::Vector<Aws::String>>
  GenerationIdentifiers& WithSessionIds(SessionIdsT&& value) {
    SetSessionIds(std::forward<SessionIdsT>(value));
    return *this;
  }
  template <typename SessionIdsT = Aws::String>
  GenerationIdentifiers& AddSessionIds(SessionIdsT&& value) {
    m_sessionIdsHasBeenSet = true;
    m_sessionIds.emplace_back(std::forward<SessionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the traces to use, up to 25.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTraceIds() const { return m_traceIds; }
  inline bool TraceIdsHasBeenSet() const { return m_traceIdsHasBeenSet; }
  template <typename TraceIdsT = Aws::Vector<Aws::String>>
  void SetTraceIds(TraceIdsT&& value) {
    m_traceIdsHasBeenSet = true;
    m_traceIds = std::forward<TraceIdsT>(value);
  }
  template <typename TraceIdsT = Aws::Vector<Aws::String>>
  GenerationIdentifiers& WithTraceIds(TraceIdsT&& value) {
    SetTraceIds(std::forward<TraceIdsT>(value));
    return *this;
  }
  template <typename TraceIdsT = Aws::String>
  GenerationIdentifiers& AddTraceIds(TraceIdsT&& value) {
    m_traceIdsHasBeenSet = true;
    m_traceIds.emplace_back(std::forward<TraceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_sessionIds;

  Aws::Vector<Aws::String> m_traceIds;
  bool m_sessionIdsHasBeenSet = false;
  bool m_traceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
