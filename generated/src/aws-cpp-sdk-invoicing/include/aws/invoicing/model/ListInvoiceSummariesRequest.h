/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/model/InvoiceSummariesSelector.h>
#include <aws/invoicing/model/InvoiceSummariesFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Invoicing
{
namespace Model
{

  /**
   */
  class ListInvoiceSummariesRequest : public InvoicingRequest
  {
  public:
    AWS_INVOICING_API ListInvoiceSummariesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInvoiceSummaries"; }

    AWS_INVOICING_API Aws::String SerializePayload() const override;

    AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The option to retrieve details for a specific invoice by providing its unique
     * ID. Alternatively, access information for all invoices linked to the account by
     * providing an account ID.</p>
     */
    inline const InvoiceSummariesSelector& GetSelector() const { return m_selector; }
    inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
    template<typename SelectorT = InvoiceSummariesSelector>
    void SetSelector(SelectorT&& value) { m_selectorHasBeenSet = true; m_selector = std::forward<SelectorT>(value); }
    template<typename SelectorT = InvoiceSummariesSelector>
    ListInvoiceSummariesRequest& WithSelector(SelectorT&& value) { SetSelector(std::forward<SelectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters you can use to customize your invoice summary.</p>
     */
    inline const InvoiceSummariesFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = InvoiceSummariesFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = InvoiceSummariesFilter>
    ListInvoiceSummariesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvoiceSummariesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invoice summaries a paginated response can contain.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInvoiceSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    InvoiceSummariesSelector m_selector;
    bool m_selectorHasBeenSet = false;

    InvoiceSummariesFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
