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
    AWS_INVOICING_API GetInvoiceUnitResult();
    AWS_INVOICING_API GetInvoiceUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API GetInvoiceUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const{ return m_invoiceUnitArn; }
    inline void SetInvoiceUnitArn(const Aws::String& value) { m_invoiceUnitArn = value; }
    inline void SetInvoiceUnitArn(Aws::String&& value) { m_invoiceUnitArn = std::move(value); }
    inline void SetInvoiceUnitArn(const char* value) { m_invoiceUnitArn.assign(value); }
    inline GetInvoiceUnitResult& WithInvoiceUnitArn(const Aws::String& value) { SetInvoiceUnitArn(value); return *this;}
    inline GetInvoiceUnitResult& WithInvoiceUnitArn(Aws::String&& value) { SetInvoiceUnitArn(std::move(value)); return *this;}
    inline GetInvoiceUnitResult& WithInvoiceUnitArn(const char* value) { SetInvoiceUnitArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID chosen to be the receiver of an invoice
     * unit. All invoices generated for that invoice unit will be sent to this account
     * ID. </p>
     */
    inline const Aws::String& GetInvoiceReceiver() const{ return m_invoiceReceiver; }
    inline void SetInvoiceReceiver(const Aws::String& value) { m_invoiceReceiver = value; }
    inline void SetInvoiceReceiver(Aws::String&& value) { m_invoiceReceiver = std::move(value); }
    inline void SetInvoiceReceiver(const char* value) { m_invoiceReceiver.assign(value); }
    inline GetInvoiceUnitResult& WithInvoiceReceiver(const Aws::String& value) { SetInvoiceReceiver(value); return *this;}
    inline GetInvoiceUnitResult& WithInvoiceReceiver(Aws::String&& value) { SetInvoiceReceiver(std::move(value)); return *this;}
    inline GetInvoiceUnitResult& WithInvoiceReceiver(const char* value) { SetInvoiceReceiver(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique name of the invoice unit that is shown on the generated invoice.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetInvoiceUnitResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetInvoiceUnitResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetInvoiceUnitResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The assigned description for an invoice unit. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetInvoiceUnitResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetInvoiceUnitResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetInvoiceUnitResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether the invoice unit based tax inheritance is/ should be enabled or
     * disabled. </p>
     */
    inline bool GetTaxInheritanceDisabled() const{ return m_taxInheritanceDisabled; }
    inline void SetTaxInheritanceDisabled(bool value) { m_taxInheritanceDisabled = value; }
    inline GetInvoiceUnitResult& WithTaxInheritanceDisabled(bool value) { SetTaxInheritanceDisabled(value); return *this;}
    ///@}

    ///@{
    
    inline const InvoiceUnitRule& GetRule() const{ return m_rule; }
    inline void SetRule(const InvoiceUnitRule& value) { m_rule = value; }
    inline void SetRule(InvoiceUnitRule&& value) { m_rule = std::move(value); }
    inline GetInvoiceUnitResult& WithRule(const InvoiceUnitRule& value) { SetRule(value); return *this;}
    inline GetInvoiceUnitResult& WithRule(InvoiceUnitRule&& value) { SetRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent date the invoice unit response was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }
    inline GetInvoiceUnitResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline GetInvoiceUnitResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInvoiceUnitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInvoiceUnitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInvoiceUnitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_invoiceUnitArn;

    Aws::String m_invoiceReceiver;

    Aws::String m_name;

    Aws::String m_description;

    bool m_taxInheritanceDisabled;

    InvoiceUnitRule m_rule;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
