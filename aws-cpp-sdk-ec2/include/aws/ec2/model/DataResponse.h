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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/MetricPoint.h>
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
   * <p>The response to a <code>DataQuery</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DataResponse">AWS
   * API Reference</a></p>
   */
  class DataResponse
  {
  public:
    AWS_EC2_API DataResponse();
    AWS_EC2_API DataResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DataResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline DataResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline DataResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline DataResponse& WithId(const char* value) { SetId(value); return *this;}


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
    inline DataResponse& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline DataResponse& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline DataResponse& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline DataResponse& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline DataResponse& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline DataResponse& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The metric used for the network performance request. Currently only
     * <code>aggregate-latency</code> is supported, showing network latency during a
     * specified period. </p>
     */
    inline const MetricType& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric used for the network performance request. Currently only
     * <code>aggregate-latency</code> is supported, showing network latency during a
     * specified period. </p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric used for the network performance request. Currently only
     * <code>aggregate-latency</code> is supported, showing network latency during a
     * specified period. </p>
     */
    inline void SetMetric(const MetricType& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric used for the network performance request. Currently only
     * <code>aggregate-latency</code> is supported, showing network latency during a
     * specified period. </p>
     */
    inline void SetMetric(MetricType&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric used for the network performance request. Currently only
     * <code>aggregate-latency</code> is supported, showing network latency during a
     * specified period. </p>
     */
    inline DataResponse& WithMetric(const MetricType& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric used for the network performance request. Currently only
     * <code>aggregate-latency</code> is supported, showing network latency during a
     * specified period. </p>
     */
    inline DataResponse& WithMetric(MetricType&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline const StatisticType& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline void SetStatistic(const StatisticType& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline void SetStatistic(StatisticType&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline DataResponse& WithStatistic(const StatisticType& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline DataResponse& WithStatistic(StatisticType&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The period used for the network performance request.</p>
     */
    inline const PeriodType& GetPeriod() const{ return m_period; }

    /**
     * <p>The period used for the network performance request.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period used for the network performance request.</p>
     */
    inline void SetPeriod(const PeriodType& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period used for the network performance request.</p>
     */
    inline void SetPeriod(PeriodType&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The period used for the network performance request.</p>
     */
    inline DataResponse& WithPeriod(const PeriodType& value) { SetPeriod(value); return *this;}

    /**
     * <p>The period used for the network performance request.</p>
     */
    inline DataResponse& WithPeriod(PeriodType&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline const Aws::Vector<MetricPoint>& GetMetricPoints() const{ return m_metricPoints; }

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline bool MetricPointsHasBeenSet() const { return m_metricPointsHasBeenSet; }

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline void SetMetricPoints(const Aws::Vector<MetricPoint>& value) { m_metricPointsHasBeenSet = true; m_metricPoints = value; }

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline void SetMetricPoints(Aws::Vector<MetricPoint>&& value) { m_metricPointsHasBeenSet = true; m_metricPoints = std::move(value); }

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline DataResponse& WithMetricPoints(const Aws::Vector<MetricPoint>& value) { SetMetricPoints(value); return *this;}

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline DataResponse& WithMetricPoints(Aws::Vector<MetricPoint>&& value) { SetMetricPoints(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline DataResponse& AddMetricPoints(const MetricPoint& value) { m_metricPointsHasBeenSet = true; m_metricPoints.push_back(value); return *this; }

    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline DataResponse& AddMetricPoints(MetricPoint&& value) { m_metricPointsHasBeenSet = true; m_metricPoints.push_back(std::move(value)); return *this; }

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

    Aws::Vector<MetricPoint> m_metricPoints;
    bool m_metricPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
