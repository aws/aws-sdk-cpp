/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeChecklistEvent.h>
#include <aws/connecthealth/model/MedicalScribePeriodontalChartEvent.h>
#include <aws/connecthealth/model/MedicalScribeTranscriptEvent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>The output stream of a listening session. It carries transcript events,
 * periodontal chart events, checklist events, and errors.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeOutputStream">AWS
 * API Reference</a></p>
 */
class MedicalScribeOutputStream {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeOutputStream() = default;
  AWS_CONNECTHEALTH_API MedicalScribeOutputStream(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeOutputStream& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline const MedicalScribeTranscriptEvent& GetTranscriptEvent() const { return m_transcriptEvent; }
  inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }
  template <typename TranscriptEventT = MedicalScribeTranscriptEvent>
  void SetTranscriptEvent(TranscriptEventT&& value) {
    m_transcriptEventHasBeenSet = true;
    m_transcriptEvent = std::forward<TranscriptEventT>(value);
  }
  template <typename TranscriptEventT = MedicalScribeTranscriptEvent>
  MedicalScribeOutputStream& WithTranscriptEvent(TranscriptEventT&& value) {
    SetTranscriptEvent(std::forward<TranscriptEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const ConnectHealthError& GetInternalFailureException() const { return m_internalFailureException; }
  inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
  template <typename InternalFailureExceptionT = ConnectHealthError>
  void SetInternalFailureException(InternalFailureExceptionT&& value) {
    m_internalFailureExceptionHasBeenSet = true;
    m_internalFailureException = std::forward<InternalFailureExceptionT>(value);
  }
  template <typename InternalFailureExceptionT = ConnectHealthError>
  MedicalScribeOutputStream& WithInternalFailureException(InternalFailureExceptionT&& value) {
    SetInternalFailureException(std::forward<InternalFailureExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const ConnectHealthError& GetValidationException() const { return m_validationException; }
  inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
  template <typename ValidationExceptionT = ConnectHealthError>
  void SetValidationException(ValidationExceptionT&& value) {
    m_validationExceptionHasBeenSet = true;
    m_validationException = std::forward<ValidationExceptionT>(value);
  }
  template <typename ValidationExceptionT = ConnectHealthError>
  MedicalScribeOutputStream& WithValidationException(ValidationExceptionT&& value) {
    SetValidationException(std::forward<ValidationExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Real-time extraction is in preview release for Amazon Connect Health and is
   * subject to change. To request access to this feature, contact your AWS account
   * team.</p> <p>A snapshot of the periodontal chart. Amazon Connect Health sends
   * this event only when real-time extraction is enabled for the account and
   * periodontal charting is dictated during the session.</p>
   */
  inline const MedicalScribePeriodontalChartEvent& GetPeriodontalChartEvent() const { return m_periodontalChartEvent; }
  inline bool PeriodontalChartEventHasBeenSet() const { return m_periodontalChartEventHasBeenSet; }
  template <typename PeriodontalChartEventT = MedicalScribePeriodontalChartEvent>
  void SetPeriodontalChartEvent(PeriodontalChartEventT&& value) {
    m_periodontalChartEventHasBeenSet = true;
    m_periodontalChartEvent = std::forward<PeriodontalChartEventT>(value);
  }
  template <typename PeriodontalChartEventT = MedicalScribePeriodontalChartEvent>
  MedicalScribeOutputStream& WithPeriodontalChartEvent(PeriodontalChartEventT&& value) {
    SetPeriodontalChartEvent(std::forward<PeriodontalChartEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Real-time extraction is in preview release for Amazon Connect Health and is
   * subject to change. To request access to this feature, contact your AWS account
   * team.</p> <p>A snapshot of the session's checklist. Amazon Connect Health sends
   * this event only when real-time extraction is enabled for the account and the
   * session uses a supported note template.</p>
   */
  inline const MedicalScribeChecklistEvent& GetChecklistEvent() const { return m_checklistEvent; }
  inline bool ChecklistEventHasBeenSet() const { return m_checklistEventHasBeenSet; }
  template <typename ChecklistEventT = MedicalScribeChecklistEvent>
  void SetChecklistEvent(ChecklistEventT&& value) {
    m_checklistEventHasBeenSet = true;
    m_checklistEvent = std::forward<ChecklistEventT>(value);
  }
  template <typename ChecklistEventT = MedicalScribeChecklistEvent>
  MedicalScribeOutputStream& WithChecklistEvent(ChecklistEventT&& value) {
    SetChecklistEvent(std::forward<ChecklistEventT>(value));
    return *this;
  }
  ///@}
 private:
  MedicalScribeTranscriptEvent m_transcriptEvent;

  ConnectHealthError m_internalFailureException;

  ConnectHealthError m_validationException;

  MedicalScribePeriodontalChartEvent m_periodontalChartEvent;

  MedicalScribeChecklistEvent m_checklistEvent;
  bool m_transcriptEventHasBeenSet = false;
  bool m_internalFailureExceptionHasBeenSet = false;
  bool m_validationExceptionHasBeenSet = false;
  bool m_periodontalChartEventHasBeenSet = false;
  bool m_checklistEventHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
