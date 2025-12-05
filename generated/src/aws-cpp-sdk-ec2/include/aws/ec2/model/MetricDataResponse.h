/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerDimension.h>
#include <aws/ec2/model/MetricValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p> Contains a single data point from a capacity metrics query, including the
 * dimension values, timestamp, and metric values for that specific combination.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MetricDataResult">AWS
 * API Reference</a></p>
 */
class MetricDataResponse {
 public:
  AWS_EC2_API MetricDataResponse() = default;
  AWS_EC2_API MetricDataResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API MetricDataResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The dimension values that identify this specific data point, such as account
   * ID, region, and instance family. </p>
   */
  inline const CapacityManagerDimension& GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  template <typename DimensionT = CapacityManagerDimension>
  void SetDimension(DimensionT&& value) {
    m_dimensionHasBeenSet = true;
    m_dimension = std::forward<DimensionT>(value);
  }
  template <typename DimensionT = CapacityManagerDimension>
  MetricDataResponse& WithDimension(DimensionT&& value) {
    SetDimension(std::forward<DimensionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp for this data point, indicating when the capacity usage
   * occurred. </p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  MetricDataResponse& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metric values and statistics for this data point, containing the actual
   * capacity usage numbers. </p>
   */
  inline const Aws::Vector<MetricValue>& GetMetricValues() const { return m_metricValues; }
  inline bool MetricValuesHasBeenSet() const { return m_metricValuesHasBeenSet; }
  template <typename MetricValuesT = Aws::Vector<MetricValue>>
  void SetMetricValues(MetricValuesT&& value) {
    m_metricValuesHasBeenSet = true;
    m_metricValues = std::forward<MetricValuesT>(value);
  }
  template <typename MetricValuesT = Aws::Vector<MetricValue>>
  MetricDataResponse& WithMetricValues(MetricValuesT&& value) {
    SetMetricValues(std::forward<MetricValuesT>(value));
    return *this;
  }
  template <typename MetricValuesT = MetricValue>
  MetricDataResponse& AddMetricValues(MetricValuesT&& value) {
    m_metricValuesHasBeenSet = true;
    m_metricValues.emplace_back(std::forward<MetricValuesT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityManagerDimension m_dimension;

  Aws::Utils::DateTime m_timestamp{};

  Aws::Vector<MetricValue> m_metricValues;
  bool m_dimensionHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_metricValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
