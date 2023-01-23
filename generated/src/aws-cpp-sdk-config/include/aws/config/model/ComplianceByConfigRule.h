/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Compliance.h>
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
   * <p>Indicates whether an Config rule is compliant. A rule is compliant if all of
   * the resources that the rule evaluated comply with it. A rule is noncompliant if
   * any of these resources do not comply.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceByConfigRule">AWS
   * API Reference</a></p>
   */
  class ComplianceByConfigRule
  {
  public:
    AWS_CONFIGSERVICE_API ComplianceByConfigRule();
    AWS_CONFIGSERVICE_API ComplianceByConfigRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceByConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline ComplianceByConfigRule& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline ComplianceByConfigRule& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline ComplianceByConfigRule& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline ComplianceByConfigRule& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline ComplianceByConfigRule& WithCompliance(Compliance&& value) { SetCompliance(std::move(value)); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Compliance m_compliance;
    bool m_complianceHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
