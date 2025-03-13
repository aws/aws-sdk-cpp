/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BudgetActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The budget action to add.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BudgetActionToAdd">AWS
   * API Reference</a></p>
   */
  class BudgetActionToAdd
  {
  public:
    AWS_DEADLINE_API BudgetActionToAdd() = default;
    AWS_DEADLINE_API BudgetActionToAdd(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetActionToAdd& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of budget action to add.</p>
     */
    inline BudgetActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(BudgetActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline BudgetActionToAdd& WithType(BudgetActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage threshold for the budget action to add.</p>
     */
    inline double GetThresholdPercentage() const { return m_thresholdPercentage; }
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }
    inline BudgetActionToAdd& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the budget action to add.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BudgetActionToAdd& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    BudgetActionType m_type{BudgetActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_thresholdPercentage{0.0};
    bool m_thresholdPercentageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
