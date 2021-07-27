/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/RuleConfig.h>
#include <aws/route53-recovery-control-config/model/Status.h>
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
   * <p>A gating rule verifies that a set of gating controls evaluates as true, based
   * on a rule configuration that you specify. If the gating rule evaluates to true,
   * Amazon Route 53 Application Recovery Controller allows a set of routing control
   * state changes to run and complete against the set of target
   * controls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/GatingRule">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule
  {
  public:
    GatingRule();
    GatingRule(Aws::Utils::Json::JsonView jsonValue);
    GatingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline GatingRule& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline GatingRule& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline GatingRule& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatingControls() const{ return m_gatingControls; }

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline bool GatingControlsHasBeenSet() const { return m_gatingControlsHasBeenSet; }

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline void SetGatingControls(const Aws::Vector<Aws::String>& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = value; }

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline void SetGatingControls(Aws::Vector<Aws::String>&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = std::move(value); }

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline GatingRule& WithGatingControls(const Aws::Vector<Aws::String>& value) { SetGatingControls(value); return *this;}

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline GatingRule& WithGatingControls(Aws::Vector<Aws::String>&& value) { SetGatingControls(std::move(value)); return *this;}

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline GatingRule& AddGatingControls(const Aws::String& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(value); return *this; }

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline GatingRule& AddGatingControls(Aws::String&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(std::move(value)); return *this; }

    /**
     * <p>The gating controls for the gating rule. That is, routing controls that are
     * evaluated by the rule configuration that you specify.</p>
     */
    inline GatingRule& AddGatingControls(const char* value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(value); return *this; }


    /**
     * <p>The name for the gating rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the gating rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the gating rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the gating rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the gating rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the gating rule.</p>
     */
    inline GatingRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the gating rule.</p>
     */
    inline GatingRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the gating rule.</p>
     */
    inline GatingRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many controls must be enabled to allow you to change (set or
     * unset) the target controls.</p>
     */
    inline const RuleConfig& GetRuleConfig() const{ return m_ruleConfig; }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many controls must be enabled to allow you to change (set or
     * unset) the target controls.</p>
     */
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many controls must be enabled to allow you to change (set or
     * unset) the target controls.</p>
     */
    inline void SetRuleConfig(const RuleConfig& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = value; }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many controls must be enabled to allow you to change (set or
     * unset) the target controls.</p>
     */
    inline void SetRuleConfig(RuleConfig&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::move(value); }

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many controls must be enabled to allow you to change (set or
     * unset) the target controls.</p>
     */
    inline GatingRule& WithRuleConfig(const RuleConfig& value) { SetRuleConfig(value); return *this;}

    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designates how many controls must be enabled to allow you to change (set or
     * unset) the target controls.</p>
     */
    inline GatingRule& WithRuleConfig(RuleConfig&& value) { SetRuleConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline const Aws::String& GetSafetyRuleArn() const{ return m_safetyRuleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline bool SafetyRuleArnHasBeenSet() const { return m_safetyRuleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline void SetSafetyRuleArn(const Aws::String& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline void SetSafetyRuleArn(Aws::String&& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline void SetSafetyRuleArn(const char* value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline GatingRule& WithSafetyRuleArn(const Aws::String& value) { SetSafetyRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline GatingRule& WithSafetyRuleArn(Aws::String&& value) { SetSafetyRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline GatingRule& WithSafetyRuleArn(const char* value) { SetSafetyRuleArn(value); return *this;}


    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline GatingRule& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline GatingRule& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
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
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
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
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
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
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
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
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline GatingRule& WithTargetControls(const Aws::Vector<Aws::String>& value) { SetTargetControls(value); return *this;}

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline GatingRule& WithTargetControls(Aws::Vector<Aws::String>&& value) { SetTargetControls(std::move(value)); return *this;}

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline GatingRule& AddTargetControls(const Aws::String& value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(value); return *this; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline GatingRule& AddTargetControls(Aws::String&& value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(std::move(value)); return *this; }

    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline GatingRule& AddTargetControls(const char* value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(value); return *this; }


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
    inline GatingRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}

  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet;

    Aws::Vector<Aws::String> m_gatingControls;
    bool m_gatingControlsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RuleConfig m_ruleConfig;
    bool m_ruleConfigHasBeenSet;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet;

    Status m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Aws::String> m_targetControls;
    bool m_targetControlsHasBeenSet;

    int m_waitPeriodMs;
    bool m_waitPeriodMsHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
