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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Invoicing
{
namespace Model
{
  class GetInvoiceUnitResult
  {
  public:
    AWS_INVOICING_API GetInvoiceUnitResult() = default;
    AWS_INVOICING_API GetInvoiceUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API GetInvoiceUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const { return m_invoiceUnitArn; }
    template<typename InvoiceUnitArnT = Aws::String>
    void SetInvoiceUnitArn(InvoiceUnitArnT&& value) { m_invoiceUnitArnHasBeenSet = true; m_invoiceUnitArn = std::forward<InvoiceUnitArnT>(value); }
    template<typename InvoiceUnitArnT = Aws::String>
    GetInvoiceUnitResult& WithInvoiceUnitArn(InvoiceUnitArnT&& value) { SetInvoiceUnitArn(std::forward<InvoiceUnitArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID chosen to be the receiver of an invoice
     * unit. All invoices generated for that invoice unit will be sent to this account
     * ID. </p>
     */
    inline const Aws::String& GetInvoiceReceiver() const { return m_invoiceReceiver; }
    template<typename InvoiceReceiverT = Aws::String>
    void SetInvoiceReceiver(InvoiceReceiverT&& value) { m_invoiceReceiverHasBeenSet = true; m_invoiceReceiver = std::forward<InvoiceReceiverT>(value); }
    template<typename InvoiceReceiverT = Aws::String>
    GetInvoiceUnitResult& WithInvoiceReceiver(InvoiceReceiverT&& value) { SetInvoiceReceiver(std::forward<InvoiceReceiverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique name of the invoice unit that is shown on the generated invoice.
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetInvoiceUnitResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The assigned description for an invoice unit. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetInvoiceUnitResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether the invoice unit based tax inheritance is/ should be enabled or
     * disabled. </p>
     */
    inline bool GetTaxInheritanceDisabled() const { return m_taxInheritanceDisabled; }
    inline void SetTaxInheritanceDisabled(bool value) { m_taxInheritanceDisabledHasBeenSet = true; m_taxInheritanceDisabled = value; }
    inline GetInvoiceUnitResult& WithTaxInheritanceDisabled(bool value) { SetTaxInheritanceDisabled(value); return *this;}
    ///@}

    ///@{
    
    inline const InvoiceUnitRule& GetRule() const { return m_rule; }
    template<typename RuleT = InvoiceUnitRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = InvoiceUnitRule>
    GetInvoiceUnitResult& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent date the invoice unit response was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    GetInvoiceUnitResult& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInvoiceUnitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
