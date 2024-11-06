/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/guardduty/model/GroupByType.h>
#include <aws/guardduty/model/OrderBy.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class GetFindingsStatisticsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API GetFindingsStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingsStatistics"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector whose findings statistics you want to retrieve.</p>
     * <p>To find the <code>detectorId</code> in the current Region, see the Settings
     * page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline GetFindingsStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline GetFindingsStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline GetFindingsStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria that is used for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }
    inline GetFindingsStatisticsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}
    inline GetFindingsStatisticsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the findings statistics grouped by one of the listed valid
     * values.</p>
     */
    inline const GroupByType& GetGroupBy() const{ return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    inline void SetGroupBy(const GroupByType& value) { m_groupByHasBeenSet = true; m_groupBy = value; }
    inline void SetGroupBy(GroupByType&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }
    inline GetFindingsStatisticsRequest& WithGroupBy(const GroupByType& value) { SetGroupBy(value); return *this;}
    inline GetFindingsStatisticsRequest& WithGroupBy(GroupByType&& value) { SetGroupBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the sorted findings in the requested order. The default value of
     * <code>orderBy</code> is <code>DESC</code>.</p> <p>You can use this parameter
     * only with the <code>groupBy</code> parameter.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }
    inline GetFindingsStatisticsRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}
    inline GetFindingsStatisticsRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in the response. The default
     * value is 25.</p> <p>You can use this parameter only with the
     * <code>groupBy</code> parameter.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetFindingsStatisticsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    GroupByType m_groupBy;
    bool m_groupByHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
