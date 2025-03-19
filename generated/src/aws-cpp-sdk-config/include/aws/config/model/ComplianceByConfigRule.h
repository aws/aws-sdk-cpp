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
    AWS_CONFIGSERVICE_API ComplianceByConfigRule() = default;
    AWS_CONFIGSERVICE_API ComplianceByConfigRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceByConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    ComplianceByConfigRule& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Config rule is compliant.</p>
     */
    inline const Compliance& GetCompliance() const { return m_compliance; }
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }
    template<typename ComplianceT = Compliance>
    void SetCompliance(ComplianceT&& value) { m_complianceHasBeenSet = true; m_compliance = std::forward<ComplianceT>(value); }
    template<typename ComplianceT = Compliance>
    ComplianceByConfigRule& WithCompliance(ComplianceT&& value) { SetCompliance(std::forward<ComplianceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Compliance m_compliance;
    bool m_complianceHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
