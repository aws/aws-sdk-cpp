/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/InvoiceUnitRule.h>
#include <utility>

namespace Aws
{
namespace Invoicing
{
namespace Model
{

  /**
   */
  class UpdateInvoiceUnitRequest : public InvoicingRequest
  {
  public:
    AWS_INVOICING_API UpdateInvoiceUnitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInvoiceUnit"; }

    AWS_INVOICING_API Aws::String SerializePayload() const override;

    AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const{ return m_invoiceUnitArn; }
    inline bool InvoiceUnitArnHasBeenSet() const { return m_invoiceUnitArnHasBeenSet; }
    inline void SetInvoiceUnitArn(const Aws::String& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = value; }
    inline void SetInvoiceUnitArn(Aws::String&& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = std::move(value); }
    inline void SetInvoiceUnitArn(const char* value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn.assign(value); }
    inline UpdateInvoiceUnitRequest& WithInvoiceUnitArn(const Aws::String& value) { SetInvoiceUnitArn(value); return *this;}
    inline UpdateInvoiceUnitRequest& WithInvoiceUnitArn(Aws::String&& value) { SetInvoiceUnitArn(std::move(value)); return *this;}
    inline UpdateInvoiceUnitRequest& WithInvoiceUnitArn(const char* value) { SetInvoiceUnitArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assigned description for an invoice unit. This information can't be
     * modified or deleted. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateInvoiceUnitRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateInvoiceUnitRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateInvoiceUnitRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the invoice unit based tax inheritance is/ should be enabled or
     * disabled. </p>
     */
    inline bool GetTaxInheritanceDisabled() const{ return m_taxInheritanceDisabled; }
    inline bool TaxInheritanceDisabledHasBeenSet() const { return m_taxInheritanceDisabledHasBeenSet; }
    inline void SetTaxInheritanceDisabled(bool value) { m_taxInheritanceDisabledHasBeenSet = true; m_taxInheritanceDisabled = value; }
    inline UpdateInvoiceUnitRequest& WithTaxInheritanceDisabled(bool value) { SetTaxInheritanceDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>InvoiceUnitRule</code> object used to update invoice units. </p>
     */
    inline const InvoiceUnitRule& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const InvoiceUnitRule& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(InvoiceUnitRule&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline UpdateInvoiceUnitRequest& WithRule(const InvoiceUnitRule& value) { SetRule(value); return *this;}
    inline UpdateInvoiceUnitRequest& WithRule(InvoiceUnitRule&& value) { SetRule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_invoiceUnitArn;
    bool m_invoiceUnitArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_taxInheritanceDisabled;
    bool m_taxInheritanceDisabledHasBeenSet = false;

    InvoiceUnitRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
