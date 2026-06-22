/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AutomaticFailConfiguration.h>
#include <aws/connect/model/QuestionOptionPointsConfiguration.h>
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
 * <p>An option for a multi-select question in an evaluation form.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormMultiSelectQuestionOption">AWS
 * API Reference</a></p>
 */
class EvaluationFormMultiSelectQuestionOption {
 public:
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionOption() = default;
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormMultiSelectQuestionOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Reference identifier for this option.</p>
   */
  inline const Aws::String& GetRefId() const { return m_refId; }
  inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
  template <typename RefIdT = Aws::String>
  void SetRefId(RefIdT&& value) {
    m_refIdHasBeenSet = true;
    m_refId = std::forward<RefIdT>(value);
  }
  template <typename RefIdT = Aws::String>
  EvaluationFormMultiSelectQuestionOption& WithRefId(RefIdT&& value) {
    SetRefId(std::forward<RefIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display text for this option.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  EvaluationFormMultiSelectQuestionOption& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The score assigned to the answer option.</p>
   */
  inline int GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(int value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline EvaluationFormMultiSelectQuestionOption& WithScore(int value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
   * provided, the overall evaluation gets a score of 0.</p>
   */
  inline bool GetAutomaticFail() const { return m_automaticFail; }
  inline bool AutomaticFailHasBeenSet() const { return m_automaticFailHasBeenSet; }
  inline void SetAutomaticFail(bool value) {
    m_automaticFailHasBeenSet = true;
    m_automaticFail = value;
  }
  inline EvaluationFormMultiSelectQuestionOption& WithAutomaticFail(bool value) {
    SetAutomaticFail(value);
    return *this;
  }
  ///@}

  ///@{

  inline const AutomaticFailConfiguration& GetAutomaticFailConfiguration() const { return m_automaticFailConfiguration; }
  inline bool AutomaticFailConfigurationHasBeenSet() const { return m_automaticFailConfigurationHasBeenSet; }
  template <typename AutomaticFailConfigurationT = AutomaticFailConfiguration>
  void SetAutomaticFailConfiguration(AutomaticFailConfigurationT&& value) {
    m_automaticFailConfigurationHasBeenSet = true;
    m_automaticFailConfiguration = std::forward<AutomaticFailConfigurationT>(value);
  }
  template <typename AutomaticFailConfigurationT = AutomaticFailConfiguration>
  EvaluationFormMultiSelectQuestionOption& WithAutomaticFailConfiguration(AutomaticFailConfigurationT&& value) {
    SetAutomaticFailConfiguration(std::forward<AutomaticFailConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The points configuration for point-based scoring.</p>
   */
  inline const QuestionOptionPointsConfiguration& GetPointsConfiguration() const { return m_pointsConfiguration; }
  inline bool PointsConfigurationHasBeenSet() const { return m_pointsConfigurationHasBeenSet; }
  template <typename PointsConfigurationT = QuestionOptionPointsConfiguration>
  void SetPointsConfiguration(PointsConfigurationT&& value) {
    m_pointsConfigurationHasBeenSet = true;
    m_pointsConfiguration = std::forward<PointsConfigurationT>(value);
  }
  template <typename PointsConfigurationT = QuestionOptionPointsConfiguration>
  EvaluationFormMultiSelectQuestionOption& WithPointsConfiguration(PointsConfigurationT&& value) {
    SetPointsConfiguration(std::forward<PointsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_refId;

  Aws::String m_text;

  int m_score{0};

  bool m_automaticFail{false};

  AutomaticFailConfiguration m_automaticFailConfiguration;

  QuestionOptionPointsConfiguration m_pointsConfiguration;
  bool m_refIdHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_automaticFailHasBeenSet = false;
  bool m_automaticFailConfigurationHasBeenSet = false;
  bool m_pointsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
