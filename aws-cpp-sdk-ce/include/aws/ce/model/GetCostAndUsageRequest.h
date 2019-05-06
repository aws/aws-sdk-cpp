/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COSTEXPLORER_API GetCostAndUsageRequest : public CostExplorerRequest
  {
  public:
    GetCostAndUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostAndUsage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Sets the start and end dates for retrieving AWS costs. The start date is
     * inclusive, but the end date is exclusive. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>Sets the start and end dates for retrieving AWS costs. The start date is
     * inclusive, but the end date is exclusive. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>Sets the start and end dates for retrieving AWS costs. The start date is
     * inclusive, but the end date is exclusive. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>Sets the start and end dates for retrieving AWS costs. The start date is
     * inclusive, but the end date is exclusive. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>Sets the start and end dates for retrieving AWS costs. The start date is
     * inclusive, but the end date is exclusive. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetCostAndUsageRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>Sets the start and end dates for retrieving AWS costs. The start date is
     * inclusive, but the end date is exclusive. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetCostAndUsageRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Sets the AWS cost granularity to <code>MONTHLY</code> or <code>DAILY</code>.
     * If <code>Granularity</code> isn't set, the response object doesn't include the
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.
     * </p> <p>The <code>GetCostAndUsageRequest</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>Sets the AWS cost granularity to <code>MONTHLY</code> or <code>DAILY</code>.
     * If <code>Granularity</code> isn't set, the response object doesn't include the
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.
     * </p> <p>The <code>GetCostAndUsageRequest</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>Sets the AWS cost granularity to <code>MONTHLY</code> or <code>DAILY</code>.
     * If <code>Granularity</code> isn't set, the response object doesn't include the
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.
     * </p> <p>The <code>GetCostAndUsageRequest</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>Sets the AWS cost granularity to <code>MONTHLY</code> or <code>DAILY</code>.
     * If <code>Granularity</code> isn't set, the response object doesn't include the
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.
     * </p> <p>The <code>GetCostAndUsageRequest</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>Sets the AWS cost granularity to <code>MONTHLY</code> or <code>DAILY</code>.
     * If <code>Granularity</code> isn't set, the response object doesn't include the
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.
     * </p> <p>The <code>GetCostAndUsageRequest</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline GetCostAndUsageRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>Sets the AWS cost granularity to <code>MONTHLY</code> or <code>DAILY</code>.
     * If <code>Granularity</code> isn't set, the response object doesn't include the
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.
     * </p> <p>The <code>GetCostAndUsageRequest</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline GetCostAndUsageRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>Filters AWS costs by different dimensions. For example, you can specify
     * <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the costs that are
     * associated with that account's usage of that service. You can nest
     * <code>Expression</code> objects to define any combination of dimension filters.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters AWS costs by different dimensions. For example, you can specify
     * <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the costs that are
     * associated with that account's usage of that service. You can nest
     * <code>Expression</code> objects to define any combination of dimension filters.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters AWS costs by different dimensions. For example, you can specify
     * <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the costs that are
     * associated with that account's usage of that service. You can nest
     * <code>Expression</code> objects to define any combination of dimension filters.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters AWS costs by different dimensions. For example, you can specify
     * <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the costs that are
     * associated with that account's usage of that service. You can nest
     * <code>Expression</code> objects to define any combination of dimension filters.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters AWS costs by different dimensions. For example, you can specify
     * <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the costs that are
     * associated with that account's usage of that service. You can nest
     * <code>Expression</code> objects to define any combination of dimension filters.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p>
     */
    inline GetCostAndUsageRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters AWS costs by different dimensions. For example, you can specify
     * <code>SERVICE</code> and <code>LINKED_ACCOUNT</code> and get the costs that are
     * associated with that account's usage of that service. You can nest
     * <code>Expression</code> objects to define any combination of dimension filters.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * </p>
     */
    inline GetCostAndUsageRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline GetCostAndUsageRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline GetCostAndUsageRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline GetCostAndUsageRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline GetCostAndUsageRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }

    /**
     * <p>Which metrics are returned in the query. For more information about blended
     * and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values are <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>. </p> <note> <p>If you return the
     * <code>UsageQuantity</code> metric, the service aggregates all usage numbers
     * without taking into account the units. For example, if you aggregate
     * <code>usageQuantity</code> across all of Amazon EC2, the results aren't
     * meaningful because Amazon EC2 compute hours and data transfer are measured in
     * different units (for example, hours vs. GB). To get more meaningful
     * <code>UsageQuantity</code> metrics, filter by <code>UsageType</code> or
     * <code>UsageTypeGroups</code>. </p> </note> <p> <code>Metrics</code> is required
     * for <code>GetCostAndUsage</code> requests.</p>
     */
    inline GetCostAndUsageRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }


    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline void SetGroupBy(const Aws::Vector<GroupDefinition>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline void SetGroupBy(Aws::Vector<GroupDefinition>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline GetCostAndUsageRequest& WithGroupBy(const Aws::Vector<GroupDefinition>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline GetCostAndUsageRequest& WithGroupBy(Aws::Vector<GroupDefinition>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline GetCostAndUsageRequest& AddGroupBy(const GroupDefinition& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>You can group AWS costs using up to two different groups, either dimensions,
     * tag keys, or both.</p> <p>When you group by tag key, you get all tag values,
     * including empty strings.</p> <p>Valid values are <code>AZ</code>,
     * <code>INSTANCE_TYPE</code>, <code>LEGAL_ENTITY_NAME</code>,
     * <code>LINKED_ACCOUNT</code>, <code>OPERATION</code>, <code>PLATFORM</code>,
     * <code>PURCHASE_TYPE</code>, <code>SERVICE</code>, <code>TAGS</code>,
     * <code>TENANCY</code>, and <code>USAGE_TYPE</code>.</p>
     */
    inline GetCostAndUsageRequest& AddGroupBy(GroupDefinition&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetCostAndUsageRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetCostAndUsageRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetCostAndUsageRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Granularity m_granularity;
    bool m_granularityHasBeenSet;

    Expression m_filter;
    bool m_filterHasBeenSet;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
