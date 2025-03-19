/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/internetmonitor/model/QueryType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/internetmonitor/model/FilterParameter.h>
#include <utility>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

  /**
   */
  class StartQueryRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API StartQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQuery"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor to query.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    StartQueryRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartQueryRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    StartQueryRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of query to run. The following are the three types of queries that
     * you can run using the Internet Monitor query interface:</p> <ul> <li> <p>
     * <code>MEASUREMENTS</code>: Provides availability score, performance score, total
     * traffic, and round-trip times, at 5 minute intervals.</p> </li> <li> <p>
     * <code>TOP_LOCATIONS</code>: Provides availability score, performance score,
     * total traffic, and time to first byte (TTFB) information, for the top location
     * and ASN combinations that you're monitoring, by traffic volume.</p> </li> <li>
     * <p> <code>TOP_LOCATION_DETAILS</code>: Provides TTFB for Amazon CloudFront, your
     * current configuration, and the best performing EC2 configuration, at 1 hour
     * intervals.</p> </li> <li> <p> <code>OVERALL_TRAFFIC_SUGGESTIONS</code>: Provides
     * TTFB, using a 30-day weighted average, for all traffic in each Amazon Web
     * Services location that is monitored.</p> </li> <li> <p>
     * <code>OVERALL_TRAFFIC_SUGGESTIONS_DETAILS</code>: Provides TTFB, using a 30-day
     * weighted average, for each top location, for a proposed Amazon Web Services
     * location. Must provide an Amazon Web Services location to search.</p> </li> <li>
     * <p> <code>ROUTING_SUGGESTIONS</code>: Provides the predicted average round-trip
     * time (RTT) from an IP prefix toward an Amazon Web Services location for a DNS
     * resolver. The RTT is calculated at one hour intervals, over a one hour
     * period.</p> </li> </ul> <p>For lists of the fields returned with each query type
     * and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline QueryType GetQueryType() const { return m_queryType; }
    inline bool QueryTypeHasBeenSet() const { return m_queryTypeHasBeenSet; }
    inline void SetQueryType(QueryType value) { m_queryTypeHasBeenSet = true; m_queryType = value; }
    inline StartQueryRequest& WithQueryType(QueryType value) { SetQueryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>FilterParameters</code> field that you use with Amazon CloudWatch
     * Internet Monitor queries is a string the defines how you want a query to be
     * filtered. The filter parameters that you can specify depend on the query type,
     * since each query type returns a different set of Internet Monitor data.</p>
     * <p>For more information about specifying filter parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">Using
     * the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline const Aws::Vector<FilterParameter>& GetFilterParameters() const { return m_filterParameters; }
    inline bool FilterParametersHasBeenSet() const { return m_filterParametersHasBeenSet; }
    template<typename FilterParametersT = Aws::Vector<FilterParameter>>
    void SetFilterParameters(FilterParametersT&& value) { m_filterParametersHasBeenSet = true; m_filterParameters = std::forward<FilterParametersT>(value); }
    template<typename FilterParametersT = Aws::Vector<FilterParameter>>
    StartQueryRequest& WithFilterParameters(FilterParametersT&& value) { SetFilterParameters(std::forward<FilterParametersT>(value)); return *this;}
    template<typename FilterParametersT = FilterParameter>
    StartQueryRequest& AddFilterParameters(FilterParametersT&& value) { m_filterParametersHasBeenSet = true; m_filterParameters.emplace_back(std::forward<FilterParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The account ID for an account that you've set up cross-account sharing for in
     * Amazon CloudWatch Internet Monitor. You configure cross-account sharing by using
     * Amazon CloudWatch Observability Access Manager. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cwim-cross-account.html">Internet
     * Monitor cross-account observability</a> in the Amazon CloudWatch Internet
     * Monitor User Guide.</p>
     */
    inline const Aws::String& GetLinkedAccountId() const { return m_linkedAccountId; }
    inline bool LinkedAccountIdHasBeenSet() const { return m_linkedAccountIdHasBeenSet; }
    template<typename LinkedAccountIdT = Aws::String>
    void SetLinkedAccountId(LinkedAccountIdT&& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = std::forward<LinkedAccountIdT>(value); }
    template<typename LinkedAccountIdT = Aws::String>
    StartQueryRequest& WithLinkedAccountId(LinkedAccountIdT&& value) { SetLinkedAccountId(std::forward<LinkedAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    QueryType m_queryType{QueryType::NOT_SET};
    bool m_queryTypeHasBeenSet = false;

    Aws::Vector<FilterParameter> m_filterParameters;
    bool m_filterParametersHasBeenSet = false;

    Aws::String m_linkedAccountId;
    bool m_linkedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
