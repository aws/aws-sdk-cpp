/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/sagemaker/model/SpaceSortKey.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListSpacesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListSpacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSpaces"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListSpacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListSpacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListSpacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns a list up to a specified limit.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Returns a list up to a specified limit.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Returns a list up to a specified limit.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Returns a list up to a specified limit.</p>
     */
    inline ListSpacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline ListSpacesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline ListSpacesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline const SpaceSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const SpaceSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(SpaceSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListSpacesRequest& WithSortBy(const SpaceSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListSpacesRequest& WithSortBy(SpaceSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline const Aws::String& GetDomainIdEquals() const{ return m_domainIdEquals; }

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline bool DomainIdEqualsHasBeenSet() const { return m_domainIdEqualsHasBeenSet; }

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline void SetDomainIdEquals(const Aws::String& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = value; }

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline void SetDomainIdEquals(Aws::String&& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = std::move(value); }

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline void SetDomainIdEquals(const char* value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals.assign(value); }

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline ListSpacesRequest& WithDomainIdEquals(const Aws::String& value) { SetDomainIdEquals(value); return *this;}

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline ListSpacesRequest& WithDomainIdEquals(Aws::String&& value) { SetDomainIdEquals(std::move(value)); return *this;}

    /**
     * <p>A parameter to search for the Domain ID.</p>
     */
    inline ListSpacesRequest& WithDomainIdEquals(const char* value) { SetDomainIdEquals(value); return *this;}


    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline const Aws::String& GetSpaceNameContains() const{ return m_spaceNameContains; }

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline bool SpaceNameContainsHasBeenSet() const { return m_spaceNameContainsHasBeenSet; }

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline void SetSpaceNameContains(const Aws::String& value) { m_spaceNameContainsHasBeenSet = true; m_spaceNameContains = value; }

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline void SetSpaceNameContains(Aws::String&& value) { m_spaceNameContainsHasBeenSet = true; m_spaceNameContains = std::move(value); }

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline void SetSpaceNameContains(const char* value) { m_spaceNameContainsHasBeenSet = true; m_spaceNameContains.assign(value); }

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline ListSpacesRequest& WithSpaceNameContains(const Aws::String& value) { SetSpaceNameContains(value); return *this;}

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline ListSpacesRequest& WithSpaceNameContains(Aws::String&& value) { SetSpaceNameContains(std::move(value)); return *this;}

    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline ListSpacesRequest& WithSpaceNameContains(const char* value) { SetSpaceNameContains(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    SpaceSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::String m_domainIdEquals;
    bool m_domainIdEqualsHasBeenSet = false;

    Aws::String m_spaceNameContains;
    bool m_spaceNameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
