/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/model/CurrencyCode.h>
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
namespace FreeTier
{
namespace Model
{

  /**
   * <p> The monetary amount of the credit. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/MonetaryAmount">AWS
   * API Reference</a></p>
   */
  class MonetaryAmount
  {
  public:
    AWS_FREETIER_API MonetaryAmount() = default;
    AWS_FREETIER_API MonetaryAmount(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API MonetaryAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The aggregated monetary amount of credits earned. </p>
     */
    inline double GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline MonetaryAmount& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit that the monetary amount is given in. </p>
     */
    inline CurrencyCode GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(CurrencyCode value) { m_unitHasBeenSet = true; m_unit = value; }
    inline MonetaryAmount& WithUnit(CurrencyCode value) { SetUnit(value); return *this;}
    ///@}
  private:

    double m_amount{0.0};
    bool m_amountHasBeenSet = false;

    CurrencyCode m_unit{CurrencyCode::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
