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
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansUtilization"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansUtilizationRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansUtilizationRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline GetSavingsPlansUtilizationRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>The granularity of the Amazon Web Services utillization data for your Savings
     * Plans.</p> <p>The <code>GetSavingsPlansUtilization</code> operation supports
     * only <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline GetSavingsPlansUtilizationRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


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
    inline const Expression& GetFilter() const{ return m_filter; }

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
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

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
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

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
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

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
    inline GetSavingsPlansUtilizationRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

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
    inline GetSavingsPlansUtilizationRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


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
    inline const SortDefinition& GetSortBy() const{ return m_sortBy; }

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
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

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
    inline void SetSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

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
    inline void SetSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

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
    inline GetSavingsPlansUtilizationRequest& WithSortBy(const SortDefinition& value) { SetSortBy(value); return *this;}

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
    inline GetSavingsPlansUtilizationRequest& WithSortBy(SortDefinition&& value) { SetSortBy(std::move(value)); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Granularity m_granularity;
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    SortDefinition m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
