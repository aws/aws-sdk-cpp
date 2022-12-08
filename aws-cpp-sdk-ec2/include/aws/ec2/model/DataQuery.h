/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/MetricType.h>
#include <aws/ec2/model/StatisticType.h>
#include <aws/ec2/model/PeriodType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>A query used for retrieving network health data. </p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DataQuery">AWS
   * API Reference</a></p>
   */
  class DataQuery
  {
  public:
    AWS_EC2_API DataQuery();
    AWS_EC2_API DataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline DataQuery& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline DataQuery& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline DataQuery& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline DataQuery& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline DataQuery& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline DataQuery& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline DataQuery& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline DataQuery& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline DataQuery& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The aggregation metric used for the data query. Currently only
     * <code>aggregation-latency</code> is supported, indicating network latency.</p>
     */
    inline const MetricType& GetMetric() const{ return m_metric; }

    /**
     * <p>The aggregation metric used for the data query. Currently only
     * <code>aggregation-latency</code> is supported, indicating network latency.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The aggregation metric used for the data query. Currently only
     * <code>aggregation-latency</code> is supported, indicating network latency.</p>
     */
    inline void SetMetric(const MetricType& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The aggregation metric used for the data query. Currently only
     * <code>aggregation-latency</code> is supported, indicating network latency.</p>
     */
    inline void SetMetric(MetricType&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The aggregation metric used for the data query. Currently only
     * <code>aggregation-latency</code> is supported, indicating network latency.</p>
     */
    inline DataQuery& WithMetric(const MetricType& value) { SetMetric(value); return *this;}

    /**
     * <p>The aggregation metric used for the data query. Currently only
     * <code>aggregation-latency</code> is supported, indicating network latency.</p>
     */
    inline DataQuery& WithMetric(MetricType&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>Metric data aggregations over specified periods of time. The following are
     * the supported Infrastructure Performance statistics:</p> <ul> <li> <p>
     * <code>p50</code> - The median value of the metric aggregated over a specified
     * start and end time. For example, a metric of <code>five_minutes</code> is the
     * median of all the data points gathered within those five minutes.</p> </li>
     * </ul>
     */
    inline const StatisticType& GetStatistic() const{ return m_statistic; }

    /**
     * <p>Metric data aggregations over specified periods of time. The following are
     * the supported Infrastructure Performance statistics:</p> <ul> <li> <p>
     * <code>p50</code> - The median value of the metric aggregated over a specified
     * start and end time. For example, a metric of <code>five_minutes</code> is the
     * median of all the data points gathered within those five minutes.</p> </li>
     * </ul>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>Metric data aggregations over specified periods of time. The following are
     * the supported Infrastructure Performance statistics:</p> <ul> <li> <p>
     * <code>p50</code> - The median value of the metric aggregated over a specified
     * start and end time. For example, a metric of <code>five_minutes</code> is the
     * median of all the data points gathered within those five minutes.</p> </li>
     * </ul>
     */
    inline void SetStatistic(const StatisticType& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>Metric data aggregations over specified periods of time. The following are
     * the supported Infrastructure Performance statistics:</p> <ul> <li> <p>
     * <code>p50</code> - The median value of the metric aggregated over a specified
     * start and end time. For example, a metric of <code>five_minutes</code> is the
     * median of all the data points gathered within those five minutes.</p> </li>
     * </ul>
     */
    inline void SetStatistic(StatisticType&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>Metric data aggregations over specified periods of time. The following are
     * the supported Infrastructure Performance statistics:</p> <ul> <li> <p>
     * <code>p50</code> - The median value of the metric aggregated over a specified
     * start and end time. For example, a metric of <code>five_minutes</code> is the
     * median of all the data points gathered within those five minutes.</p> </li>
     * </ul>
     */
    inline DataQuery& WithStatistic(const StatisticType& value) { SetStatistic(value); return *this;}

    /**
     * <p>Metric data aggregations over specified periods of time. The following are
     * the supported Infrastructure Performance statistics:</p> <ul> <li> <p>
     * <code>p50</code> - The median value of the metric aggregated over a specified
     * start and end time. For example, a metric of <code>five_minutes</code> is the
     * median of all the data points gathered within those five minutes.</p> </li>
     * </ul>
     */
    inline DataQuery& WithStatistic(StatisticType&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline const PeriodType& GetPeriod() const{ return m_period; }

    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline void SetPeriod(const PeriodType& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline void SetPeriod(PeriodType&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline DataQuery& WithPeriod(const PeriodType& value) { SetPeriod(value); return *this;}

    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline DataQuery& WithPeriod(PeriodType&& value) { SetPeriod(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    MetricType m_metric;
    bool m_metricHasBeenSet = false;

    StatisticType m_statistic;
    bool m_statisticHasBeenSet = false;

    PeriodType m_period;
    bool m_periodHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
