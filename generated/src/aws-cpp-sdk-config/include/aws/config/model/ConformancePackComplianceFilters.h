/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackComplianceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Filters the conformance pack by compliance types and Config rule
   * names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackComplianceFilters">AWS
   * API Reference</a></p>
   */
  class ConformancePackComplianceFilters
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackComplianceFilters() = default;
    AWS_CONFIGSERVICE_API ConformancePackComplianceFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const { return m_configRuleNames; }
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    void SetConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::forward<ConfigRuleNamesT>(value); }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    ConformancePackComplianceFilters& WithConfigRuleNames(ConfigRuleNamesT&& value) { SetConfigRuleNames(std::forward<ConfigRuleNamesT>(value)); return *this;}
    template<typename ConfigRuleNamesT = Aws::String>
    ConformancePackComplianceFilters& AddConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.emplace_back(std::forward<ConfigRuleNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ConformancePackComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline ConformancePackComplianceFilters& WithComplianceType(ConformancePackComplianceType value) { SetComplianceType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    ConformancePackComplianceType m_complianceType{ConformancePackComplianceType::NOT_SET};
    bool m_complianceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
