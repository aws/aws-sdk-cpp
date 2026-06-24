/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveCitationReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A citation mapping a span of the generated answer to supporting
 * results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveCitation">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveCitation {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCitation() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCitation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCitation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Character offset end (exclusive) in the answer text.</p>
   */
  inline int GetEndIndex() const { return m_endIndex; }
  inline bool EndIndexHasBeenSet() const { return m_endIndexHasBeenSet; }
  inline void SetEndIndex(int value) {
    m_endIndexHasBeenSet = true;
    m_endIndex = value;
  }
  inline AgenticRetrieveCitation& WithEndIndex(int value) {
    SetEndIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>References to results that support this span.</p>
   */
  inline const Aws::Vector<AgenticRetrieveCitationReference>& GetReferences() const { return m_references; }
  inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
  template <typename ReferencesT = Aws::Vector<AgenticRetrieveCitationReference>>
  void SetReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references = std::forward<ReferencesT>(value);
  }
  template <typename ReferencesT = Aws::Vector<AgenticRetrieveCitationReference>>
  AgenticRetrieveCitation& WithReferences(ReferencesT&& value) {
    SetReferences(std::forward<ReferencesT>(value));
    return *this;
  }
  template <typename ReferencesT = AgenticRetrieveCitationReference>
  AgenticRetrieveCitation& AddReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references.emplace_back(std::forward<ReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Character offset start in the answer text.</p>
   */
  inline int GetStartIndex() const { return m_startIndex; }
  inline bool StartIndexHasBeenSet() const { return m_startIndexHasBeenSet; }
  inline void SetStartIndex(int value) {
    m_startIndexHasBeenSet = true;
    m_startIndex = value;
  }
  inline AgenticRetrieveCitation& WithStartIndex(int value) {
    SetStartIndex(value);
    return *this;
  }
  ///@}
 private:
  int m_endIndex{0};

  Aws::Vector<AgenticRetrieveCitationReference> m_references;

  int m_startIndex{0};
  bool m_endIndexHasBeenSet = false;
  bool m_referencesHasBeenSet = false;
  bool m_startIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
