/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/sagemaker/model/AppSortKey.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListAppsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

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
    inline ListAppsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline ListAppsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline ListAppsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline const AppSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline void SetSortBy(const AppSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline void SetSortBy(AppSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline ListAppsRequest& WithSortBy(const AppSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline ListAppsRequest& WithSortBy(AppSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline const Aws::String& GetDomainIdEquals() const{ return m_domainIdEquals; }

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline bool DomainIdEqualsHasBeenSet() const { return m_domainIdEqualsHasBeenSet; }

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline void SetDomainIdEquals(const Aws::String& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = value; }

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline void SetDomainIdEquals(Aws::String&& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = std::move(value); }

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline void SetDomainIdEquals(const char* value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals.assign(value); }

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline ListAppsRequest& WithDomainIdEquals(const Aws::String& value) { SetDomainIdEquals(value); return *this;}

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline ListAppsRequest& WithDomainIdEquals(Aws::String&& value) { SetDomainIdEquals(std::move(value)); return *this;}

    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline ListAppsRequest& WithDomainIdEquals(const char* value) { SetDomainIdEquals(value); return *this;}


    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline const Aws::String& GetUserProfileNameEquals() const{ return m_userProfileNameEquals; }

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline bool UserProfileNameEqualsHasBeenSet() const { return m_userProfileNameEqualsHasBeenSet; }

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline void SetUserProfileNameEquals(const Aws::String& value) { m_userProfileNameEqualsHasBeenSet = true; m_userProfileNameEquals = value; }

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline void SetUserProfileNameEquals(Aws::String&& value) { m_userProfileNameEqualsHasBeenSet = true; m_userProfileNameEquals = std::move(value); }

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline void SetUserProfileNameEquals(const char* value) { m_userProfileNameEqualsHasBeenSet = true; m_userProfileNameEquals.assign(value); }

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline ListAppsRequest& WithUserProfileNameEquals(const Aws::String& value) { SetUserProfileNameEquals(value); return *this;}

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline ListAppsRequest& WithUserProfileNameEquals(Aws::String&& value) { SetUserProfileNameEquals(std::move(value)); return *this;}

    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline ListAppsRequest& WithUserProfileNameEquals(const char* value) { SetUserProfileNameEquals(value); return *this;}


    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline const Aws::String& GetSpaceNameEquals() const{ return m_spaceNameEquals; }

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline bool SpaceNameEqualsHasBeenSet() const { return m_spaceNameEqualsHasBeenSet; }

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline void SetSpaceNameEquals(const Aws::String& value) { m_spaceNameEqualsHasBeenSet = true; m_spaceNameEquals = value; }

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline void SetSpaceNameEquals(Aws::String&& value) { m_spaceNameEqualsHasBeenSet = true; m_spaceNameEquals = std::move(value); }

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline void SetSpaceNameEquals(const char* value) { m_spaceNameEqualsHasBeenSet = true; m_spaceNameEquals.assign(value); }

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline ListAppsRequest& WithSpaceNameEquals(const Aws::String& value) { SetSpaceNameEquals(value); return *this;}

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline ListAppsRequest& WithSpaceNameEquals(Aws::String&& value) { SetSpaceNameEquals(std::move(value)); return *this;}

    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline ListAppsRequest& WithSpaceNameEquals(const char* value) { SetSpaceNameEquals(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    AppSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::String m_domainIdEquals;
    bool m_domainIdEqualsHasBeenSet = false;

    Aws::String m_userProfileNameEquals;
    bool m_userProfileNameEqualsHasBeenSet = false;

    Aws::String m_spaceNameEquals;
    bool m_spaceNameEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
