/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/RuleConfig.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>A new gating rule for a control panel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/NewGatingRule">AWS
   * API Reference</a></p>
   */
  class NewGatingRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewGatingRule();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewGatingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewGatingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const{ return m_controlPanelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline void SetControlPanelArn(const Aws::String& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline void SetControlPanelArn(Aws::String&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline void SetControlPanelArn(const char* value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline NewGatingRule& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline NewGatingRule& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline NewGatingRule& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatingControls() const{ return m_gatingControls; }

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline bool GatingControlsHasBeenSet() const { return m_gatingControlsHasBeenSet; }

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline void SetGatingControls(const Aws::Vector<Aws::String>& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = value; }

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline void SetGatingControls(Aws::Vector<Aws::String>&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = std::move(value); }

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline NewGatingRule& WithGatingControls(const Aws::Vector<Aws::String>& value) { SetGatingControls(value); return *this;}

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline NewGatingRule& WithGatingControls(Aws::Vector<Aws::String>&& value) { SetGatingControls(std::move(value)); return *this;}

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline NewGatingRule& AddGatingControls(const Aws::String& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(value); return *this; }

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline NewGatingRule& AddGatingControls(Aws::String&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(std::move(value)); return *this; }

    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline NewGatingRule& AddGatingControls(const char* value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(value); return *this; }


    /**
     * <p>The name for the new gating rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline NewGatingRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline NewGatingRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the new gating rule.</p>
     */
    inline NewGatingRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many control states must be ON to allow you to change (set
     * or unset) the target control states.</p>
     */
    inline const RuleConfig& GetRuleConfig() const{ return m_ruleConfig; }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many control states must be ON to allow you to change (set
     * or unset) the target control states.</p>
     */
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many control states must be ON to allow you to change (set
     * or unset) the target control states.</p>
     */
    inline void SetRuleConfig(const RuleConfig& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = value; }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many control states must be ON to allow you to change (set
     * or unset) the target control states.</p>
     */
    inline void SetRuleConfig(RuleConfig&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::move(value); }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many control states must be ON to allow you to change (set
     * or unset) the target control states.</p>
     */
    inline NewGatingRule& WithRuleConfig(const RuleConfig& value) { SetRuleConfig(value); return *this;}

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many control states must be ON to allow you to change (set
     * or unset) the target control states.</p>
     */
    inline NewGatingRule& WithRuleConfig(RuleConfig&& value) { SetRuleConfig(std::move(value)); return *this;}


    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetControls() const{ return m_targetControls; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline bool TargetControlsHasBeenSet() const { return m_targetControlsHasBeenSet; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline void SetTargetControls(const Aws::Vector<Aws::String>& value) { m_targetControlsHasBeenSet = true; m_targetControls = value; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline void SetTargetControls(Aws::Vector<Aws::String>&& value) { m_targetControlsHasBeenSet = true; m_targetControls = std::move(value); }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline NewGatingRule& WithTargetControls(const Aws::Vector<Aws::String>& value) { SetTargetControls(value); return *this;}

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline NewGatingRule& WithTargetControls(Aws::Vector<Aws::String>&& value) { SetTargetControls(std::move(value)); return *this;}

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline NewGatingRule& AddTargetControls(const Aws::String& value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(value); return *this; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline NewGatingRule& AddTargetControls(Aws::String&& value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(std::move(value)); return *this; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify AtLeast 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline NewGatingRule& AddTargetControls(const char* value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(value); return *this; }


    /**
     * <p>An evaluation period, in milliseconds (ms), during which any request against
     * the target routing controls will fail. This helps prevent "flapping" of state.
     * The wait period is 5000 ms by default, but you can choose a custom value.</p>
     */
    inline int GetWaitPeriodMs() const{ return m_waitPeriodMs; }

    /**
     * <p>An evaluation period, in milliseconds (ms), during which any request against
     * the target routing controls will fail. This helps prevent "flapping" of state.
     * The wait period is 5000 ms by default, but you can choose a custom value.</p>
     */
    inline bool WaitPeriodMsHasBeenSet() const { return m_waitPeriodMsHasBeenSet; }

    /**
     * <p>An evaluation period, in milliseconds (ms), during which any request against
     * the target routing controls will fail. This helps prevent "flapping" of state.
     * The wait period is 5000 ms by default, but you can choose a custom value.</p>
     */
    inline void SetWaitPeriodMs(int value) { m_waitPeriodMsHasBeenSet = true; m_waitPeriodMs = value; }

    /**
     * <p>An evaluation period, in milliseconds (ms), during which any request against
     * the target routing controls will fail. This helps prevent "flapping" of state.
     * The wait period is 5000 ms by default, but you can choose a custom value.</p>
     */
    inline NewGatingRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}

  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatingControls;
    bool m_gatingControlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleConfig m_ruleConfig;
    bool m_ruleConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetControls;
    bool m_targetControlsHasBeenSet = false;

    int m_waitPeriodMs;
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
