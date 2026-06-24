/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CloudDetails.h>
#include <aws/guardduty/model/Confidence.h>
#include <aws/guardduty/model/InvestigationMetadata.h>
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
 * <p>Contains the details and results of a GuardDuty investigation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Investigation">AWS
 * API Reference</a></p>
 */
class Investigation {
 public:
  AWS_GUARDDUTY_API Investigation() = default;
  AWS_GUARDDUTY_API Investigation(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Investigation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  Investigation& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the investigation. Possible values are
   * <code>RUNNING</code>, <code>COMPLETED</code>, and <code>FAILED</code>.</p>
   */
  inline InvestigationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InvestigationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Investigation& WithStatus(InvestigationStatus value) {
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
  Investigation& WithTriggerPrompt(TriggerPromptT&& value) {
    SetTriggerPrompt(std::forward<TriggerPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account that initiated the investigation.</p>
   */
  inline const Aws::String& GetTriggeredBy() const { return m_triggeredBy; }
  inline bool TriggeredByHasBeenSet() const { return m_triggeredByHasBeenSet; }
  template <typename TriggeredByT = Aws::String>
  void SetTriggeredBy(TriggeredByT&& value) {
    m_triggeredByHasBeenSet = true;
    m_triggeredBy = std::forward<TriggeredByT>(value);
  }
  template <typename TriggeredByT = Aws::String>
  Investigation& WithTriggeredBy(TriggeredByT&& value) {
    SetTriggeredBy(std::forward<TriggeredByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata about the product and version that produced the investigation.</p>
   */
  inline const InvestigationMetadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = InvestigationMetadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = InvestigationMetadata>
  Investigation& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the cloud environment in which the investigation was performed,
   * including the provider, region, and account.</p>
   */
  inline const CloudDetails& GetCloud() const { return m_cloud; }
  inline bool CloudHasBeenSet() const { return m_cloudHasBeenSet; }
  template <typename CloudT = CloudDetails>
  void SetCloud(CloudT&& value) {
    m_cloudHasBeenSet = true;
    m_cloud = std::forward<CloudT>(value);
  }
  template <typename CloudT = CloudDetails>
  Investigation& WithCloud(CloudT&& value) {
    SetCloud(std::forward<CloudT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assessed risk level of the investigated threat. Possible values are
   * <code>Info</code>, <code>Low</code>, <code>Medium</code>, <code>High</code>, and
   * <code>Critical</code>.</p>
   */
  inline RiskLevel GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  inline void SetRiskLevel(RiskLevel value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = value;
  }
  inline Investigation& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the assessed risk.</p>
   */
  inline const Aws::String& GetRisk() const { return m_risk; }
  inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
  template <typename RiskT = Aws::String>
  void SetRisk(RiskT&& value) {
    m_riskHasBeenSet = true;
    m_risk = std::forward<RiskT>(value);
  }
  template <typename RiskT = Aws::String>
  Investigation& WithRisk(RiskT&& value) {
    SetRisk(std::forward<RiskT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence level of the investigation's assessment. Possible values are
   * <code>Unknown</code>, <code>Low</code>, <code>Medium</code>, and
   * <code>High</code>.</p>
   */
  inline Confidence GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(Confidence value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline Investigation& WithConfidence(Confidence value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structured summary of the investigation findings, including affected
   * resources, threat assessment, and recommended remediation steps.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  Investigation& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
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
  Investigation& WithStartTime(StartTimeT&& value) {
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
  Investigation& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the error if the investigation status is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = Aws::String>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = Aws::String>
  Investigation& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_investigationId;

  InvestigationStatus m_status{InvestigationStatus::NOT_SET};

  Aws::String m_triggerPrompt;

  Aws::String m_triggeredBy;

  InvestigationMetadata m_metadata;

  CloudDetails m_cloud;

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  Aws::String m_risk;

  Confidence m_confidence{Confidence::NOT_SET};

  Aws::String m_summary;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_error;
  bool m_investigationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_triggerPromptHasBeenSet = false;
  bool m_triggeredByHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_cloudHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_riskHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
