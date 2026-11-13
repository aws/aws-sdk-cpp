/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Reputation.h>
#include <aws/guardduty/model/ThreatConfidence.h>

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
 * <p>Contains a threat assessment. The members that are set depend on the
 * <code>AnalysisType</code> of the record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationThreatAssessment">AWS
 * API Reference</a></p>
 */
class InvestigationThreatAssessment {
 public:
  AWS_GUARDDUTY_API InvestigationThreatAssessment() = default;
  AWS_GUARDDUTY_API InvestigationThreatAssessment(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationThreatAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Reputation information about a threat indicator. Set when
   * <code>AnalysisType</code> is <code>REPUTATION</code>.</p>
   */
  inline const Reputation& GetReputation() const { return m_reputation; }
  inline bool ReputationHasBeenSet() const { return m_reputationHasBeenSet; }
  template <typename ReputationT = Reputation>
  void SetReputation(ReputationT&& value) {
    m_reputationHasBeenSet = true;
    m_reputation = std::forward<ReputationT>(value);
  }
  template <typename ReputationT = Reputation>
  InvestigationThreatAssessment& WithReputation(ReputationT&& value) {
    SetReputation(std::forward<ReputationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence in the threat assessment. Possible values are
   * <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code>, and
   * <code>LOW</code>.</p>
   */
  inline ThreatConfidence GetThreatConfidence() const { return m_threatConfidence; }
  inline bool ThreatConfidenceHasBeenSet() const { return m_threatConfidenceHasBeenSet; }
  inline void SetThreatConfidence(ThreatConfidence value) {
    m_threatConfidenceHasBeenSet = true;
    m_threatConfidence = value;
  }
  inline InvestigationThreatAssessment& WithThreatConfidence(ThreatConfidence value) {
    SetThreatConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The classification of the threat.</p>
   */
  inline const Aws::String& GetClassification() const { return m_classification; }
  inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
  template <typename ClassificationT = Aws::String>
  void SetClassification(ClassificationT&& value) {
    m_classificationHasBeenSet = true;
    m_classification = std::forward<ClassificationT>(value);
  }
  template <typename ClassificationT = Aws::String>
  InvestigationThreatAssessment& WithClassification(ClassificationT&& value) {
    SetClassification(std::forward<ClassificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assessment of the threat.</p>
   */
  inline const Aws::String& GetAssessment() const { return m_assessment; }
  inline bool AssessmentHasBeenSet() const { return m_assessmentHasBeenSet; }
  template <typename AssessmentT = Aws::String>
  void SetAssessment(AssessmentT&& value) {
    m_assessmentHasBeenSet = true;
    m_assessment = std::forward<AssessmentT>(value);
  }
  template <typename AssessmentT = Aws::String>
  InvestigationThreatAssessment& WithAssessment(AssessmentT&& value) {
    SetAssessment(std::forward<AssessmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Context about how the identity involved in the activity authenticated.</p>
   */
  inline const Aws::String& GetAuthenticationContext() const { return m_authenticationContext; }
  inline bool AuthenticationContextHasBeenSet() const { return m_authenticationContextHasBeenSet; }
  template <typename AuthenticationContextT = Aws::String>
  void SetAuthenticationContext(AuthenticationContextT&& value) {
    m_authenticationContextHasBeenSet = true;
    m_authenticationContext = std::forward<AuthenticationContextT>(value);
  }
  template <typename AuthenticationContextT = Aws::String>
  InvestigationThreatAssessment& WithAuthenticationContext(AuthenticationContextT&& value) {
    SetAuthenticationContext(std::forward<AuthenticationContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of Amazon RDS control plane activity that is related to the
   * threat.</p>
   */
  inline const Aws::String& GetRdsControlPlaneActivity() const { return m_rdsControlPlaneActivity; }
  inline bool RdsControlPlaneActivityHasBeenSet() const { return m_rdsControlPlaneActivityHasBeenSet; }
  template <typename RdsControlPlaneActivityT = Aws::String>
  void SetRdsControlPlaneActivity(RdsControlPlaneActivityT&& value) {
    m_rdsControlPlaneActivityHasBeenSet = true;
    m_rdsControlPlaneActivity = std::forward<RdsControlPlaneActivityT>(value);
  }
  template <typename RdsControlPlaneActivityT = Aws::String>
  InvestigationThreatAssessment& WithRdsControlPlaneActivity(RdsControlPlaneActivityT&& value) {
    SetRdsControlPlaneActivity(std::forward<RdsControlPlaneActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of the activity from the IP address in the account.</p>
   */
  inline const Aws::String& GetIpAccountActivity() const { return m_ipAccountActivity; }
  inline bool IpAccountActivityHasBeenSet() const { return m_ipAccountActivityHasBeenSet; }
  template <typename IpAccountActivityT = Aws::String>
  void SetIpAccountActivity(IpAccountActivityT&& value) {
    m_ipAccountActivityHasBeenSet = true;
    m_ipAccountActivity = std::forward<IpAccountActivityT>(value);
  }
  template <typename IpAccountActivityT = Aws::String>
  InvestigationThreatAssessment& WithIpAccountActivity(IpAccountActivityT&& value) {
    SetIpAccountActivity(std::forward<IpAccountActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of whether credentials were compromised.</p>
   */
  inline const Aws::String& GetCredentialCompromise() const { return m_credentialCompromise; }
  inline bool CredentialCompromiseHasBeenSet() const { return m_credentialCompromiseHasBeenSet; }
  template <typename CredentialCompromiseT = Aws::String>
  void SetCredentialCompromise(CredentialCompromiseT&& value) {
    m_credentialCompromiseHasBeenSet = true;
    m_credentialCompromise = std::forward<CredentialCompromiseT>(value);
  }
  template <typename CredentialCompromiseT = Aws::String>
  InvestigationThreatAssessment& WithCredentialCompromise(CredentialCompromiseT&& value) {
    SetCredentialCompromise(std::forward<CredentialCompromiseT>(value));
    return *this;
  }
  ///@}
 private:
  Reputation m_reputation;

  ThreatConfidence m_threatConfidence{ThreatConfidence::NOT_SET};

  Aws::String m_classification;

  Aws::String m_assessment;

  Aws::String m_authenticationContext;

  Aws::String m_rdsControlPlaneActivity;

  Aws::String m_ipAccountActivity;

  Aws::String m_credentialCompromise;
  bool m_reputationHasBeenSet = false;
  bool m_threatConfidenceHasBeenSet = false;
  bool m_classificationHasBeenSet = false;
  bool m_assessmentHasBeenSet = false;
  bool m_authenticationContextHasBeenSet = false;
  bool m_rdsControlPlaneActivityHasBeenSet = false;
  bool m_ipAccountActivityHasBeenSet = false;
  bool m_credentialCompromiseHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
