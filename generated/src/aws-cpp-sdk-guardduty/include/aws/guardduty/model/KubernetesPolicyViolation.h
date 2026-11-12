/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains an assessment of a Kubernetes policy violation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesPolicyViolation">AWS
 * API Reference</a></p>
 */
class KubernetesPolicyViolation {
 public:
  AWS_GUARDDUTY_API KubernetesPolicyViolation() = default;
  AWS_GUARDDUTY_API KubernetesPolicyViolation(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API KubernetesPolicyViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the violation.</p>
   */
  inline const Aws::String& GetViolationType() const { return m_violationType; }
  inline bool ViolationTypeHasBeenSet() const { return m_violationTypeHasBeenSet; }
  template <typename ViolationTypeT = Aws::String>
  void SetViolationType(ViolationTypeT&& value) {
    m_violationTypeHasBeenSet = true;
    m_violationType = std::forward<ViolationTypeT>(value);
  }
  template <typename ViolationTypeT = Aws::String>
  KubernetesPolicyViolation& WithViolationType(ViolationTypeT&& value) {
    SetViolationType(std::forward<ViolationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes resource that the violation affects.</p>
   */
  inline const Aws::String& GetAffectedResource() const { return m_affectedResource; }
  inline bool AffectedResourceHasBeenSet() const { return m_affectedResourceHasBeenSet; }
  template <typename AffectedResourceT = Aws::String>
  void SetAffectedResource(AffectedResourceT&& value) {
    m_affectedResourceHasBeenSet = true;
    m_affectedResource = std::forward<AffectedResourceT>(value);
  }
  template <typename AffectedResourceT = Aws::String>
  KubernetesPolicyViolation& WithAffectedResource(AffectedResourceT&& value) {
    SetAffectedResource(std::forward<AffectedResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes subject, such as a user, a group, or a service account, that
   * the violation involves.</p>
   */
  inline const Aws::String& GetSubject() const { return m_subject; }
  inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
  template <typename SubjectT = Aws::String>
  void SetSubject(SubjectT&& value) {
    m_subjectHasBeenSet = true;
    m_subject = std::forward<SubjectT>(value);
  }
  template <typename SubjectT = Aws::String>
  KubernetesPolicyViolation& WithSubject(SubjectT&& value) {
    SetSubject(std::forward<SubjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access that the violation grants.</p>
   */
  inline const Aws::String& GetGrantedAccess() const { return m_grantedAccess; }
  inline bool GrantedAccessHasBeenSet() const { return m_grantedAccessHasBeenSet; }
  template <typename GrantedAccessT = Aws::String>
  void SetGrantedAccess(GrantedAccessT&& value) {
    m_grantedAccessHasBeenSet = true;
    m_grantedAccess = std::forward<GrantedAccessT>(value);
  }
  template <typename GrantedAccessT = Aws::String>
  KubernetesPolicyViolation& WithGrantedAccess(GrantedAccessT&& value) {
    SetGrantedAccess(std::forward<GrantedAccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the misconfiguration exposes the resource.</p>
   */
  inline const Aws::String& GetExposureVector() const { return m_exposureVector; }
  inline bool ExposureVectorHasBeenSet() const { return m_exposureVectorHasBeenSet; }
  template <typename ExposureVectorT = Aws::String>
  void SetExposureVector(ExposureVectorT&& value) {
    m_exposureVectorHasBeenSet = true;
    m_exposureVector = std::forward<ExposureVectorT>(value);
  }
  template <typename ExposureVectorT = Aws::String>
  KubernetesPolicyViolation& WithExposureVector(ExposureVectorT&& value) {
    SetExposureVector(std::forward<ExposureVectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The potential impact of the misconfiguration.</p>
   */
  inline const Aws::String& GetMisconfigurationImpact() const { return m_misconfigurationImpact; }
  inline bool MisconfigurationImpactHasBeenSet() const { return m_misconfigurationImpactHasBeenSet; }
  template <typename MisconfigurationImpactT = Aws::String>
  void SetMisconfigurationImpact(MisconfigurationImpactT&& value) {
    m_misconfigurationImpactHasBeenSet = true;
    m_misconfigurationImpact = std::forward<MisconfigurationImpactT>(value);
  }
  template <typename MisconfigurationImpactT = Aws::String>
  KubernetesPolicyViolation& WithMisconfigurationImpact(MisconfigurationImpactT&& value) {
    SetMisconfigurationImpact(std::forward<MisconfigurationImpactT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_violationType;

  Aws::String m_affectedResource;

  Aws::String m_subject;

  Aws::String m_grantedAccess;

  Aws::String m_exposureVector;

  Aws::String m_misconfigurationImpact;
  bool m_violationTypeHasBeenSet = false;
  bool m_affectedResourceHasBeenSet = false;
  bool m_subjectHasBeenSet = false;
  bool m_grantedAccessHasBeenSet = false;
  bool m_exposureVectorHasBeenSet = false;
  bool m_misconfigurationImpactHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
