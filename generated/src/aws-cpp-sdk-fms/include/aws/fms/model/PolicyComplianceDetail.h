/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fms/model/ComplianceViolator.h>
#include <aws/fms/model/DependentServiceName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Describes the noncompliant resources in a member account for a specific
   * Firewall Manager policy. A maximum of 100 entries are displayed. If more than
   * 100 resources are noncompliant, <code>EvaluationLimitExceeded</code> is set to
   * <code>True</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyComplianceDetail">AWS
   * API Reference</a></p>
   */
  class PolicyComplianceDetail
  {
  public:
    AWS_FMS_API PolicyComplianceDetail() = default;
    AWS_FMS_API PolicyComplianceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyComplianceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyOwner() const { return m_policyOwner; }
    inline bool PolicyOwnerHasBeenSet() const { return m_policyOwnerHasBeenSet; }
    template<typename PolicyOwnerT = Aws::String>
    void SetPolicyOwner(PolicyOwnerT&& value) { m_policyOwnerHasBeenSet = true; m_policyOwner = std::forward<PolicyOwnerT>(value); }
    template<typename PolicyOwnerT = Aws::String>
    PolicyComplianceDetail& WithPolicyOwner(PolicyOwnerT&& value) { SetPolicyOwner(std::forward<PolicyOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    PolicyComplianceDetail& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetMemberAccount() const { return m_memberAccount; }
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }
    template<typename MemberAccountT = Aws::String>
    void SetMemberAccount(MemberAccountT&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::forward<MemberAccountT>(value); }
    template<typename MemberAccountT = Aws::String>
    PolicyComplianceDetail& WithMemberAccount(MemberAccountT&& value) { SetMemberAccount(std::forward<MemberAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline const Aws::Vector<ComplianceViolator>& GetViolators() const { return m_violators; }
    inline bool ViolatorsHasBeenSet() const { return m_violatorsHasBeenSet; }
    template<typename ViolatorsT = Aws::Vector<ComplianceViolator>>
    void SetViolators(ViolatorsT&& value) { m_violatorsHasBeenSet = true; m_violators = std::forward<ViolatorsT>(value); }
    template<typename ViolatorsT = Aws::Vector<ComplianceViolator>>
    PolicyComplianceDetail& WithViolators(ViolatorsT&& value) { SetViolators(std::forward<ViolatorsT>(value)); return *this;}
    template<typename ViolatorsT = ComplianceViolator>
    PolicyComplianceDetail& AddViolators(ViolatorsT&& value) { m_violatorsHasBeenSet = true; m_violators.emplace_back(std::forward<ViolatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if over 100 resources are noncompliant with the Firewall Manager
     * policy.</p>
     */
    inline bool GetEvaluationLimitExceeded() const { return m_evaluationLimitExceeded; }
    inline bool EvaluationLimitExceededHasBeenSet() const { return m_evaluationLimitExceededHasBeenSet; }
    inline void SetEvaluationLimitExceeded(bool value) { m_evaluationLimitExceededHasBeenSet = true; m_evaluationLimitExceeded = value; }
    inline PolicyComplianceDetail& WithEvaluationLimitExceeded(bool value) { SetEvaluationLimitExceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiredAt() const { return m_expiredAt; }
    inline bool ExpiredAtHasBeenSet() const { return m_expiredAtHasBeenSet; }
    template<typename ExpiredAtT = Aws::Utils::DateTime>
    void SetExpiredAt(ExpiredAtT&& value) { m_expiredAtHasBeenSet = true; m_expiredAt = std::forward<ExpiredAtT>(value); }
    template<typename ExpiredAtT = Aws::Utils::DateTime>
    PolicyComplianceDetail& WithExpiredAt(ExpiredAtT&& value) { SetExpiredAt(std::forward<ExpiredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline const Aws::Map<DependentServiceName, Aws::String>& GetIssueInfoMap() const { return m_issueInfoMap; }
    inline bool IssueInfoMapHasBeenSet() const { return m_issueInfoMapHasBeenSet; }
    template<typename IssueInfoMapT = Aws::Map<DependentServiceName, Aws::String>>
    void SetIssueInfoMap(IssueInfoMapT&& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap = std::forward<IssueInfoMapT>(value); }
    template<typename IssueInfoMapT = Aws::Map<DependentServiceName, Aws::String>>
    PolicyComplianceDetail& WithIssueInfoMap(IssueInfoMapT&& value) { SetIssueInfoMap(std::forward<IssueInfoMapT>(value)); return *this;}
    inline PolicyComplianceDetail& AddIssueInfoMap(DependentServiceName key, Aws::String value) {
      m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_policyOwner;
    bool m_policyOwnerHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;

    Aws::Vector<ComplianceViolator> m_violators;
    bool m_violatorsHasBeenSet = false;

    bool m_evaluationLimitExceeded{false};
    bool m_evaluationLimitExceededHasBeenSet = false;

    Aws::Utils::DateTime m_expiredAt{};
    bool m_expiredAtHasBeenSet = false;

    Aws::Map<DependentServiceName, Aws::String> m_issueInfoMap;
    bool m_issueInfoMapHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
