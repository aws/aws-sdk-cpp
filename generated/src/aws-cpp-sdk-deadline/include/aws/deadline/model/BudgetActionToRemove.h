/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BudgetActionType.h>
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
   * <p>The budget action to remove.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BudgetActionToRemove">AWS
   * API Reference</a></p>
   */
  class BudgetActionToRemove
  {
  public:
    AWS_DEADLINE_API BudgetActionToRemove() = default;
    AWS_DEADLINE_API BudgetActionToRemove(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetActionToRemove& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of budget action to remove.</p>
     */
    inline BudgetActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(BudgetActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline BudgetActionToRemove& WithType(BudgetActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage threshold for the budget action to remove.</p>
     */
    inline double GetThresholdPercentage() const { return m_thresholdPercentage; }
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }
    inline BudgetActionToRemove& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}
    ///@}
  private:

    BudgetActionType m_type{BudgetActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_thresholdPercentage{0.0};
    bool m_thresholdPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
