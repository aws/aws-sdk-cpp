/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/ListJobsFilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/ListJobsSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class ListClassificationJobsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API ListClassificationJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClassificationJobs"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline const ListJobsFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline void SetFilterCriteria(const ListJobsFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline void SetFilterCriteria(ListJobsFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline ListClassificationJobsRequest& WithFilterCriteria(const ListJobsFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline ListClassificationJobsRequest& WithFilterCriteria(ListJobsFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline ListClassificationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListClassificationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListClassificationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListClassificationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline const ListJobsSortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline void SetSortCriteria(const ListJobsSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline void SetSortCriteria(ListJobsSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline ListClassificationJobsRequest& WithSortCriteria(const ListJobsSortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline ListClassificationJobsRequest& WithSortCriteria(ListJobsSortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    ListJobsFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListJobsSortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
