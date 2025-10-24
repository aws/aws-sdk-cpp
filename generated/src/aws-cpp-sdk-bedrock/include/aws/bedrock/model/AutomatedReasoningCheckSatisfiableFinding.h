﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningCheckLogicWarning.h>
#include <aws/bedrock/model/AutomatedReasoningCheckScenario.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTranslation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Indicates that the claims could be either true or false depending on
 * additional assumptions not provided in the input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckSatisfiableFinding">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningCheckSatisfiableFinding {
 public:
  AWS_BEDROCK_API AutomatedReasoningCheckSatisfiableFinding() = default;
  AWS_BEDROCK_API AutomatedReasoningCheckSatisfiableFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningCheckSatisfiableFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical translation of the input that this finding evaluates.</p>
   */
  inline const AutomatedReasoningCheckTranslation& GetTranslation() const { return m_translation; }
  inline bool TranslationHasBeenSet() const { return m_translationHasBeenSet; }
  template <typename TranslationT = AutomatedReasoningCheckTranslation>
  void SetTranslation(TranslationT&& value) {
    m_translationHasBeenSet = true;
    m_translation = std::forward<TranslationT>(value);
  }
  template <typename TranslationT = AutomatedReasoningCheckTranslation>
  AutomatedReasoningCheckSatisfiableFinding& WithTranslation(TranslationT&& value) {
    SetTranslation(std::forward<TranslationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An example scenario demonstrating how the claims could be logically true.</p>
   */
  inline const AutomatedReasoningCheckScenario& GetClaimsTrueScenario() const { return m_claimsTrueScenario; }
  inline bool ClaimsTrueScenarioHasBeenSet() const { return m_claimsTrueScenarioHasBeenSet; }
  template <typename ClaimsTrueScenarioT = AutomatedReasoningCheckScenario>
  void SetClaimsTrueScenario(ClaimsTrueScenarioT&& value) {
    m_claimsTrueScenarioHasBeenSet = true;
    m_claimsTrueScenario = std::forward<ClaimsTrueScenarioT>(value);
  }
  template <typename ClaimsTrueScenarioT = AutomatedReasoningCheckScenario>
  AutomatedReasoningCheckSatisfiableFinding& WithClaimsTrueScenario(ClaimsTrueScenarioT&& value) {
    SetClaimsTrueScenario(std::forward<ClaimsTrueScenarioT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An example scenario demonstrating how the claims could be logically
   * false.</p>
   */
  inline const AutomatedReasoningCheckScenario& GetClaimsFalseScenario() const { return m_claimsFalseScenario; }
  inline bool ClaimsFalseScenarioHasBeenSet() const { return m_claimsFalseScenarioHasBeenSet; }
  template <typename ClaimsFalseScenarioT = AutomatedReasoningCheckScenario>
  void SetClaimsFalseScenario(ClaimsFalseScenarioT&& value) {
    m_claimsFalseScenarioHasBeenSet = true;
    m_claimsFalseScenario = std::forward<ClaimsFalseScenarioT>(value);
  }
  template <typename ClaimsFalseScenarioT = AutomatedReasoningCheckScenario>
  AutomatedReasoningCheckSatisfiableFinding& WithClaimsFalseScenario(ClaimsFalseScenarioT&& value) {
    SetClaimsFalseScenario(std::forward<ClaimsFalseScenarioT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indication of a logic issue with the translation without needing to consider
   * the automated reasoning policy rules.</p>
   */
  inline const AutomatedReasoningCheckLogicWarning& GetLogicWarning() const { return m_logicWarning; }
  inline bool LogicWarningHasBeenSet() const { return m_logicWarningHasBeenSet; }
  template <typename LogicWarningT = AutomatedReasoningCheckLogicWarning>
  void SetLogicWarning(LogicWarningT&& value) {
    m_logicWarningHasBeenSet = true;
    m_logicWarning = std::forward<LogicWarningT>(value);
  }
  template <typename LogicWarningT = AutomatedReasoningCheckLogicWarning>
  AutomatedReasoningCheckSatisfiableFinding& WithLogicWarning(LogicWarningT&& value) {
    SetLogicWarning(std::forward<LogicWarningT>(value));
    return *this;
  }
  ///@}
 private:
  AutomatedReasoningCheckTranslation m_translation;
  bool m_translationHasBeenSet = false;

  AutomatedReasoningCheckScenario m_claimsTrueScenario;
  bool m_claimsTrueScenarioHasBeenSet = false;

  AutomatedReasoningCheckScenario m_claimsFalseScenario;
  bool m_claimsFalseScenarioHasBeenSet = false;

  AutomatedReasoningCheckLogicWarning m_logicWarning;
  bool m_logicWarningHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
