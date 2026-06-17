/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Model configuration for a Bedrock reranking model.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveBedrockRerankingModelConfiguration">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveBedrockRerankingModelConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveBedrockRerankingModelConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveBedrockRerankingModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveBedrockRerankingModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Bedrock reranking model.</p>
   */
  inline const Aws::String& GetModelArn() const { return m_modelArn; }
  inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
  template <typename ModelArnT = Aws::String>
  void SetModelArn(ModelArnT&& value) {
    m_modelArnHasBeenSet = true;
    m_modelArn = std::forward<ModelArnT>(value);
  }
  template <typename ModelArnT = Aws::String>
  AgenticRetrieveBedrockRerankingModelConfiguration& WithModelArn(ModelArnT&& value) {
    SetModelArn(std::forward<ModelArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelArn;
  bool m_modelArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
