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
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Rule
  {
  public:
    Rule();
    Rule(Aws::Utils::Json::JsonView jsonValue);
    Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control is not accepted.</p>
     */
    inline const AssertionRule& GetASSERTION() const{ return m_aSSERTION; }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control is not accepted.</p>
     */
    inline bool ASSERTIONHasBeenSet() const { return m_aSSERTIONHasBeenSet; }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control is not accepted.</p>
     */
    inline void SetASSERTION(const AssertionRule& value) { m_aSSERTIONHasBeenSet = true; m_aSSERTION = value; }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control is not accepted.</p>
     */
    inline void SetASSERTION(AssertionRule&& value) { m_aSSERTIONHasBeenSet = true; m_aSSERTION = std::move(value); }

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control is not accepted.</p>
     */
    inline Rule& WithASSERTION(const AssertionRule& value) { SetASSERTION(value); return *this;}

    /**
     * <p>An assertion rule enforces that, when a routing control state is changed, the
     * criteria set by the rule configuration is met. Otherwise, the change to the
     * routing control is not accepted.</p>
     */
    inline Rule& WithASSERTION(AssertionRule&& value) { SetASSERTION(std::move(value)); return *this;}


    /**
     * <p>A gating rule verifies that a set of gating controls evaluates as true, based
     * on a rule configuration that you specify. If the gating rule evaluates to true,
     * Amazon Route 53 Application Recovery Controller allows a set of routing control
     * state changes to run and complete against the set of target controls.</p>
     */
    inline const GatingRule& GetGATING() const{ return m_gATING; }

    /**
     * <p>A gating rule verifies that a set of gating controls evaluates as true, based
     * on a rule configuration that you specify. If the gating rule evaluates to true,
     * Amazon Route 53 Application Recovery Controller allows a set of routing control
     * state changes to run and complete against the set of target controls.</p>
     */
    inline bool GATINGHasBeenSet() const { return m_gATINGHasBeenSet; }

    /**
     * <p>A gating rule verifies that a set of gating controls evaluates as true, based
     * on a rule configuration that you specify. If the gating rule evaluates to true,
     * Amazon Route 53 Application Recovery Controller allows a set of routing control
     * state changes to run and complete against the set of target controls.</p>
     */
    inline void SetGATING(const GatingRule& value) { m_gATINGHasBeenSet = true; m_gATING = value; }

    /**
     * <p>A gating rule verifies that a set of gating controls evaluates as true, based
     * on a rule configuration that you specify. If the gating rule evaluates to true,
     * Amazon Route 53 Application Recovery Controller allows a set of routing control
     * state changes to run and complete against the set of target controls.</p>
     */
    inline void SetGATING(GatingRule&& value) { m_gATINGHasBeenSet = true; m_gATING = std::move(value); }

    /**
     * <p>A gating rule verifies that a set of gating controls evaluates as true, based
     * on a rule configuration that you specify. If the gating rule evaluates to true,
     * Amazon Route 53 Application Recovery Controller allows a set of routing control
     * state changes to run and complete against the set of target controls.</p>
     */
    inline Rule& WithGATING(const GatingRule& value) { SetGATING(value); return *this;}

    /**
     * <p>A gating rule verifies that a set of gating controls evaluates as true, based
     * on a rule configuration that you specify. If the gating rule evaluates to true,
     * Amazon Route 53 Application Recovery Controller allows a set of routing control
     * state changes to run and complete against the set of target controls.</p>
     */
    inline Rule& WithGATING(GatingRule&& value) { SetGATING(std::move(value)); return *this;}

  private:

    AssertionRule m_aSSERTION;
    bool m_aSSERTIONHasBeenSet;

    GatingRule m_gATING;
    bool m_gATINGHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
