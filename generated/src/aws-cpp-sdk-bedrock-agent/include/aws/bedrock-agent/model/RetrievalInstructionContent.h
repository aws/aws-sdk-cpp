/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>The instruction content, as a set of named fields. Every field is optional;
 * at least one must be present. Service-side validation enforces per-field and
 * aggregate size limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RetrievalInstructionContent">AWS
 * API Reference</a></p>
 */
class RetrievalInstructionContent {
 public:
  AWS_BEDROCKAGENT_API RetrievalInstructionContent() = default;
  AWS_BEDROCKAGENT_API RetrievalInstructionContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API RetrievalInstructionContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How to interpret and decompose the question, and what to prioritise when
   * searching.</p>
   */
  inline const Aws::String& GetRetrievalGuidance() const { return m_retrievalGuidance; }
  inline bool RetrievalGuidanceHasBeenSet() const { return m_retrievalGuidanceHasBeenSet; }
  template <typename RetrievalGuidanceT = Aws::String>
  void SetRetrievalGuidance(RetrievalGuidanceT&& value) {
    m_retrievalGuidanceHasBeenSet = true;
    m_retrievalGuidance = std::forward<RetrievalGuidanceT>(value);
  }
  template <typename RetrievalGuidanceT = Aws::String>
  RetrievalInstructionContent& WithRetrievalGuidance(RetrievalGuidanceT&& value) {
    SetRetrievalGuidance(std::forward<RetrievalGuidanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who the assistant is: identity, tone and language.</p>
   */
  inline const Aws::String& GetPersona() const { return m_persona; }
  inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }
  template <typename PersonaT = Aws::String>
  void SetPersona(PersonaT&& value) {
    m_personaHasBeenSet = true;
    m_persona = std::forward<PersonaT>(value);
  }
  template <typename PersonaT = Aws::String>
  RetrievalInstructionContent& WithPersona(PersonaT&& value) {
    SetPersona(std::forward<PersonaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the answer is structured, including how sources are cited.</p>
   */
  inline const Aws::String& GetAnswerFormat() const { return m_answerFormat; }
  inline bool AnswerFormatHasBeenSet() const { return m_answerFormatHasBeenSet; }
  template <typename AnswerFormatT = Aws::String>
  void SetAnswerFormat(AnswerFormatT&& value) {
    m_answerFormatHasBeenSet = true;
    m_answerFormat = std::forward<AnswerFormatT>(value);
  }
  template <typename AnswerFormatT = Aws::String>
  RetrievalInstructionContent& WithAnswerFormat(AnswerFormatT&& value) {
    SetAnswerFormat(std::forward<AnswerFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether and how to answer: how strongly an answer must be supported, and what
   * to do with questions outside scope.</p>
   */
  inline const Aws::String& GetAnswerPolicy() const { return m_answerPolicy; }
  inline bool AnswerPolicyHasBeenSet() const { return m_answerPolicyHasBeenSet; }
  template <typename AnswerPolicyT = Aws::String>
  void SetAnswerPolicy(AnswerPolicyT&& value) {
    m_answerPolicyHasBeenSet = true;
    m_answerPolicy = std::forward<AnswerPolicyT>(value);
  }
  template <typename AnswerPolicyT = Aws::String>
  RetrievalInstructionContent& WithAnswerPolicy(AnswerPolicyT&& value) {
    SetAnswerPolicy(std::forward<AnswerPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_retrievalGuidance;

  Aws::String m_persona;

  Aws::String m_answerFormat;

  Aws::String m_answerPolicy;
  bool m_retrievalGuidanceHasBeenSet = false;
  bool m_personaHasBeenSet = false;
  bool m_answerFormatHasBeenSet = false;
  bool m_answerPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
