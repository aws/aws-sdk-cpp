/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ActionCondition.h>
#include <aws/wafv2/model/LabelNameCondition.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A single match condition for a <a>Filter</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Condition">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API Condition
  {
  public:
    Condition();
    Condition(Aws::Utils::Json::JsonView jsonValue);
    Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single action condition.</p>
     */
    inline const ActionCondition& GetActionCondition() const{ return m_actionCondition; }

    /**
     * <p>A single action condition.</p>
     */
    inline bool ActionConditionHasBeenSet() const { return m_actionConditionHasBeenSet; }

    /**
     * <p>A single action condition.</p>
     */
    inline void SetActionCondition(const ActionCondition& value) { m_actionConditionHasBeenSet = true; m_actionCondition = value; }

    /**
     * <p>A single action condition.</p>
     */
    inline void SetActionCondition(ActionCondition&& value) { m_actionConditionHasBeenSet = true; m_actionCondition = std::move(value); }

    /**
     * <p>A single action condition.</p>
     */
    inline Condition& WithActionCondition(const ActionCondition& value) { SetActionCondition(value); return *this;}

    /**
     * <p>A single action condition.</p>
     */
    inline Condition& WithActionCondition(ActionCondition&& value) { SetActionCondition(std::move(value)); return *this;}


    /**
     * <p>A single label name condition.</p>
     */
    inline const LabelNameCondition& GetLabelNameCondition() const{ return m_labelNameCondition; }

    /**
     * <p>A single label name condition.</p>
     */
    inline bool LabelNameConditionHasBeenSet() const { return m_labelNameConditionHasBeenSet; }

    /**
     * <p>A single label name condition.</p>
     */
    inline void SetLabelNameCondition(const LabelNameCondition& value) { m_labelNameConditionHasBeenSet = true; m_labelNameCondition = value; }

    /**
     * <p>A single label name condition.</p>
     */
    inline void SetLabelNameCondition(LabelNameCondition&& value) { m_labelNameConditionHasBeenSet = true; m_labelNameCondition = std::move(value); }

    /**
     * <p>A single label name condition.</p>
     */
    inline Condition& WithLabelNameCondition(const LabelNameCondition& value) { SetLabelNameCondition(value); return *this;}

    /**
     * <p>A single label name condition.</p>
     */
    inline Condition& WithLabelNameCondition(LabelNameCondition&& value) { SetLabelNameCondition(std::move(value)); return *this;}

  private:

    ActionCondition m_actionCondition;
    bool m_actionConditionHasBeenSet;

    LabelNameCondition m_labelNameCondition;
    bool m_labelNameConditionHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
