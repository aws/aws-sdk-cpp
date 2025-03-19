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
    AWS_EC2_API DataQuery() = default;
    AWS_EC2_API DataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A user-defined ID associated with a data query that's returned in the
     * <code>dataResponse</code> identifying the query. For example, if you set the Id
     * to <code>MyQuery01</code>in the query, the <code>dataResponse</code> identifies
     * the query as <code>MyQuery01</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DataQuery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region or Availability Zone that's the source for the data query. For
     * example, <code>us-east-1</code>.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    DataQuery& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region or Availability Zone that's the target for the data query. For
     * example, <code>eu-north-1</code>.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    DataQuery& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric used for the network performance request.</p>
     */
    inline MetricType GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(MetricType value) { m_metricHasBeenSet = true; m_metric = value; }
    inline DataQuery& WithMetric(MetricType value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric data aggregation period, <code>p50</code>, between the specified
     * <code>startDate</code> and <code>endDate</code>. For example, a metric of
     * <code>five_minutes</code> is the median of all the data points gathered within
     * those five minutes. <code>p50</code> is the only supported metric.</p>
     */
    inline StatisticType GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(StatisticType value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline DataQuery& WithStatistic(StatisticType value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation period used for the data query.</p>
     */
    inline PeriodType GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(PeriodType value) { m_periodHasBeenSet = true; m_period = value; }
    inline DataQuery& WithPeriod(PeriodType value) { SetPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    MetricType m_metric{MetricType::NOT_SET};
    bool m_metricHasBeenSet = false;

    StatisticType m_statistic{StatisticType::NOT_SET};
    bool m_statisticHasBeenSet = false;

    PeriodType m_period{PeriodType::NOT_SET};
    bool m_periodHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
