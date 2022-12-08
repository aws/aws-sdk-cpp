/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/AssertionRule.h>
#include <aws/route53-recovery-control-config/model/GatingRule.h>
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
   * <p>A safety rule. A safety rule can be an assertion rule or a gating
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Rule();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control state is not accepted. For example, the criteria might be that
     * at least one routing control state is On after the transation so that traffic
     * continues to flow to at least one cell for the application. This ensures that
     * you avoid a fail-open scenario.</p>
     */
    inline const AssertionRule& GetASSERTION() const{ return m_aSSERTION; }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control state is not accepted. For example, the criteria might be that
     * at least one routing control state is On after the transation so that traffic
     * continues to flow to at least one cell for the application. This ensures that
     * you avoid a fail-open scenario.</p>
     */
    inline bool ASSERTIONHasBeenSet() const { return m_aSSERTIONHasBeenSet; }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control state is not accepted. For example, the criteria might be that
     * at least one routing control state is On after the transation so that traffic
     * continues to flow to at least one cell for the application. This ensures that
     * you avoid a fail-open scenario.</p>
     */
    inline void SetASSERTION(const AssertionRule& value) { m_aSSERTIONHasBeenSet = true; m_aSSERTION = value; }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control state is not accepted. For example, the criteria might be that
     * at least one routing control state is On after the transation so that traffic
     * continues to flow to at least one cell for the application. This ensures that
     * you avoid a fail-open scenario.</p>
     */
    inline void SetASSERTION(AssertionRule&& value) { m_aSSERTIONHasBeenSet = true; m_aSSERTION = std::move(value); }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control state is not accepted. For example, the criteria might be that
     * at least one routing control state is On after the transation so that traffic
     * continues to flow to at least one cell for the application. This ensures that
     * you avoid a fail-open scenario.</p>
     */
    inline Rule& WithASSERTION(const AssertionRule& value) { SetASSERTION(value); return *this;}

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control state is not accepted. For example, the criteria might be that
     * at least one routing control state is On after the transation so that traffic
     * continues to flow to at least one cell for the application. This ensures that
     * you avoid a fail-open scenario.</p>
     */
    inline Rule& WithASSERTION(AssertionRule&& value) { SetASSERTION(std::move(value)); return *this;}


    /**
     * <p>A gating rule verifies that a gating routing control or set of gating
     * rounting controls, evaluates as true, based on a rule configuration that you
     * specify, which allows a set of routing control state changes to complete.</p>
     * <p>For example, if you specify one gating routing control and you set the Type
     * in the rule configuration to OR, that indicates that you must set the gating
     * routing control to On for the rule to evaluate as true; that is, for the gating
     * control "switch" to be "On". When you do that, then you can update the routing
     * control states for the target routing controls that you specify in the gating
     * rule.</p>
     */
    inline const GatingRule& GetGATING() const{ return m_gATING; }

    /**
     * <p>A gating rule verifies that a gating routing control or set of gating
     * rounting controls, evaluates as true, based on a rule configuration that you
     * specify, which allows a set of routing control state changes to complete.</p>
     * <p>For example, if you specify one gating routing control and you set the Type
     * in the rule configuration to OR, that indicates that you must set the gating
     * routing control to On for the rule to evaluate as true; that is, for the gating
     * control "switch" to be "On". When you do that, then you can update the routing
     * control states for the target routing controls that you specify in the gating
     * rule.</p>
     */
    inline bool GATINGHasBeenSet() const { return m_gATINGHasBeenSet; }

    /**
     * <p>A gating rule verifies that a gating routing control or set of gating
     * rounting controls, evaluates as true, based on a rule configuration that you
     * specify, which allows a set of routing control state changes to complete.</p>
     * <p>For example, if you specify one gating routing control and you set the Type
     * in the rule configuration to OR, that indicates that you must set the gating
     * routing control to On for the rule to evaluate as true; that is, for the gating
     * control "switch" to be "On". When you do that, then you can update the routing
     * control states for the target routing controls that you specify in the gating
     * rule.</p>
     */
    inline void SetGATING(const GatingRule& value) { m_gATINGHasBeenSet = true; m_gATING = value; }

    /**
     * <p>A gating rule verifies that a gating routing control or set of gating
     * rounting controls, evaluates as true, based on a rule configuration that you
     * specify, which allows a set of routing control state changes to complete.</p>
     * <p>For example, if you specify one gating routing control and you set the Type
     * in the rule configuration to OR, that indicates that you must set the gating
     * routing control to On for the rule to evaluate as true; that is, for the gating
     * control "switch" to be "On". When you do that, then you can update the routing
     * control states for the target routing controls that you specify in the gating
     * rule.</p>
     */
    inline void SetGATING(GatingRule&& value) { m_gATINGHasBeenSet = true; m_gATING = std::move(value); }

    /**
     * <p>A gating rule verifies that a gating routing control or set of gating
     * rounting controls, evaluates as true, based on a rule configuration that you
     * specify, which allows a set of routing control state changes to complete.</p>
     * <p>For example, if you specify one gating routing control and you set the Type
     * in the rule configuration to OR, that indicates that you must set the gating
     * routing control to On for the rule to evaluate as true; that is, for the gating
     * control "switch" to be "On". When you do that, then you can update the routing
     * control states for the target routing controls that you specify in the gating
     * rule.</p>
     */
    inline Rule& WithGATING(const GatingRule& value) { SetGATING(value); return *this;}

    /**
     * <p>A gating rule verifies that a gating routing control or set of gating
     * rounting controls, evaluates as true, based on a rule configuration that you
     * specify, which allows a set of routing control state changes to complete.</p>
     * <p>For example, if you specify one gating routing control and you set the Type
     * in the rule configuration to OR, that indicates that you must set the gating
     * routing control to On for the rule to evaluate as true; that is, for the gating
     * control "switch" to be "On". When you do that, then you can update the routing
     * control states for the target routing controls that you specify in the gating
     * rule.</p>
     */
    inline Rule& WithGATING(GatingRule&& value) { SetGATING(std::move(value)); return *this;}

  private:

    AssertionRule m_aSSERTION;
    bool m_aSSERTIONHasBeenSet = false;

    GatingRule m_gATING;
    bool m_gATINGHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
