/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
 * <p>The number of session and trace IDs a dataset generation was started
 * with.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationIdentifierCounts">AWS
 * API Reference</a></p>
 */
class GenerationIdentifierCounts {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationIdentifierCounts() = default;
  AWS_BEDROCKAGENTCORE_API GenerationIdentifierCounts(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationIdentifierCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of session IDs in the request.</p>
   */
  inline int GetSessionIdCount() const { return m_sessionIdCount; }
  inline bool SessionIdCountHasBeenSet() const { return m_sessionIdCountHasBeenSet; }
  inline void SetSessionIdCount(int value) {
    m_sessionIdCountHasBeenSet = true;
    m_sessionIdCount = value;
  }
  inline GenerationIdentifierCounts& WithSessionIdCount(int value) {
    SetSessionIdCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of trace IDs in the request.</p>
   */
  inline int GetTraceIdCount() const { return m_traceIdCount; }
  inline bool TraceIdCountHasBeenSet() const { return m_traceIdCountHasBeenSet; }
  inline void SetTraceIdCount(int value) {
    m_traceIdCountHasBeenSet = true;
    m_traceIdCount = value;
  }
  inline GenerationIdentifierCounts& WithTraceIdCount(int value) {
    SetTraceIdCount(value);
    return *this;
  }
  ///@}
 private:
  int m_sessionIdCount{0};

  int m_traceIdCount{0};
  bool m_sessionIdCountHasBeenSet = false;
  bool m_traceIdCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
