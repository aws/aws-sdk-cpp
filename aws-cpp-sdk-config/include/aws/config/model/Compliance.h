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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ComplianceType.h>
#include <aws/config/model/ComplianceContributorCount.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Indicates whether an AWS resource or AWS Config rule is compliant and
   * provides the number of contributors that affect the compliance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Compliance">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API Compliance
  {
  public:
    Compliance();
    Compliance(Aws::Utils::Json::JsonView jsonValue);
    Compliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether an AWS resource or AWS Config rule is compliant.</p> <p>A
     * resource is compliant if it complies with all of the AWS Config rules that
     * evaluate it. A resource is noncompliant if it does not comply with one or more
     * of these rules.</p> <p>A rule is compliant if all of the resources that the rule
     * evaluates comply with it. A rule is noncompliant if any of these resources do
     * not comply.</p> <p>AWS Config returns the <code>INSUFFICIENT_DATA</code> value
     * when no evaluation results are available for the AWS resource or AWS Config
     * rule.</p> <p>For the <code>Compliance</code> data type, AWS Config supports only
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code> values. AWS Config does not support the
     * <code>NOT_APPLICABLE</code> value for the <code>Compliance</code> data type.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Indicates whether an AWS resource or AWS Config rule is compliant.</p> <p>A
     * resource is compliant if it complies with all of the AWS Config rules that
     * evaluate it. A resource is noncompliant if it does not comply with one or more
     * of these rules.</p> <p>A rule is compliant if all of the resources that the rule
     * evaluates comply with it. A rule is noncompliant if any of these resources do
     * not comply.</p> <p>AWS Config returns the <code>INSUFFICIENT_DATA</code> value
     * when no evaluation results are available for the AWS resource or AWS Config
     * rule.</p> <p>For the <code>Compliance</code> data type, AWS Config supports only
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code> values. AWS Config does not support the
     * <code>NOT_APPLICABLE</code> value for the <code>Compliance</code> data type.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Indicates whether an AWS resource or AWS Config rule is compliant.</p> <p>A
     * resource is compliant if it complies with all of the AWS Config rules that
     * evaluate it. A resource is noncompliant if it does not comply with one or more
     * of these rules.</p> <p>A rule is compliant if all of the resources that the rule
     * evaluates comply with it. A rule is noncompliant if any of these resources do
     * not comply.</p> <p>AWS Config returns the <code>INSUFFICIENT_DATA</code> value
     * when no evaluation results are available for the AWS resource or AWS Config
     * rule.</p> <p>For the <code>Compliance</code> data type, AWS Config supports only
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code> values. AWS Config does not support the
     * <code>NOT_APPLICABLE</code> value for the <code>Compliance</code> data type.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether an AWS resource or AWS Config rule is compliant.</p> <p>A
     * resource is compliant if it complies with all of the AWS Config rules that
     * evaluate it. A resource is noncompliant if it does not comply with one or more
     * of these rules.</p> <p>A rule is compliant if all of the resources that the rule
     * evaluates comply with it. A rule is noncompliant if any of these resources do
     * not comply.</p> <p>AWS Config returns the <code>INSUFFICIENT_DATA</code> value
     * when no evaluation results are available for the AWS resource or AWS Config
     * rule.</p> <p>For the <code>Compliance</code> data type, AWS Config supports only
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code> values. AWS Config does not support the
     * <code>NOT_APPLICABLE</code> value for the <code>Compliance</code> data type.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Indicates whether an AWS resource or AWS Config rule is compliant.</p> <p>A
     * resource is compliant if it complies with all of the AWS Config rules that
     * evaluate it. A resource is noncompliant if it does not comply with one or more
     * of these rules.</p> <p>A rule is compliant if all of the resources that the rule
     * evaluates comply with it. A rule is noncompliant if any of these resources do
     * not comply.</p> <p>AWS Config returns the <code>INSUFFICIENT_DATA</code> value
     * when no evaluation results are available for the AWS resource or AWS Config
     * rule.</p> <p>For the <code>Compliance</code> data type, AWS Config supports only
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code> values. AWS Config does not support the
     * <code>NOT_APPLICABLE</code> value for the <code>Compliance</code> data type.</p>
     */
    inline Compliance& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Indicates whether an AWS resource or AWS Config rule is compliant.</p> <p>A
     * resource is compliant if it complies with all of the AWS Config rules that
     * evaluate it. A resource is noncompliant if it does not comply with one or more
     * of these rules.</p> <p>A rule is compliant if all of the resources that the rule
     * evaluates comply with it. A rule is noncompliant if any of these resources do
     * not comply.</p> <p>AWS Config returns the <code>INSUFFICIENT_DATA</code> value
     * when no evaluation results are available for the AWS resource or AWS Config
     * rule.</p> <p>For the <code>Compliance</code> data type, AWS Config supports only
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code> values. AWS Config does not support the
     * <code>NOT_APPLICABLE</code> value for the <code>Compliance</code> data type.</p>
     */
    inline Compliance& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>The number of AWS resources or AWS Config rules that cause a result of
     * <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline const ComplianceContributorCount& GetComplianceContributorCount() const{ return m_complianceContributorCount; }

    /**
     * <p>The number of AWS resources or AWS Config rules that cause a result of
     * <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline bool ComplianceContributorCountHasBeenSet() const { return m_complianceContributorCountHasBeenSet; }

    /**
     * <p>The number of AWS resources or AWS Config rules that cause a result of
     * <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline void SetComplianceContributorCount(const ComplianceContributorCount& value) { m_complianceContributorCountHasBeenSet = true; m_complianceContributorCount = value; }

    /**
     * <p>The number of AWS resources or AWS Config rules that cause a result of
     * <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline void SetComplianceContributorCount(ComplianceContributorCount&& value) { m_complianceContributorCountHasBeenSet = true; m_complianceContributorCount = std::move(value); }

    /**
     * <p>The number of AWS resources or AWS Config rules that cause a result of
     * <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline Compliance& WithComplianceContributorCount(const ComplianceContributorCount& value) { SetComplianceContributorCount(value); return *this;}

    /**
     * <p>The number of AWS resources or AWS Config rules that cause a result of
     * <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline Compliance& WithComplianceContributorCount(ComplianceContributorCount&& value) { SetComplianceContributorCount(std::move(value)); return *this;}

  private:

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet;

    ComplianceContributorCount m_complianceContributorCount;
    bool m_complianceContributorCountHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
