/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/InvoiceUnitRule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace Invoicing
{
namespace Model
{

  /**
   */
  class CreateInvoiceUnitRequest : public InvoicingRequest
  {
  public:
    AWS_INVOICING_API CreateInvoiceUnitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInvoiceUnit"; }

    AWS_INVOICING_API Aws::String SerializePayload() const override;

    AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique name of the invoice unit that is shown on the generated invoice.
     * This can't be changed once it is set. To change this name, you must delete the
     * invoice unit recreate. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateInvoiceUnitRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID chosen to be the receiver of an invoice
     * unit. All invoices generated for that invoice unit will be sent to this account
     * ID. </p>
     */
    inline const Aws::String& GetInvoiceReceiver() const { return m_invoiceReceiver; }
    inline bool InvoiceReceiverHasBeenSet() const { return m_invoiceReceiverHasBeenSet; }
    template<typename InvoiceReceiverT = Aws::String>
    void SetInvoiceReceiver(InvoiceReceiverT&& value) { m_invoiceReceiverHasBeenSet = true; m_invoiceReceiver = std::forward<InvoiceReceiverT>(value); }
    template<typename InvoiceReceiverT = Aws::String>
    CreateInvoiceUnitRequest& WithInvoiceReceiver(InvoiceReceiverT&& value) { SetInvoiceReceiver(std::forward<InvoiceReceiverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The invoice unit's description. This can be changed at a later time. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateInvoiceUnitRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the invoice unit based tax inheritance is/ should be enabled or
     * disabled. </p>
     */
    inline bool GetTaxInheritanceDisabled() const { return m_taxInheritanceDisabled; }
    inline bool TaxInheritanceDisabledHasBeenSet() const { return m_taxInheritanceDisabledHasBeenSet; }
    inline void SetTaxInheritanceDisabled(bool value) { m_taxInheritanceDisabledHasBeenSet = true; m_taxInheritanceDisabled = value; }
    inline CreateInvoiceUnitRequest& WithTaxInheritanceDisabled(bool value) { SetTaxInheritanceDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>InvoiceUnitRule</code> object used to create invoice units. </p>
     */
    inline const InvoiceUnitRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = InvoiceUnitRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = InvoiceUnitRule>
    CreateInvoiceUnitRequest& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tag structure that contains a tag key and value. </p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    CreateInvoiceUnitRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    CreateInvoiceUnitRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_invoiceReceiver;
    bool m_invoiceReceiverHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_taxInheritanceDisabled{false};
    bool m_taxInheritanceDisabledHasBeenSet = false;

    InvoiceUnitRule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
