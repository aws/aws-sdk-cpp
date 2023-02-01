/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseMetricName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/MetricStatistic.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetRelationalDatabaseMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline const RelationalDatabaseMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline void SetMetricName(const RelationalDatabaseMetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline void SetMetricName(RelationalDatabaseMetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithMetricName(const RelationalDatabaseMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithMetricName(RelationalDatabaseMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>All
     * relational database metric data is available in 1-minute (60 seconds)
     * granularity.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>All
     * relational database metric data is available in 1-minute (60 seconds)
     * granularity.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>All
     * relational database metric data is available in 1-minute (60 seconds)
     * granularity.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>All
     * relational database metric data is available in 1-minute (60 seconds)
     * granularity.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline void SetStatistics(const Aws::Vector<MetricStatistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline void SetStatistics(Aws::Vector<MetricStatistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStatistics(const Aws::Vector<MetricStatistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStatistics(Aws::Vector<MetricStatistic>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& AddStatistics(const MetricStatistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& AddStatistics(MetricStatistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    RelationalDatabaseMetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    MetricUnit m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
