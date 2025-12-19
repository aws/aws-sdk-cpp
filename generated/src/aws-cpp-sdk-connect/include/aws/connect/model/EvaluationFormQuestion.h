/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementConfiguration.h>
#include <aws/connect/model/EvaluationFormQuestionType.h>
#include <aws/connect/model/EvaluationFormQuestionTypeProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about a question from an evaluation form.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormQuestion">AWS
 * API Reference</a></p>
 */
class EvaluationFormQuestion {
 public:
  AWS_CONNECT_API EvaluationFormQuestion() = default;
  AWS_CONNECT_API EvaluationFormQuestion(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title of the question.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  EvaluationFormQuestion& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instructions of the section.</p>
   */
  inline const Aws::String& GetInstructions() const { return m_instructions; }
  inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
  template <typename InstructionsT = Aws::String>
  void SetInstructions(InstructionsT&& value) {
    m_instructionsHasBeenSet = true;
    m_instructions = std::forward<InstructionsT>(value);
  }
  template <typename InstructionsT = Aws::String>
  EvaluationFormQuestion& WithInstructions(InstructionsT&& value) {
    SetInstructions(std::forward<InstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the question. An identifier must be unique within the
   * evaluation form.</p>
   */
  inline const Aws::String& GetRefId() const { return m_refId; }
  inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
  template <typename RefIdT = Aws::String>
  void SetRefId(RefIdT&& value) {
    m_refIdHasBeenSet = true;
    m_refId = std::forward<RefIdT>(value);
  }
  template <typename RefIdT = Aws::String>
  EvaluationFormQuestion& WithRefId(RefIdT&& value) {
    SetRefId(std::forward<RefIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to enable not applicable answers to the question.</p>
   */
  inline bool GetNotApplicableEnabled() const { return m_notApplicableEnabled; }
  inline bool NotApplicableEnabledHasBeenSet() const { return m_notApplicableEnabledHasBeenSet; }
  inline void SetNotApplicableEnabled(bool value) {
    m_notApplicableEnabledHasBeenSet = true;
    m_notApplicableEnabled = value;
  }
  inline EvaluationFormQuestion& WithNotApplicableEnabled(bool value) {
    SetNotApplicableEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the question.</p>
   */
  inline EvaluationFormQuestionType GetQuestionType() const { return m_questionType; }
  inline bool QuestionTypeHasBeenSet() const { return m_questionTypeHasBeenSet; }
  inline void SetQuestionType(EvaluationFormQuestionType value) {
    m_questionTypeHasBeenSet = true;
    m_questionType = value;
  }
  inline EvaluationFormQuestion& WithQuestionType(EvaluationFormQuestionType value) {
    SetQuestionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties of the type of question. Text questions do not have to define
   * question type properties.</p>
   */
  inline const EvaluationFormQuestionTypeProperties& GetQuestionTypeProperties() const { return m_questionTypeProperties; }
  inline bool QuestionTypePropertiesHasBeenSet() const { return m_questionTypePropertiesHasBeenSet; }
  template <typename QuestionTypePropertiesT = EvaluationFormQuestionTypeProperties>
  void SetQuestionTypeProperties(QuestionTypePropertiesT&& value) {
    m_questionTypePropertiesHasBeenSet = true;
    m_questionTypeProperties = std::forward<QuestionTypePropertiesT>(value);
  }
  template <typename QuestionTypePropertiesT = EvaluationFormQuestionTypeProperties>
  EvaluationFormQuestion& WithQuestionTypeProperties(QuestionTypePropertiesT&& value) {
    SetQuestionTypeProperties(std::forward<QuestionTypePropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A question conditional enablement.</p>
   */
  inline const EvaluationFormItemEnablementConfiguration& GetEnablement() const { return m_enablement; }
  inline bool EnablementHasBeenSet() const { return m_enablementHasBeenSet; }
  template <typename EnablementT = EvaluationFormItemEnablementConfiguration>
  void SetEnablement(EnablementT&& value) {
    m_enablementHasBeenSet = true;
    m_enablement = std::forward<EnablementT>(value);
  }
  template <typename EnablementT = EvaluationFormItemEnablementConfiguration>
  EvaluationFormQuestion& WithEnablement(EnablementT&& value) {
    SetEnablement(std::forward<EnablementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scoring weight of the section.</p>
   */
  inline double GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(double value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline EvaluationFormQuestion& WithWeight(double value) {
    SetWeight(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_instructions;

  Aws::String m_refId;

  bool m_notApplicableEnabled{false};

  EvaluationFormQuestionType m_questionType{EvaluationFormQuestionType::NOT_SET};

  EvaluationFormQuestionTypeProperties m_questionTypeProperties;

  EvaluationFormItemEnablementConfiguration m_enablement;

  double m_weight{0.0};
  bool m_titleHasBeenSet = false;
  bool m_instructionsHasBeenSet = false;
  bool m_refIdHasBeenSet = false;
  bool m_notApplicableEnabledHasBeenSet = false;
  bool m_questionTypeHasBeenSet = false;
  bool m_questionTypePropertiesHasBeenSet = false;
  bool m_enablementHasBeenSet = false;
  bool m_weightHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
