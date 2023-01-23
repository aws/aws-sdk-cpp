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
    AWS_FMS_API PolicyComplianceStatus();
    AWS_FMS_API PolicyComplianceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyComplianceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyOwner() const{ return m_policyOwner; }

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline bool PolicyOwnerHasBeenSet() const { return m_policyOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline void SetPolicyOwner(const Aws::String& value) { m_policyOwnerHasBeenSet = true; m_policyOwner = value; }

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline void SetPolicyOwner(Aws::String&& value) { m_policyOwnerHasBeenSet = true; m_policyOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline void SetPolicyOwner(const char* value) { m_policyOwnerHasBeenSet = true; m_policyOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyOwner(const Aws::String& value) { SetPolicyOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyOwner(Aws::String&& value) { SetPolicyOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyOwner(const char* value) { SetPolicyOwner(value); return *this;}


    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The member account ID.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

    /**
     * <p>The member account ID.</p>
     */
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }

    /**
     * <p>The member account ID.</p>
     */
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }

    /**
     * <p>The member account ID.</p>
     */
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }

    /**
     * <p>The member account ID.</p>
     */
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }

    /**
     * <p>The member account ID.</p>
     */
    inline PolicyComplianceStatus& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}

    /**
     * <p>The member account ID.</p>
     */
    inline PolicyComplianceStatus& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}

    /**
     * <p>The member account ID.</p>
     */
    inline PolicyComplianceStatus& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}


    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const{ return m_evaluationResults; }

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline bool EvaluationResultsHasBeenSet() const { return m_evaluationResultsHasBeenSet; }

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline void SetEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults = value; }

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline void SetEvaluationResults(Aws::Vector<EvaluationResult>&& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults = std::move(value); }

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline PolicyComplianceStatus& WithEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetEvaluationResults(value); return *this;}

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline PolicyComplianceStatus& WithEvaluationResults(Aws::Vector<EvaluationResult>&& value) { SetEvaluationResults(std::move(value)); return *this;}

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline PolicyComplianceStatus& AddEvaluationResults(const EvaluationResult& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults.push_back(value); return *this; }

    /**
     * <p>An array of <code>EvaluationResult</code> objects.</p>
     */
    inline PolicyComplianceStatus& AddEvaluationResults(EvaluationResult&& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults.push_back(std::move(value)); return *this; }


    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline PolicyComplianceStatus& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>Timestamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline PolicyComplianceStatus& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline const Aws::Map<DependentServiceName, Aws::String>& GetIssueInfoMap() const{ return m_issueInfoMap; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline bool IssueInfoMapHasBeenSet() const { return m_issueInfoMapHasBeenSet; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline void SetIssueInfoMap(const Aws::Map<DependentServiceName, Aws::String>& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap = value; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline void SetIssueInfoMap(Aws::Map<DependentServiceName, Aws::String>&& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap = std::move(value); }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& WithIssueInfoMap(const Aws::Map<DependentServiceName, Aws::String>& value) { SetIssueInfoMap(value); return *this;}

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& WithIssueInfoMap(Aws::Map<DependentServiceName, Aws::String>&& value) { SetIssueInfoMap(std::move(value)); return *this;}

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& AddIssueInfoMap(const DependentServiceName& key, const Aws::String& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, value); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& AddIssueInfoMap(DependentServiceName&& key, const Aws::String& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& AddIssueInfoMap(const DependentServiceName& key, Aws::String&& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& AddIssueInfoMap(DependentServiceName&& key, Aws::String&& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& AddIssueInfoMap(DependentServiceName&& key, const char* value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceStatus& AddIssueInfoMap(const DependentServiceName& key, const char* value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, value); return *this; }

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

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Map<DependentServiceName, Aws::String> m_issueInfoMap;
    bool m_issueInfoMapHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
