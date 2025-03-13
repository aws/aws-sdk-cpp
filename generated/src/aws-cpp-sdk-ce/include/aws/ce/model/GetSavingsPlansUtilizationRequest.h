/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Granularity.h>
#include <aws/ce/model/Expression.h>
#include <aws/ce/model/SortDefinition.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetSavingsPlansUtilizationRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansUtilization"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    GetSavingsPlansUtilizationRequest& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline Granularity GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(Granularity value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline GetSavingsPlansUtilizationRequest& WithGranularity(Granularity value) { SetGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>SAVINGS_PLANS_TYPE</code> </p> </li> <li> <p>
     * <code>REGION</code> </p> </li> <li> <p> <code>PAYMENT_OPTION</code> </p> </li>
     * <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    GetSavingsPlansUtilizationRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline const SortDefinition& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = SortDefinition>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = SortDefinition>
    GetSavingsPlansUtilizationRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}
  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Granularity m_granularity{Granularity::NOT_SET};
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    SortDefinition m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
