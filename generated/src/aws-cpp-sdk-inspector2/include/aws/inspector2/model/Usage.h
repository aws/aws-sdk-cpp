/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/UsageType.h>
#include <aws/inspector2/model/Currency.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains usage information about the cost of Amazon Inspector
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Usage">AWS
   * API Reference</a></p>
   */
  class Usage
  {
  public:
    AWS_INSPECTOR2_API Usage() = default;
    AWS_INSPECTOR2_API Usage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Usage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type scan.</p>
     */
    inline UsageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UsageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Usage& WithType(UsageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total of usage.</p>
     */
    inline double GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }
    inline Usage& WithTotal(double value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost of Amazon Inspector.</p>
     */
    inline double GetEstimatedMonthlyCost() const { return m_estimatedMonthlyCost; }
    inline bool EstimatedMonthlyCostHasBeenSet() const { return m_estimatedMonthlyCostHasBeenSet; }
    inline void SetEstimatedMonthlyCost(double value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = value; }
    inline Usage& WithEstimatedMonthlyCost(double value) { SetEstimatedMonthlyCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency type used when calculating usage data.</p>
     */
    inline Currency GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(Currency value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline Usage& WithCurrency(Currency value) { SetCurrency(value); return *this;}
    ///@}
  private:

    UsageType m_type{UsageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_total{0.0};
    bool m_totalHasBeenSet = false;

    double m_estimatedMonthlyCost{0.0};
    bool m_estimatedMonthlyCostHasBeenSet = false;

    Currency m_currency{Currency::NOT_SET};
    bool m_currencyHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
