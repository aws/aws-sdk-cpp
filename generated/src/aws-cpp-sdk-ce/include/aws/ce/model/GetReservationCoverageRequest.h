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
   * <p>You can use the following request parameters to query for how much of your
   * instance usage a reservation covered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverageRequest">AWS
   * API Reference</a></p>
   */
  class GetReservationCoverageRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetReservationCoverageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservationCoverage"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The start and end dates of the period that you want to retrieve data about
     * reservation coverage for. You can retrieve data for a maximum of 13 months: the
     * last 12 months and the current month. The start date is inclusive, but the end
     * date is exclusive. For example, if <code>start</code> is <code>2017-01-01</code>
     * and <code>end</code> is <code>2017-05-01</code>, then the cost and usage data is
     * retrieved from <code>2017-01-01</code> up to and including
     * <code>2017-04-30</code> but not including <code>2017-05-01</code>. </p>
     */
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    GetReservationCoverageRequest& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can group the data by the following attributes:</p> <ul> <li> <p>AZ</p>
     * </li> <li> <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>INVOICING_ENTITY</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>TENANCY</p> </li> </ul>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<GroupDefinition>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<GroupDefinition>>
    GetReservationCoverageRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    template<typename GroupByT = GroupDefinition>
    GetReservationCoverageRequest& AddGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy.emplace_back(std::forward<GroupByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The granularity of the Amazon Web Services cost data for the reservation.
     * Valid values are <code>MONTHLY</code> and <code>DAILY</code>.</p> <p>If
     * <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>.</p>
     * <p>The <code>GetReservationCoverage</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline Granularity GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(Granularity value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline GetReservationCoverageRequest& WithGranularity(Granularity value) { SetGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DATABASE_ENGINE</p> </li> <li> <p>DEPLOYMENT_OPTION</p> </li> <li>
     * <p>INSTANCE_TYPE</p> </li> <li> <p>LINKED_ACCOUNT</p> </li> <li>
     * <p>OPERATING_SYSTEM</p> </li> <li> <p>PLATFORM</p> </li> <li> <p>REGION</p>
     * </li> <li> <p>SERVICE</p> </li> <li> <p>TAG</p> </li> <li> <p>TENANCY</p> </li>
     * </ul> <p> <code>GetReservationCoverage</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension. You can nest only one level deep. If there are multiple values
     * for a dimension, they are OR'd together.</p> <p>If you don't provide a
     * <code>SERVICE</code> filter, Cost Explorer defaults to EC2.</p> <p>Cost category
     * is also supported.</p>
     */
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    GetReservationCoverageRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measurement that you want your reservation coverage reported in.</p>
     * <p>Valid values are <code>Hour</code>, <code>Unit</code>, and <code>Cost</code>.
     * You can use multiple values in a request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<Aws::String>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<Aws::String>>
    GetReservationCoverageRequest& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = Aws::String>
    GetReservationCoverageRequest& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetReservationCoverageRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value by which you want to sort the data.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p> <code>OnDemandCost</code> </p>
     * </li> <li> <p> <code>CoverageHoursPercentage</code> </p> </li> <li> <p>
     * <code>OnDemandHours</code> </p> </li> <li> <p> <code>ReservedHours</code> </p>
     * </li> <li> <p> <code>TotalRunningHours</code> </p> </li> <li> <p>
     * <code>CoverageNormalizedUnitsPercentage</code> </p> </li> <li> <p>
     * <code>OnDemandNormalizedUnits</code> </p> </li> <li> <p>
     * <code>ReservedNormalizedUnits</code> </p> </li> <li> <p>
     * <code>TotalRunningNormalizedUnits</code> </p> </li> <li> <p> <code>Time</code>
     * </p> </li> </ul> <p>Supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> or <code>DESCENDING</code>.</p>
     */
    inline const SortDefinition& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = SortDefinition>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = SortDefinition>
    GetReservationCoverageRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you returned for this request. If more
     * objects are available, in the response, Amazon Web Services provides a
     * NextPageToken value that you can use in a subsequent call to get the next batch
     * of objects.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetReservationCoverageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Granularity m_granularity{Granularity::NOT_SET};
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    SortDefinition m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
