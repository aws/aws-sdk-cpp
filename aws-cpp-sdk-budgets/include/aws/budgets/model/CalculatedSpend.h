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
#include <aws/budgets/model/Spend.h>
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
   * <p>The spend objects that are associated with this budget. The
   * <code>actualSpend</code> tracks how much you've used, cost, usage, or RI units,
   * and the <code>forecastedSpend</code> tracks how much you are predicted to spend
   * if your current usage remains steady.</p> <p>For example, if it is the 20th of
   * the month and you have spent <code>50</code> dollars on Amazon EC2, your
   * <code>actualSpend</code> is <code>50 USD</code>, and your
   * <code>forecastedSpend</code> is <code>75 USD</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CalculatedSpend">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API CalculatedSpend
  {
  public:
    CalculatedSpend();
    CalculatedSpend(Aws::Utils::Json::JsonView jsonValue);
    CalculatedSpend& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of cost, usage, or RI units that you have used.</p>
     */
    inline const Spend& GetActualSpend() const{ return m_actualSpend; }

    /**
     * <p>The amount of cost, usage, or RI units that you have used.</p>
     */
    inline bool ActualSpendHasBeenSet() const { return m_actualSpendHasBeenSet; }

    /**
     * <p>The amount of cost, usage, or RI units that you have used.</p>
     */
    inline void SetActualSpend(const Spend& value) { m_actualSpendHasBeenSet = true; m_actualSpend = value; }

    /**
     * <p>The amount of cost, usage, or RI units that you have used.</p>
     */
    inline void SetActualSpend(Spend&& value) { m_actualSpendHasBeenSet = true; m_actualSpend = std::move(value); }

    /**
     * <p>The amount of cost, usage, or RI units that you have used.</p>
     */
    inline CalculatedSpend& WithActualSpend(const Spend& value) { SetActualSpend(value); return *this;}

    /**
     * <p>The amount of cost, usage, or RI units that you have used.</p>
     */
    inline CalculatedSpend& WithActualSpend(Spend&& value) { SetActualSpend(std::move(value)); return *this;}


    /**
     * <p>The amount of cost, usage, or RI units that you are forecasted to use.</p>
     */
    inline const Spend& GetForecastedSpend() const{ return m_forecastedSpend; }

    /**
     * <p>The amount of cost, usage, or RI units that you are forecasted to use.</p>
     */
    inline bool ForecastedSpendHasBeenSet() const { return m_forecastedSpendHasBeenSet; }

    /**
     * <p>The amount of cost, usage, or RI units that you are forecasted to use.</p>
     */
    inline void SetForecastedSpend(const Spend& value) { m_forecastedSpendHasBeenSet = true; m_forecastedSpend = value; }

    /**
     * <p>The amount of cost, usage, or RI units that you are forecasted to use.</p>
     */
    inline void SetForecastedSpend(Spend&& value) { m_forecastedSpendHasBeenSet = true; m_forecastedSpend = std::move(value); }

    /**
     * <p>The amount of cost, usage, or RI units that you are forecasted to use.</p>
     */
    inline CalculatedSpend& WithForecastedSpend(const Spend& value) { SetForecastedSpend(value); return *this;}

    /**
     * <p>The amount of cost, usage, or RI units that you are forecasted to use.</p>
     */
    inline CalculatedSpend& WithForecastedSpend(Spend&& value) { SetForecastedSpend(std::move(value)); return *this;}

  private:

    Spend m_actualSpend;
    bool m_actualSpendHasBeenSet;

    Spend m_forecastedSpend;
    bool m_forecastedSpendHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
