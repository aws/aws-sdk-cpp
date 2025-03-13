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
    AWS_EC2_API DataResponse() = default;
    AWS_EC2_API DataResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DataResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID passed in the <code>DataQuery</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DataResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    DataResponse& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region or Availability Zone that's the destination for the data query.
     * For example, <code>eu-west-1</code>.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    DataResponse& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric used for the network performance request.</p>
     */
    inline MetricType GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(MetricType value) { m_metricHasBeenSet = true; m_metric = value; }
    inline DataResponse& WithMetric(MetricType value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic used for the network performance request.</p>
     */
    inline StatisticType GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(StatisticType value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline DataResponse& WithStatistic(StatisticType value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period used for the network performance request.</p>
     */
    inline PeriodType GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(PeriodType value) { m_periodHasBeenSet = true; m_period = value; }
    inline DataResponse& WithPeriod(PeriodType value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MetricPoint</code> objects.</p>
     */
    inline const Aws::Vector<MetricPoint>& GetMetricPoints() const { return m_metricPoints; }
    inline bool MetricPointsHasBeenSet() const { return m_metricPointsHasBeenSet; }
    template<typename MetricPointsT = Aws::Vector<MetricPoint>>
    void SetMetricPoints(MetricPointsT&& value) { m_metricPointsHasBeenSet = true; m_metricPoints = std::forward<MetricPointsT>(value); }
    template<typename MetricPointsT = Aws::Vector<MetricPoint>>
    DataResponse& WithMetricPoints(MetricPointsT&& value) { SetMetricPoints(std::forward<MetricPointsT>(value)); return *this;}
    template<typename MetricPointsT = MetricPoint>
    DataResponse& AddMetricPoints(MetricPointsT&& value) { m_metricPointsHasBeenSet = true; m_metricPoints.emplace_back(std::forward<MetricPointsT>(value)); return *this; }
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

    Aws::Vector<MetricPoint> m_metricPoints;
    bool m_metricPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
