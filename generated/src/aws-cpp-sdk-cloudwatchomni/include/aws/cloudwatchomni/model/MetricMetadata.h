/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/MetricSemantics.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>A single metric observed on a context graph node.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/MetricMetadata">AWS
 * API Reference</a></p>
 */
class MetricMetadata {
 public:
  AWS_CLOUDWATCHOMNI_API MetricMetadata() = default;
  AWS_CLOUDWATCHOMNI_API MetricMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API MetricMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The metric name as emitted, such as &quot;Duration&quot;.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetricMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The statistic to chart or alarm on, such as &quot;p99&quot; or
   * &quot;Sum&quot;. Free-form and frequently absent.</p>
   */
  inline const Aws::String& GetPreferredStat() const { return m_preferredStat; }
  inline bool PreferredStatHasBeenSet() const { return m_preferredStatHasBeenSet; }
  template <typename PreferredStatT = Aws::String>
  void SetPreferredStat(PreferredStatT&& value) {
    m_preferredStatHasBeenSet = true;
    m_preferredStat = std::forward<PreferredStatT>(value);
  }
  template <typename PreferredStatT = Aws::String>
  MetricMetadata& WithPreferredStat(PreferredStatT&& value) {
    SetPreferredStat(std::forward<PreferredStatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OTel metric kind: &quot;gauge&quot;, &quot;sum&quot;, &quot;histogram&quot;,
   * &quot;exponential_histogram&quot;, or &quot;summary&quot; (CloudWatch-vended
   * metrics carry the same kinds). Absent when the producer did not report one.</p>
   */
  inline const Aws::String& GetMetricType() const { return m_metricType; }
  inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
  template <typename MetricTypeT = Aws::String>
  void SetMetricType(MetricTypeT&& value) {
    m_metricTypeHasBeenSet = true;
    m_metricType = std::forward<MetricTypeT>(value);
  }
  template <typename MetricTypeT = Aws::String>
  MetricMetadata& WithMetricType(MetricTypeT&& value) {
    SetMetricType(std::forward<MetricTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-metric qualifying attributes the console uses to query this metric's
   * telemetry. These are the RAW, store-matching values keyed by their OTel names
   * (&quot;service.name&quot;, &quot;service.namespace&quot;,
   * &quot;cloud.provider&quot;, &quot;cloud.account.id&quot;,
   * &quot;cloud.region&quot;, &quot;instrumentation_scope&quot;) — deliberately NOT
   * the node's normalized/merged identity, so the query selectors match the emitted
   * series. A merged node can carry different values per metric, which is why they
   * live here rather than on the node.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  MetricMetadata& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
  MetricMetadata& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the metric means and the unit it is reported in.</p>
   */
  inline const MetricSemantics& GetSemantics() const { return m_semantics; }
  inline bool SemanticsHasBeenSet() const { return m_semanticsHasBeenSet; }
  template <typename SemanticsT = MetricSemantics>
  void SetSemantics(SemanticsT&& value) {
    m_semanticsHasBeenSet = true;
    m_semantics = std::forward<SemanticsT>(value);
  }
  template <typename SemanticsT = MetricSemantics>
  MetricMetadata& WithSemantics(SemanticsT&& value) {
    SetSemantics(std::forward<SemanticsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_preferredStat;

  Aws::String m_metricType;

  Aws::Map<Aws::String, Aws::String> m_attributes;

  MetricSemantics m_semantics;
  bool m_nameHasBeenSet = false;
  bool m_preferredStatHasBeenSet = false;
  bool m_metricTypeHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_semanticsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
