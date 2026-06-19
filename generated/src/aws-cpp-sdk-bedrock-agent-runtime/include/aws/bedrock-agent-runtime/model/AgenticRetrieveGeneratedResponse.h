/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveCitation.h>
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
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>The generated response synthesized from retrieved results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveGeneratedResponse">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveGeneratedResponse {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveGeneratedResponse() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveGeneratedResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveGeneratedResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The generated answer text.</p>
   */
  inline const Aws::String& GetAnswer() const { return m_answer; }
  inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }
  template <typename AnswerT = Aws::String>
  void SetAnswer(AnswerT&& value) {
    m_answerHasBeenSet = true;
    m_answer = std::forward<AnswerT>(value);
  }
  template <typename AnswerT = Aws::String>
  AgenticRetrieveGeneratedResponse& WithAnswer(AnswerT&& value) {
    SetAnswer(std::forward<AnswerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Citations mapping spans of the answer to supporting results.</p>
   */
  inline const Aws::Vector<AgenticRetrieveCitation>& GetCitations() const { return m_citations; }
  inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
  template <typename CitationsT = Aws::Vector<AgenticRetrieveCitation>>
  void SetCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations = std::forward<CitationsT>(value);
  }
  template <typename CitationsT = Aws::Vector<AgenticRetrieveCitation>>
  AgenticRetrieveGeneratedResponse& WithCitations(CitationsT&& value) {
    SetCitations(std::forward<CitationsT>(value));
    return *this;
  }
  template <typename CitationsT = AgenticRetrieveCitation>
  AgenticRetrieveGeneratedResponse& AddCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations.emplace_back(std::forward<CitationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_answer;

  Aws::Vector<AgenticRetrieveCitation> m_citations;
  bool m_answerHasBeenSet = false;
  bool m_citationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
