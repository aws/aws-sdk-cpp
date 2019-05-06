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
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pi/model/DimensionGroup.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class AWS_PI_API DescribeDimensionKeysRequest : public PIRequest
  {
  public:
    DescribeDimensionKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDimensionKeys"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS service for which Performance Insights will return metrics. The only
     * valid value for <i>ServiceType</i> is: <code>RDS</code> </p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The AWS service for which Performance Insights will return metrics. The only
     * valid value for <i>ServiceType</i> is: <code>RDS</code> </p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The AWS service for which Performance Insights will return metrics. The only
     * valid value for <i>ServiceType</i> is: <code>RDS</code> </p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The AWS service for which Performance Insights will return metrics. The only
     * valid value for <i>ServiceType</i> is: <code>RDS</code> </p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The AWS service for which Performance Insights will return metrics. The only
     * valid value for <i>ServiceType</i> is: <code>RDS</code> </p>
     */
    inline DescribeDimensionKeysRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The AWS service for which Performance Insights will return metrics. The only
     * valid value for <i>ServiceType</i> is: <code>RDS</code> </p>
     */
    inline DescribeDimensionKeysRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline DescribeDimensionKeysRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline DescribeDimensionKeysRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable, AWS Region-unique identifier for a data source. Performance
     * Insights gathers metrics from this data source.</p> <p>To use an Amazon RDS
     * instance as a data source, you specify its <code>DbiResourceId</code> value -
     * for example: <code>db-FAIHNTYBKTGAUSUZQYPDS2GW4A</code> </p>
     */
    inline DescribeDimensionKeysRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You can't specify a <code>StartTime</code> that's earlier than 7 days ago. The
     * value specified is <i>inclusive</i> - data points equal to or greater than
     * <code>StartTime</code> will be returned.</p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for
     * <code>EndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You can't specify a <code>StartTime</code> that's earlier than 7 days ago. The
     * value specified is <i>inclusive</i> - data points equal to or greater than
     * <code>StartTime</code> will be returned.</p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for
     * <code>EndTime</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You can't specify a <code>StartTime</code> that's earlier than 7 days ago. The
     * value specified is <i>inclusive</i> - data points equal to or greater than
     * <code>StartTime</code> will be returned.</p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for
     * <code>EndTime</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You can't specify a <code>StartTime</code> that's earlier than 7 days ago. The
     * value specified is <i>inclusive</i> - data points equal to or greater than
     * <code>StartTime</code> will be returned.</p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for
     * <code>EndTime</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You can't specify a <code>StartTime</code> that's earlier than 7 days ago. The
     * value specified is <i>inclusive</i> - data points equal to or greater than
     * <code>StartTime</code> will be returned.</p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for
     * <code>EndTime</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time specifying the beginning of the requested time series data.
     * You can't specify a <code>StartTime</code> that's earlier than 7 days ago. The
     * value specified is <i>inclusive</i> - data points equal to or greater than
     * <code>StartTime</code> will be returned.</p> <p>The value for
     * <code>StartTime</code> must be earlier than the value for
     * <code>EndTime</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i> - data points less than (but not equal to)
     * <code>EndTime</code> will be returned.</p> <p>The value for <code>EndTime</code>
     * must be later than the value for <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i> - data points less than (but not equal to)
     * <code>EndTime</code> will be returned.</p> <p>The value for <code>EndTime</code>
     * must be later than the value for <code>StartTime</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i> - data points less than (but not equal to)
     * <code>EndTime</code> will be returned.</p> <p>The value for <code>EndTime</code>
     * must be later than the value for <code>StartTime</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i> - data points less than (but not equal to)
     * <code>EndTime</code> will be returned.</p> <p>The value for <code>EndTime</code>
     * must be later than the value for <code>StartTime</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i> - data points less than (but not equal to)
     * <code>EndTime</code> will be returned.</p> <p>The value for <code>EndTime</code>
     * must be later than the value for <code>StartTime</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time specifying the end of the requested time series data. The
     * value specified is <i>exclusive</i> - data points less than (but not equal to)
     * <code>EndTime</code> will be returned.</p> <p>The value for <code>EndTime</code>
     * must be later than the value for <code>StartTime</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The granularity, in seconds, of the data points returned from Performance
     * Insights. A period can be as short as one second, or as long as one day (86400
     * seconds). Valid values are:</p> <ul> <li> <p> <code>1</code> (one second)</p>
     * </li> <li> <p> <code>60</code> (one minute)</p> </li> <li> <p> <code>300</code>
     * (five minutes)</p> </li> <li> <p> <code>3600</code> (one hour)</p> </li> <li>
     * <p> <code>86400</code> (twenty-four hours)</p> </li> </ul> <p>If you don't
     * specify <code>PeriodInSeconds</code>, then Performance Insights will choose a
     * value for you, with a goal of returning roughly 100-200 data points in the
     * response.</p>
     */
    inline int GetPeriodInSeconds() const{ return m_periodInSeconds; }

    /**
     * <p>The granularity, in seconds, of the data points returned from Performance
     * Insights. A period can be as short as one second, or as long as one day (86400
     * seconds). Valid values are:</p> <ul> <li> <p> <code>1</code> (one second)</p>
     * </li> <li> <p> <code>60</code> (one minute)</p> </li> <li> <p> <code>300</code>
     * (five minutes)</p> </li> <li> <p> <code>3600</code> (one hour)</p> </li> <li>
     * <p> <code>86400</code> (twenty-four hours)</p> </li> </ul> <p>If you don't
     * specify <code>PeriodInSeconds</code>, then Performance Insights will choose a
     * value for you, with a goal of returning roughly 100-200 data points in the
     * response.</p>
     */
    inline bool PeriodInSecondsHasBeenSet() const { return m_periodInSecondsHasBeenSet; }

    /**
     * <p>The granularity, in seconds, of the data points returned from Performance
     * Insights. A period can be as short as one second, or as long as one day (86400
     * seconds). Valid values are:</p> <ul> <li> <p> <code>1</code> (one second)</p>
     * </li> <li> <p> <code>60</code> (one minute)</p> </li> <li> <p> <code>300</code>
     * (five minutes)</p> </li> <li> <p> <code>3600</code> (one hour)</p> </li> <li>
     * <p> <code>86400</code> (twenty-four hours)</p> </li> </ul> <p>If you don't
     * specify <code>PeriodInSeconds</code>, then Performance Insights will choose a
     * value for you, with a goal of returning roughly 100-200 data points in the
     * response.</p>
     */
    inline void SetPeriodInSeconds(int value) { m_periodInSecondsHasBeenSet = true; m_periodInSeconds = value; }

    /**
     * <p>The granularity, in seconds, of the data points returned from Performance
     * Insights. A period can be as short as one second, or as long as one day (86400
     * seconds). Valid values are:</p> <ul> <li> <p> <code>1</code> (one second)</p>
     * </li> <li> <p> <code>60</code> (one minute)</p> </li> <li> <p> <code>300</code>
     * (five minutes)</p> </li> <li> <p> <code>3600</code> (one hour)</p> </li> <li>
     * <p> <code>86400</code> (twenty-four hours)</p> </li> </ul> <p>If you don't
     * specify <code>PeriodInSeconds</code>, then Performance Insights will choose a
     * value for you, with a goal of returning roughly 100-200 data points in the
     * response.</p>
     */
    inline DescribeDimensionKeysRequest& WithPeriodInSeconds(int value) { SetPeriodInSeconds(value); return *this;}


    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline const DimensionGroup& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline void SetGroupBy(const DimensionGroup& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline void SetGroupBy(DimensionGroup&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline DescribeDimensionKeysRequest& WithGroupBy(const DimensionGroup& value) { SetGroupBy(value); return *this;}

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline DescribeDimensionKeysRequest& WithGroupBy(DimensionGroup&& value) { SetGroupBy(std::move(value)); return *this;}


    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response.</p>
     */
    inline const DimensionGroup& GetPartitionBy() const{ return m_partitionBy; }

    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response.</p>
     */
    inline bool PartitionByHasBeenSet() const { return m_partitionByHasBeenSet; }

    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response.</p>
     */
    inline void SetPartitionBy(const DimensionGroup& value) { m_partitionByHasBeenSet = true; m_partitionBy = value; }

    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response.</p>
     */
    inline void SetPartitionBy(DimensionGroup&& value) { m_partitionByHasBeenSet = true; m_partitionBy = std::move(value); }

    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response.</p>
     */
    inline DescribeDimensionKeysRequest& WithPartitionBy(const DimensionGroup& value) { SetPartitionBy(value); return *this;}

    /**
     * <p>For each dimension specified in <code>GroupBy</code>, specify a secondary
     * dimension to further subdivide the partition keys in the response.</p>
     */
    inline DescribeDimensionKeysRequest& WithPartitionBy(DimensionGroup&& value) { SetPartitionBy(std::move(value)); return *this;}


    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilter() const{ return m_filter; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline void SetFilter(const Aws::Map<Aws::String, Aws::String>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline void SetFilter(Aws::Map<Aws::String, Aws::String>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& WithFilter(const Aws::Map<Aws::String, Aws::String>& value) { SetFilter(value); return *this;}

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& WithFilter(Aws::Map<Aws::String, Aws::String>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(const Aws::String& key, const Aws::String& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(Aws::String&& key, const Aws::String& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(const Aws::String& key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(Aws::String&& key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(const char* key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(Aws::String&& key, const char* value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> or <code>Partition</code> parameters.</p> </li> <li> <p>A
     * single filter for any other dimension in this dimension group.</p> </li> </ul>
     */
    inline DescribeDimensionKeysRequest& AddFilter(const char* key, const char* value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }


    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxRecords</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline DescribeDimensionKeysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDimensionKeysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    int m_periodInSeconds;
    bool m_periodInSecondsHasBeenSet;

    DimensionGroup m_groupBy;
    bool m_groupByHasBeenSet;

    DimensionGroup m_partitionBy;
    bool m_partitionByHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_filter;
    bool m_filterHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
