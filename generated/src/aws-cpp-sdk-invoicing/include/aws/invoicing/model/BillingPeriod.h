/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>

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
   * <p> The billing period for which you want to retrieve invoice-related documents.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/BillingPeriod">AWS
   * API Reference</a></p>
   */
  class BillingPeriod
  {
  public:
    AWS_INVOICING_API BillingPeriod() = default;
    AWS_INVOICING_API BillingPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API BillingPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The billing period month. </p>
     */
    inline int GetMonth() const { return m_month; }
    inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }
    inline void SetMonth(int value) { m_monthHasBeenSet = true; m_month = value; }
    inline BillingPeriod& WithMonth(int value) { SetMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The billing period year. </p>
     */
    inline int GetYear() const { return m_year; }
    inline bool YearHasBeenSet() const { return m_yearHasBeenSet; }
    inline void SetYear(int value) { m_yearHasBeenSet = true; m_year = value; }
    inline BillingPeriod& WithYear(int value) { SetYear(value); return *this;}
    ///@}
  private:

    int m_month{0};
    bool m_monthHasBeenSet = false;

    int m_year{0};
    bool m_yearHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
