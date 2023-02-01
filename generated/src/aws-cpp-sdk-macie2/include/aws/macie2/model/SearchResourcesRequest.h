/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/SearchResourcesBucketCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/SearchResourcesSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class SearchResourcesRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API SearchResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchResources"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The filter conditions that determine which S3 buckets to include or exclude
     * from the query results.</p>
     */
    inline const SearchResourcesBucketCriteria& GetBucketCriteria() const{ return m_bucketCriteria; }

    /**
     * <p>The filter conditions that determine which S3 buckets to include or exclude
     * from the query results.</p>
     */
    inline bool BucketCriteriaHasBeenSet() const { return m_bucketCriteriaHasBeenSet; }

    /**
     * <p>The filter conditions that determine which S3 buckets to include or exclude
     * from the query results.</p>
     */
    inline void SetBucketCriteria(const SearchResourcesBucketCriteria& value) { m_bucketCriteriaHasBeenSet = true; m_bucketCriteria = value; }

    /**
     * <p>The filter conditions that determine which S3 buckets to include or exclude
     * from the query results.</p>
     */
    inline void SetBucketCriteria(SearchResourcesBucketCriteria&& value) { m_bucketCriteriaHasBeenSet = true; m_bucketCriteria = std::move(value); }

    /**
     * <p>The filter conditions that determine which S3 buckets to include or exclude
     * from the query results.</p>
     */
    inline SearchResourcesRequest& WithBucketCriteria(const SearchResourcesBucketCriteria& value) { SetBucketCriteria(value); return *this;}

    /**
     * <p>The filter conditions that determine which S3 buckets to include or exclude
     * from the query results.</p>
     */
    inline SearchResourcesRequest& WithBucketCriteria(SearchResourcesBucketCriteria&& value) { SetBucketCriteria(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to include in each page of the response. The
     * default value is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to include in each page of the response. The
     * default value is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of the response. The
     * default value is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to include in each page of the response. The
     * default value is 50.</p>
     */
    inline SearchResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline SearchResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline SearchResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline SearchResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline const SearchResourcesSortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline void SetSortCriteria(const SearchResourcesSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline void SetSortCriteria(SearchResourcesSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline SearchResourcesRequest& WithSortCriteria(const SearchResourcesSortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline SearchResourcesRequest& WithSortCriteria(SearchResourcesSortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    SearchResourcesBucketCriteria m_bucketCriteria;
    bool m_bucketCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SearchResourcesSortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
