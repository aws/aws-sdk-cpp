/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SpanContext.h>

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
 * <p> The contextual information associated with an evaluation, including span
 * context details that identify the specific traces and sessions being evaluated
 * within the agent's execution flow. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Context">AWS
 * API Reference</a></p>
 */
class Context {
 public:
  AWS_BEDROCKAGENTCORE_API Context() = default;
  AWS_BEDROCKAGENTCORE_API Context(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Context& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The span context information that uniquely identifies the trace and span
   * being evaluated, including session ID, trace ID, and span ID for precise
   * targeting within the agent's execution flow. </p>
   */
  inline const SpanContext& GetSpanContext() const { return m_spanContext; }
  inline bool SpanContextHasBeenSet() const { return m_spanContextHasBeenSet; }
  template <typename SpanContextT = SpanContext>
  void SetSpanContext(SpanContextT&& value) {
    m_spanContextHasBeenSet = true;
    m_spanContext = std::forward<SpanContextT>(value);
  }
  template <typename SpanContextT = SpanContext>
  Context& WithSpanContext(SpanContextT&& value) {
    SetSpanContext(std::forward<SpanContextT>(value));
    return *this;
  }
  ///@}
 private:
  SpanContext m_spanContext;
  bool m_spanContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
