/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/RelatedItemTypeFilter.h>
#include <aws/connectcases/model/SearchAllRelatedItemsSort.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class SearchAllRelatedItemsRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API SearchAllRelatedItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAllRelatedItems"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SearchAllRelatedItemsRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchAllRelatedItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchAllRelatedItemsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of types of related items and their parameters to use for filtering.
     * The filters work as an OR condition: caller gets back related items that match
     * any of the specified filter types.</p>
     */
    inline const Aws::Vector<RelatedItemTypeFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<RelatedItemTypeFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<RelatedItemTypeFilter>>
    SearchAllRelatedItemsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = RelatedItemTypeFilter>
    SearchAllRelatedItemsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structured set of sort terms to specify the order in which related items
     * should be returned. Supports sorting by association time or case ID. The sorts
     * work in the order specified: first sort term takes precedence over subsequent
     * terms.</p>
     */
    inline const Aws::Vector<SearchAllRelatedItemsSort>& GetSorts() const { return m_sorts; }
    inline bool SortsHasBeenSet() const { return m_sortsHasBeenSet; }
    template<typename SortsT = Aws::Vector<SearchAllRelatedItemsSort>>
    void SetSorts(SortsT&& value) { m_sortsHasBeenSet = true; m_sorts = std::forward<SortsT>(value); }
    template<typename SortsT = Aws::Vector<SearchAllRelatedItemsSort>>
    SearchAllRelatedItemsRequest& WithSorts(SortsT&& value) { SetSorts(std::forward<SortsT>(value)); return *this;}
    template<typename SortsT = SearchAllRelatedItemsSort>
    SearchAllRelatedItemsRequest& AddSorts(SortsT&& value) { m_sortsHasBeenSet = true; m_sorts.emplace_back(std::forward<SortsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RelatedItemTypeFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<SearchAllRelatedItemsSort> m_sorts;
    bool m_sortsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
