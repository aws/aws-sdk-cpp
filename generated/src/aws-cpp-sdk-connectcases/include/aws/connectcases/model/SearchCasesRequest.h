﻿/**
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
    AWS_CONNECTCASES_API SearchCasesRequest();

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
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline SearchCasesRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline SearchCasesRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline SearchCasesRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of field identifiers to be returned as part of the response.</p>
     */
    inline const Aws::Vector<FieldIdentifier>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<FieldIdentifier>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<FieldIdentifier>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline SearchCasesRequest& WithFields(const Aws::Vector<FieldIdentifier>& value) { SetFields(value); return *this;}
    inline SearchCasesRequest& WithFields(Aws::Vector<FieldIdentifier>&& value) { SetFields(std::move(value)); return *this;}
    inline SearchCasesRequest& AddFields(const FieldIdentifier& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline SearchCasesRequest& AddFields(FieldIdentifier&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of filter objects.</p>
     */
    inline const CaseFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const CaseFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(CaseFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline SearchCasesRequest& WithFilter(const CaseFilter& value) { SetFilter(value); return *this;}
    inline SearchCasesRequest& WithFilter(CaseFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of cases to return. The current maximum supported value is
     * 25. This is also the default value when no other value is provided.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchCasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchCasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchCasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A word or phrase used to perform a quick search.</p>
     */
    inline const Aws::String& GetSearchTerm() const{ return m_searchTerm; }
    inline bool SearchTermHasBeenSet() const { return m_searchTermHasBeenSet; }
    inline void SetSearchTerm(const Aws::String& value) { m_searchTermHasBeenSet = true; m_searchTerm = value; }
    inline void SetSearchTerm(Aws::String&& value) { m_searchTermHasBeenSet = true; m_searchTerm = std::move(value); }
    inline void SetSearchTerm(const char* value) { m_searchTermHasBeenSet = true; m_searchTerm.assign(value); }
    inline SearchCasesRequest& WithSearchTerm(const Aws::String& value) { SetSearchTerm(value); return *this;}
    inline SearchCasesRequest& WithSearchTerm(Aws::String&& value) { SetSearchTerm(std::move(value)); return *this;}
    inline SearchCasesRequest& WithSearchTerm(const char* value) { SetSearchTerm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of sorts where each sort specifies a field and their sort order to be
     * applied to the results. </p>
     */
    inline const Aws::Vector<Sort>& GetSorts() const{ return m_sorts; }
    inline bool SortsHasBeenSet() const { return m_sortsHasBeenSet; }
    inline void SetSorts(const Aws::Vector<Sort>& value) { m_sortsHasBeenSet = true; m_sorts = value; }
    inline void SetSorts(Aws::Vector<Sort>&& value) { m_sortsHasBeenSet = true; m_sorts = std::move(value); }
    inline SearchCasesRequest& WithSorts(const Aws::Vector<Sort>& value) { SetSorts(value); return *this;}
    inline SearchCasesRequest& WithSorts(Aws::Vector<Sort>&& value) { SetSorts(std::move(value)); return *this;}
    inline SearchCasesRequest& AddSorts(const Sort& value) { m_sortsHasBeenSet = true; m_sorts.push_back(value); return *this; }
    inline SearchCasesRequest& AddSorts(Sort&& value) { m_sortsHasBeenSet = true; m_sorts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<FieldIdentifier> m_fields;
    bool m_fieldsHasBeenSet = false;

    CaseFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
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
