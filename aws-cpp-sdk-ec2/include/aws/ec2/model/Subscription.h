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
   * <p>Describes an Infrastructure Performance subscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_EC2_API Subscription();
    AWS_EC2_API Subscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Subscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline Subscription& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline Subscription& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The Region or Availability Zone that's the source for the subscription. For
     * example, <code>us-east-1</code>.</p>
     */
    inline Subscription& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline Subscription& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline Subscription& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Region or Availability Zone that's the target for the subscription. For
     * example, <code>eu-west-1</code>.</p>
     */
    inline Subscription& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The metric used for the subscription.</p>
     */
    inline const MetricType& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric used for the subscription.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric used for the subscription.</p>
     */
    inline void SetMetric(const MetricType& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric used for the subscription.</p>
     */
    inline void SetMetric(MetricType&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric used for the subscription.</p>
     */
    inline Subscription& WithMetric(const MetricType& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric used for the subscription.</p>
     */
    inline Subscription& WithMetric(MetricType&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The statistic used for the subscription.</p>
     */
    inline const StatisticType& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic used for the subscription.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic used for the subscription.</p>
     */
    inline void SetStatistic(const StatisticType& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic used for the subscription.</p>
     */
    inline void SetStatistic(StatisticType&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic used for the subscription.</p>
     */
    inline Subscription& WithStatistic(const StatisticType& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic used for the subscription.</p>
     */
    inline Subscription& WithStatistic(StatisticType&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The data aggregation time for the subscription.</p>
     */
    inline const PeriodType& GetPeriod() const{ return m_period; }

    /**
     * <p>The data aggregation time for the subscription.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The data aggregation time for the subscription.</p>
     */
    inline void SetPeriod(const PeriodType& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The data aggregation time for the subscription.</p>
     */
    inline void SetPeriod(PeriodType&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The data aggregation time for the subscription.</p>
     */
    inline Subscription& WithPeriod(const PeriodType& value) { SetPeriod(value); return *this;}

    /**
     * <p>The data aggregation time for the subscription.</p>
     */
    inline Subscription& WithPeriod(PeriodType&& value) { SetPeriod(std::move(value)); return *this;}

  private:

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
