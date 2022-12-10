/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FilterBehavior.h>
#include <aws/wafv2/model/FilterRequirement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Condition.h>
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
   * <p>A single logging filter, used in <a>LoggingFilter</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_WAFV2_API Filter();
    AWS_WAFV2_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How to handle logs that satisfy the filter's conditions and requirement. </p>
     */
    inline const FilterBehavior& GetBehavior() const{ return m_behavior; }

    /**
     * <p>How to handle logs that satisfy the filter's conditions and requirement. </p>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>How to handle logs that satisfy the filter's conditions and requirement. </p>
     */
    inline void SetBehavior(const FilterBehavior& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>How to handle logs that satisfy the filter's conditions and requirement. </p>
     */
    inline void SetBehavior(FilterBehavior&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>How to handle logs that satisfy the filter's conditions and requirement. </p>
     */
    inline Filter& WithBehavior(const FilterBehavior& value) { SetBehavior(value); return *this;}

    /**
     * <p>How to handle logs that satisfy the filter's conditions and requirement. </p>
     */
    inline Filter& WithBehavior(FilterBehavior&& value) { SetBehavior(std::move(value)); return *this;}


    /**
     * <p>Logic to apply to the filtering conditions. You can specify that, in order to
     * satisfy the filter, a log must match all conditions or must match at least one
     * condition.</p>
     */
    inline const FilterRequirement& GetRequirement() const{ return m_requirement; }

    /**
     * <p>Logic to apply to the filtering conditions. You can specify that, in order to
     * satisfy the filter, a log must match all conditions or must match at least one
     * condition.</p>
     */
    inline bool RequirementHasBeenSet() const { return m_requirementHasBeenSet; }

    /**
     * <p>Logic to apply to the filtering conditions. You can specify that, in order to
     * satisfy the filter, a log must match all conditions or must match at least one
     * condition.</p>
     */
    inline void SetRequirement(const FilterRequirement& value) { m_requirementHasBeenSet = true; m_requirement = value; }

    /**
     * <p>Logic to apply to the filtering conditions. You can specify that, in order to
     * satisfy the filter, a log must match all conditions or must match at least one
     * condition.</p>
     */
    inline void SetRequirement(FilterRequirement&& value) { m_requirementHasBeenSet = true; m_requirement = std::move(value); }

    /**
     * <p>Logic to apply to the filtering conditions. You can specify that, in order to
     * satisfy the filter, a log must match all conditions or must match at least one
     * condition.</p>
     */
    inline Filter& WithRequirement(const FilterRequirement& value) { SetRequirement(value); return *this;}

    /**
     * <p>Logic to apply to the filtering conditions. You can specify that, in order to
     * satisfy the filter, a log must match all conditions or must match at least one
     * condition.</p>
     */
    inline Filter& WithRequirement(FilterRequirement&& value) { SetRequirement(std::move(value)); return *this;}


    /**
     * <p>Match conditions for the filter.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline void SetConditions(const Aws::Vector<Condition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline void SetConditions(Aws::Vector<Condition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline Filter& WithConditions(const Aws::Vector<Condition>& value) { SetConditions(value); return *this;}

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline Filter& WithConditions(Aws::Vector<Condition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline Filter& AddConditions(const Condition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>Match conditions for the filter.</p>
     */
    inline Filter& AddConditions(Condition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }

  private:

    FilterBehavior m_behavior;
    bool m_behaviorHasBeenSet = false;

    FilterRequirement m_requirement;
    bool m_requirementHasBeenSet = false;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
