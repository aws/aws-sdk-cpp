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
    AWS_FMS_API PolicyComplianceDetail();
    AWS_FMS_API PolicyComplianceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyComplianceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PolicyComplianceDetail& WithPolicyOwner(const Aws::String& value) { SetPolicyOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyOwner(Aws::String&& value) { SetPolicyOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that created the Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyOwner(const char* value) { SetPolicyOwner(value); return *this;}


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
    inline PolicyComplianceDetail& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline PolicyComplianceDetail& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline PolicyComplianceDetail& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline PolicyComplianceDetail& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}


    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline const Aws::Vector<ComplianceViolator>& GetViolators() const{ return m_violators; }

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline bool ViolatorsHasBeenSet() const { return m_violatorsHasBeenSet; }

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline void SetViolators(const Aws::Vector<ComplianceViolator>& value) { m_violatorsHasBeenSet = true; m_violators = value; }

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline void SetViolators(Aws::Vector<ComplianceViolator>&& value) { m_violatorsHasBeenSet = true; m_violators = std::move(value); }

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline PolicyComplianceDetail& WithViolators(const Aws::Vector<ComplianceViolator>& value) { SetViolators(value); return *this;}

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline PolicyComplianceDetail& WithViolators(Aws::Vector<ComplianceViolator>&& value) { SetViolators(std::move(value)); return *this;}

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline PolicyComplianceDetail& AddViolators(const ComplianceViolator& value) { m_violatorsHasBeenSet = true; m_violators.push_back(value); return *this; }

    /**
     * <p>An array of resources that aren't protected by the WAF or Shield Advanced
     * policy or that aren't in compliance with the security group policy.</p>
     */
    inline PolicyComplianceDetail& AddViolators(ComplianceViolator&& value) { m_violatorsHasBeenSet = true; m_violators.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates if over 100 resources are noncompliant with the Firewall Manager
     * policy.</p>
     */
    inline bool GetEvaluationLimitExceeded() const{ return m_evaluationLimitExceeded; }

    /**
     * <p>Indicates if over 100 resources are noncompliant with the Firewall Manager
     * policy.</p>
     */
    inline bool EvaluationLimitExceededHasBeenSet() const { return m_evaluationLimitExceededHasBeenSet; }

    /**
     * <p>Indicates if over 100 resources are noncompliant with the Firewall Manager
     * policy.</p>
     */
    inline void SetEvaluationLimitExceeded(bool value) { m_evaluationLimitExceededHasBeenSet = true; m_evaluationLimitExceeded = value; }

    /**
     * <p>Indicates if over 100 resources are noncompliant with the Firewall Manager
     * policy.</p>
     */
    inline PolicyComplianceDetail& WithEvaluationLimitExceeded(bool value) { SetEvaluationLimitExceeded(value); return *this;}


    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiredAt() const{ return m_expiredAt; }

    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline bool ExpiredAtHasBeenSet() const { return m_expiredAtHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline void SetExpiredAt(const Aws::Utils::DateTime& value) { m_expiredAtHasBeenSet = true; m_expiredAt = value; }

    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline void SetExpiredAt(Aws::Utils::DateTime&& value) { m_expiredAtHasBeenSet = true; m_expiredAt = std::move(value); }

    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline PolicyComplianceDetail& WithExpiredAt(const Aws::Utils::DateTime& value) { SetExpiredAt(value); return *this;}

    /**
     * <p>A timestamp that indicates when the returned information should be considered
     * out of date.</p>
     */
    inline PolicyComplianceDetail& WithExpiredAt(Aws::Utils::DateTime&& value) { SetExpiredAt(std::move(value)); return *this;}


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
    inline PolicyComplianceDetail& WithIssueInfoMap(const Aws::Map<DependentServiceName, Aws::String>& value) { SetIssueInfoMap(value); return *this;}

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& WithIssueInfoMap(Aws::Map<DependentServiceName, Aws::String>&& value) { SetIssueInfoMap(std::move(value)); return *this;}

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& AddIssueInfoMap(const DependentServiceName& key, const Aws::String& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, value); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& AddIssueInfoMap(DependentServiceName&& key, const Aws::String& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& AddIssueInfoMap(const DependentServiceName& key, Aws::String&& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& AddIssueInfoMap(DependentServiceName&& key, Aws::String&& value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& AddIssueInfoMap(DependentServiceName&& key, const char* value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about problems with dependent services, such as WAF or Config, and
     * the error message received that indicates the problem with the service.</p>
     */
    inline PolicyComplianceDetail& AddIssueInfoMap(const DependentServiceName& key, const char* value) { m_issueInfoMapHasBeenSet = true; m_issueInfoMap.emplace(key, value); return *this; }

  private:

    Aws::String m_policyOwner;
    bool m_policyOwnerHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;

    Aws::Vector<ComplianceViolator> m_violators;
    bool m_violatorsHasBeenSet = false;

    bool m_evaluationLimitExceeded;
    bool m_evaluationLimitExceededHasBeenSet = false;

    Aws::Utils::DateTime m_expiredAt;
    bool m_expiredAtHasBeenSet = false;

    Aws::Map<DependentServiceName, Aws::String> m_issueInfoMap;
    bool m_issueInfoMapHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
