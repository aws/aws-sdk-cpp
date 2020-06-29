/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceType.h>
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
   * <p>Compliance information of one or more AWS Config rules within a conformance
   * pack. You can filter using AWS Config rule names and compliance
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackRuleCompliance">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConformancePackRuleCompliance
  {
  public:
    ConformancePackRuleCompliance();
    ConformancePackRuleCompliance(Aws::Utils::Json::JsonView jsonValue);
    ConformancePackRuleCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>Name of the config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>Name of the config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>Name of the config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>Name of the config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>Name of the config rule.</p>
     */
    inline ConformancePackRuleCompliance& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>Name of the config rule.</p>
     */
    inline ConformancePackRuleCompliance& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>Name of the config rule.</p>
     */
    inline ConformancePackRuleCompliance& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>Compliance of the AWS Config rule</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Compliance of the AWS Config rule</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Compliance of the AWS Config rule</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Compliance of the AWS Config rule</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Compliance of the AWS Config rule</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.</p>
     */
    inline ConformancePackRuleCompliance& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Compliance of the AWS Config rule</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.</p>
     */
    inline ConformancePackRuleCompliance& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
