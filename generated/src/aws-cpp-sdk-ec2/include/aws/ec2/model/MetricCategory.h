/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Tag.h>

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
 * <p>Describes a metric category. A metric category is a set of additional metrics
 * that you can associate with an instance that has detailed monitoring
 * enabled.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MetricCategory">AWS
 * API Reference</a></p>
 */
class MetricCategory {
 public:
  AWS_EC2_API MetricCategory() = default;
  AWS_EC2_API MetricCategory(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API MetricCategory& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the metric category.</p>
   */
  inline const Aws::String& GetMetricCategoryId() const { return m_metricCategoryId; }
  inline bool MetricCategoryIdHasBeenSet() const { return m_metricCategoryIdHasBeenSet; }
  template <typename MetricCategoryIdT = Aws::String>
  void SetMetricCategoryId(MetricCategoryIdT&& value) {
    m_metricCategoryIdHasBeenSet = true;
    m_metricCategoryId = std::forward<MetricCategoryIdT>(value);
  }
  template <typename MetricCategoryIdT = Aws::String>
  MetricCategory& WithMetricCategoryId(MetricCategoryIdT&& value) {
    SetMetricCategoryId(std::forward<MetricCategoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the metrics in the metric category.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Vector<Aws::String>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Vector<Aws::String>>
  MetricCategory& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  template <typename MetricsT = Aws::String>
  MetricCategory& AddMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace_back(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any tags assigned to the metric category.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  MetricCategory& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  MetricCategory& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metricCategoryId;

  Aws::Vector<Aws::String> m_metrics;

  Aws::Vector<Tag> m_tags;
  bool m_metricCategoryIdHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
