/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * A structure holds the actual and forecasted spend for a budget.
   */
  class AWS_BUDGETS_API CalculatedSpend
  {
  public:
    CalculatedSpend();
    CalculatedSpend(const Aws::Utils::Json::JsonValue& jsonValue);
    CalculatedSpend& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Spend& GetActualSpend() const{ return m_actualSpend; }

    
    inline void SetActualSpend(const Spend& value) { m_actualSpendHasBeenSet = true; m_actualSpend = value; }

    
    inline void SetActualSpend(Spend&& value) { m_actualSpendHasBeenSet = true; m_actualSpend = value; }

    
    inline CalculatedSpend& WithActualSpend(const Spend& value) { SetActualSpend(value); return *this;}

    
    inline CalculatedSpend& WithActualSpend(Spend&& value) { SetActualSpend(value); return *this;}

    
    inline const Spend& GetForecastedSpend() const{ return m_forecastedSpend; }

    
    inline void SetForecastedSpend(const Spend& value) { m_forecastedSpendHasBeenSet = true; m_forecastedSpend = value; }

    
    inline void SetForecastedSpend(Spend&& value) { m_forecastedSpendHasBeenSet = true; m_forecastedSpend = value; }

    
    inline CalculatedSpend& WithForecastedSpend(const Spend& value) { SetForecastedSpend(value); return *this;}

    
    inline CalculatedSpend& WithForecastedSpend(Spend&& value) { SetForecastedSpend(value); return *this;}

  private:
    Spend m_actualSpend;
    bool m_actualSpendHasBeenSet;
    Spend m_forecastedSpend;
    bool m_forecastedSpendHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
