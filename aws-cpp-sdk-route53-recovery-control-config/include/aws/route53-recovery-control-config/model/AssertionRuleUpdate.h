/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An update to an assertion rule. You can update the name or the evaluation
   * period (wait period). If you don't specify one of the items to update, the item
   * is unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/AssertionRuleUpdate">AWS
   * API Reference</a></p>
   */
  class AssertionRuleUpdate
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRuleUpdate();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRuleUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRuleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline AssertionRuleUpdate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline AssertionRuleUpdate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline AssertionRuleUpdate& WithName(const char* value) { SetName(value); return *this;}


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
    inline AssertionRuleUpdate& WithSafetyRuleArn(const Aws::String& value) { SetSafetyRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline AssertionRuleUpdate& WithSafetyRuleArn(Aws::String&& value) { SetSafetyRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline AssertionRuleUpdate& WithSafetyRuleArn(const char* value) { SetSafetyRuleArn(value); return *this;}


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
    inline AssertionRuleUpdate& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;

    int m_waitPeriodMs;
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
