/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/LogMetadata.h>
#include <aws/cloudwatchomni/model/MetricMetadata.h>
#include <aws/cloudwatchomni/model/NodeSemantics.h>
#include <aws/cloudwatchomni/model/TraceMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Descriptive information about a context graph node or edge, as opposed to its
 * identity and structure. Returned only when the request sets
 * includeMetadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Metadata">AWS
 * API Reference</a></p>
 */
class Metadata {
 public:
  AWS_CLOUDWATCHOMNI_API Metadata() = default;
  AWS_CLOUDWATCHOMNI_API Metadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Metadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The metrics observed on the element.</p>
   */
  inline const Aws::Vector<MetricMetadata>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Vector<MetricMetadata>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Vector<MetricMetadata>>
  Metadata& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  template <typename MetricsT = MetricMetadata>
  Metadata& AddMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace_back(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Semantic description of the node. Absent on an edge, because semantics
   * describe a service rather than a relationship.</p>
   */
  inline const NodeSemantics& GetSemantics() const { return m_semantics; }
  inline bool SemanticsHasBeenSet() const { return m_semanticsHasBeenSet; }
  template <typename SemanticsT = NodeSemantics>
  void SetSemantics(SemanticsT&& value) {
    m_semanticsHasBeenSet = true;
    m_semantics = std::forward<SemanticsT>(value);
  }
  template <typename SemanticsT = NodeSemantics>
  Metadata& WithSemantics(SemanticsT&& value) {
    SetSemantics(std::forward<SemanticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-signal LOGS query selectors: a LIST of blocks the console ORs, each an
   * AND of exact store column -&gt; raw values. Node-level (edges carry only
   * traces). Populated when the request sets includeMetadata; derived labels
   * (logSourceType) are added by the service projection, not stored here.</p>
   */
  inline const Aws::Vector<LogMetadata>& GetLogs() const { return m_logs; }
  inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
  template <typename LogsT = Aws::Vector<LogMetadata>>
  void SetLogs(LogsT&& value) {
    m_logsHasBeenSet = true;
    m_logs = std::forward<LogsT>(value);
  }
  template <typename LogsT = Aws::Vector<LogMetadata>>
  Metadata& WithLogs(LogsT&& value) {
    SetLogs(std::forward<LogsT>(value));
    return *this;
  }
  template <typename LogsT = LogMetadata>
  Metadata& AddLogs(LogsT&& value) {
    m_logsHasBeenSet = true;
    m_logs.emplace_back(std::forward<LogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-signal TRACES query selectors (same block shape as logs). Present on both
   * node and edge metadata. serviceName is derived at the service projection, not
   * stored here.</p>
   */
  inline const Aws::Vector<TraceMetadata>& GetTraces() const { return m_traces; }
  inline bool TracesHasBeenSet() const { return m_tracesHasBeenSet; }
  template <typename TracesT = Aws::Vector<TraceMetadata>>
  void SetTraces(TracesT&& value) {
    m_tracesHasBeenSet = true;
    m_traces = std::forward<TracesT>(value);
  }
  template <typename TracesT = Aws::Vector<TraceMetadata>>
  Metadata& WithTraces(TracesT&& value) {
    SetTraces(std::forward<TracesT>(value));
    return *this;
  }
  template <typename TracesT = TraceMetadata>
  Metadata& AddTraces(TracesT&& value) {
    m_tracesHasBeenSet = true;
    m_traces.emplace_back(std::forward<TracesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricMetadata> m_metrics;

  NodeSemantics m_semantics;

  Aws::Vector<LogMetadata> m_logs;

  Aws::Vector<TraceMetadata> m_traces;
  bool m_metricsHasBeenSet = false;
  bool m_semanticsHasBeenSet = false;
  bool m_logsHasBeenSet = false;
  bool m_tracesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
