/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The amount of cost or usage that is measured for a budget.</p> <p>For
   * example, a <code>Spend</code> for <code>3 GB</code> of S3 usage would have the
   * following parameters:</p> <ul> <li> <p>An <code>Amount</code> of <code>3</code>
   * </p> </li> <li> <p>A <code>unit</code> of <code>GB</code> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Spend">AWS API
   * Reference</a></p>
   */
  class AWS_BUDGETS_API Spend
  {
  public:
    Spend();
    Spend(Aws::Utils::Json::JsonView jsonValue);
    Spend& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline const Aws::String& GetAmount() const{ return m_amount; }

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = std::move(value); }

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline Spend& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline Spend& WithAmount(Aws::String&& value) { SetAmount(std::move(value)); return *this;}

    /**
     * <p>The cost or usage amount that is associated with a budget forecast, actual
     * spend, or budget threshold.</p>
     */
    inline Spend& WithAmount(const char* value) { SetAmount(value); return *this;}


    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline Spend& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline Spend& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measurement that is used for the budget forecast, actual spend,
     * or budget threshold, such as dollars or GB.</p>
     */
    inline Spend& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
