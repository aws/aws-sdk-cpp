/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/TaxesBreakdownAmount.h>
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
namespace Invoicing
{
namespace Model
{

  /**
   * <p> The details of the taxes. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/TaxesBreakdown">AWS
   * API Reference</a></p>
   */
  class TaxesBreakdown
  {
  public:
    AWS_INVOICING_API TaxesBreakdown() = default;
    AWS_INVOICING_API TaxesBreakdown(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API TaxesBreakdown& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of tax information. </p>
     */
    inline const Aws::Vector<TaxesBreakdownAmount>& GetBreakdown() const { return m_breakdown; }
    inline bool BreakdownHasBeenSet() const { return m_breakdownHasBeenSet; }
    template<typename BreakdownT = Aws::Vector<TaxesBreakdownAmount>>
    void SetBreakdown(BreakdownT&& value) { m_breakdownHasBeenSet = true; m_breakdown = std::forward<BreakdownT>(value); }
    template<typename BreakdownT = Aws::Vector<TaxesBreakdownAmount>>
    TaxesBreakdown& WithBreakdown(BreakdownT&& value) { SetBreakdown(std::forward<BreakdownT>(value)); return *this;}
    template<typename BreakdownT = TaxesBreakdownAmount>
    TaxesBreakdown& AddBreakdown(BreakdownT&& value) { m_breakdownHasBeenSet = true; m_breakdown.emplace_back(std::forward<BreakdownT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The total amount for your taxes. </p>
     */
    inline const Aws::String& GetTotalAmount() const { return m_totalAmount; }
    inline bool TotalAmountHasBeenSet() const { return m_totalAmountHasBeenSet; }
    template<typename TotalAmountT = Aws::String>
    void SetTotalAmount(TotalAmountT&& value) { m_totalAmountHasBeenSet = true; m_totalAmount = std::forward<TotalAmountT>(value); }
    template<typename TotalAmountT = Aws::String>
    TaxesBreakdown& WithTotalAmount(TotalAmountT&& value) { SetTotalAmount(std::forward<TotalAmountT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TaxesBreakdownAmount> m_breakdown;
    bool m_breakdownHasBeenSet = false;

    Aws::String m_totalAmount;
    bool m_totalAmountHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
