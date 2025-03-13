/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/CaseFilter.h>
#include <aws/connectcases/model/FieldIdentifier.h>
#include <aws/connectcases/model/Sort.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class SearchCasesRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API SearchCasesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchCases"; }

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
    SearchCasesRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of field identifiers to be returned as part of the response.</p>
     */
    inline const Aws::Vector<FieldIdentifier>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<FieldIdentifier>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<FieldIdentifier>>
    SearchCasesRequest& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = FieldIdentifier>
    SearchCasesRequest& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of filter objects.</p>
     */
    inline const CaseFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = CaseFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = CaseFilter>
    SearchCasesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of cases to return. The current maximum supported value is
     * 25. This is also the default value when no other value is provided.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    SearchCasesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A word or phrase used to perform a quick search.</p>
     */
    inline const Aws::String& GetSearchTerm() const { return m_searchTerm; }
    inline bool SearchTermHasBeenSet() const { return m_searchTermHasBeenSet; }
    template<typename SearchTermT = Aws::String>
    void SetSearchTerm(SearchTermT&& value) { m_searchTermHasBeenSet = true; m_searchTerm = std::forward<SearchTermT>(value); }
    template<typename SearchTermT = Aws::String>
    SearchCasesRequest& WithSearchTerm(SearchTermT&& value) { SetSearchTerm(std::forward<SearchTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of sorts where each sort specifies a field and their sort order to be
     * applied to the results. </p>
     */
    inline const Aws::Vector<Sort>& GetSorts() const { return m_sorts; }
    inline bool SortsHasBeenSet() const { return m_sortsHasBeenSet; }
    template<typename SortsT = Aws::Vector<Sort>>
    void SetSorts(SortsT&& value) { m_sortsHasBeenSet = true; m_sorts = std::forward<SortsT>(value); }
    template<typename SortsT = Aws::Vector<Sort>>
    SearchCasesRequest& WithSorts(SortsT&& value) { SetSorts(std::forward<SortsT>(value)); return *this;}
    template<typename SortsT = Sort>
    SearchCasesRequest& AddSorts(SortsT&& value) { m_sortsHasBeenSet = true; m_sorts.emplace_back(std::forward<SortsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldIdentifier> m_fields;
    bool m_fieldsHasBeenSet = false;

    CaseFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_searchTerm;
    bool m_searchTermHasBeenSet = false;

    Aws::Vector<Sort> m_sorts;
    bool m_sortsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
