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
    AWS_MACIE2_API GetFindingStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingStatistics"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline GetFindingStatisticsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>The criteria to use to filter the query results.</p>
     */
    inline GetFindingStatisticsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


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
    inline const GroupBy& GetGroupBy() const{ return m_groupBy; }

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
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

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
    inline void SetGroupBy(const GroupBy& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

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
    inline void SetGroupBy(GroupBy&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

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
    inline GetFindingStatisticsRequest& WithGroupBy(const GroupBy& value) { SetGroupBy(value); return *this;}

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
    inline GetFindingStatisticsRequest& WithGroupBy(GroupBy&& value) { SetGroupBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline GetFindingStatisticsRequest& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline const FindingStatisticsSortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline void SetSortCriteria(const FindingStatisticsSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline void SetSortCriteria(FindingStatisticsSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline GetFindingStatisticsRequest& WithSortCriteria(const FindingStatisticsSortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The criteria to use to sort the query results.</p>
     */
    inline GetFindingStatisticsRequest& WithSortCriteria(FindingStatisticsSortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    GroupBy m_groupBy;
    bool m_groupByHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    FindingStatisticsSortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
