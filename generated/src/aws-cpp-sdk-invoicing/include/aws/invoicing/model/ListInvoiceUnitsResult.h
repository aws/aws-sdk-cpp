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
    AWS_INVOICING_API ListInvoiceUnitsResult() = default;
    AWS_INVOICING_API ListInvoiceUnitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API ListInvoiceUnitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An invoice unit is a set of mutually exclusive accounts that correspond to
     * your business entity. </p>
     */
    inline const Aws::Vector<InvoiceUnit>& GetInvoiceUnits() const { return m_invoiceUnits; }
    template<typename InvoiceUnitsT = Aws::Vector<InvoiceUnit>>
    void SetInvoiceUnits(InvoiceUnitsT&& value) { m_invoiceUnitsHasBeenSet = true; m_invoiceUnits = std::forward<InvoiceUnitsT>(value); }
    template<typename InvoiceUnitsT = Aws::Vector<InvoiceUnit>>
    ListInvoiceUnitsResult& WithInvoiceUnits(InvoiceUnitsT&& value) { SetInvoiceUnits(std::forward<InvoiceUnitsT>(value)); return *this;}
    template<typename InvoiceUnitsT = InvoiceUnit>
    ListInvoiceUnitsResult& AddInvoiceUnits(InvoiceUnitsT&& value) { m_invoiceUnitsHasBeenSet = true; m_invoiceUnits.emplace_back(std::forward<InvoiceUnitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used to indicate where the returned list should start from.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvoiceUnitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvoiceUnitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InvoiceUnit> m_invoiceUnits;
    bool m_invoiceUnitsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
