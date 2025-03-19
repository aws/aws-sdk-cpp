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
    AWS_DEADLINE_API BudgetSchedule() = default;
    AWS_DEADLINE_API BudgetSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fixed start and end time of the budget's schedule.</p>
     */
    inline const FixedBudgetSchedule& GetFixed() const { return m_fixed; }
    inline bool FixedHasBeenSet() const { return m_fixedHasBeenSet; }
    template<typename FixedT = FixedBudgetSchedule>
    void SetFixed(FixedT&& value) { m_fixedHasBeenSet = true; m_fixed = std::forward<FixedT>(value); }
    template<typename FixedT = FixedBudgetSchedule>
    BudgetSchedule& WithFixed(FixedT&& value) { SetFixed(std::forward<FixedT>(value)); return *this;}
    ///@}
  private:

    FixedBudgetSchedule m_fixed;
    bool m_fixedHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
