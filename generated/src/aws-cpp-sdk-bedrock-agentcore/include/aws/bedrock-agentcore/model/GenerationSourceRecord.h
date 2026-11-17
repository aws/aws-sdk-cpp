/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/TraceGenerationRecord.h>

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
 * <p>The source a dataset generation was started with.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationSourceRecord">AWS
 * API Reference</a></p>
 */
class GenerationSourceRecord {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationSourceRecord() = default;
  AWS_BEDROCKAGENTCORE_API GenerationSourceRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationSourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The trace source the generation was started with.</p>
   */
  inline const TraceGenerationRecord& GetTraceGeneration() const { return m_traceGeneration; }
  inline bool TraceGenerationHasBeenSet() const { return m_traceGenerationHasBeenSet; }
  template <typename TraceGenerationT = TraceGenerationRecord>
  void SetTraceGeneration(TraceGenerationT&& value) {
    m_traceGenerationHasBeenSet = true;
    m_traceGeneration = std::forward<TraceGenerationT>(value);
  }
  template <typename TraceGenerationT = TraceGenerationRecord>
  GenerationSourceRecord& WithTraceGeneration(TraceGenerationT&& value) {
    SetTraceGeneration(std::forward<TraceGenerationT>(value));
    return *this;
  }
  ///@}
 private:
  TraceGenerationRecord m_traceGeneration;
  bool m_traceGenerationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
