/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Confidence.h>
#include <aws/guardduty/model/InvestigationStatus.h>
#include <aws/guardduty/model/RiskLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains summary information about a GuardDuty investigation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationSummary">AWS
 * API Reference</a></p>
 */
class InvestigationSummary {
 public:
  AWS_GUARDDUTY_API InvestigationSummary() = default;
  AWS_GUARDDUTY_API InvestigationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the investigation.</p>
   */
  inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
  inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
  template <typename InvestigationIdT = Aws::String>
  void SetInvestigationId(InvestigationIdT&& value) {
    m_investigationIdHasBeenSet = true;
    m_investigationId = std::forward<InvestigationIdT>(value);
  }
  template <typename InvestigationIdT = Aws::String>
  InvestigationSummary& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the investigation.</p>
   */
  inline InvestigationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InvestigationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InvestigationSummary& WithStatus(InvestigationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language prompt that initiated this investigation.</p>
   */
  inline const Aws::String& GetTriggerPrompt() const { return m_triggerPrompt; }
  inline bool TriggerPromptHasBeenSet() const { return m_triggerPromptHasBeenSet; }
  template <typename TriggerPromptT = Aws::String>
  void SetTriggerPrompt(TriggerPromptT&& value) {
    m_triggerPromptHasBeenSet = true;
    m_triggerPrompt = std::forward<TriggerPromptT>(value);
  }
  template <typename TriggerPromptT = Aws::String>
  InvestigationSummary& WithTriggerPrompt(TriggerPromptT&& value) {
    SetTriggerPrompt(std::forward<TriggerPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assessed risk level of the investigated threat.</p>
   */
  inline RiskLevel GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  inline void SetRiskLevel(RiskLevel value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = value;
  }
  inline InvestigationSummary& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence level of the investigation's assessment.</p>
   */
  inline Confidence GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(Confidence value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline InvestigationSummary& WithConfidence(Confidence value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short title summarizing the investigation.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  InvestigationSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the investigation.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  InvestigationSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the investigation started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  InvestigationSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the investigation completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  InvestigationSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_investigationId;

  InvestigationStatus m_status{InvestigationStatus::NOT_SET};

  Aws::String m_triggerPrompt;

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  Confidence m_confidence{Confidence::NOT_SET};

  Aws::String m_title;

  Aws::String m_accountId;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_investigationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_triggerPromptHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
