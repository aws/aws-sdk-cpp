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
#include <aws/fms/model/EvaluationResult.h>
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
   * <p>Indicates whether the account is compliant with the specified policy. An
   * account is considered noncompliant if it includes resources that are not
   * protected by the policy, for WAF and Shield Advanced policies, or that are
   * noncompliant with the policy, for security group policies.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyComplianceStatus">AWS
   * API Reference</a></p>
   */
  class PolicyComplianceStatus
  {
  public:
    AWS_FMS_API PolicyComplianceStatus() = default;
    AWS_FMS_API PolicyComplianceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyComplianceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PolicyComplianceStatus& WithPolicyOwner(PolicyOwnerT&& value) { SetPolicyOwner(std::forward<PolicyOwnerT>(value)); return *this;}
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
    PolicyComplianceStatus& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PolicyComplianceStatus& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member account ID.</p>
     */
    inline const Aws::String& GetMemberAccount() const { return m_memberAccount; }
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }
    template<typename MemberAccountT = Aws::String>
    void SetMemberAccount(MemberAccountT&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::forward<MemberAccountT>(value); }
    template<typename MemberAccountT = Aws::String>
    PolicyComplianceStatus& WithMemberAccount(MemberAccountT&& value) { SetMemberAccount(std::forward<MemberAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const { return m_evaluationResults; }
    inline bool EvaluationResultsHasBeenSet() const { return m_evaluationResultsHasBeenSet; }
    template<typename EvaluationResultsT = Aws::Vector<EvaluationResult>>
    void SetEvaluationResults(EvaluationResultsT&& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults = std::forward<EvaluationResultsT>(value); }
    template<typename EvaluationResultsT = Aws::Vector<EvaluationResult>>
    PolicyComplianceStatus& WithEvaluationResults(EvaluationResultsT&& value) { SetEvaluationResults(std::forward<EvaluationResultsT>(value)); return *this;}
    template<typename EvaluationResultsT = EvaluationResult>
    PolicyComplianceStatus& AddEvaluationResults(EvaluationResultsT&& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults.emplace_back(std::forward<EvaluationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    PolicyComplianceStatus& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
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
    PolicyComplianceStatus& WithIssueInfoMap(IssueInfoMapT&& value) { SetIssueInfoMap(std::forward<IssueInfoMapT>(value)); return *this;}
    inline PolicyComplianceStatus& AddIssueInfoMap(DependentServiceName key, Aws::String value) {
      m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_policyOwner;
    bool m_policyOwnerHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;

    Aws::Vector<EvaluationResult> m_evaluationResults;
    bool m_evaluationResultsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Map<DependentServiceName, Aws::String> m_issueInfoMap;
    bool m_issueInfoMapHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
