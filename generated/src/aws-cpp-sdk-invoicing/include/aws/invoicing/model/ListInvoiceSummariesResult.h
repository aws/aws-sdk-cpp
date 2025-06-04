/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/InvoiceSummary.h>
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
  class ListInvoiceSummariesResult
  {
  public:
    AWS_INVOICING_API ListInvoiceSummariesResult() = default;
    AWS_INVOICING_API ListInvoiceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INVOICING_API ListInvoiceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of key (summary level) invoice details without line item details.</p>
     */
    inline const Aws::Vector<InvoiceSummary>& GetInvoiceSummaries() const { return m_invoiceSummaries; }
    template<typename InvoiceSummariesT = Aws::Vector<InvoiceSummary>>
    void SetInvoiceSummaries(InvoiceSummariesT&& value) { m_invoiceSummariesHasBeenSet = true; m_invoiceSummaries = std::forward<InvoiceSummariesT>(value); }
    template<typename InvoiceSummariesT = Aws::Vector<InvoiceSummary>>
    ListInvoiceSummariesResult& WithInvoiceSummaries(InvoiceSummariesT&& value) { SetInvoiceSummaries(std::forward<InvoiceSummariesT>(value)); return *this;}
    template<typename InvoiceSummariesT = InvoiceSummary>
    ListInvoiceSummariesResult& AddInvoiceSummaries(InvoiceSummariesT&& value) { m_invoiceSummariesHasBeenSet = true; m_invoiceSummaries.emplace_back(std::forward<InvoiceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvoiceSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvoiceSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InvoiceSummary> m_invoiceSummaries;
    bool m_invoiceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
