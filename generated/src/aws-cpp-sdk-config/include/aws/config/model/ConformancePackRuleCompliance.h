/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Compliance information of one or more Config rules within a conformance pack.
   * You can filter using Config rule names and compliance types.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackRuleCompliance">AWS
   * API Reference</a></p>
   */
  class ConformancePackRuleCompliance
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackRuleCompliance();
    AWS_CONFIGSERVICE_API ConformancePackRuleCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackRuleCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>Name of the Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>Name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>Name of the Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>Name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>Name of the Config rule.</p>
     */
    inline ConformancePackRuleCompliance& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>Name of the Config rule.</p>
     */
    inline ConformancePackRuleCompliance& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>Name of the Config rule.</p>
     */
    inline ConformancePackRuleCompliance& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>Compliance of the Config rule.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Compliance of the Config rule.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Compliance of the Config rule.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Compliance of the Config rule.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Compliance of the Config rule.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackRuleCompliance& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Compliance of the Config rule.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackRuleCompliance& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetControls() const{ return m_controls; }

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline void SetControls(const Aws::Vector<Aws::String>& value) { m_controlsHasBeenSet = true; m_controls = value; }

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline void SetControls(Aws::Vector<Aws::String>&& value) { m_controlsHasBeenSet = true; m_controls = std::move(value); }

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline ConformancePackRuleCompliance& WithControls(const Aws::Vector<Aws::String>& value) { SetControls(value); return *this;}

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline ConformancePackRuleCompliance& WithControls(Aws::Vector<Aws::String>&& value) { SetControls(std::move(value)); return *this;}

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline ConformancePackRuleCompliance& AddControls(const Aws::String& value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline ConformancePackRuleCompliance& AddControls(Aws::String&& value) { m_controlsHasBeenSet = true; m_controls.push_back(std::move(value)); return *this; }

    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline ConformancePackRuleCompliance& AddControls(const char* value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_controls;
    bool m_controlsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
