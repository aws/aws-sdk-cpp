/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/RuleType.h>
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
   * <p>The rule configuration for an assertion rule. That is, the criteria that you
   * set for specific assertion controls (routing controls) that specify how many
   * control states must be ON after a transaction completes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/RuleConfig">AWS
   * API Reference</a></p>
   */
  class RuleConfig
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API RuleConfig();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API RuleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API RuleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Logical negation of the rule. If the rule would usually evaluate true, it's
     * evaluated as false, and vice versa.</p>
     */
    inline bool GetInverted() const{ return m_inverted; }

    /**
     * <p>Logical negation of the rule. If the rule would usually evaluate true, it's
     * evaluated as false, and vice versa.</p>
     */
    inline bool InvertedHasBeenSet() const { return m_invertedHasBeenSet; }

    /**
     * <p>Logical negation of the rule. If the rule would usually evaluate true, it's
     * evaluated as false, and vice versa.</p>
     */
    inline void SetInverted(bool value) { m_invertedHasBeenSet = true; m_inverted = value; }

    /**
     * <p>Logical negation of the rule. If the rule would usually evaluate true, it's
     * evaluated as false, and vice versa.</p>
     */
    inline RuleConfig& WithInverted(bool value) { SetInverted(value); return *this;}


    /**
     * <p>The value of N, when you specify an ATLEAST rule type. That is, Threshold is
     * the number of controls that must be set when you specify an ATLEAST type.</p>
     */
    inline int GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value of N, when you specify an ATLEAST rule type. That is, Threshold is
     * the number of controls that must be set when you specify an ATLEAST type.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The value of N, when you specify an ATLEAST rule type. That is, Threshold is
     * the number of controls that must be set when you specify an ATLEAST type.</p>
     */
    inline void SetThreshold(int value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value of N, when you specify an ATLEAST rule type. That is, Threshold is
     * the number of controls that must be set when you specify an ATLEAST type.</p>
     */
    inline RuleConfig& WithThreshold(int value) { SetThreshold(value); return *this;}


    /**
     * <p>A rule can be one of the following: ATLEAST, AND, or OR.</p>
     */
    inline const RuleType& GetType() const{ return m_type; }

    /**
     * <p>A rule can be one of the following: ATLEAST, AND, or OR.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A rule can be one of the following: ATLEAST, AND, or OR.</p>
     */
    inline void SetType(const RuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A rule can be one of the following: ATLEAST, AND, or OR.</p>
     */
    inline void SetType(RuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A rule can be one of the following: ATLEAST, AND, or OR.</p>
     */
    inline RuleConfig& WithType(const RuleType& value) { SetType(value); return *this;}

    /**
     * <p>A rule can be one of the following: ATLEAST, AND, or OR.</p>
     */
    inline RuleConfig& WithType(RuleType&& value) { SetType(std::move(value)); return *this;}

  private:

    bool m_inverted;
    bool m_invertedHasBeenSet = false;

    int m_threshold;
    bool m_thresholdHasBeenSet = false;

    RuleType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
