/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/LateDataRuleConfiguration.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>A structure that contains the name and configuration information of a late
   * data rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/LateDataRule">AWS
   * API Reference</a></p>
   */
  class LateDataRule
  {
  public:
    AWS_IOTANALYTICS_API LateDataRule() = default;
    AWS_IOTANALYTICS_API LateDataRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API LateDataRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the late data rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    LateDataRule& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information needed to configure the late data rule.</p>
     */
    inline const LateDataRuleConfiguration& GetRuleConfiguration() const { return m_ruleConfiguration; }
    inline bool RuleConfigurationHasBeenSet() const { return m_ruleConfigurationHasBeenSet; }
    template<typename RuleConfigurationT = LateDataRuleConfiguration>
    void SetRuleConfiguration(RuleConfigurationT&& value) { m_ruleConfigurationHasBeenSet = true; m_ruleConfiguration = std::forward<RuleConfigurationT>(value); }
    template<typename RuleConfigurationT = LateDataRuleConfiguration>
    LateDataRule& WithRuleConfiguration(RuleConfigurationT&& value) { SetRuleConfiguration(std::forward<RuleConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    LateDataRuleConfiguration m_ruleConfiguration;
    bool m_ruleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
