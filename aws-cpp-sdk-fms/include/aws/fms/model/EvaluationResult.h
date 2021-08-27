/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/PolicyComplianceStatusType.h>
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
   * <p>Describes the compliance status for the account. An account is considered
   * noncompliant if it includes resources that are not protected by the specified
   * policy or that don't comply with the policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API EvaluationResult
  {
  public:
    EvaluationResult();
    EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes an AWS account's compliance with the AWS Firewall Manager
     * policy.</p>
     */
    inline const PolicyComplianceStatusType& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>Describes an AWS account's compliance with the AWS Firewall Manager
     * policy.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>Describes an AWS account's compliance with the AWS Firewall Manager
     * policy.</p>
     */
    inline void SetComplianceStatus(const PolicyComplianceStatusType& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>Describes an AWS account's compliance with the AWS Firewall Manager
     * policy.</p>
     */
    inline void SetComplianceStatus(PolicyComplianceStatusType&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>Describes an AWS account's compliance with the AWS Firewall Manager
     * policy.</p>
     */
    inline EvaluationResult& WithComplianceStatus(const PolicyComplianceStatusType& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>Describes an AWS account's compliance with the AWS Firewall Manager
     * policy.</p>
     */
    inline EvaluationResult& WithComplianceStatus(PolicyComplianceStatusType&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>The number of resources that are noncompliant with the specified policy. For
     * AWS WAF and Shield Advanced policies, a resource is considered noncompliant if
     * it is not associated with the policy. For security group policies, a resource is
     * considered noncompliant if it doesn't comply with the rules of the policy and
     * remediation is disabled or not possible.</p>
     */
    inline long long GetViolatorCount() const{ return m_violatorCount; }

    /**
     * <p>The number of resources that are noncompliant with the specified policy. For
     * AWS WAF and Shield Advanced policies, a resource is considered noncompliant if
     * it is not associated with the policy. For security group policies, a resource is
     * considered noncompliant if it doesn't comply with the rules of the policy and
     * remediation is disabled or not possible.</p>
     */
    inline bool ViolatorCountHasBeenSet() const { return m_violatorCountHasBeenSet; }

    /**
     * <p>The number of resources that are noncompliant with the specified policy. For
     * AWS WAF and Shield Advanced policies, a resource is considered noncompliant if
     * it is not associated with the policy. For security group policies, a resource is
     * considered noncompliant if it doesn't comply with the rules of the policy and
     * remediation is disabled or not possible.</p>
     */
    inline void SetViolatorCount(long long value) { m_violatorCountHasBeenSet = true; m_violatorCount = value; }

    /**
     * <p>The number of resources that are noncompliant with the specified policy. For
     * AWS WAF and Shield Advanced policies, a resource is considered noncompliant if
     * it is not associated with the policy. For security group policies, a resource is
     * considered noncompliant if it doesn't comply with the rules of the policy and
     * remediation is disabled or not possible.</p>
     */
    inline EvaluationResult& WithViolatorCount(long long value) { SetViolatorCount(value); return *this;}


    /**
     * <p>Indicates that over 100 resources are noncompliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline bool GetEvaluationLimitExceeded() const{ return m_evaluationLimitExceeded; }

    /**
     * <p>Indicates that over 100 resources are noncompliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline bool EvaluationLimitExceededHasBeenSet() const { return m_evaluationLimitExceededHasBeenSet; }

    /**
     * <p>Indicates that over 100 resources are noncompliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline void SetEvaluationLimitExceeded(bool value) { m_evaluationLimitExceededHasBeenSet = true; m_evaluationLimitExceeded = value; }

    /**
     * <p>Indicates that over 100 resources are noncompliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline EvaluationResult& WithEvaluationLimitExceeded(bool value) { SetEvaluationLimitExceeded(value); return *this;}

  private:

    PolicyComplianceStatusType m_complianceStatus;
    bool m_complianceStatusHasBeenSet;

    long long m_violatorCount;
    bool m_violatorCountHasBeenSet;

    bool m_evaluationLimitExceeded;
    bool m_evaluationLimitExceededHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
