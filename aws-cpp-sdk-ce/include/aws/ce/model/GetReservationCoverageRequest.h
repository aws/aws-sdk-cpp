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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Granularity.h>
#include <aws/ce/model/Expression.h>
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
   * <p>You can use the following request parameters to query for how much of your
   * instance usage a reservation covered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API GetReservationCoverageRequest : public CostExplorerRequest
  {
  public:
    GetReservationCoverageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservationCoverage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline GetReservationCoverageRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline GetReservationCoverageRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline void SetGroupBy(const Aws::Vector<GroupDefinition>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline void SetGroupBy(Aws::Vector<GroupDefinition>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline GetReservationCoverageRequest& WithGroupBy(const Aws::Vector<GroupDefinition>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline GetReservationCoverageRequest& WithGroupBy(Aws::Vector<GroupDefinition>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline GetReservationCoverageRequest& AddGroupBy(const GroupDefinition& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline GetReservationCoverageRequest& AddGroupBy(GroupDefinition&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The granularity of the AWS cost data for the reservation. Valid values are
     * <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If <code>GroupBy</code> is
     * set, <code>Granularity</code> can't be set. If <code>Granularity</code> isn't
     * set, the response object doesn't include <code>Granularity</code>, either
     * <code>MONTHLY</code> or <code>DAILY</code>.</p> <p>The
     * <code>GetReservationCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>The granularity of the AWS cost data for the reservation. Valid values are
     * <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If <code>GroupBy</code> is
     * set, <code>Granularity</code> can't be set. If <code>Granularity</code> isn't
     * set, the response object doesn't include <code>Granularity</code>, either
     * <code>MONTHLY</code> or <code>DAILY</code>.</p> <p>The
     * <code>GetReservationCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>The granularity of the AWS cost data for the reservation. Valid values are
     * <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If <code>GroupBy</code> is
     * set, <code>Granularity</code> can't be set. If <code>Granularity</code> isn't
     * set, the response object doesn't include <code>Granularity</code>, either
     * <code>MONTHLY</code> or <code>DAILY</code>.</p> <p>The
     * <code>GetReservationCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The granularity of the AWS cost data for the reservation. Valid values are
     * <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If <code>GroupBy</code> is
     * set, <code>Granularity</code> can't be set. If <code>Granularity</code> isn't
     * set, the response object doesn't include <code>Granularity</code>, either
     * <code>MONTHLY</code> or <code>DAILY</code>.</p> <p>The
     * <code>GetReservationCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>The granularity of the AWS cost data for the reservation. Valid values are
     * <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If <code>GroupBy</code> is
     * set, <code>Granularity</code> can't be set. If <code>Granularity</code> isn't
     * set, the response object doesn't include <code>Granularity</code>, either
     * <code>MONTHLY</code> or <code>DAILY</code>.</p> <p>The
     * <code>GetReservationCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetReservationCoverageRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>The granularity of the AWS cost data for the reservation. Valid values are
     * <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If <code>GroupBy</code> is
     * set, <code>Granularity</code> can't be set. If <code>Granularity</code> isn't
     * set, the response object doesn't include <code>Granularity</code>, either
     * <code>MONTHLY</code> or <code>DAILY</code>.</p> <p>The
     * <code>GetReservationCoverage</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetReservationCoverageRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p>
     */
    inline GetReservationCoverageRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p>
     */
    inline GetReservationCoverageRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline GetReservationCoverageRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline GetReservationCoverageRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline GetReservationCoverageRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline GetReservationCoverageRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }

    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline GetReservationCoverageRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }


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
    inline GetReservationCoverageRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetReservationCoverageRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetReservationCoverageRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet;

    Granularity m_granularity;
    bool m_granularityHasBeenSet;

    Expression m_filter;
    bool m_filterHasBeenSet;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
