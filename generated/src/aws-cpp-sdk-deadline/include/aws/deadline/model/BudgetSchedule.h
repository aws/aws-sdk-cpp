/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/FixedBudgetSchedule.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The start and end time of the budget.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BudgetSchedule">AWS
   * API Reference</a></p>
   */
  class BudgetSchedule
  {
  public:
    AWS_DEADLINE_API BudgetSchedule();
    AWS_DEADLINE_API BudgetSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline const FixedBudgetSchedule& GetFixed() const{ return m_fixed; }

    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline bool FixedHasBeenSet() const { return m_fixedHasBeenSet; }

    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline void SetFixed(const FixedBudgetSchedule& value) { m_fixedHasBeenSet = true; m_fixed = value; }

    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline void SetFixed(FixedBudgetSchedule&& value) { m_fixedHasBeenSet = true; m_fixed = std::move(value); }

    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline BudgetSchedule& WithFixed(const FixedBudgetSchedule& value) { SetFixed(value); return *this;}

    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline BudgetSchedule& WithFixed(FixedBudgetSchedule&& value) { SetFixed(std::move(value)); return *this;}

  private:

    FixedBudgetSchedule m_fixed;
    bool m_fixedHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
