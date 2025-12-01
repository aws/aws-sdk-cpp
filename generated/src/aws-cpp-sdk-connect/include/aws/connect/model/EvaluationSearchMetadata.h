/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AutoEvaluationStatus.h>
#include <aws/connect/model/ContactParticipantRole.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Metadata information about an evaluation search.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationSearchMetadata">AWS
 * API Reference</a></p>
 */
class EvaluationSearchMetadata {
 public:
  AWS_CONNECT_API EvaluationSearchMetadata() = default;
  AWS_CONNECT_API EvaluationSearchMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationSearchMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the contact in this instance of Amazon Connect. </p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  EvaluationSearchMetadata& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the person who evaluated the contact.</p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  EvaluationSearchMetadata& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the agent who handled the contact.</p>
   */
  inline const Aws::String& GetContactAgentId() const { return m_contactAgentId; }
  inline bool ContactAgentIdHasBeenSet() const { return m_contactAgentIdHasBeenSet; }
  template <typename ContactAgentIdT = Aws::String>
  void SetContactAgentId(ContactAgentIdT&& value) {
    m_contactAgentIdHasBeenSet = true;
    m_contactAgentId = std::forward<ContactAgentIdT>(value);
  }
  template <typename ContactAgentIdT = Aws::String>
  EvaluationSearchMetadata& WithContactAgentId(ContactAgentIdT&& value) {
    SetContactAgentId(std::forward<ContactAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calibration session ID that this evaluation belongs to.</p>
   */
  inline const Aws::String& GetCalibrationSessionId() const { return m_calibrationSessionId; }
  inline bool CalibrationSessionIdHasBeenSet() const { return m_calibrationSessionIdHasBeenSet; }
  template <typename CalibrationSessionIdT = Aws::String>
  void SetCalibrationSessionId(CalibrationSessionIdT&& value) {
    m_calibrationSessionIdHasBeenSet = true;
    m_calibrationSessionId = std::forward<CalibrationSessionIdT>(value);
  }
  template <typename CalibrationSessionIdT = Aws::String>
  EvaluationSearchMetadata& WithCalibrationSessionId(CalibrationSessionIdT&& value) {
    SetCalibrationSessionId(std::forward<CalibrationSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total evaluation score expressed as a percentage.</p>
   */
  inline double GetScorePercentage() const { return m_scorePercentage; }
  inline bool ScorePercentageHasBeenSet() const { return m_scorePercentageHasBeenSet; }
  inline void SetScorePercentage(double value) {
    m_scorePercentageHasBeenSet = true;
    m_scorePercentage = value;
  }
  inline EvaluationSearchMetadata& WithScorePercentage(double value) {
    SetScorePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag that marks the item as automatic fail. If the item or a child item
   * gets an automatic fail answer, this flag is true.</p>
   */
  inline bool GetScoreAutomaticFail() const { return m_scoreAutomaticFail; }
  inline bool ScoreAutomaticFailHasBeenSet() const { return m_scoreAutomaticFailHasBeenSet; }
  inline void SetScoreAutomaticFail(bool value) {
    m_scoreAutomaticFailHasBeenSet = true;
    m_scoreAutomaticFail = value;
  }
  inline EvaluationSearchMetadata& WithScoreAutomaticFail(bool value) {
    SetScoreAutomaticFail(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to mark the item as not applicable for scoring.</p>
   */
  inline bool GetScoreNotApplicable() const { return m_scoreNotApplicable; }
  inline bool ScoreNotApplicableHasBeenSet() const { return m_scoreNotApplicableHasBeenSet; }
  inline void SetScoreNotApplicable(bool value) {
    m_scoreNotApplicableHasBeenSet = true;
    m_scoreNotApplicable = value;
  }
  inline EvaluationSearchMetadata& WithScoreNotApplicable(bool value) {
    SetScoreNotApplicable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether auto-evaluation is enabled.</p>
   */
  inline bool GetAutoEvaluationEnabled() const { return m_autoEvaluationEnabled; }
  inline bool AutoEvaluationEnabledHasBeenSet() const { return m_autoEvaluationEnabledHasBeenSet; }
  inline void SetAutoEvaluationEnabled(bool value) {
    m_autoEvaluationEnabledHasBeenSet = true;
    m_autoEvaluationEnabled = value;
  }
  inline EvaluationSearchMetadata& WithAutoEvaluationEnabled(bool value) {
    SetAutoEvaluationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the contact auto evaluation. </p>
   */
  inline AutoEvaluationStatus GetAutoEvaluationStatus() const { return m_autoEvaluationStatus; }
  inline bool AutoEvaluationStatusHasBeenSet() const { return m_autoEvaluationStatusHasBeenSet; }
  inline void SetAutoEvaluationStatus(AutoEvaluationStatus value) {
    m_autoEvaluationStatusHasBeenSet = true;
    m_autoEvaluationStatus = value;
  }
  inline EvaluationSearchMetadata& WithAutoEvaluationStatus(AutoEvaluationStatus value) {
    SetAutoEvaluationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the evaluation was acknowledged by the agent.</p>
   */
  inline const Aws::Utils::DateTime& GetAcknowledgedTime() const { return m_acknowledgedTime; }
  inline bool AcknowledgedTimeHasBeenSet() const { return m_acknowledgedTimeHasBeenSet; }
  template <typename AcknowledgedTimeT = Aws::Utils::DateTime>
  void SetAcknowledgedTime(AcknowledgedTimeT&& value) {
    m_acknowledgedTimeHasBeenSet = true;
    m_acknowledgedTime = std::forward<AcknowledgedTimeT>(value);
  }
  template <typename AcknowledgedTimeT = Aws::Utils::DateTime>
  EvaluationSearchMetadata& WithAcknowledgedTime(AcknowledgedTimeT&& value) {
    SetAcknowledgedTime(std::forward<AcknowledgedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent who acknowledged the evaluation.</p>
   */
  inline const Aws::String& GetAcknowledgedBy() const { return m_acknowledgedBy; }
  inline bool AcknowledgedByHasBeenSet() const { return m_acknowledgedByHasBeenSet; }
  template <typename AcknowledgedByT = Aws::String>
  void SetAcknowledgedBy(AcknowledgedByT&& value) {
    m_acknowledgedByHasBeenSet = true;
    m_acknowledgedBy = std::forward<AcknowledgedByT>(value);
  }
  template <typename AcknowledgedByT = Aws::String>
  EvaluationSearchMetadata& WithAcknowledgedBy(AcknowledgedByT&& value) {
    SetAcknowledgedBy(std::forward<AcknowledgedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comment from the agent when they acknowledged the evaluation.</p>
   */
  inline const Aws::String& GetAcknowledgerComment() const { return m_acknowledgerComment; }
  inline bool AcknowledgerCommentHasBeenSet() const { return m_acknowledgerCommentHasBeenSet; }
  template <typename AcknowledgerCommentT = Aws::String>
  void SetAcknowledgerComment(AcknowledgerCommentT&& value) {
    m_acknowledgerCommentHasBeenSet = true;
    m_acknowledgerComment = std::forward<AcknowledgerCommentT>(value);
  }
  template <typename AcknowledgerCommentT = Aws::String>
  EvaluationSearchMetadata& WithAcknowledgerComment(AcknowledgerCommentT&& value) {
    SetAcknowledgerComment(std::forward<AcknowledgerCommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the sampling job.</p>
   */
  inline const Aws::String& GetSamplingJobId() const { return m_samplingJobId; }
  inline bool SamplingJobIdHasBeenSet() const { return m_samplingJobIdHasBeenSet; }
  template <typename SamplingJobIdT = Aws::String>
  void SetSamplingJobId(SamplingJobIdT&& value) {
    m_samplingJobIdHasBeenSet = true;
    m_samplingJobId = std::forward<SamplingJobIdT>(value);
  }
  template <typename SamplingJobIdT = Aws::String>
  EvaluationSearchMetadata& WithSamplingJobId(SamplingJobIdT&& value) {
    SetSamplingJobId(std::forward<SamplingJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier for the review.</p>
   */
  inline const Aws::String& GetReviewId() const { return m_reviewId; }
  inline bool ReviewIdHasBeenSet() const { return m_reviewIdHasBeenSet; }
  template <typename ReviewIdT = Aws::String>
  void SetReviewId(ReviewIdT&& value) {
    m_reviewIdHasBeenSet = true;
    m_reviewId = std::forward<ReviewIdT>(value);
  }
  template <typename ReviewIdT = Aws::String>
  EvaluationSearchMetadata& WithReviewId(ReviewIdT&& value) {
    SetReviewId(std::forward<ReviewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Role of a contact participant in the evaluation.</p>
   */
  inline ContactParticipantRole GetContactParticipantRole() const { return m_contactParticipantRole; }
  inline bool ContactParticipantRoleHasBeenSet() const { return m_contactParticipantRoleHasBeenSet; }
  inline void SetContactParticipantRole(ContactParticipantRole value) {
    m_contactParticipantRoleHasBeenSet = true;
    m_contactParticipantRole = value;
  }
  inline EvaluationSearchMetadata& WithContactParticipantRole(ContactParticipantRole value) {
    SetContactParticipantRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier for a contact participant in the evaluation.</p>
   */
  inline const Aws::String& GetContactParticipantId() const { return m_contactParticipantId; }
  inline bool ContactParticipantIdHasBeenSet() const { return m_contactParticipantIdHasBeenSet; }
  template <typename ContactParticipantIdT = Aws::String>
  void SetContactParticipantId(ContactParticipantIdT&& value) {
    m_contactParticipantIdHasBeenSet = true;
    m_contactParticipantId = std::forward<ContactParticipantIdT>(value);
  }
  template <typename ContactParticipantIdT = Aws::String>
  EvaluationSearchMetadata& WithContactParticipantId(ContactParticipantIdT&& value) {
    SetContactParticipantId(std::forward<ContactParticipantIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactId;
  bool m_contactIdHasBeenSet = false;

  Aws::String m_evaluatorArn;
  bool m_evaluatorArnHasBeenSet = false;

  Aws::String m_contactAgentId;
  bool m_contactAgentIdHasBeenSet = false;

  Aws::String m_calibrationSessionId;
  bool m_calibrationSessionIdHasBeenSet = false;

  double m_scorePercentage{0.0};
  bool m_scorePercentageHasBeenSet = false;

  bool m_scoreAutomaticFail{false};
  bool m_scoreAutomaticFailHasBeenSet = false;

  bool m_scoreNotApplicable{false};
  bool m_scoreNotApplicableHasBeenSet = false;

  bool m_autoEvaluationEnabled{false};
  bool m_autoEvaluationEnabledHasBeenSet = false;

  AutoEvaluationStatus m_autoEvaluationStatus{AutoEvaluationStatus::NOT_SET};
  bool m_autoEvaluationStatusHasBeenSet = false;

  Aws::Utils::DateTime m_acknowledgedTime{};
  bool m_acknowledgedTimeHasBeenSet = false;

  Aws::String m_acknowledgedBy;
  bool m_acknowledgedByHasBeenSet = false;

  Aws::String m_acknowledgerComment;
  bool m_acknowledgerCommentHasBeenSet = false;

  Aws::String m_samplingJobId;
  bool m_samplingJobIdHasBeenSet = false;

  Aws::String m_reviewId;
  bool m_reviewIdHasBeenSet = false;

  ContactParticipantRole m_contactParticipantRole{ContactParticipantRole::NOT_SET};
  bool m_contactParticipantRoleHasBeenSet = false;

  Aws::String m_contactParticipantId;
  bool m_contactParticipantIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
