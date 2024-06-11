/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AcceptRuleBehavior.h>
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
   * accepted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AcceptRule">AWS
   * API Reference</a></p>
   */
  class AcceptRule
  {
  public:
    AWS_DATAZONE_API AcceptRule();
    AWS_DATAZONE_API AcceptRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AcceptRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether you want to accept the top prediction for all targets or
     * none.</p>
     */
    inline const AcceptRuleBehavior& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const AcceptRuleBehavior& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(AcceptRuleBehavior&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline AcceptRule& WithRule(const AcceptRuleBehavior& value) { SetRule(value); return *this;}
    inline AcceptRule& WithRule(AcceptRuleBehavior&& value) { SetRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score that specifies the condition at which a prediction can
     * be accepted.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline AcceptRule& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}
  private:

    AcceptRuleBehavior m_rule;
    bool m_ruleHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
