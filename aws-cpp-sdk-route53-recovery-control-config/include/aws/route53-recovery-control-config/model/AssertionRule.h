/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An assertion rule enforces that, when you change a routing control state,
   * that the criteria that you set in the rule configuration is met. Otherwise, the
   * change to the routing control is not accepted. For example, the criteria might
   * be that at least one routing control state is On after the transation so that
   * traffic continues to flow to at least one cell for the application. This ensures
   * that you avoid a fail-open scenario.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/AssertionRule">AWS
   * API Reference</a></p>
   */
  class AssertionRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssertedControls() const{ return m_assertedControls; }

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline bool AssertedControlsHasBeenSet() const { return m_assertedControlsHasBeenSet; }

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline void SetAssertedControls(const Aws::Vector<Aws::String>& value) { m_assertedControlsHasBeenSet = true; m_assertedControls = value; }

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline void SetAssertedControls(Aws::Vector<Aws::String>&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls = std::move(value); }

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline AssertionRule& WithAssertedControls(const Aws::Vector<Aws::String>& value) { SetAssertedControls(value); return *this;}

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline AssertionRule& WithAssertedControls(Aws::Vector<Aws::String>&& value) { SetAssertedControls(std::move(value)); return *this;}

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline AssertionRule& AddAssertedControls(const Aws::String& value) { m_assertedControlsHasBeenSet = true; m_assertedControls.push_back(value); return *this; }

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline AssertionRule& AddAssertedControls(Aws::String&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls.push_back(std::move(value)); return *this; }

    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline AssertionRule& AddAssertedControls(const char* value) { m_assertedControlsHasBeenSet = true; m_assertedControls.push_back(value); return *this; }


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
    inline AssertionRule& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline AssertionRule& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline AssertionRule& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline AssertionRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline AssertionRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline AssertionRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify atleast 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline const RuleConfig& GetRuleConfig() const{ return m_ruleConfig; }

    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify atleast 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }

    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify atleast 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline void SetRuleConfig(const RuleConfig& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = value; }

    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify atleast 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline void SetRuleConfig(RuleConfig&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::move(value); }

    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify atleast 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline AssertionRule& WithRuleConfig(const RuleConfig& value) { SetRuleConfig(value); return *this;}

    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify atleast 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline AssertionRule& WithRuleConfig(RuleConfig&& value) { SetRuleConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline const Aws::String& GetSafetyRuleArn() const{ return m_safetyRuleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline bool SafetyRuleArnHasBeenSet() const { return m_safetyRuleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline void SetSafetyRuleArn(const Aws::String& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline void SetSafetyRuleArn(Aws::String&& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline void SetSafetyRuleArn(const char* value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline AssertionRule& WithSafetyRuleArn(const Aws::String& value) { SetSafetyRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline AssertionRule& WithSafetyRuleArn(Aws::String&& value) { SetSafetyRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline AssertionRule& WithSafetyRuleArn(const char* value) { SetSafetyRuleArn(value); return *this;}


    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline AssertionRule& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline AssertionRule& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


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
    inline AssertionRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_assertedControls;
    bool m_assertedControlsHasBeenSet = false;

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleConfig m_ruleConfig;
    bool m_ruleConfigHasBeenSet = false;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    int m_waitPeriodMs;
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
