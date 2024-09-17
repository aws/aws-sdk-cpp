/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ConfigRuleComplianceFilters
  {
  public:
    AWS_CONFIGSERVICE_API ConfigRuleComplianceFilters();
    AWS_CONFIGSERVICE_API ConfigRuleComplianceFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigRuleComplianceFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }
    inline ConfigRuleComplianceFilters& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}
    inline ConfigRuleComplianceFilters& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}
    inline ConfigRuleComplianceFilters& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule compliance status.</p> <p>For the
     * <code>ConfigRuleComplianceFilters</code> data type, Config supports only
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. Config does not support
     * the <code>NOT_APPLICABLE</code> and the <code>INSUFFICIENT_DATA</code>
     * values.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline ConfigRuleComplianceFilters& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}
    inline ConfigRuleComplianceFilters& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the source account. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ConfigRuleComplianceFilters& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ConfigRuleComplianceFilters& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ConfigRuleComplianceFilters& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region where the data is aggregated. </p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline ConfigRuleComplianceFilters& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline ConfigRuleComplianceFilters& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline ConfigRuleComplianceFilters& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
