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
    AWS_INVOICING_API InvoiceUnit() = default;
    AWS_INVOICING_API InvoiceUnit(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const { return m_invoiceUnitArn; }
    inline bool InvoiceUnitArnHasBeenSet() const { return m_invoiceUnitArnHasBeenSet; }
    template<typename InvoiceUnitArnT = Aws::String>
    void SetInvoiceUnitArn(InvoiceUnitArnT&& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = std::forward<InvoiceUnitArnT>(value); }
    template<typename InvoiceUnitArnT = Aws::String>
    InvoiceUnit& WithInvoiceUnitArn(InvoiceUnitArnT&& value) { SetInvoiceUnitArn(std::forward<InvoiceUnitArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that receives invoices related to the invoice unit. </p>
     */
    inline const Aws::String& GetInvoiceReceiver() const { return m_invoiceReceiver; }
    inline bool InvoiceReceiverHasBeenSet() const { return m_invoiceReceiverHasBeenSet; }
    template<typename InvoiceReceiverT = Aws::String>
    void SetInvoiceReceiver(InvoiceReceiverT&& value) { m_invoiceReceiverHasBeenSet = true; m_invoiceReceiver = std::forward<InvoiceReceiverT>(value); }
    template<typename InvoiceReceiverT = Aws::String>
    InvoiceUnit& WithInvoiceReceiver(InvoiceReceiverT&& value) { SetInvoiceReceiver(std::forward<InvoiceReceiverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique name that is distinctive within your Amazon Web Services. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InvoiceUnit& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assigned description for an invoice unit. This information can't be
     * modified or deleted. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InvoiceUnit& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the invoice unit based tax inheritance is/ should be enabled or
     * disabled. </p>
     */
    inline bool GetTaxInheritanceDisabled() const { return m_taxInheritanceDisabled; }
    inline bool TaxInheritanceDisabledHasBeenSet() const { return m_taxInheritanceDisabledHasBeenSet; }
    inline void SetTaxInheritanceDisabled(bool value) { m_taxInheritanceDisabledHasBeenSet = true; m_taxInheritanceDisabled = value; }
    inline InvoiceUnit& WithTaxInheritanceDisabled(bool value) { SetTaxInheritanceDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>InvoiceUnitRule</code> object used the categorize invoice units.
     * </p>
     */
    inline const InvoiceUnitRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = InvoiceUnitRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = InvoiceUnitRule>
    InvoiceUnit& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time the invoice unit was updated. This is important to determine
     * the version of invoice unit configuration used to create the invoices. Any
     * invoice created after this modified time will use this invoice unit
     * configuration. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    InvoiceUnit& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
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

    bool m_taxInheritanceDisabled{false};
    bool m_taxInheritanceDisabledHasBeenSet = false;

    InvoiceUnitRule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
