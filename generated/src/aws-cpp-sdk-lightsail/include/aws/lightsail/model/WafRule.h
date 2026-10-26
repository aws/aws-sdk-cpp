/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/WafAcfpConfig.h>
#include <aws/lightsail/model/WafAtpConfig.h>
#include <aws/lightsail/model/WafBotControlConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes a Web Application Firewall (WAF) rule group for a Lightsail
 * distribution. A WAF rule group is a set of rules managed by AWS. The rules
 * inspect viewer requests and block requests that match them.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/WafRule">AWS
 * API Reference</a></p>
 */
class WafRule {
 public:
  AWS_LIGHTSAIL_API WafRule() = default;
  AWS_LIGHTSAIL_API WafRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API WafRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the WAF rule group (for example,
   * <code>AWSManagedRulesCommonRuleSet</code>).</p> <p>For the WAF rule groups that
   * you can specify for each bundle, see the <code>wafRules</code> parameter of the
   * <code>CreateDistribution</code> action.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WafRule& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the configuration of the account takeover prevention
   * rule group.</p> <p>Constraints:</p> <ul> <li> <p>Define this parameter only when
   * the <code>name</code> is <code>AWSManagedRulesATPRuleSet</code>.</p> </li> <li>
   * <p>This parameter is required when the <code>name</code> is
   * <code>AWSManagedRulesATPRuleSet</code>.</p> </li> </ul>
   */
  inline const WafAtpConfig& GetAtpConfig() const { return m_atpConfig; }
  inline bool AtpConfigHasBeenSet() const { return m_atpConfigHasBeenSet; }
  template <typename AtpConfigT = WafAtpConfig>
  void SetAtpConfig(AtpConfigT&& value) {
    m_atpConfigHasBeenSet = true;
    m_atpConfig = std::forward<AtpConfigT>(value);
  }
  template <typename AtpConfigT = WafAtpConfig>
  WafRule& WithAtpConfig(AtpConfigT&& value) {
    SetAtpConfig(std::forward<AtpConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the configuration of the account creation fraud
   * prevention rule group.</p> <p>Constraints:</p> <ul> <li> <p>Define this
   * parameter only when the <code>name</code> is
   * <code>AWSManagedRulesACFPRuleSet</code>.</p> </li> <li> <p>This parameter is
   * required when the <code>name</code> is
   * <code>AWSManagedRulesACFPRuleSet</code>.</p> </li> </ul>
   */
  inline const WafAcfpConfig& GetAcfpConfig() const { return m_acfpConfig; }
  inline bool AcfpConfigHasBeenSet() const { return m_acfpConfigHasBeenSet; }
  template <typename AcfpConfigT = WafAcfpConfig>
  void SetAcfpConfig(AcfpConfigT&& value) {
    m_acfpConfigHasBeenSet = true;
    m_acfpConfig = std::forward<AcfpConfigT>(value);
  }
  template <typename AcfpConfigT = WafAcfpConfig>
  WafRule& WithAcfpConfig(AcfpConfigT&& value) {
    SetAcfpConfig(std::forward<AcfpConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the configuration of the bot control rule group.</p>
   * <p>Constraints:</p> <ul> <li> <p>Define this parameter only when the
   * <code>name</code> is <code>AWSManagedRulesBotControlRuleSet</code>.</p> </li>
   * <li> <p>This parameter is required when the <code>name</code> is
   * <code>AWSManagedRulesBotControlRuleSet</code>.</p> </li> </ul>
   */
  inline const WafBotControlConfig& GetBotControlConfig() const { return m_botControlConfig; }
  inline bool BotControlConfigHasBeenSet() const { return m_botControlConfigHasBeenSet; }
  template <typename BotControlConfigT = WafBotControlConfig>
  void SetBotControlConfig(BotControlConfigT&& value) {
    m_botControlConfigHasBeenSet = true;
    m_botControlConfig = std::forward<BotControlConfigT>(value);
  }
  template <typename BotControlConfigT = WafBotControlConfig>
  WafRule& WithBotControlConfig(BotControlConfigT&& value) {
    SetBotControlConfig(std::forward<BotControlConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  WafAtpConfig m_atpConfig;

  WafAcfpConfig m_acfpConfig;

  WafBotControlConfig m_botControlConfig;
  bool m_nameHasBeenSet = false;
  bool m_atpConfigHasBeenSet = false;
  bool m_acfpConfigHasBeenSet = false;
  bool m_botControlConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
