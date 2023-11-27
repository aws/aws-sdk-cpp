/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Currency.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the estimated monthly savings possible for Amazon ECS services by
   * adopting Compute Optimizer recommendations. This is based on Amazon ECS service
   * pricing after applying Savings Plans discounts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSEstimatedMonthlySavings">AWS
   * API Reference</a></p>
   */
  class ECSEstimatedMonthlySavings
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSEstimatedMonthlySavings();
    AWS_COMPUTEOPTIMIZER_API ECSEstimatedMonthlySavings(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSEstimatedMonthlySavings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline const Currency& GetCurrency() const{ return m_currency; }

    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline void SetCurrency(const Currency& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline void SetCurrency(Currency&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline ECSEstimatedMonthlySavings& WithCurrency(const Currency& value) { SetCurrency(value); return *this;}

    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline ECSEstimatedMonthlySavings& WithCurrency(Currency&& value) { SetCurrency(std::move(value)); return *this;}


    /**
     * <p> The value of the estimated monthly savings for Amazon ECS services. </p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p> The value of the estimated monthly savings for Amazon ECS services. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value of the estimated monthly savings for Amazon ECS services. </p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value of the estimated monthly savings for Amazon ECS services. </p>
     */
    inline ECSEstimatedMonthlySavings& WithValue(double value) { SetValue(value); return *this;}

  private:

    Currency m_currency;
    bool m_currencyHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
