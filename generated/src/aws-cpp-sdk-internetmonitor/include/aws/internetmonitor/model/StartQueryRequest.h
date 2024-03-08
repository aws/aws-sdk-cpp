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
    AWS_INTERNETMONITOR_API StartQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQuery"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the monitor to query.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline StartQueryRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline StartQueryRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor to query.</p>
     */
    inline StartQueryRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline StartQueryRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp that is the beginning of the period that you want to retrieve
     * data for with your query.</p>
     */
    inline StartQueryRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline StartQueryRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp that is the end of the period that you want to retrieve data
     * for with your query.</p>
     */
    inline StartQueryRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


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
     * intervals.</p> </li> </ul> <p>For lists of the fields returned with each query
     * type and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline const QueryType& GetQueryType() const{ return m_queryType; }

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
     * intervals.</p> </li> </ul> <p>For lists of the fields returned with each query
     * type and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline bool QueryTypeHasBeenSet() const { return m_queryTypeHasBeenSet; }

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
     * intervals.</p> </li> </ul> <p>For lists of the fields returned with each query
     * type and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline void SetQueryType(const QueryType& value) { m_queryTypeHasBeenSet = true; m_queryType = value; }

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
     * intervals.</p> </li> </ul> <p>For lists of the fields returned with each query
     * type and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline void SetQueryType(QueryType&& value) { m_queryTypeHasBeenSet = true; m_queryType = std::move(value); }

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
     * intervals.</p> </li> </ul> <p>For lists of the fields returned with each query
     * type and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline StartQueryRequest& WithQueryType(const QueryType& value) { SetQueryType(value); return *this;}

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
     * intervals.</p> </li> </ul> <p>For lists of the fields returned with each query
     * type and more information about how each type of query is performed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-IM-view-cw-tools-cwim-query.html">
     * Using the Amazon CloudWatch Internet Monitor query interface</a> in the Amazon
     * CloudWatch Internet Monitor User Guide.</p>
     */
    inline StartQueryRequest& WithQueryType(QueryType&& value) { SetQueryType(std::move(value)); return *this;}


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
    inline const Aws::Vector<FilterParameter>& GetFilterParameters() const{ return m_filterParameters; }

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
    inline bool FilterParametersHasBeenSet() const { return m_filterParametersHasBeenSet; }

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
    inline void SetFilterParameters(const Aws::Vector<FilterParameter>& value) { m_filterParametersHasBeenSet = true; m_filterParameters = value; }

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
    inline void SetFilterParameters(Aws::Vector<FilterParameter>&& value) { m_filterParametersHasBeenSet = true; m_filterParameters = std::move(value); }

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
    inline StartQueryRequest& WithFilterParameters(const Aws::Vector<FilterParameter>& value) { SetFilterParameters(value); return *this;}

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
    inline StartQueryRequest& WithFilterParameters(Aws::Vector<FilterParameter>&& value) { SetFilterParameters(std::move(value)); return *this;}

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
    inline StartQueryRequest& AddFilterParameters(const FilterParameter& value) { m_filterParametersHasBeenSet = true; m_filterParameters.push_back(value); return *this; }

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
    inline StartQueryRequest& AddFilterParameters(FilterParameter&& value) { m_filterParametersHasBeenSet = true; m_filterParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    QueryType m_queryType;
    bool m_queryTypeHasBeenSet = false;

    Aws::Vector<FilterParameter> m_filterParameters;
    bool m_filterParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
