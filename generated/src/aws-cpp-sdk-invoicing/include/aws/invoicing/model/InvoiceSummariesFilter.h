/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/DateInterval.h>
#include <aws/invoicing/model/BillingPeriod.h>
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
namespace Invoicing
{
namespace Model
{

  /**
   * <p> Filters for your invoice summaries. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceSummariesFilter">AWS
   * API Reference</a></p>
   */
  class InvoiceSummariesFilter
  {
  public:
    AWS_INVOICING_API InvoiceSummariesFilter() = default;
    AWS_INVOICING_API InvoiceSummariesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceSummariesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date range for invoice summary retrieval. </p>
     */
    inline const DateInterval& GetTimeInterval() const { return m_timeInterval; }
    inline bool TimeIntervalHasBeenSet() const { return m_timeIntervalHasBeenSet; }
    template<typename TimeIntervalT = DateInterval>
    void SetTimeInterval(TimeIntervalT&& value) { m_timeIntervalHasBeenSet = true; m_timeInterval = std::forward<TimeIntervalT>(value); }
    template<typename TimeIntervalT = DateInterval>
    InvoiceSummariesFilter& WithTimeInterval(TimeIntervalT&& value) { SetTimeInterval(std::forward<TimeIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing period associated with the invoice documents. </p>
     */
    inline const BillingPeriod& GetBillingPeriod() const { return m_billingPeriod; }
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
    template<typename BillingPeriodT = BillingPeriod>
    void SetBillingPeriod(BillingPeriodT&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::forward<BillingPeriodT>(value); }
    template<typename BillingPeriodT = BillingPeriod>
    InvoiceSummariesFilter& WithBillingPeriod(BillingPeriodT&& value) { SetBillingPeriod(std::forward<BillingPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity that issues the Amazon Web Services invoice.</p>
     */
    inline const Aws::String& GetInvoicingEntity() const { return m_invoicingEntity; }
    inline bool InvoicingEntityHasBeenSet() const { return m_invoicingEntityHasBeenSet; }
    template<typename InvoicingEntityT = Aws::String>
    void SetInvoicingEntity(InvoicingEntityT&& value) { m_invoicingEntityHasBeenSet = true; m_invoicingEntity = std::forward<InvoicingEntityT>(value); }
    template<typename InvoicingEntityT = Aws::String>
    InvoiceSummariesFilter& WithInvoicingEntity(InvoicingEntityT&& value) { SetInvoicingEntity(std::forward<InvoicingEntityT>(value)); return *this;}
    ///@}
  private:

    DateInterval m_timeInterval;
    bool m_timeIntervalHasBeenSet = false;

    BillingPeriod m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::String m_invoicingEntity;
    bool m_invoicingEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
