/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fms/model/ComplianceViolator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Describes the non-compliant resources in a member account for a specific AWS
   * Firewall Manager policy. A maximum of 100 entries are displayed. If more than
   * 100 resources are non-compliant, <code>EvaluationLimitExceeded</code> is set to
   * <code>True</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyComplianceDetail">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API PolicyComplianceDetail
  {
  public:
    PolicyComplianceDetail();
    PolicyComplianceDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    PolicyComplianceDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyOwner() const{ return m_policyOwner; }

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyOwner(const Aws::String& value) { m_policyOwnerHasBeenSet = true; m_policyOwner = value; }

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyOwner(Aws::String&& value) { m_policyOwnerHasBeenSet = true; m_policyOwner = std::move(value); }

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyOwner(const char* value) { m_policyOwnerHasBeenSet = true; m_policyOwner.assign(value); }

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyOwner(const Aws::String& value) { SetPolicyOwner(value); return *this;}

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyOwner(Aws::String&& value) { SetPolicyOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyOwner(const char* value) { SetPolicyOwner(value); return *this;}


    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline PolicyComplianceDetail& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline PolicyComplianceDetail& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline PolicyComplianceDetail& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}


    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline const Aws::Vector<ComplianceViolator>& GetViolators() const{ return m_violators; }

    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline void SetViolators(const Aws::Vector<ComplianceViolator>& value) { m_violatorsHasBeenSet = true; m_violators = value; }

    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline void SetViolators(Aws::Vector<ComplianceViolator>&& value) { m_violatorsHasBeenSet = true; m_violators = std::move(value); }

    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline PolicyComplianceDetail& WithViolators(const Aws::Vector<ComplianceViolator>& value) { SetViolators(value); return *this;}

    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline PolicyComplianceDetail& WithViolators(Aws::Vector<ComplianceViolator>&& value) { SetViolators(std::move(value)); return *this;}

    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline PolicyComplianceDetail& AddViolators(const ComplianceViolator& value) { m_violatorsHasBeenSet = true; m_violators.push_back(value); return *this; }

    /**
     * <p>An array of resources that are not protected by the policy.</p>
     */
    inline PolicyComplianceDetail& AddViolators(ComplianceViolator&& value) { m_violatorsHasBeenSet = true; m_violators.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates if over 100 resources are non-compliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline bool GetEvaluationLimitExceeded() const{ return m_evaluationLimitExceeded; }

    /**
     * <p>Indicates if over 100 resources are non-compliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline void SetEvaluationLimitExceeded(bool value) { m_evaluationLimitExceededHasBeenSet = true; m_evaluationLimitExceeded = value; }

    /**
     * <p>Indicates if over 100 resources are non-compliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline PolicyComplianceDetail& WithEvaluationLimitExceeded(bool value) { SetEvaluationLimitExceeded(value); return *this;}


    /**
     * <p>A time stamp that indicates when the returned information should be
     * considered out-of-date.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiredAt() const{ return m_expiredAt; }

    /**
     * <p>A time stamp that indicates when the returned information should be
     * considered out-of-date.</p>
     */
    inline void SetExpiredAt(const Aws::Utils::DateTime& value) { m_expiredAtHasBeenSet = true; m_expiredAt = value; }

    /**
     * <p>A time stamp that indicates when the returned information should be
     * considered out-of-date.</p>
     */
    inline void SetExpiredAt(Aws::Utils::DateTime&& value) { m_expiredAtHasBeenSet = true; m_expiredAt = std::move(value); }

    /**
     * <p>A time stamp that indicates when the returned information should be
     * considered out-of-date.</p>
     */
    inline PolicyComplianceDetail& WithExpiredAt(const Aws::Utils::DateTime& value) { SetExpiredAt(value); return *this;}

    /**
     * <p>A time stamp that indicates when the returned information should be
     * considered out-of-date.</p>
     */
    inline PolicyComplianceDetail& WithExpiredAt(Aws::Utils::DateTime&& value) { SetExpiredAt(std::move(value)); return *this;}

  private:

    Aws::String m_policyOwner;
    bool m_policyOwnerHasBeenSet;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet;

    Aws::Vector<ComplianceViolator> m_violators;
    bool m_violatorsHasBeenSet;

    bool m_evaluationLimitExceeded;
    bool m_evaluationLimitExceededHasBeenSet;

    Aws::Utils::DateTime m_expiredAt;
    bool m_expiredAtHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
