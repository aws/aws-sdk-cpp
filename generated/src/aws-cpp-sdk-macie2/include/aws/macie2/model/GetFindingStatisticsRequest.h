/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/FindingCriteria.h>
#include <aws/macie2/model/GroupBy.h>
#include <aws/macie2/model/FindingStatisticsSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class GetFindingStatisticsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API GetFindingStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingStatistics"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const { return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    template<typename FindingCriteriaT = FindingCriteria>
    void SetFindingCriteria(FindingCriteriaT&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::forward<FindingCriteriaT>(value); }
    template<typename FindingCriteriaT = FindingCriteria>
    GetFindingStatisticsRequest& WithFindingCriteria(FindingCriteriaT&& value) { SetFindingCriteria(std::forward<FindingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding property to use to group the query results. Valid values are:</p>
     * <ul><li><p>classificationDetails.jobId - The unique identifier for the
     * classification job that produced the finding.</p></li>
     * <li><p>resourcesAffected.s3Bucket.name - The name of the S3 bucket that the
     * finding applies to.</p></li> <li><p>severity.description - The severity level of
     * the finding, such as High or Medium.</p></li> <li><p>type - The type of finding,
     * such as Policy:IAMUser/S3BucketPublic and
     * SensitiveData:S3Object/Personal.</p></li></ul>
     */
    inline GroupBy GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    inline void SetGroupBy(GroupBy value) { m_groupByHasBeenSet = true; m_groupBy = value; }
    inline GetFindingStatisticsRequest& WithGroupBy(GroupBy value) { SetGroupBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline GetFindingStatisticsRequest& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline const FindingStatisticsSortCriteria& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = FindingStatisticsSortCriteria>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = FindingStatisticsSortCriteria>
    GetFindingStatisticsRequest& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    ///@}
  private:

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    GroupBy m_groupBy{GroupBy::NOT_SET};
    bool m_groupByHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    FindingStatisticsSortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
