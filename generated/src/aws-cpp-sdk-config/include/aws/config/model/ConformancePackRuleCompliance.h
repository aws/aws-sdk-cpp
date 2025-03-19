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
    AWS_CONFIGSERVICE_API ConformancePackRuleCompliance() = default;
    AWS_CONFIGSERVICE_API ConformancePackRuleCompliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackRuleCompliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    ConformancePackRuleCompliance& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compliance of the Config rule.</p>
     */
    inline ConformancePackComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ConformancePackComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline ConformancePackRuleCompliance& WithComplianceType(ConformancePackComplianceType value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls for the conformance pack. A control is a process to prevent or
     * detect problems while meeting objectives. A control can align with a specific
     * compliance regime or map to internal controls defined by an organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetControls() const { return m_controls; }
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }
    template<typename ControlsT = Aws::Vector<Aws::String>>
    void SetControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls = std::forward<ControlsT>(value); }
    template<typename ControlsT = Aws::Vector<Aws::String>>
    ConformancePackRuleCompliance& WithControls(ControlsT&& value) { SetControls(std::forward<ControlsT>(value)); return *this;}
    template<typename ControlsT = Aws::String>
    ConformancePackRuleCompliance& AddControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls.emplace_back(std::forward<ControlsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    ConformancePackComplianceType m_complianceType{ConformancePackComplianceType::NOT_SET};
    bool m_complianceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_controls;
    bool m_controlsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
