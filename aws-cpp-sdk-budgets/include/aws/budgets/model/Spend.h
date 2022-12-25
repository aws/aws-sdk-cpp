/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The amount of cost or usage that's measured for a budget.</p> <p>For example,
   * a <code>Spend</code> for <code>3 GB</code> of S3 usage has the following
   * parameters:</p> <ul> <li> <p>An <code>Amount</code> of <code>3</code> </p> </li>
   * <li> <p>A <code>unit</code> of <code>GB</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Spend">AWS API
   * Reference</a></p>
   */
  class Spend
  {
  public:
    AWS_BUDGETS_API Spend();
    AWS_BUDGETS_API Spend(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Spend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline const Aws::String& GetAmount() const{ return m_amount; }

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = std::move(value); }

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline Spend& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline Spend& WithAmount(Aws::String&& value) { SetAmount(std::move(value)); return *this;}

    /**
     * <p>The cost or usage amount that's associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline Spend& WithAmount(const char* value) { SetAmount(value); return *this;}


    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline Spend& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline Spend& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measurement that's used for the budget forecast, actual spend, or
     * budget threshold, such as USD or GBP.</p>
     */
    inline Spend& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
