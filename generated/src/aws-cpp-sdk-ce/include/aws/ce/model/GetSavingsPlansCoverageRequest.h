/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Granularity.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SortDefinition.h>
#include <aws/ce/model/GroupDefinition.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetSavingsPlansCoverageRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansCoverage"; }

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
    inline GetSavingsPlansCoverageRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline void SetGroupBy(const Aws::Vector<GroupDefinition>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline void SetGroupBy(Aws::Vector<GroupDefinition>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithGroupBy(const Aws::Vector<GroupDefinition>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithGroupBy(Aws::Vector<GroupDefinition>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& AddGroupBy(const GroupDefinition& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>You can group the data using the attributes <code>INSTANCE_FAMILY</code>,
     * <code>REGION</code>, or <code>SERVICE</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& AddGroupBy(GroupDefinition&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The granularity of the Amazon Web Services cost data for your Savings Plans.
     * <code>Granularity</code> can't be set if <code>GroupBy</code> is set.</p> <p>The
     * <code>GetSavingsPlansCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>The granularity of the Amazon Web Services cost data for your Savings Plans.
     * <code>Granularity</code> can't be set if <code>GroupBy</code> is set.</p> <p>The
     * <code>GetSavingsPlansCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>The granularity of the Amazon Web Services cost data for your Savings Plans.
     * <code>Granularity</code> can't be set if <code>GroupBy</code> is set.</p> <p>The
     * <code>GetSavingsPlansCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The granularity of the Amazon Web Services cost data for your Savings Plans.
     * <code>Granularity</code> can't be set if <code>GroupBy</code> is set.</p> <p>The
     * <code>GetSavingsPlansCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>The granularity of the Amazon Web Services cost data for your Savings Plans.
     * <code>Granularity</code> can't be set if <code>GroupBy</code> is set.</p> <p>The
     * <code>GetSavingsPlansCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>The granularity of the Amazon Web Services cost data for your Savings Plans.
     * <code>Granularity</code> can't be set if <code>GroupBy</code> is set.</p> <p>The
     * <code>GetSavingsPlansCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>Filters Savings Plans coverage data by dimensions. You can filter data for
     * Savings Plans usage with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code> </p> </li>
     * <li> <p> <code>SERVICE</code> </p> </li> <li> <p> <code>INSTANCE_FAMILY</code>
     * </p> </li> </ul> <p> <code>GetSavingsPlansCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p> <p>Cost category is also supported.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters Savings Plans coverage data by dimensions. You can filter data for
     * Savings Plans usage with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code> </p> </li>
     * <li> <p> <code>SERVICE</code> </p> </li> <li> <p> <code>INSTANCE_FAMILY</code>
     * </p> </li> </ul> <p> <code>GetSavingsPlansCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p> <p>Cost category is also supported.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters Savings Plans coverage data by dimensions. You can filter data for
     * Savings Plans usage with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code> </p> </li>
     * <li> <p> <code>SERVICE</code> </p> </li> <li> <p> <code>INSTANCE_FAMILY</code>
     * </p> </li> </ul> <p> <code>GetSavingsPlansCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p> <p>Cost category is also supported.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters Savings Plans coverage data by dimensions. You can filter data for
     * Savings Plans usage with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code> </p> </li>
     * <li> <p> <code>SERVICE</code> </p> </li> <li> <p> <code>INSTANCE_FAMILY</code>
     * </p> </li> </ul> <p> <code>GetSavingsPlansCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p> <p>Cost category is also supported.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters Savings Plans coverage data by dimensions. You can filter data for
     * Savings Plans usage with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code> </p> </li>
     * <li> <p> <code>SERVICE</code> </p> </li> <li> <p> <code>INSTANCE_FAMILY</code>
     * </p> </li> </ul> <p> <code>GetSavingsPlansCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p> <p>Cost category is also supported.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters Savings Plans coverage data by dimensions. You can filter data for
     * Savings Plans usage with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code> </p> </li>
     * <li> <p> <code>SERVICE</code> </p> </li> <li> <p> <code>INSTANCE_FAMILY</code>
     * </p> </li> </ul> <p> <code>GetSavingsPlansCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. If there are multiple values for a dimension, they are OR'd
     * together.</p> <p>Cost category is also supported.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }

    /**
     * <p>The measurement that you want your Savings Plans coverage reported in. The
     * only valid value is <code>SpendCoveredBySavingsPlans</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>SpendCoveredBySavingsPlan</code> </p> </li> <li> <p>
     * <code>OnDemandCost</code> </p> </li> <li> <p> <code>CoveragePercentage</code>
     * </p> </li> <li> <p> <code>TotalCost</code> </p> </li> <li> <p>
     * <code>InstanceFamily</code> </p> </li> <li> <p> <code>Region</code> </p> </li>
     * <li> <p> <code>Service</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline const SortDefinition& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>SpendCoveredBySavingsPlan</code> </p> </li> <li> <p>
     * <code>OnDemandCost</code> </p> </li> <li> <p> <code>CoveragePercentage</code>
     * </p> </li> <li> <p> <code>TotalCost</code> </p> </li> <li> <p>
     * <code>InstanceFamily</code> </p> </li> <li> <p> <code>Region</code> </p> </li>
     * <li> <p> <code>Service</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>SpendCoveredBySavingsPlan</code> </p> </li> <li> <p>
     * <code>OnDemandCost</code> </p> </li> <li> <p> <code>CoveragePercentage</code>
     * </p> </li> <li> <p> <code>TotalCost</code> </p> </li> <li> <p>
     * <code>InstanceFamily</code> </p> </li> <li> <p> <code>Region</code> </p> </li>
     * <li> <p> <code>Service</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline void SetSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>SpendCoveredBySavingsPlan</code> </p> </li> <li> <p>
     * <code>OnDemandCost</code> </p> </li> <li> <p> <code>CoveragePercentage</code>
     * </p> </li> <li> <p> <code>TotalCost</code> </p> </li> <li> <p>
     * <code>InstanceFamily</code> </p> </li> <li> <p> <code>Region</code> </p> </li>
     * <li> <p> <code>Service</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline void SetSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>SpendCoveredBySavingsPlan</code> </p> </li> <li> <p>
     * <code>OnDemandCost</code> </p> </li> <li> <p> <code>CoveragePercentage</code>
     * </p> </li> <li> <p> <code>TotalCost</code> </p> </li> <li> <p>
     * <code>InstanceFamily</code> </p> </li> <li> <p> <code>Region</code> </p> </li>
     * <li> <p> <code>Service</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithSortBy(const SortDefinition& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>SpendCoveredBySavingsPlan</code> </p> </li> <li> <p>
     * <code>OnDemandCost</code> </p> </li> <li> <p> <code>CoveragePercentage</code>
     * </p> </li> <li> <p> <code>TotalCost</code> </p> </li> <li> <p>
     * <code>InstanceFamily</code> </p> </li> <li> <p> <code>Region</code> </p> </li>
     * <li> <p> <code>Service</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline GetSavingsPlansCoverageRequest& WithSortBy(SortDefinition&& value) { SetSortBy(std::move(value)); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Granularity m_granularity;
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortDefinition m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
