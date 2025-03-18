/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Invoicing
{
namespace Model
{

  /**
   */
  class GetInvoiceUnitRequest : public InvoicingRequest
  {
  public:
    AWS_INVOICING_API GetInvoiceUnitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInvoiceUnit"; }

    AWS_INVOICING_API Aws::String SerializePayload() const override;

    AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const { return m_invoiceUnitArn; }
    inline bool InvoiceUnitArnHasBeenSet() const { return m_invoiceUnitArnHasBeenSet; }
    template<typename InvoiceUnitArnT = Aws::String>
    void SetInvoiceUnitArn(InvoiceUnitArnT&& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = std::forward<InvoiceUnitArnT>(value); }
    template<typename InvoiceUnitArnT = Aws::String>
    GetInvoiceUnitRequest& WithInvoiceUnitArn(InvoiceUnitArnT&& value) { SetInvoiceUnitArn(std::forward<InvoiceUnitArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of an invoice unit at a specified time. You can see legacy invoice
     * units that are currently deleted if the <code>AsOf</code> time is set to before
     * it was deleted. If an <code>AsOf</code> is not provided, the default value is
     * the current time. </p>
     */
    inline const Aws::Utils::DateTime& GetAsOf() const { return m_asOf; }
    inline bool AsOfHasBeenSet() const { return m_asOfHasBeenSet; }
    template<typename AsOfT = Aws::Utils::DateTime>
    void SetAsOf(AsOfT&& value) { m_asOfHasBeenSet = true; m_asOf = std::forward<AsOfT>(value); }
    template<typename AsOfT = Aws::Utils::DateTime>
    GetInvoiceUnitRequest& WithAsOf(AsOfT&& value) { SetAsOf(std::forward<AsOfT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invoiceUnitArn;
    bool m_invoiceUnitArnHasBeenSet = false;

    Aws::Utils::DateTime m_asOf{};
    bool m_asOfHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
