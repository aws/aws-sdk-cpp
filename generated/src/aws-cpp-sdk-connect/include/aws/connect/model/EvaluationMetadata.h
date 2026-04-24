/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AutoEvaluationDetails.h>
#include <aws/connect/model/EvaluationAcknowledgement.h>
#include <aws/connect/model/EvaluationContactParticipant.h>
#include <aws/connect/model/EvaluationReviewMetadata.h>
#include <aws/connect/model/EvaluationScore.h>
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
 * <p>Metadata information about a contact evaluation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationMetadata">AWS
 * API Reference</a></p>
 */
class EvaluationMetadata {
 public:
  AWS_CONNECT_API EvaluationMetadata() = default;
  AWS_CONNECT_API EvaluationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  EvaluationMetadata& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user who last updated the
   * evaluation.</p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  EvaluationMetadata& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the agent who performed the contact.</p>
   */
  inline const Aws::String& GetContactAgentId() const { return m_contactAgentId; }
  inline bool ContactAgentIdHasBeenSet() const { return m_contactAgentIdHasBeenSet; }
  template <typename ContactAgentIdT = Aws::String>
  void SetContactAgentId(ContactAgentIdT&& value) {
    m_contactAgentIdHasBeenSet = true;
    m_contactAgentId = std::forward<ContactAgentIdT>(value);
  }
  template <typename ContactAgentIdT = Aws::String>
  EvaluationMetadata& WithContactAgentId(ContactAgentIdT&& value) {
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
  EvaluationMetadata& WithCalibrationSessionId(CalibrationSessionIdT&& value) {
    SetCalibrationSessionId(std::forward<CalibrationSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall score of the contact evaluation.</p>
   */
  inline const EvaluationScore& GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  template <typename ScoreT = EvaluationScore>
  void SetScore(ScoreT&& value) {
    m_scoreHasBeenSet = true;
    m_score = std::forward<ScoreT>(value);
  }
  template <typename ScoreT = EvaluationScore>
  EvaluationMetadata& WithScore(ScoreT&& value) {
    SetScore(std::forward<ScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information related to automated evaluation.</p>
   */
  inline const AutoEvaluationDetails& GetAutoEvaluation() const { return m_autoEvaluation; }
  inline bool AutoEvaluationHasBeenSet() const { return m_autoEvaluationHasBeenSet; }
  template <typename AutoEvaluationT = AutoEvaluationDetails>
  void SetAutoEvaluation(AutoEvaluationT&& value) {
    m_autoEvaluationHasBeenSet = true;
    m_autoEvaluation = std::forward<AutoEvaluationT>(value);
  }
  template <typename AutoEvaluationT = AutoEvaluationDetails>
  EvaluationMetadata& WithAutoEvaluation(AutoEvaluationT&& value) {
    SetAutoEvaluation(std::forward<AutoEvaluationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information related to evaluation acknowledgement.</p>
   */
  inline const EvaluationAcknowledgement& GetAcknowledgement() const { return m_acknowledgement; }
  inline bool AcknowledgementHasBeenSet() const { return m_acknowledgementHasBeenSet; }
  template <typename AcknowledgementT = EvaluationAcknowledgement>
  void SetAcknowledgement(AcknowledgementT&& value) {
    m_acknowledgementHasBeenSet = true;
    m_acknowledgement = std::forward<AcknowledgementT>(value);
  }
  template <typename AcknowledgementT = EvaluationAcknowledgement>
  EvaluationMetadata& WithAcknowledgement(AcknowledgementT&& value) {
    SetAcknowledgement(std::forward<AcknowledgementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about reviews of this evaluation.</p>
   */
  inline const EvaluationReviewMetadata& GetReview() const { return m_review; }
  inline bool ReviewHasBeenSet() const { return m_reviewHasBeenSet; }
  template <typename ReviewT = EvaluationReviewMetadata>
  void SetReview(ReviewT&& value) {
    m_reviewHasBeenSet = true;
    m_review = std::forward<ReviewT>(value);
  }
  template <typename ReviewT = EvaluationReviewMetadata>
  EvaluationMetadata& WithReview(ReviewT&& value) {
    SetReview(std::forward<ReviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about a contact participant in this evaluation.</p>
   */
  inline const EvaluationContactParticipant& GetContactParticipant() const { return m_contactParticipant; }
  inline bool ContactParticipantHasBeenSet() const { return m_contactParticipantHasBeenSet; }
  template <typename ContactParticipantT = EvaluationContactParticipant>
  void SetContactParticipant(ContactParticipantT&& value) {
    m_contactParticipantHasBeenSet = true;
    m_contactParticipant = std::forward<ContactParticipantT>(value);
  }
  template <typename ContactParticipantT = EvaluationContactParticipant>
  EvaluationMetadata& WithContactParticipant(ContactParticipantT&& value) {
    SetContactParticipant(std::forward<ContactParticipantT>(value));
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
  EvaluationMetadata& WithSamplingJobId(SamplingJobIdT&& value) {
    SetSamplingJobId(std::forward<SamplingJobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactId;

  Aws::String m_evaluatorArn;

  Aws::String m_contactAgentId;

  Aws::String m_calibrationSessionId;

  EvaluationScore m_score;

  AutoEvaluationDetails m_autoEvaluation;

  EvaluationAcknowledgement m_acknowledgement;

  EvaluationReviewMetadata m_review;

  EvaluationContactParticipant m_contactParticipant;

  Aws::String m_samplingJobId;
  bool m_contactIdHasBeenSet = false;
  bool m_evaluatorArnHasBeenSet = false;
  bool m_contactAgentIdHasBeenSet = false;
  bool m_calibrationSessionIdHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_autoEvaluationHasBeenSet = false;
  bool m_acknowledgementHasBeenSet = false;
  bool m_reviewHasBeenSet = false;
  bool m_contactParticipantHasBeenSet = false;
  bool m_samplingJobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
