/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Indicates whether an Amazon Web Services resource or Config rule is compliant
   * and provides the number of contributors that affect the
   * compliance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Compliance">AWS
   * API Reference</a></p>
   */
  class Compliance
  {
  public:
    AWS_CONFIGSERVICE_API Compliance();
    AWS_CONFIGSERVICE_API Compliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Compliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is
     * compliant.</p> <p>A resource is compliant if it complies with all of the Config
     * rules that evaluate it. A resource is noncompliant if it does not comply with
     * one or more of these rules.</p> <p>A rule is compliant if all of the resources
     * that the rule evaluates comply with it. A rule is noncompliant if any of these
     * resources do not comply.</p> <p>Config returns the
     * <code>INSUFFICIENT_DATA</code> value when no evaluation results are available
     * for the Amazon Web Services resource or Config rule.</p> <p>For the
     * <code>Compliance</code> data type, Config supports only <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>INSUFFICIENT_DATA</code> values. Config
     * does not support the <code>NOT_APPLICABLE</code> value for the
     * <code>Compliance</code> data type.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is
     * compliant.</p> <p>A resource is compliant if it complies with all of the Config
     * rules that evaluate it. A resource is noncompliant if it does not comply with
     * one or more of these rules.</p> <p>A rule is compliant if all of the resources
     * that the rule evaluates comply with it. A rule is noncompliant if any of these
     * resources do not comply.</p> <p>Config returns the
     * <code>INSUFFICIENT_DATA</code> value when no evaluation results are available
     * for the Amazon Web Services resource or Config rule.</p> <p>For the
     * <code>Compliance</code> data type, Config supports only <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>INSUFFICIENT_DATA</code> values. Config
     * does not support the <code>NOT_APPLICABLE</code> value for the
     * <code>Compliance</code> data type.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is
     * compliant.</p> <p>A resource is compliant if it complies with all of the Config
     * rules that evaluate it. A resource is noncompliant if it does not comply with
     * one or more of these rules.</p> <p>A rule is compliant if all of the resources
     * that the rule evaluates comply with it. A rule is noncompliant if any of these
     * resources do not comply.</p> <p>Config returns the
     * <code>INSUFFICIENT_DATA</code> value when no evaluation results are available
     * for the Amazon Web Services resource or Config rule.</p> <p>For the
     * <code>Compliance</code> data type, Config supports only <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>INSUFFICIENT_DATA</code> values. Config
     * does not support the <code>NOT_APPLICABLE</code> value for the
     * <code>Compliance</code> data type.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is
     * compliant.</p> <p>A resource is compliant if it complies with all of the Config
     * rules that evaluate it. A resource is noncompliant if it does not comply with
     * one or more of these rules.</p> <p>A rule is compliant if all of the resources
     * that the rule evaluates comply with it. A rule is noncompliant if any of these
     * resources do not comply.</p> <p>Config returns the
     * <code>INSUFFICIENT_DATA</code> value when no evaluation results are available
     * for the Amazon Web Services resource or Config rule.</p> <p>For the
     * <code>Compliance</code> data type, Config supports only <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>INSUFFICIENT_DATA</code> values. Config
     * does not support the <code>NOT_APPLICABLE</code> value for the
     * <code>Compliance</code> data type.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is
     * compliant.</p> <p>A resource is compliant if it complies with all of the Config
     * rules that evaluate it. A resource is noncompliant if it does not comply with
     * one or more of these rules.</p> <p>A rule is compliant if all of the resources
     * that the rule evaluates comply with it. A rule is noncompliant if any of these
     * resources do not comply.</p> <p>Config returns the
     * <code>INSUFFICIENT_DATA</code> value when no evaluation results are available
     * for the Amazon Web Services resource or Config rule.</p> <p>For the
     * <code>Compliance</code> data type, Config supports only <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>INSUFFICIENT_DATA</code> values. Config
     * does not support the <code>NOT_APPLICABLE</code> value for the
     * <code>Compliance</code> data type.</p>
     */
    inline Compliance& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Indicates whether an Amazon Web Services resource or Config rule is
     * compliant.</p> <p>A resource is compliant if it complies with all of the Config
     * rules that evaluate it. A resource is noncompliant if it does not comply with
     * one or more of these rules.</p> <p>A rule is compliant if all of the resources
     * that the rule evaluates comply with it. A rule is noncompliant if any of these
     * resources do not comply.</p> <p>Config returns the
     * <code>INSUFFICIENT_DATA</code> value when no evaluation results are available
     * for the Amazon Web Services resource or Config rule.</p> <p>For the
     * <code>Compliance</code> data type, Config supports only <code>COMPLIANT</code>,
     * <code>NON_COMPLIANT</code>, and <code>INSUFFICIENT_DATA</code> values. Config
     * does not support the <code>NOT_APPLICABLE</code> value for the
     * <code>Compliance</code> data type.</p>
     */
    inline Compliance& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>The number of Amazon Web Services resources or Config rules that cause a
     * result of <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline const ComplianceContributorCount& GetComplianceContributorCount() const{ return m_complianceContributorCount; }

    /**
     * <p>The number of Amazon Web Services resources or Config rules that cause a
     * result of <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline bool ComplianceContributorCountHasBeenSet() const { return m_complianceContributorCountHasBeenSet; }

    /**
     * <p>The number of Amazon Web Services resources or Config rules that cause a
     * result of <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline void SetComplianceContributorCount(const ComplianceContributorCount& value) { m_complianceContributorCountHasBeenSet = true; m_complianceContributorCount = value; }

    /**
     * <p>The number of Amazon Web Services resources or Config rules that cause a
     * result of <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline void SetComplianceContributorCount(ComplianceContributorCount&& value) { m_complianceContributorCountHasBeenSet = true; m_complianceContributorCount = std::move(value); }

    /**
     * <p>The number of Amazon Web Services resources or Config rules that cause a
     * result of <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline Compliance& WithComplianceContributorCount(const ComplianceContributorCount& value) { SetComplianceContributorCount(value); return *this;}

    /**
     * <p>The number of Amazon Web Services resources or Config rules that cause a
     * result of <code>NON_COMPLIANT</code>, up to a maximum number.</p>
     */
    inline Compliance& WithComplianceContributorCount(ComplianceContributorCount&& value) { SetComplianceContributorCount(std::move(value)); return *this;}

  private:

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    ComplianceContributorCount m_complianceContributorCount;
    bool m_complianceContributorCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
