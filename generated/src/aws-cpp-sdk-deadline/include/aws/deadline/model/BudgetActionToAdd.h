/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The budget action to add.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BudgetActionToAdd">AWS
   * API Reference</a></p>
   */
  class BudgetActionToAdd
  {
  public:
    AWS_DEADLINE_API BudgetActionToAdd();
    AWS_DEADLINE_API BudgetActionToAdd(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetActionToAdd& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description for the budget action to add.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline BudgetActionToAdd& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline BudgetActionToAdd& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the budget action to add.</p>
     */
    inline BudgetActionToAdd& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The percentage threshold for the budget action to add.</p>
     */
    inline double GetThresholdPercentage() const{ return m_thresholdPercentage; }

    /**
     * <p>The percentage threshold for the budget action to add.</p>
     */
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }

    /**
     * <p>The percentage threshold for the budget action to add.</p>
     */
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }

    /**
     * <p>The percentage threshold for the budget action to add.</p>
     */
    inline BudgetActionToAdd& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}


    /**
     * <p>The type of budget action to add.</p>
     */
    inline const BudgetActionType& GetType() const{ return m_type; }

    /**
     * <p>The type of budget action to add.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of budget action to add.</p>
     */
    inline void SetType(const BudgetActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of budget action to add.</p>
     */
    inline void SetType(BudgetActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of budget action to add.</p>
     */
    inline BudgetActionToAdd& WithType(const BudgetActionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of budget action to add.</p>
     */
    inline BudgetActionToAdd& WithType(BudgetActionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_thresholdPercentage;
    bool m_thresholdPercentageHasBeenSet = false;

    BudgetActionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
