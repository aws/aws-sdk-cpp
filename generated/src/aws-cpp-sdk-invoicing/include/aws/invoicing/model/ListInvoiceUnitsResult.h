/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/InvoiceUnit.h>
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
  class ListInvoiceUnitsResult
  {
  public:
    AWS_INVOICING_API ListInvoiceUnitsResult();
    AWS_INVOICING_API ListInvoiceUnitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API ListInvoiceUnitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An invoice unit is a set of mutually exclusive accounts that correspond to
     * your business entity. </p>
     */
    inline const Aws::Vector<InvoiceUnit>& GetInvoiceUnits() const{ return m_invoiceUnits; }
    inline void SetInvoiceUnits(const Aws::Vector<InvoiceUnit>& value) { m_invoiceUnits = value; }
    inline void SetInvoiceUnits(Aws::Vector<InvoiceUnit>&& value) { m_invoiceUnits = std::move(value); }
    inline ListInvoiceUnitsResult& WithInvoiceUnits(const Aws::Vector<InvoiceUnit>& value) { SetInvoiceUnits(value); return *this;}
    inline ListInvoiceUnitsResult& WithInvoiceUnits(Aws::Vector<InvoiceUnit>&& value) { SetInvoiceUnits(std::move(value)); return *this;}
    inline ListInvoiceUnitsResult& AddInvoiceUnits(const InvoiceUnit& value) { m_invoiceUnits.push_back(value); return *this; }
    inline ListInvoiceUnitsResult& AddInvoiceUnits(InvoiceUnit&& value) { m_invoiceUnits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used to indicate where the returned list should start from.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInvoiceUnitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInvoiceUnitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInvoiceUnitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInvoiceUnitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInvoiceUnitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInvoiceUnitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InvoiceUnit> m_invoiceUnits;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
