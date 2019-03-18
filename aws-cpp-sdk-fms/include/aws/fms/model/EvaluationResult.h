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
   * non-compliant if it includes resources that are not protected by the specified
   * policy.</p><p><h3>See Also:</h3>   <a
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
     * <p>Number of resources that are non-compliant with the specified policy. A
     * resource is considered non-compliant if it is not associated with the specified
     * policy.</p>
     */
    inline long long GetViolatorCount() const{ return m_violatorCount; }

    /**
     * <p>Number of resources that are non-compliant with the specified policy. A
     * resource is considered non-compliant if it is not associated with the specified
     * policy.</p>
     */
    inline bool ViolatorCountHasBeenSet() const { return m_violatorCountHasBeenSet; }

    /**
     * <p>Number of resources that are non-compliant with the specified policy. A
     * resource is considered non-compliant if it is not associated with the specified
     * policy.</p>
     */
    inline void SetViolatorCount(long long value) { m_violatorCountHasBeenSet = true; m_violatorCount = value; }

    /**
     * <p>Number of resources that are non-compliant with the specified policy. A
     * resource is considered non-compliant if it is not associated with the specified
     * policy.</p>
     */
    inline EvaluationResult& WithViolatorCount(long long value) { SetViolatorCount(value); return *this;}


    /**
     * <p>Indicates that over 100 resources are non-compliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline bool GetEvaluationLimitExceeded() const{ return m_evaluationLimitExceeded; }

    /**
     * <p>Indicates that over 100 resources are non-compliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline bool EvaluationLimitExceededHasBeenSet() const { return m_evaluationLimitExceededHasBeenSet; }

    /**
     * <p>Indicates that over 100 resources are non-compliant with the AWS Firewall
     * Manager policy.</p>
     */
    inline void SetEvaluationLimitExceeded(bool value) { m_evaluationLimitExceededHasBeenSet = true; m_evaluationLimitExceeded = value; }

    /**
     * <p>Indicates that over 100 resources are non-compliant with the AWS Firewall
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
