/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for using a batch evaluation as the source of agent traces for
 * recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BatchEvaluationTraceConfig">AWS
 * API Reference</a></p>
 */
class BatchEvaluationTraceConfig {
 public:
  AWS_BEDROCKAGENTCORE_API BatchEvaluationTraceConfig() = default;
  AWS_BEDROCKAGENTCORE_API BatchEvaluationTraceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API BatchEvaluationTraceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the completed batch evaluation to use as the trace source.</p>
   */
  inline const Aws::String& GetBatchEvaluationArn() const { return m_batchEvaluationArn; }
  inline bool BatchEvaluationArnHasBeenSet() const { return m_batchEvaluationArnHasBeenSet; }
  template <typename BatchEvaluationArnT = Aws::String>
  void SetBatchEvaluationArn(BatchEvaluationArnT&& value) {
    m_batchEvaluationArnHasBeenSet = true;
    m_batchEvaluationArn = std::forward<BatchEvaluationArnT>(value);
  }
  template <typename BatchEvaluationArnT = Aws::String>
  BatchEvaluationTraceConfig& WithBatchEvaluationArn(BatchEvaluationArnT&& value) {
    SetBatchEvaluationArn(std::forward<BatchEvaluationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_batchEvaluationArn;
  bool m_batchEvaluationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
