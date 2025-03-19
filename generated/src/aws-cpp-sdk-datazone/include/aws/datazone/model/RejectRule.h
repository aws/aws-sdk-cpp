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
    AWS_DATAZONE_API RejectRule() = default;
    AWS_DATAZONE_API RejectRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RejectRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether you want to reject the top prediction for all targets or
     * none.</p>
     */
    inline RejectRuleBehavior GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(RejectRuleBehavior value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline RejectRule& WithRule(RejectRuleBehavior value) { SetRule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score that specifies the condition at which a prediction can
     * be rejected.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline RejectRule& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}
  private:

    RejectRuleBehavior m_rule{RejectRuleBehavior::NOT_SET};
    bool m_ruleHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
