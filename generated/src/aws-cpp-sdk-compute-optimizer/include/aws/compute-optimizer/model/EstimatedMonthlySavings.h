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
   * <p>Describes the estimated monthly savings amount possible, based on On-Demand
   * instance pricing, by adopting Compute Optimizer recommendations for a given
   * resource.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/view-ec2-recommendations.html#ec2-savings-calculation">Estimated
   * monthly savings and savings opportunities</a> in the <i>Compute Optimizer User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EstimatedMonthlySavings">AWS
   * API Reference</a></p>
   */
  class EstimatedMonthlySavings
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EstimatedMonthlySavings();
    AWS_COMPUTEOPTIMIZER_API EstimatedMonthlySavings(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EstimatedMonthlySavings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The currency of the estimated monthly savings.</p>
     */
    inline const Currency& GetCurrency() const{ return m_currency; }

    /**
     * <p>The currency of the estimated monthly savings.</p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>The currency of the estimated monthly savings.</p>
     */
    inline void SetCurrency(const Currency& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>The currency of the estimated monthly savings.</p>
     */
    inline void SetCurrency(Currency&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>The currency of the estimated monthly savings.</p>
     */
    inline EstimatedMonthlySavings& WithCurrency(const Currency& value) { SetCurrency(value); return *this;}

    /**
     * <p>The currency of the estimated monthly savings.</p>
     */
    inline EstimatedMonthlySavings& WithCurrency(Currency&& value) { SetCurrency(std::move(value)); return *this;}


    /**
     * <p>The value of the estimated monthly savings.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the estimated monthly savings.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the estimated monthly savings.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the estimated monthly savings.</p>
     */
    inline EstimatedMonthlySavings& WithValue(double value) { SetValue(value); return *this;}

  private:

    Currency m_currency;
    bool m_currencyHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
