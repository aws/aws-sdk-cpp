/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/TraceGenerationSource.h>

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
 * <p>The source of a dataset generation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationSource">AWS
 * API Reference</a></p>
 */
class GenerationSource {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationSource() = default;
  AWS_BEDROCKAGENTCORE_API GenerationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Generates examples from your agent's traces.</p>
   */
  inline const TraceGenerationSource& GetTraceGeneration() const { return m_traceGeneration; }
  inline bool TraceGenerationHasBeenSet() const { return m_traceGenerationHasBeenSet; }
  template <typename TraceGenerationT = TraceGenerationSource>
  void SetTraceGeneration(TraceGenerationT&& value) {
    m_traceGenerationHasBeenSet = true;
    m_traceGeneration = std::forward<TraceGenerationT>(value);
  }
  template <typename TraceGenerationT = TraceGenerationSource>
  GenerationSource& WithTraceGeneration(TraceGenerationT&& value) {
    SetTraceGeneration(std::forward<TraceGenerationT>(value));
    return *this;
  }
  ///@}
 private:
  TraceGenerationSource m_traceGeneration;
  bool m_traceGenerationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
