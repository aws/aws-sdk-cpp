﻿/*
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
#include <aws/fms/model/EvaluationResult.h>
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
   * account is considered non-compliant if it includes resources that are not
   * protected by the policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyComplianceStatus">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API PolicyComplianceStatus
  {
  public:
    PolicyComplianceStatus();
    PolicyComplianceStatus(Aws::Utils::Json::JsonView jsonValue);
    PolicyComplianceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PolicyComplianceStatus& WithPolicyOwner(const Aws::String& value) { SetPolicyOwner(value); return *this;}

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyOwner(Aws::String&& value) { SetPolicyOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account that created the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyOwner(const char* value) { SetPolicyOwner(value); return *this;}


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
    inline PolicyComplianceStatus& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline PolicyComplianceStatus& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The member account ID.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

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
     * <p>Time stamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>Time stamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>Time stamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>Time stamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline PolicyComplianceStatus& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>Time stamp of the last update to the <code>EvaluationResult</code>
     * objects.</p>
     */
    inline PolicyComplianceStatus& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_policyOwner;
    bool m_policyOwnerHasBeenSet;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet;

    Aws::Vector<EvaluationResult> m_evaluationResults;
    bool m_evaluationResultsHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
