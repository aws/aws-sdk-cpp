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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetCostAndUsageWithResourcesRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostAndUsageWithResources"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Sets the start and end dates for retrieving Amazon Web Services costs. The
     * range must be within the last 14 days (the start date cannot be earlier than 14
     * days ago). The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>Sets the start and end dates for retrieving Amazon Web Services costs. The
     * range must be within the last 14 days (the start date cannot be earlier than 14
     * days ago). The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>Sets the start and end dates for retrieving Amazon Web Services costs. The
     * range must be within the last 14 days (the start date cannot be earlier than 14
     * days ago). The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>Sets the start and end dates for retrieving Amazon Web Services costs. The
     * range must be within the last 14 days (the start date cannot be earlier than 14
     * days ago). The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>Sets the start and end dates for retrieving Amazon Web Services costs. The
     * range must be within the last 14 days (the start date cannot be earlier than 14
     * days ago). The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>Sets the start and end dates for retrieving Amazon Web Services costs. The
     * range must be within the last 14 days (the start date cannot be earlier than 14
     * days ago). The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Sets the Amazon Web Services cost granularity to <code>MONTHLY</code>,
     * <code>DAILY</code>, or <code>HOURLY</code>. If <code>Granularity</code> isn't
     * set, the response object doesn't include the <code>Granularity</code>,
     * <code>MONTHLY</code>, <code>DAILY</code>, or <code>HOURLY</code>. </p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>Sets the Amazon Web Services cost granularity to <code>MONTHLY</code>,
     * <code>DAILY</code>, or <code>HOURLY</code>. If <code>Granularity</code> isn't
     * set, the response object doesn't include the <code>Granularity</code>,
     * <code>MONTHLY</code>, <code>DAILY</code>, or <code>HOURLY</code>. </p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>Sets the Amazon Web Services cost granularity to <code>MONTHLY</code>,
     * <code>DAILY</code>, or <code>HOURLY</code>. If <code>Granularity</code> isn't
     * set, the response object doesn't include the <code>Granularity</code>,
     * <code>MONTHLY</code>, <code>DAILY</code>, or <code>HOURLY</code>. </p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>Sets the Amazon Web Services cost granularity to <code>MONTHLY</code>,
     * <code>DAILY</code>, or <code>HOURLY</code>. If <code>Granularity</code> isn't
     * set, the response object doesn't include the <code>Granularity</code>,
     * <code>MONTHLY</code>, <code>DAILY</code>, or <code>HOURLY</code>. </p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>Sets the Amazon Web Services cost granularity to <code>MONTHLY</code>,
     * <code>DAILY</code>, or <code>HOURLY</code>. If <code>Granularity</code> isn't
     * set, the response object doesn't include the <code>Granularity</code>,
     * <code>MONTHLY</code>, <code>DAILY</code>, or <code>HOURLY</code>. </p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>Sets the Amazon Web Services cost granularity to <code>MONTHLY</code>,
     * <code>DAILY</code>, or <code>HOURLY</code>. If <code>Granularity</code> isn't
     * set, the response object doesn't include the <code>Granularity</code>,
     * <code>MONTHLY</code>, <code>DAILY</code>, or <code>HOURLY</code>. </p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>Filters Amazon Web Services costs by different dimensions. For example, you
     * can specify <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the
     * costs that are associated with that account's usage of that service. You can
     * nest <code>Expression</code> objects to define any combination of dimension
     * filters. For more information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p> <p>The <code>GetCostAndUsageWithResources</code> operation requires that
     * you either group by or filter by a <code>ResourceId</code>. It requires the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * <code>"SERVICE = Amazon Elastic Compute Cloud - Compute"</code> in the
     * filter.</p> <p>Valid values for <code>MatchOptions</code> for
     * <code>Dimensions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p> <p>Valid values for <code>MatchOptions</code>
     * for <code>CostCategories</code> and <code>Tags</code> are <code>EQUALS</code>,
     * <code>ABSENT</code>, and <code>CASE_SENSITIVE</code>. Default values are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters Amazon Web Services costs by different dimensions. For example, you
     * can specify <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the
     * costs that are associated with that account's usage of that service. You can
     * nest <code>Expression</code> objects to define any combination of dimension
     * filters. For more information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p> <p>The <code>GetCostAndUsageWithResources</code> operation requires that
     * you either group by or filter by a <code>ResourceId</code>. It requires the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * <code>"SERVICE = Amazon Elastic Compute Cloud - Compute"</code> in the
     * filter.</p> <p>Valid values for <code>MatchOptions</code> for
     * <code>Dimensions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p> <p>Valid values for <code>MatchOptions</code>
     * for <code>CostCategories</code> and <code>Tags</code> are <code>EQUALS</code>,
     * <code>ABSENT</code>, and <code>CASE_SENSITIVE</code>. Default values are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters Amazon Web Services costs by different dimensions. For example, you
     * can specify <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the
     * costs that are associated with that account's usage of that service. You can
     * nest <code>Expression</code> objects to define any combination of dimension
     * filters. For more information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p> <p>The <code>GetCostAndUsageWithResources</code> operation requires that
     * you either group by or filter by a <code>ResourceId</code>. It requires the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * <code>"SERVICE = Amazon Elastic Compute Cloud - Compute"</code> in the
     * filter.</p> <p>Valid values for <code>MatchOptions</code> for
     * <code>Dimensions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p> <p>Valid values for <code>MatchOptions</code>
     * for <code>CostCategories</code> and <code>Tags</code> are <code>EQUALS</code>,
     * <code>ABSENT</code>, and <code>CASE_SENSITIVE</code>. Default values are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters Amazon Web Services costs by different dimensions. For example, you
     * can specify <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the
     * costs that are associated with that account's usage of that service. You can
     * nest <code>Expression</code> objects to define any combination of dimension
     * filters. For more information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p> <p>The <code>GetCostAndUsageWithResources</code> operation requires that
     * you either group by or filter by a <code>ResourceId</code>. It requires the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * <code>"SERVICE = Amazon Elastic Compute Cloud - Compute"</code> in the
     * filter.</p> <p>Valid values for <code>MatchOptions</code> for
     * <code>Dimensions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p> <p>Valid values for <code>MatchOptions</code>
     * for <code>CostCategories</code> and <code>Tags</code> are <code>EQUALS</code>,
     * <code>ABSENT</code>, and <code>CASE_SENSITIVE</code>. Default values are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters Amazon Web Services costs by different dimensions. For example, you
     * can specify <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the
     * costs that are associated with that account's usage of that service. You can
     * nest <code>Expression</code> objects to define any combination of dimension
     * filters. For more information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p> <p>The <code>GetCostAndUsageWithResources</code> operation requires that
     * you either group by or filter by a <code>ResourceId</code>. It requires the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * <code>"SERVICE = Amazon Elastic Compute Cloud - Compute"</code> in the
     * filter.</p> <p>Valid values for <code>MatchOptions</code> for
     * <code>Dimensions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p> <p>Valid values for <code>MatchOptions</code>
     * for <code>CostCategories</code> and <code>Tags</code> are <code>EQUALS</code>,
     * <code>ABSENT</code>, and <code>CASE_SENSITIVE</code>. Default values are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters Amazon Web Services costs by different dimensions. For example, you
     * can specify <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the
     * costs that are associated with that account's usage of that service. You can
     * nest <code>Expression</code> objects to define any combination of dimension
     * filters. For more information, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p> <p>The <code>GetCostAndUsageWithResources</code> operation requires that
     * you either group by or filter by a <code>ResourceId</code>. It requires the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * <code>"SERVICE = Amazon Elastic Compute Cloud - Compute"</code> in the
     * filter.</p> <p>Valid values for <code>MatchOptions</code> for
     * <code>Dimensions</code> are <code>EQUALS</code> and
     * <code>CASE_SENSITIVE</code>.</p> <p>Valid values for <code>MatchOptions</code>
     * for <code>CostCategories</code> and <code>Tags</code> are <code>EQUALS</code>,
     * <code>ABSENT</code>, and <code>CASE_SENSITIVE</code>. Default values are
     * <code>EQUALS</code> and <code>CASE_SENSITIVE</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p>  <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking the units into account. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hour or GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p>  <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsageWithResources</code> requests.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }


    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline void SetGroupBy(const Aws::Vector<GroupDefinition>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline void SetGroupBy(Aws::Vector<GroupDefinition>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithGroupBy(const Aws::Vector<GroupDefinition>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithGroupBy(Aws::Vector<GroupDefinition>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& AddGroupBy(const GroupDefinition& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>You can group Amazon Web Services costs using up to two different groups:
     * <code>DIMENSION</code>, <code>TAG</code>, <code>COST_CATEGORY</code>.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& AddGroupBy(GroupDefinition&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetCostAndUsageWithResourcesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Granularity m_granularity;
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
