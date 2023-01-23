/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/BucketSortCriteria.h>
#include <aws/macie2/model/BucketCriteriaAdditionalProperties.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class DescribeBucketsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API DescribeBucketsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBuckets"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline const Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline void SetCriteria(const Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline void SetCriteria(Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& WithCriteria(const Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& WithCriteria(Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>&& value) { SetCriteria(std::move(value)); return *this;}

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& AddCriteria(const Aws::String& key, const BucketCriteriaAdditionalProperties& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, value); return *this; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& AddCriteria(Aws::String&& key, const BucketCriteriaAdditionalProperties& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(std::move(key), value); return *this; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& AddCriteria(const Aws::String& key, BucketCriteriaAdditionalProperties&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& AddCriteria(Aws::String&& key, BucketCriteriaAdditionalProperties&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& AddCriteria(const char* key, BucketCriteriaAdditionalProperties&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline DescribeBucketsRequest& AddCriteria(const char* key, const BucketCriteriaAdditionalProperties& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, value); return *this; }


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
    inline DescribeBucketsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeBucketsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline DescribeBucketsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline DescribeBucketsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline const BucketSortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline void SetSortCriteria(const BucketSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline void SetSortCriteria(BucketSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline DescribeBucketsRequest& WithSortCriteria(const BucketSortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline DescribeBucketsRequest& WithSortCriteria(BucketSortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, BucketCriteriaAdditionalProperties> m_criteria;
    bool m_criteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    BucketSortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
