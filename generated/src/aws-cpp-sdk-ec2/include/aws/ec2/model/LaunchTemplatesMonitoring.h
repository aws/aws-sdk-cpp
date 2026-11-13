/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>

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
 * <p>Describes the monitoring for the instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplatesMonitoring">AWS
 * API Reference</a></p>
 */
class LaunchTemplatesMonitoring {
 public:
  AWS_EC2_API LaunchTemplatesMonitoring() = default;
  AWS_EC2_API LaunchTemplatesMonitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API LaunchTemplatesMonitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring
   * is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline LaunchTemplatesMonitoring& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the metric categories to associate with the instance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetricCategoryIds() const { return m_metricCategoryIds; }
  inline bool MetricCategoryIdsHasBeenSet() const { return m_metricCategoryIdsHasBeenSet; }
  template <typename MetricCategoryIdsT = Aws::Vector<Aws::String>>
  void SetMetricCategoryIds(MetricCategoryIdsT&& value) {
    m_metricCategoryIdsHasBeenSet = true;
    m_metricCategoryIds = std::forward<MetricCategoryIdsT>(value);
  }
  template <typename MetricCategoryIdsT = Aws::Vector<Aws::String>>
  LaunchTemplatesMonitoring& WithMetricCategoryIds(MetricCategoryIdsT&& value) {
    SetMetricCategoryIds(std::forward<MetricCategoryIdsT>(value));
    return *this;
  }
  template <typename MetricCategoryIdsT = Aws::String>
  LaunchTemplatesMonitoring& AddMetricCategoryIds(MetricCategoryIdsT&& value) {
    m_metricCategoryIdsHasBeenSet = true;
    m_metricCategoryIds.emplace_back(std::forward<MetricCategoryIdsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Vector<Aws::String> m_metricCategoryIds;
  bool m_enabledHasBeenSet = false;
  bool m_metricCategoryIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
