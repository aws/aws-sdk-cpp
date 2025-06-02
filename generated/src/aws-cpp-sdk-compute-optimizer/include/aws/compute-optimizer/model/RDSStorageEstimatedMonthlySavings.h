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
   * <p> Describes the estimated monthly savings possible for DB instance storage by
   * adopting Compute Optimizer recommendations. This is based on DB instance pricing
   * after applying Savings Plans discounts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSStorageEstimatedMonthlySavings">AWS
   * API Reference</a></p>
   */
  class RDSStorageEstimatedMonthlySavings
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSStorageEstimatedMonthlySavings() = default;
    AWS_COMPUTEOPTIMIZER_API RDSStorageEstimatedMonthlySavings(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSStorageEstimatedMonthlySavings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The currency of the estimated monthly savings. </p>
     */
    inline Currency GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(Currency value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline RDSStorageEstimatedMonthlySavings& WithCurrency(Currency value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the estimated monthly savings for DB instance storage. </p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline RDSStorageEstimatedMonthlySavings& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Currency m_currency{Currency::NOT_SET};
    bool m_currencyHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
