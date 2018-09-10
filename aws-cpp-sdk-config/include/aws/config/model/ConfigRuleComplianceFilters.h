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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceType.h>
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
   * <p>Filters the compliance results based on account ID, region, compliance type,
   * and rule name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigRuleComplianceFilters">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConfigRuleComplianceFilters
  {
  public:
    ConfigRuleComplianceFilters();
    ConfigRuleComplianceFilters(Aws::Utils::Json::JsonView jsonValue);
    ConfigRuleComplianceFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ConfigRuleComplianceFilters& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ConfigRuleComplianceFilters& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ConfigRuleComplianceFilters& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>The rule compliance status.</p> <p>For the
     * <code>ConfigRuleComplianceFilters</code> data type, AWS Config supports only
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. AWS Config does not
     * support the <code>NOT_APPLICABLE</code> and the <code>INSUFFICIENT_DATA</code>
     * values.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The rule compliance status.</p> <p>For the
     * <code>ConfigRuleComplianceFilters</code> data type, AWS Config supports only
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. AWS Config does not
     * support the <code>NOT_APPLICABLE</code> and the <code>INSUFFICIENT_DATA</code>
     * values.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The rule compliance status.</p> <p>For the
     * <code>ConfigRuleComplianceFilters</code> data type, AWS Config supports only
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. AWS Config does not
     * support the <code>NOT_APPLICABLE</code> and the <code>INSUFFICIENT_DATA</code>
     * values.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The rule compliance status.</p> <p>For the
     * <code>ConfigRuleComplianceFilters</code> data type, AWS Config supports only
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. AWS Config does not
     * support the <code>NOT_APPLICABLE</code> and the <code>INSUFFICIENT_DATA</code>
     * values.</p>
     */
    inline ConfigRuleComplianceFilters& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The rule compliance status.</p> <p>For the
     * <code>ConfigRuleComplianceFilters</code> data type, AWS Config supports only
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. AWS Config does not
     * support the <code>NOT_APPLICABLE</code> and the <code>INSUFFICIENT_DATA</code>
     * values.</p>
     */
    inline ConfigRuleComplianceFilters& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline ConfigRuleComplianceFilters& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline ConfigRuleComplianceFilters& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline ConfigRuleComplianceFilters& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline ConfigRuleComplianceFilters& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline ConfigRuleComplianceFilters& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline ConfigRuleComplianceFilters& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
