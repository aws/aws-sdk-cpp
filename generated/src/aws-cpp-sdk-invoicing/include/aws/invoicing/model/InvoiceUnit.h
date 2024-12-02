/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/InvoiceUnitRule.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An invoice unit is a set of mutually exclusive accounts that correspond to
   * your business entity. Invoice units allow you separate Amazon Web Services
   * account costs and configures your invoice for each business entity going
   * forward. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceUnit">AWS
   * API Reference</a></p>
   */
  class InvoiceUnit
  {
  public:
    AWS_INVOICING_API InvoiceUnit();
    AWS_INVOICING_API InvoiceUnit(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const{ return m_invoiceUnitArn; }
    inline bool InvoiceUnitArnHasBeenSet() const { return m_invoiceUnitArnHasBeenSet; }
    inline void SetInvoiceUnitArn(const Aws::String& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = value; }
    inline void SetInvoiceUnitArn(Aws::String&& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = std::move(value); }
    inline void SetInvoiceUnitArn(const char* value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn.assign(value); }
    inline InvoiceUnit& WithInvoiceUnitArn(const Aws::String& value) { SetInvoiceUnitArn(value); return *this;}
    inline InvoiceUnit& WithInvoiceUnitArn(Aws::String&& value) { SetInvoiceUnitArn(std::move(value)); return *this;}
    inline InvoiceUnit& WithInvoiceUnitArn(const char* value) { SetInvoiceUnitArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that receives invoices related to the invoice unit. </p>
     */
    inline const Aws::String& GetInvoiceReceiver() const{ return m_invoiceReceiver; }
    inline bool InvoiceReceiverHasBeenSet() const { return m_invoiceReceiverHasBeenSet; }
    inline void SetInvoiceReceiver(const Aws::String& value) { m_invoiceReceiverHasBeenSet = true; m_invoiceReceiver = value; }
    inline void SetInvoiceReceiver(Aws::String&& value) { m_invoiceReceiverHasBeenSet = true; m_invoiceReceiver = std::move(value); }
    inline void SetInvoiceReceiver(const char* value) { m_invoiceReceiverHasBeenSet = true; m_invoiceReceiver.assign(value); }
    inline InvoiceUnit& WithInvoiceReceiver(const Aws::String& value) { SetInvoiceReceiver(value); return *this;}
    inline InvoiceUnit& WithInvoiceReceiver(Aws::String&& value) { SetInvoiceReceiver(std::move(value)); return *this;}
    inline InvoiceUnit& WithInvoiceReceiver(const char* value) { SetInvoiceReceiver(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique name that is distinctive within your Amazon Web Services. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InvoiceUnit& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InvoiceUnit& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InvoiceUnit& WithName(const char* value) { SetName(value); return *this;}
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
    inline InvoiceUnit& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InvoiceUnit& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InvoiceUnit& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the invoice unit based tax inheritance is/ should be enabled or
     * disabled. </p>
     */
    inline bool GetTaxInheritanceDisabled() const{ return m_taxInheritanceDisabled; }
    inline bool TaxInheritanceDisabledHasBeenSet() const { return m_taxInheritanceDisabledHasBeenSet; }
    inline void SetTaxInheritanceDisabled(bool value) { m_taxInheritanceDisabledHasBeenSet = true; m_taxInheritanceDisabled = value; }
    inline InvoiceUnit& WithTaxInheritanceDisabled(bool value) { SetTaxInheritanceDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>InvoiceUnitRule</code> object used the categorize invoice units.
     * </p>
     */
    inline const InvoiceUnitRule& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const InvoiceUnitRule& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(InvoiceUnitRule&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline InvoiceUnit& WithRule(const InvoiceUnitRule& value) { SetRule(value); return *this;}
    inline InvoiceUnit& WithRule(InvoiceUnitRule&& value) { SetRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time the invoice unit was updated. This is important to determine
     * the version of invoice unit configuration used to create the invoices. Any
     * invoice created after this modified time will use this invoice unit
     * configuration. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline InvoiceUnit& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline InvoiceUnit& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_invoiceUnitArn;
    bool m_invoiceUnitArnHasBeenSet = false;

    Aws::String m_invoiceReceiver;
    bool m_invoiceReceiverHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_taxInheritanceDisabled;
    bool m_taxInheritanceDisabledHasBeenSet = false;

    InvoiceUnitRule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
