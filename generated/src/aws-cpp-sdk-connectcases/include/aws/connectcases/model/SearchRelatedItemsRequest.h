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
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class SearchRelatedItemsRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API SearchRelatedItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchRelatedItems"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline SearchRelatedItemsRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline SearchRelatedItemsRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline SearchRelatedItemsRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline SearchRelatedItemsRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline SearchRelatedItemsRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline SearchRelatedItemsRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline const Aws::Vector<RelatedItemTypeFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline void SetFilters(const Aws::Vector<RelatedItemTypeFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline void SetFilters(Aws::Vector<RelatedItemTypeFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline SearchRelatedItemsRequest& WithFilters(const Aws::Vector<RelatedItemTypeFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline SearchRelatedItemsRequest& WithFilters(Aws::Vector<RelatedItemTypeFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline SearchRelatedItemsRequest& AddFilters(const RelatedItemTypeFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The list of types of related items and their parameters to use for
     * filtering.</p>
     */
    inline SearchRelatedItemsRequest& AddFilters(RelatedItemTypeFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline SearchRelatedItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchRelatedItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchRelatedItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchRelatedItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<RelatedItemTypeFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
