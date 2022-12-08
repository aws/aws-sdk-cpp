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
   * <p>A gating rule verifies that a gating routing control or set of gating
   * rounting controls, evaluates as true, based on a rule configuration that you
   * specify, which allows a set of routing control state changes to complete.</p>
   * <p>For example, if you specify one gating routing control and you set the Type
   * in the rule configuration to OR, that indicates that you must set the gating
   * routing control to On for the rule to evaluate as true; that is, for the gating
   * control "switch" to be "On". When you do that, then you can update the routing
   * control states for the target routing controls that you specify in the gating
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/GatingRule">AWS
   * API Reference</a></p>
   */
  class GatingRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
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
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatingControls() const{ return m_gatingControls; }

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline bool GatingControlsHasBeenSet() const { return m_gatingControlsHasBeenSet; }

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline void SetGatingControls(const Aws::Vector<Aws::String>& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = value; }

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline void SetGatingControls(Aws::Vector<Aws::String>&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = std::move(value); }

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline GatingRule& WithGatingControls(const Aws::Vector<Aws::String>& value) { SetGatingControls(value); return *this;}

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline GatingRule& WithGatingControls(Aws::Vector<Aws::String>&& value) { SetGatingControls(std::move(value)); return *this;}

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline GatingRule& AddGatingControls(const Aws::String& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(value); return *this; }

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline GatingRule& AddGatingControls(Aws::String&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline GatingRule& AddGatingControls(const char* value) { m_gatingControlsHasBeenSet = true; m_gatingControls.push_back(value); return *this; }


    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline GatingRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline GatingRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline GatingRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The criteria that you set for gating routing controls that designates how
     * many of the routing control states must be ON to allow you to update target
     * routing control states.</p>
     */
    inline const RuleConfig& GetRuleConfig() const{ return m_ruleConfig; }

    /**
     * <p>The criteria that you set for gating routing controls that designates how
     * many of the routing control states must be ON to allow you to update target
     * routing control states.</p>
     */
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }

    /**
     * <p>The criteria that you set for gating routing controls that designates how
     * many of the routing control states must be ON to allow you to update target
     * routing control states.</p>
     */
    inline void SetRuleConfig(const RuleConfig& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = value; }

    /**
     * <p>The criteria that you set for gating routing controls that designates how
     * many of the routing control states must be ON to allow you to update target
     * routing control states.</p>
     */
    inline void SetRuleConfig(RuleConfig&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::move(value); }

    /**
     * <p>The criteria that you set for gating routing controls that designates how
     * many of the routing control states must be ON to allow you to update target
     * routing control states.</p>
     */
    inline GatingRule& WithRuleConfig(const RuleConfig& value) { SetRuleConfig(value); return *this;}

    /**
     * <p>The criteria that you set for gating routing controls that designates how
     * many of the routing control states must be ON to allow you to update target
     * routing control states.</p>
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
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetControls() const{ return m_targetControls; }

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline bool TargetControlsHasBeenSet() const { return m_targetControlsHasBeenSet; }

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline void SetTargetControls(const Aws::Vector<Aws::String>& value) { m_targetControlsHasBeenSet = true; m_targetControls = value; }

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline void SetTargetControls(Aws::Vector<Aws::String>&& value) { m_targetControlsHasBeenSet = true; m_targetControls = std::move(value); }

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline GatingRule& WithTargetControls(const Aws::Vector<Aws::String>& value) { SetTargetControls(value); return *this;}

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline GatingRule& WithTargetControls(Aws::Vector<Aws::String>&& value) { SetTargetControls(std::move(value)); return *this;}

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline GatingRule& AddTargetControls(const Aws::String& value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(value); return *this; }

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
     */
    inline GatingRule& AddTargetControls(Aws::String&& value) { m_targetControlsHasBeenSet = true; m_targetControls.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated fail over, for
     * example.</p>
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
    bool m_controlPanelArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatingControls;
    bool m_gatingControlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleConfig m_ruleConfig;
    bool m_ruleConfigHasBeenSet = false;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetControls;
    bool m_targetControlsHasBeenSet = false;

    int m_waitPeriodMs;
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
