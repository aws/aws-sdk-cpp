/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/EdgeProperties.h>
#include <aws/cloudwatchomni/model/EdgeType.h>
#include <aws/cloudwatchomni/model/Metadata.h>
#include <aws/cloudwatchomni/model/Signal.h>
#include <aws/cloudwatchomni/model/Source.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>A directed edge in the context graph connecting two nodes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Edge">AWS
 * API Reference</a></p>
 */
class Edge {
 public:
  AWS_CLOUDWATCHOMNI_API Edge() = default;
  AWS_CLOUDWATCHOMNI_API Edge(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Edge& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the edge within the context graph.</p>
   */
  inline const Aws::String& GetEdgeId() const { return m_edgeId; }
  inline bool EdgeIdHasBeenSet() const { return m_edgeIdHasBeenSet; }
  template <typename EdgeIdT = Aws::String>
  void SetEdgeId(EdgeIdT&& value) {
    m_edgeIdHasBeenSet = true;
    m_edgeId = std::forward<EdgeIdT>(value);
  }
  template <typename EdgeIdT = Aws::String>
  Edge& WithEdgeId(EdgeIdT&& value) {
    SetEdgeId(std::forward<EdgeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The node identifier the edge originates from.</p>
   */
  inline const Aws::String& GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  template <typename FromT = Aws::String>
  void SetFrom(FromT&& value) {
    m_fromHasBeenSet = true;
    m_from = std::forward<FromT>(value);
  }
  template <typename FromT = Aws::String>
  Edge& WithFrom(FromT&& value) {
    SetFrom(std::forward<FromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The node identifier the edge points to.</p>
   */
  inline const Aws::String& GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  template <typename ToT = Aws::String>
  void SetTo(ToT&& value) {
    m_toHasBeenSet = true;
    m_to = std::forward<ToT>(value);
  }
  template <typename ToT = Aws::String>
  Edge& WithTo(ToT&& value) {
    SetTo(std::forward<ToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kind of relationship the edge represents.</p>
   */
  inline EdgeType GetEdgeType() const { return m_edgeType; }
  inline bool EdgeTypeHasBeenSet() const { return m_edgeTypeHasBeenSet; }
  inline void SetEdgeType(EdgeType value) {
    m_edgeTypeHasBeenSet = true;
    m_edgeType = value;
  }
  inline Edge& WithEdgeType(EdgeType value) {
    SetEdgeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operations observed on this edge.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOperations() const { return m_operations; }
  inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
  template <typename OperationsT = Aws::Vector<Aws::String>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<Aws::String>>
  Edge& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = Aws::String>
  Edge& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Attributes promoted out of the flat attribute map onto typed members. Which
   * members are present depends on what produced the edge.</p>
   */
  inline const EdgeProperties& GetEdgeProperties() const { return m_edgeProperties; }
  inline bool EdgePropertiesHasBeenSet() const { return m_edgePropertiesHasBeenSet; }
  template <typename EdgePropertiesT = EdgeProperties>
  void SetEdgeProperties(EdgePropertiesT&& value) {
    m_edgePropertiesHasBeenSet = true;
    m_edgeProperties = std::forward<EdgePropertiesT>(value);
  }
  template <typename EdgePropertiesT = EdgeProperties>
  Edge& WithEdgeProperties(EdgePropertiesT&& value) {
    SetEdgeProperties(std::forward<EdgePropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The edge's OpenTelemetry (OTel) attributes, as emitted by telemetry. A key
   * promoted onto an <code>edgeProperties</code> member is removed here, so no value
   * appears twice.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTelemetryAttributes() const { return m_telemetryAttributes; }
  inline bool TelemetryAttributesHasBeenSet() const { return m_telemetryAttributesHasBeenSet; }
  template <typename TelemetryAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetTelemetryAttributes(TelemetryAttributesT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes = std::forward<TelemetryAttributesT>(value);
  }
  template <typename TelemetryAttributesT = Aws::Map<Aws::String, Aws::String>>
  Edge& WithTelemetryAttributes(TelemetryAttributesT&& value) {
    SetTelemetryAttributes(std::forward<TelemetryAttributesT>(value));
    return *this;
  }
  template <typename TelemetryAttributesKeyT = Aws::String, typename TelemetryAttributesValueT = Aws::String>
  Edge& AddTelemetryAttributes(TelemetryAttributesKeyT&& key, TelemetryAttributesValueT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes.emplace(std::forward<TelemetryAttributesKeyT>(key), std::forward<TelemetryAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kinds of telemetry signal observed on this edge.</p>
   */
  inline const Aws::Vector<Signal>& GetSignalTypes() const { return m_signalTypes; }
  inline bool SignalTypesHasBeenSet() const { return m_signalTypesHasBeenSet; }
  template <typename SignalTypesT = Aws::Vector<Signal>>
  void SetSignalTypes(SignalTypesT&& value) {
    m_signalTypesHasBeenSet = true;
    m_signalTypes = std::forward<SignalTypesT>(value);
  }
  template <typename SignalTypesT = Aws::Vector<Signal>>
  Edge& WithSignalTypes(SignalTypesT&& value) {
    SetSignalTypes(std::forward<SignalTypesT>(value));
    return *this;
  }
  inline Edge& AddSignalTypes(Signal value) {
    m_signalTypesHasBeenSet = true;
    m_signalTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The discovery sources that contributed this edge.</p>
   */
  inline const Aws::Vector<Source>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Source>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Source>>
  Edge& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  inline Edge& AddSources(Source value) {
    m_sourcesHasBeenSet = true;
    m_sources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Descriptive metadata about the edge. Present only when the request sets
   * includeMetadata.</p>
   */
  inline const Metadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Metadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Metadata>
  Edge& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this edge was first observed (UTC), at minute granularity. For an edge
   * that merged across sources, this is the earliest value any source reported.</p>
   */
  inline const Aws::Utils::DateTime& GetFirstObservedAt() const { return m_firstObservedAt; }
  inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
  template <typename FirstObservedAtT = Aws::Utils::DateTime>
  void SetFirstObservedAt(FirstObservedAtT&& value) {
    m_firstObservedAtHasBeenSet = true;
    m_firstObservedAt = std::forward<FirstObservedAtT>(value);
  }
  template <typename FirstObservedAtT = Aws::Utils::DateTime>
  Edge& WithFirstObservedAt(FirstObservedAtT&& value) {
    SetFirstObservedAt(std::forward<FirstObservedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this edge was most recently observed (UTC), at minute granularity. For
   * an edge that merged across sources, this is the latest value any source
   * reported.</p>
   */
  inline const Aws::Utils::DateTime& GetLastObservedAt() const { return m_lastObservedAt; }
  inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
  template <typename LastObservedAtT = Aws::Utils::DateTime>
  void SetLastObservedAt(LastObservedAtT&& value) {
    m_lastObservedAtHasBeenSet = true;
    m_lastObservedAt = std::forward<LastObservedAtT>(value);
  }
  template <typename LastObservedAtT = Aws::Utils::DateTime>
  Edge& WithLastObservedAt(LastObservedAtT&& value) {
    SetLastObservedAt(std::forward<LastObservedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_edgeId;

  Aws::String m_from;

  Aws::String m_to;

  EdgeType m_edgeType{EdgeType::NOT_SET};

  Aws::Vector<Aws::String> m_operations;

  EdgeProperties m_edgeProperties;

  Aws::Map<Aws::String, Aws::String> m_telemetryAttributes;

  Aws::Vector<Signal> m_signalTypes;

  Aws::Vector<Source> m_sources;

  Metadata m_metadata;

  Aws::Utils::DateTime m_firstObservedAt{};

  Aws::Utils::DateTime m_lastObservedAt{};
  bool m_edgeIdHasBeenSet = false;
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
  bool m_edgeTypeHasBeenSet = false;
  bool m_operationsHasBeenSet = false;
  bool m_edgePropertiesHasBeenSet = false;
  bool m_telemetryAttributesHasBeenSet = false;
  bool m_signalTypesHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_firstObservedAtHasBeenSet = false;
  bool m_lastObservedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
