/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/FindingComplianceCheck.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>The compliance posture a finding reports, for the Application Security
 * Posture Finding class. Absent for a vulnerability finding.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FindingPosture">AWS
 * API Reference</a></p>
 */
class FindingPosture {
 public:
  AWS_CONTINUUM_API FindingPosture() = default;
  AWS_CONTINUUM_API FindingPosture(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FindingPosture& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The application the posture was assessed against.</p>
   */
  inline const Aws::String& GetApplication() const { return m_application; }
  inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
  template <typename ApplicationT = Aws::String>
  void SetApplication(ApplicationT&& value) {
    m_applicationHasBeenSet = true;
    m_application = std::forward<ApplicationT>(value);
  }
  template <typename ApplicationT = Aws::String>
  FindingPosture& WithApplication(ApplicationT&& value) {
    SetApplication(std::forward<ApplicationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetApplicationUid() const { return m_applicationUid; }
  inline bool ApplicationUidHasBeenSet() const { return m_applicationUidHasBeenSet; }
  template <typename ApplicationUidT = Aws::String>
  void SetApplicationUid(ApplicationUidT&& value) {
    m_applicationUidHasBeenSet = true;
    m_applicationUid = std::forward<ApplicationUidT>(value);
  }
  template <typename ApplicationUidT = Aws::String>
  FindingPosture& WithApplicationUid(ApplicationUidT&& value) {
    SetApplicationUid(std::forward<ApplicationUidT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetApplicationVersion() const { return m_applicationVersion; }
  inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
  template <typename ApplicationVersionT = Aws::String>
  void SetApplicationVersion(ApplicationVersionT&& value) {
    m_applicationVersionHasBeenSet = true;
    m_applicationVersion = std::forward<ApplicationVersionT>(value);
  }
  template <typename ApplicationVersionT = Aws::String>
  FindingPosture& WithApplicationVersion(ApplicationVersionT&& value) {
    SetApplicationVersion(std::forward<ApplicationVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The control assessed, and the producer's description of it.</p>
   */
  inline const Aws::String& GetControl() const { return m_control; }
  inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
  template <typename ControlT = Aws::String>
  void SetControl(ControlT&& value) {
    m_controlHasBeenSet = true;
    m_control = std::forward<ControlT>(value);
  }
  template <typename ControlT = Aws::String>
  FindingPosture& WithControl(ControlT&& value) {
    SetControl(std::forward<ControlT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FindingPosture& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Standards and requirements the control maps to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStandards() const { return m_standards; }
  inline bool StandardsHasBeenSet() const { return m_standardsHasBeenSet; }
  template <typename StandardsT = Aws::Vector<Aws::String>>
  void SetStandards(StandardsT&& value) {
    m_standardsHasBeenSet = true;
    m_standards = std::forward<StandardsT>(value);
  }
  template <typename StandardsT = Aws::Vector<Aws::String>>
  FindingPosture& WithStandards(StandardsT&& value) {
    SetStandards(std::forward<StandardsT>(value));
    return *this;
  }
  template <typename StandardsT = Aws::String>
  FindingPosture& AddStandards(StandardsT&& value) {
    m_standardsHasBeenSet = true;
    m_standards.emplace_back(std::forward<StandardsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetRequirements() const { return m_requirements; }
  inline bool RequirementsHasBeenSet() const { return m_requirementsHasBeenSet; }
  template <typename RequirementsT = Aws::Vector<Aws::String>>
  void SetRequirements(RequirementsT&& value) {
    m_requirementsHasBeenSet = true;
    m_requirements = std::forward<RequirementsT>(value);
  }
  template <typename RequirementsT = Aws::Vector<Aws::String>>
  FindingPosture& WithRequirements(RequirementsT&& value) {
    SetRequirements(std::forward<RequirementsT>(value));
    return *this;
  }
  template <typename RequirementsT = Aws::String>
  FindingPosture& AddRequirements(RequirementsT&& value) {
    m_requirementsHasBeenSet = true;
    m_requirements.emplace_back(std::forward<RequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The individual checks performed.</p>
   */
  inline const Aws::Vector<FindingComplianceCheck>& GetChecks() const { return m_checks; }
  inline bool ChecksHasBeenSet() const { return m_checksHasBeenSet; }
  template <typename ChecksT = Aws::Vector<FindingComplianceCheck>>
  void SetChecks(ChecksT&& value) {
    m_checksHasBeenSet = true;
    m_checks = std::forward<ChecksT>(value);
  }
  template <typename ChecksT = Aws::Vector<FindingComplianceCheck>>
  FindingPosture& WithChecks(ChecksT&& value) {
    SetChecks(std::forward<ChecksT>(value));
    return *this;
  }
  template <typename ChecksT = FindingComplianceCheck>
  FindingPosture& AddChecks(ChecksT&& value) {
    m_checksHasBeenSet = true;
    m_checks.emplace_back(std::forward<ChecksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's compliance status, and the enum value behind it.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  FindingPosture& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's numeric enum value for <code>status</code>.</p>
   */
  inline int GetStatusId() const { return m_statusId; }
  inline bool StatusIdHasBeenSet() const { return m_statusIdHasBeenSet; }
  inline void SetStatusId(int value) {
    m_statusIdHasBeenSet = true;
    m_statusId = value;
  }
  inline FindingPosture& WithStatusId(int value) {
    SetStatusId(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRemediation() const { return m_remediation; }
  inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
  template <typename RemediationT = Aws::String>
  void SetRemediation(RemediationT&& value) {
    m_remediationHasBeenSet = true;
    m_remediation = std::forward<RemediationT>(value);
  }
  template <typename RemediationT = Aws::String>
  FindingPosture& WithRemediation(RemediationT&& value) {
    SetRemediation(std::forward<RemediationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetRemediationReferences() const { return m_remediationReferences; }
  inline bool RemediationReferencesHasBeenSet() const { return m_remediationReferencesHasBeenSet; }
  template <typename RemediationReferencesT = Aws::Vector<Aws::String>>
  void SetRemediationReferences(RemediationReferencesT&& value) {
    m_remediationReferencesHasBeenSet = true;
    m_remediationReferences = std::forward<RemediationReferencesT>(value);
  }
  template <typename RemediationReferencesT = Aws::Vector<Aws::String>>
  FindingPosture& WithRemediationReferences(RemediationReferencesT&& value) {
    SetRemediationReferences(std::forward<RemediationReferencesT>(value));
    return *this;
  }
  template <typename RemediationReferencesT = Aws::String>
  FindingPosture& AddRemediationReferences(RemediationReferencesT&& value) {
    m_remediationReferencesHasBeenSet = true;
    m_remediationReferences.emplace_back(std::forward<RemediationReferencesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_application;

  Aws::String m_applicationUid;

  Aws::String m_applicationVersion;

  Aws::String m_control;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_standards;

  Aws::Vector<Aws::String> m_requirements;

  Aws::Vector<FindingComplianceCheck> m_checks;

  Aws::String m_status;

  int m_statusId{0};

  Aws::String m_remediation;

  Aws::Vector<Aws::String> m_remediationReferences;
  bool m_applicationHasBeenSet = false;
  bool m_applicationUidHasBeenSet = false;
  bool m_applicationVersionHasBeenSet = false;
  bool m_controlHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_standardsHasBeenSet = false;
  bool m_requirementsHasBeenSet = false;
  bool m_checksHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusIdHasBeenSet = false;
  bool m_remediationHasBeenSet = false;
  bool m_remediationReferencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
