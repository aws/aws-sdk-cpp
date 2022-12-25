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
#include <aws/ce/model/SortDefinition.h>
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
  class GetReservationUtilizationRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetReservationUtilizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservationUtilization"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Sets the start and end dates for retrieving Reserved Instance (RI)
     * utilization. The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>. </p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>Sets the start and end dates for retrieving Reserved Instance (RI)
     * utilization. The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>. </p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>Sets the start and end dates for retrieving Reserved Instance (RI)
     * utilization. The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>. </p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>Sets the start and end dates for retrieving Reserved Instance (RI)
     * utilization. The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>. </p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>Sets the start and end dates for retrieving Reserved Instance (RI)
     * utilization. The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>. </p>
     */
    inline GetReservationUtilizationRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>Sets the start and end dates for retrieving Reserved Instance (RI)
     * utilization. The start date is inclusive, but the end date is exclusive. For
     * example, if <code>start</code> is <code>2017-01-01</code> and <code>end</code>
     * is <code>2017-05-01</code>, then the cost and usage data is retrieved from
     * <code>2017-01-01</code> up to and including <code>2017-04-30</code> but not
     * including <code>2017-05-01</code>. </p>
     */
    inline GetReservationUtilizationRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline void SetGroupBy(const Aws::Vector<GroupDefinition>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline void SetGroupBy(Aws::Vector<GroupDefinition>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline GetReservationUtilizationRequest& WithGroupBy(const Aws::Vector<GroupDefinition>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline GetReservationUtilizationRequest& WithGroupBy(Aws::Vector<GroupDefinition>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline GetReservationUtilizationRequest& AddGroupBy(const GroupDefinition& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>Groups only by <code>SUBSCRIPTION_ID</code>. Metadata is included.</p>
     */
    inline GetReservationUtilizationRequest& AddGroupBy(GroupDefinition&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>. If
     * both <code>GroupBy</code> and <code>Granularity</code> aren't set,
     * <code>GetReservationUtilization</code> defaults to <code>DAILY</code>.</p>
     * <p>The <code>GetReservationUtilization</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>If <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>. If
     * both <code>GroupBy</code> and <code>Granularity</code> aren't set,
     * <code>GetReservationUtilization</code> defaults to <code>DAILY</code>.</p>
     * <p>The <code>GetReservationUtilization</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>If <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>. If
     * both <code>GroupBy</code> and <code>Granularity</code> aren't set,
     * <code>GetReservationUtilization</code> defaults to <code>DAILY</code>.</p>
     * <p>The <code>GetReservationUtilization</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>If <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>. If
     * both <code>GroupBy</code> and <code>Granularity</code> aren't set,
     * <code>GetReservationUtilization</code> defaults to <code>DAILY</code>.</p>
     * <p>The <code>GetReservationUtilization</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>If <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>. If
     * both <code>GroupBy</code> and <code>Granularity</code> aren't set,
     * <code>GetReservationUtilization</code> defaults to <code>DAILY</code>.</p>
     * <p>The <code>GetReservationUtilization</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline GetReservationUtilizationRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>If <code>GroupBy</code> is set, <code>Granularity</code> can't be set. If
     * <code>Granularity</code> isn't set, the response object doesn't include
     * <code>Granularity</code>, either <code>MONTHLY</code> or <code>DAILY</code>. If
     * both <code>GroupBy</code> and <code>Granularity</code> aren't set,
     * <code>GetReservationUtilization</code> defaults to <code>DAILY</code>.</p>
     * <p>The <code>GetReservationUtilization</code> operation supports only
     * <code>DAILY</code> and <code>MONTHLY</code> granularities.</p>
     */
    inline GetReservationUtilizationRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
     * <p>SCOPE</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>
     * <code>GetReservationUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension, and nesting is supported up to only one level deep. If there are
     * multiple values for a dimension, they are OR'd together.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
     * <p>SCOPE</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>
     * <code>GetReservationUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension, and nesting is supported up to only one level deep. If there are
     * multiple values for a dimension, they are OR'd together.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
     * <p>SCOPE</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>
     * <code>GetReservationUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension, and nesting is supported up to only one level deep. If there are
     * multiple values for a dimension, they are OR'd together.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
     * <p>SCOPE</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>
     * <code>GetReservationUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension, and nesting is supported up to only one level deep. If there are
     * multiple values for a dimension, they are OR'd together.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
     * <p>SCOPE</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>
     * <code>GetReservationUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension, and nesting is supported up to only one level deep. If there are
     * multiple values for a dimension, they are OR'd together.</p>
     */
    inline GetReservationUtilizationRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters utilization data by dimensions. You can filter by the following
     * dimensions:</p> <ul> <li> <p>AZ</p> </li> <li> <p>CACHE_ENGINE</p> </li> <li>
     * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
     * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
     * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
     * <p>SCOPE</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>
     * <code>GetReservationUtilization</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension, and nesting is supported up to only one level deep. If there are
     * multiple values for a dimension, they are OR'd together.</p>
     */
    inline GetReservationUtilizationRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>UtilizationPercentageInUnits</code> </p> </li> <li> <p>
     * <code>PurchasedHours</code> </p> </li> <li> <p> <code>PurchasedUnits</code> </p>
     * </li> <li> <p> <code>TotalActualHours</code> </p> </li> <li> <p>
     * <code>TotalActualUnits</code> </p> </li> <li> <p> <code>UnusedHours</code> </p>
     * </li> <li> <p> <code>UnusedUnits</code> </p> </li> <li> <p>
     * <code>OnDemandCostOfRIHoursUsed</code> </p> </li> <li> <p>
     * <code>NetRISavings</code> </p> </li> <li> <p>
     * <code>TotalPotentialRISavings</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontFee</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringFee</code> </p> </li> <li> <p>
     * <code>TotalAmortizedFee</code> </p> </li> <li> <p>
     * <code>RICostForUnusedHours</code> </p> </li> <li> <p>
     * <code>RealizedSavings</code> </p> </li> <li> <p> <code>UnrealizedSavings</code>
     * </p> </li> </ul> <p>The supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> and <code>DESCENDING</code>.</p>
     */
    inline const SortDefinition& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>UtilizationPercentageInUnits</code> </p> </li> <li> <p>
     * <code>PurchasedHours</code> </p> </li> <li> <p> <code>PurchasedUnits</code> </p>
     * </li> <li> <p> <code>TotalActualHours</code> </p> </li> <li> <p>
     * <code>TotalActualUnits</code> </p> </li> <li> <p> <code>UnusedHours</code> </p>
     * </li> <li> <p> <code>UnusedUnits</code> </p> </li> <li> <p>
     * <code>OnDemandCostOfRIHoursUsed</code> </p> </li> <li> <p>
     * <code>NetRISavings</code> </p> </li> <li> <p>
     * <code>TotalPotentialRISavings</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontFee</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringFee</code> </p> </li> <li> <p>
     * <code>TotalAmortizedFee</code> </p> </li> <li> <p>
     * <code>RICostForUnusedHours</code> </p> </li> <li> <p>
     * <code>RealizedSavings</code> </p> </li> <li> <p> <code>UnrealizedSavings</code>
     * </p> </li> </ul> <p>The supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> and <code>DESCENDING</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>UtilizationPercentageInUnits</code> </p> </li> <li> <p>
     * <code>PurchasedHours</code> </p> </li> <li> <p> <code>PurchasedUnits</code> </p>
     * </li> <li> <p> <code>TotalActualHours</code> </p> </li> <li> <p>
     * <code>TotalActualUnits</code> </p> </li> <li> <p> <code>UnusedHours</code> </p>
     * </li> <li> <p> <code>UnusedUnits</code> </p> </li> <li> <p>
     * <code>OnDemandCostOfRIHoursUsed</code> </p> </li> <li> <p>
     * <code>NetRISavings</code> </p> </li> <li> <p>
     * <code>TotalPotentialRISavings</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontFee</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringFee</code> </p> </li> <li> <p>
     * <code>TotalAmortizedFee</code> </p> </li> <li> <p>
     * <code>RICostForUnusedHours</code> </p> </li> <li> <p>
     * <code>RealizedSavings</code> </p> </li> <li> <p> <code>UnrealizedSavings</code>
     * </p> </li> </ul> <p>The supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> and <code>DESCENDING</code>.</p>
     */
    inline void SetSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>UtilizationPercentageInUnits</code> </p> </li> <li> <p>
     * <code>PurchasedHours</code> </p> </li> <li> <p> <code>PurchasedUnits</code> </p>
     * </li> <li> <p> <code>TotalActualHours</code> </p> </li> <li> <p>
     * <code>TotalActualUnits</code> </p> </li> <li> <p> <code>UnusedHours</code> </p>
     * </li> <li> <p> <code>UnusedUnits</code> </p> </li> <li> <p>
     * <code>OnDemandCostOfRIHoursUsed</code> </p> </li> <li> <p>
     * <code>NetRISavings</code> </p> </li> <li> <p>
     * <code>TotalPotentialRISavings</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontFee</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringFee</code> </p> </li> <li> <p>
     * <code>TotalAmortizedFee</code> </p> </li> <li> <p>
     * <code>RICostForUnusedHours</code> </p> </li> <li> <p>
     * <code>RealizedSavings</code> </p> </li> <li> <p> <code>UnrealizedSavings</code>
     * </p> </li> </ul> <p>The supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> and <code>DESCENDING</code>.</p>
     */
    inline void SetSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>UtilizationPercentageInUnits</code> </p> </li> <li> <p>
     * <code>PurchasedHours</code> </p> </li> <li> <p> <code>PurchasedUnits</code> </p>
     * </li> <li> <p> <code>TotalActualHours</code> </p> </li> <li> <p>
     * <code>TotalActualUnits</code> </p> </li> <li> <p> <code>UnusedHours</code> </p>
     * </li> <li> <p> <code>UnusedUnits</code> </p> </li> <li> <p>
     * <code>OnDemandCostOfRIHoursUsed</code> </p> </li> <li> <p>
     * <code>NetRISavings</code> </p> </li> <li> <p>
     * <code>TotalPotentialRISavings</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontFee</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringFee</code> </p> </li> <li> <p>
     * <code>TotalAmortizedFee</code> </p> </li> <li> <p>
     * <code>RICostForUnusedHours</code> </p> </li> <li> <p>
     * <code>RealizedSavings</code> </p> </li> <li> <p> <code>UnrealizedSavings</code>
     * </p> </li> </ul> <p>The supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> and <code>DESCENDING</code>.</p>
     */
    inline GetReservationUtilizationRequest& WithSortBy(const SortDefinition& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>UtilizationPercentageInUnits</code> </p> </li> <li> <p>
     * <code>PurchasedHours</code> </p> </li> <li> <p> <code>PurchasedUnits</code> </p>
     * </li> <li> <p> <code>TotalActualHours</code> </p> </li> <li> <p>
     * <code>TotalActualUnits</code> </p> </li> <li> <p> <code>UnusedHours</code> </p>
     * </li> <li> <p> <code>UnusedUnits</code> </p> </li> <li> <p>
     * <code>OnDemandCostOfRIHoursUsed</code> </p> </li> <li> <p>
     * <code>NetRISavings</code> </p> </li> <li> <p>
     * <code>TotalPotentialRISavings</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontFee</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringFee</code> </p> </li> <li> <p>
     * <code>TotalAmortizedFee</code> </p> </li> <li> <p>
     * <code>RICostForUnusedHours</code> </p> </li> <li> <p>
     * <code>RealizedSavings</code> </p> </li> <li> <p> <code>UnrealizedSavings</code>
     * </p> </li> </ul> <p>The supported values for <code>SortOrder</code> are
     * <code>ASCENDING</code> and <code>DESCENDING</code>.</p>
     */
    inline GetReservationUtilizationRequest& WithSortBy(SortDefinition&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline GetReservationUtilizationRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetReservationUtilizationRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetReservationUtilizationRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The maximum number of objects that you returned for this request. If more
     * objects are available, in the response, Amazon Web Services provides a
     * NextPageToken value that you can use in a subsequent call to get the next batch
     * of objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that you returned for this request. If more
     * objects are available, in the response, Amazon Web Services provides a
     * NextPageToken value that you can use in a subsequent call to get the next batch
     * of objects.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that you returned for this request. If more
     * objects are available, in the response, Amazon Web Services provides a
     * NextPageToken value that you can use in a subsequent call to get the next batch
     * of objects.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that you returned for this request. If more
     * objects are available, in the response, Amazon Web Services provides a
     * NextPageToken value that you can use in a subsequent call to get the next batch
     * of objects.</p>
     */
    inline GetReservationUtilizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Granularity m_granularity;
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    SortDefinition m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
