/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalOverrides.h>
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
 * <p>Configuration for retrieving from a Bedrock knowledge base.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseRetrieverConfiguration">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseRetrieverConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieverConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieverConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieverConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  KnowledgeBaseRetrieverConfiguration& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Overrides for retrieval behavior such as filters and result limits.</p>
   */
  inline const RetrievalOverrides& GetRetrievalOverrides() const { return m_retrievalOverrides; }
  inline bool RetrievalOverridesHasBeenSet() const { return m_retrievalOverridesHasBeenSet; }
  template <typename RetrievalOverridesT = RetrievalOverrides>
  void SetRetrievalOverrides(RetrievalOverridesT&& value) {
    m_retrievalOverridesHasBeenSet = true;
    m_retrievalOverrides = std::forward<RetrievalOverridesT>(value);
  }
  template <typename RetrievalOverridesT = RetrievalOverrides>
  KnowledgeBaseRetrieverConfiguration& WithRetrievalOverrides(RetrievalOverridesT&& value) {
    SetRetrievalOverrides(std::forward<RetrievalOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseId;

  RetrievalOverrides m_retrievalOverrides;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_retrievalOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
