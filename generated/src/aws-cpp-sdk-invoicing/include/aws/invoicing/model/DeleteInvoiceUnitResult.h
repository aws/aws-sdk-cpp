/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteInvoiceUnitResult
  {
  public:
    AWS_INVOICING_API DeleteInvoiceUnitResult();
    AWS_INVOICING_API DeleteInvoiceUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API DeleteInvoiceUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN to identify an invoice unit. This information can't be modified or
     * deleted. </p>
     */
    inline const Aws::String& GetInvoiceUnitArn() const{ return m_invoiceUnitArn; }
    inline void SetInvoiceUnitArn(const Aws::String& value) { m_invoiceUnitArn = value; }
    inline void SetInvoiceUnitArn(Aws::String&& value) { m_invoiceUnitArn = std::move(value); }
    inline void SetInvoiceUnitArn(const char* value) { m_invoiceUnitArn.assign(value); }
    inline DeleteInvoiceUnitResult& WithInvoiceUnitArn(const Aws::String& value) { SetInvoiceUnitArn(value); return *this;}
    inline DeleteInvoiceUnitResult& WithInvoiceUnitArn(Aws::String&& value) { SetInvoiceUnitArn(std::move(value)); return *this;}
    inline DeleteInvoiceUnitResult& WithInvoiceUnitArn(const char* value) { SetInvoiceUnitArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteInvoiceUnitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteInvoiceUnitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteInvoiceUnitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_invoiceUnitArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
