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
  class EvaluationResult
  {
  public:
    AWS_FMS_API EvaluationResult() = default;
    AWS_FMS_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes an Amazon Web Services account's compliance with the Firewall
     * Manager policy.</p>
     */
    inline PolicyComplianceStatusType GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(PolicyComplianceStatusType value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline EvaluationResult& WithComplianceStatus(PolicyComplianceStatusType value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that are noncompliant with the specified policy. For
     * WAF and Shield Advanced policies, a resource is considered noncompliant if it is
     * not associated with the policy. For security group policies, a resource is
     * considered noncompliant if it doesn't comply with the rules of the policy and
     * remediation is disabled or not possible.</p>
     */
    inline long long GetViolatorCount() const { return m_violatorCount; }
    inline bool ViolatorCountHasBeenSet() const { return m_violatorCountHasBeenSet; }
    inline void SetViolatorCount(long long value) { m_violatorCountHasBeenSet = true; m_violatorCount = value; }
    inline EvaluationResult& WithViolatorCount(long long value) { SetViolatorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that over 100 resources are noncompliant with the Firewall Manager
     * policy.</p>
     */
    inline bool GetEvaluationLimitExceeded() const { return m_evaluationLimitExceeded; }
    inline bool EvaluationLimitExceededHasBeenSet() const { return m_evaluationLimitExceededHasBeenSet; }
    inline void SetEvaluationLimitExceeded(bool value) { m_evaluationLimitExceededHasBeenSet = true; m_evaluationLimitExceeded = value; }
    inline EvaluationResult& WithEvaluationLimitExceeded(bool value) { SetEvaluationLimitExceeded(value); return *this;}
    ///@}
  private:

    PolicyComplianceStatusType m_complianceStatus{PolicyComplianceStatusType::NOT_SET};
    bool m_complianceStatusHasBeenSet = false;

    long long m_violatorCount{0};
    bool m_violatorCountHasBeenSet = false;

    bool m_evaluationLimitExceeded{false};
    bool m_evaluationLimitExceededHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
