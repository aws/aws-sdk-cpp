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


    ///@{
    /**
     * <p>Name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }
    inline ConformancePackRuleCompliance& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}
    inline ConformancePackRuleCompliance& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}
    inline ConformancePackRuleCompliance& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compliance of the Config rule.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline ConformancePackRuleCompliance& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}
    inline ConformancePackRuleCompliance& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetControls() const{ return m_controls; }
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }
    inline void SetControls(const Aws::Vector<Aws::String>& value) { m_controlsHasBeenSet = true; m_controls = value; }
    inline void SetControls(Aws::Vector<Aws::String>&& value) { m_controlsHasBeenSet = true; m_controls = std::move(value); }
    inline ConformancePackRuleCompliance& WithControls(const Aws::Vector<Aws::String>& value) { SetControls(value); return *this;}
    inline ConformancePackRuleCompliance& WithControls(Aws::Vector<Aws::String>&& value) { SetControls(std::move(value)); return *this;}
    inline ConformancePackRuleCompliance& AddControls(const Aws::String& value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }
    inline ConformancePackRuleCompliance& AddControls(Aws::String&& value) { m_controlsHasBeenSet = true; m_controls.push_back(std::move(value)); return *this; }
    inline ConformancePackRuleCompliance& AddControls(const char* value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }
    ///@}
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
