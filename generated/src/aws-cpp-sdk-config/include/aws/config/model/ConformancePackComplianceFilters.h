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
    AWS_CONFIGSERVICE_API ConformancePackComplianceFilters();
    AWS_CONFIGSERVICE_API ConformancePackComplianceFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::move(value); }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackComplianceFilters& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackComplianceFilters& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(std::move(value)); return *this;}

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackComplianceFilters& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackComplianceFilters& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackComplianceFilters& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }


    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackComplianceFilters& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackComplianceFilters& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
