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


    ///@{
    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline const Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>& GetCriteria() const{ return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    inline void SetCriteria(const Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>& value) { m_criteriaHasBeenSet = true; m_criteria = value; }
    inline void SetCriteria(Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }
    inline DescribeBucketsRequest& WithCriteria(const Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>& value) { SetCriteria(value); return *this;}
    inline DescribeBucketsRequest& WithCriteria(Aws::Map<Aws::String, BucketCriteriaAdditionalProperties>&& value) { SetCriteria(std::move(value)); return *this;}
    inline DescribeBucketsRequest& AddCriteria(const Aws::String& key, const BucketCriteriaAdditionalProperties& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, value); return *this; }
    inline DescribeBucketsRequest& AddCriteria(Aws::String&& key, const BucketCriteriaAdditionalProperties& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(std::move(key), value); return *this; }
    inline DescribeBucketsRequest& AddCriteria(const Aws::String& key, BucketCriteriaAdditionalProperties&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, std::move(value)); return *this; }
    inline DescribeBucketsRequest& AddCriteria(Aws::String&& key, BucketCriteriaAdditionalProperties&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeBucketsRequest& AddCriteria(const char* key, BucketCriteriaAdditionalProperties&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, std::move(value)); return *this; }
    inline DescribeBucketsRequest& AddCriteria(const char* key, const BucketCriteriaAdditionalProperties& value) { m_criteriaHasBeenSet = true; m_criteria.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of the response. The
     * default value is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeBucketsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeBucketsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeBucketsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeBucketsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline const BucketSortCriteria& GetSortCriteria() const{ return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    inline void SetSortCriteria(const BucketSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }
    inline void SetSortCriteria(BucketSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }
    inline DescribeBucketsRequest& WithSortCriteria(const BucketSortCriteria& value) { SetSortCriteria(value); return *this;}
    inline DescribeBucketsRequest& WithSortCriteria(BucketSortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}
    ///@}
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
