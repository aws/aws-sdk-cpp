/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrieverConfiguration.h>

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
 * <p>Configuration for a retriever, specified as a union of retriever
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrieverConfiguration">AWS
 * API Reference</a></p>
 */
class RetrieverConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API RetrieverConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API RetrieverConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API RetrieverConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a knowledge base retriever.</p>
   */
  inline const KnowledgeBaseRetrieverConfiguration& GetKnowledgeBase() const { return m_knowledgeBase; }
  inline bool KnowledgeBaseHasBeenSet() const { return m_knowledgeBaseHasBeenSet; }
  template <typename KnowledgeBaseT = KnowledgeBaseRetrieverConfiguration>
  void SetKnowledgeBase(KnowledgeBaseT&& value) {
    m_knowledgeBaseHasBeenSet = true;
    m_knowledgeBase = std::forward<KnowledgeBaseT>(value);
  }
  template <typename KnowledgeBaseT = KnowledgeBaseRetrieverConfiguration>
  RetrieverConfiguration& WithKnowledgeBase(KnowledgeBaseT&& value) {
    SetKnowledgeBase(std::forward<KnowledgeBaseT>(value));
    return *this;
  }
  ///@}
 private:
  KnowledgeBaseRetrieverConfiguration m_knowledgeBase;
  bool m_knowledgeBaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
