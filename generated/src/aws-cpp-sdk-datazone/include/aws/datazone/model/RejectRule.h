/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RejectRuleBehavior.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Specifies the rule and the threshold under which a prediction can be
   * rejected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RejectRule">AWS
   * API Reference</a></p>
   */
  class RejectRule
  {
  public:
    AWS_DATAZONE_API RejectRule();
    AWS_DATAZONE_API RejectRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RejectRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline const RejectRuleBehavior& GetRule() const{ return m_rule; }

    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline void SetRule(const RejectRuleBehavior& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline void SetRule(RejectRuleBehavior&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline RejectRule& WithRule(const RejectRuleBehavior& value) { SetRule(value); return *this;}

    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline RejectRule& WithRule(RejectRuleBehavior&& value) { SetRule(std::move(value)); return *this;}


    /**
     * <p>The confidence score that specifies the condition at which a prediction can
     * be rejected.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The confidence score that specifies the condition at which a prediction can
     * be rejected.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The confidence score that specifies the condition at which a prediction can
     * be rejected.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The confidence score that specifies the condition at which a prediction can
     * be rejected.</p>
     */
    inline RejectRule& WithThreshold(double value) { SetThreshold(value); return *this;}

  private:

    RejectRuleBehavior m_rule;
    bool m_ruleHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
