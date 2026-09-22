/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/Edge.h>
#include <aws/cloudwatchomni/model/Metadata.h>
#include <aws/cloudwatchomni/model/NodeProperties.h>
#include <aws/cloudwatchomni/model/NodeType.h>
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
 * <p>A node in the context graph representing a service, resource, or remote
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Node">AWS
 * API Reference</a></p>
 */
class Node {
 public:
  AWS_CLOUDWATCHOMNI_API Node() = default;
  AWS_CLOUDWATCHOMNI_API Node(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Node& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the node within the context graph.</p>
   */
  inline const Aws::String& GetNodeId() const { return m_nodeId; }
  inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
  template <typename NodeIdT = Aws::String>
  void SetNodeId(NodeIdT&& value) {
    m_nodeIdHasBeenSet = true;
    m_nodeId = std::forward<NodeIdT>(value);
  }
  template <typename NodeIdT = Aws::String>
  Node& WithNodeId(NodeIdT&& value) {
    SetNodeId(std::forward<NodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the node is a service, a resource, or a remote service.</p>
   */
  inline NodeType GetNodeType() const { return m_nodeType; }
  inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
  inline void SetNodeType(NodeType value) {
    m_nodeTypeHasBeenSet = true;
    m_nodeType = value;
  }
  inline Node& WithNodeType(NodeType value) {
    SetNodeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary display name of the node.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Node& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Other names this node was observed under. A node that merged across sources
   * reports one resolved name, and the names it was merged away from appear
   * here.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlternateNames() const { return m_alternateNames; }
  inline bool AlternateNamesHasBeenSet() const { return m_alternateNamesHasBeenSet; }
  template <typename AlternateNamesT = Aws::Vector<Aws::String>>
  void SetAlternateNames(AlternateNamesT&& value) {
    m_alternateNamesHasBeenSet = true;
    m_alternateNames = std::forward<AlternateNamesT>(value);
  }
  template <typename AlternateNamesT = Aws::Vector<Aws::String>>
  Node& WithAlternateNames(AlternateNamesT&& value) {
    SetAlternateNames(std::forward<AlternateNamesT>(value));
    return *this;
  }
  template <typename AlternateNamesT = Aws::String>
  Node& AddAlternateNames(AlternateNamesT&& value) {
    m_alternateNamesHasBeenSet = true;
    m_alternateNames.emplace_back(std::forward<AlternateNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags observed on the underlying resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Node& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Node& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identity attributes promoted out of the flat attribute map onto typed
   * members.</p>
   */
  inline const NodeProperties& GetNodeProperties() const { return m_nodeProperties; }
  inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
  template <typename NodePropertiesT = NodeProperties>
  void SetNodeProperties(NodePropertiesT&& value) {
    m_nodePropertiesHasBeenSet = true;
    m_nodeProperties = std::forward<NodePropertiesT>(value);
  }
  template <typename NodePropertiesT = NodeProperties>
  Node& WithNodeProperties(NodePropertiesT&& value) {
    SetNodeProperties(std::forward<NodePropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The node's OpenTelemetry (OTel) attributes, as emitted by telemetry — the raw
   * values, as opposed to the normalized <code>nodeProperties</code>. A key promoted
   * onto a <code>nodeProperties</code> member is removed here, so no value appears
   * twice.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTelemetryAttributes() const { return m_telemetryAttributes; }
  inline bool TelemetryAttributesHasBeenSet() const { return m_telemetryAttributesHasBeenSet; }
  template <typename TelemetryAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetTelemetryAttributes(TelemetryAttributesT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes = std::forward<TelemetryAttributesT>(value);
  }
  template <typename TelemetryAttributesT = Aws::Map<Aws::String, Aws::String>>
  Node& WithTelemetryAttributes(TelemetryAttributesT&& value) {
    SetTelemetryAttributes(std::forward<TelemetryAttributesT>(value));
    return *this;
  }
  template <typename TelemetryAttributesKeyT = Aws::String, typename TelemetryAttributesValueT = Aws::String>
  Node& AddTelemetryAttributes(TelemetryAttributesKeyT&& key, TelemetryAttributesValueT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes.emplace(std::forward<TelemetryAttributesKeyT>(key), std::forward<TelemetryAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operations observed on this node, keyed by operation name. Each value
   * lists the dimension sets that identify the metric series for that operation.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, Aws::String>>>& GetOperationDetails() const {
    return m_operationDetails;
  }
  inline bool OperationDetailsHasBeenSet() const { return m_operationDetailsHasBeenSet; }
  template <typename OperationDetailsT = Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, Aws::String>>>>
  void SetOperationDetails(OperationDetailsT&& value) {
    m_operationDetailsHasBeenSet = true;
    m_operationDetails = std::forward<OperationDetailsT>(value);
  }
  template <typename OperationDetailsT = Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, Aws::String>>>>
  Node& WithOperationDetails(OperationDetailsT&& value) {
    SetOperationDetails(std::forward<OperationDetailsT>(value));
    return *this;
  }
  template <typename OperationDetailsKeyT = Aws::String, typename OperationDetailsValueT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  Node& AddOperationDetails(OperationDetailsKeyT&& key, OperationDetailsValueT&& value) {
    m_operationDetailsHasBeenSet = true;
    m_operationDetails.emplace(std::forward<OperationDetailsKeyT>(key), std::forward<OperationDetailsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kinds of telemetry signal observed on this node.</p>
   */
  inline const Aws::Vector<Signal>& GetSignalTypes() const { return m_signalTypes; }
  inline bool SignalTypesHasBeenSet() const { return m_signalTypesHasBeenSet; }
  template <typename SignalTypesT = Aws::Vector<Signal>>
  void SetSignalTypes(SignalTypesT&& value) {
    m_signalTypesHasBeenSet = true;
    m_signalTypes = std::forward<SignalTypesT>(value);
  }
  template <typename SignalTypesT = Aws::Vector<Signal>>
  Node& WithSignalTypes(SignalTypesT&& value) {
    SetSignalTypes(std::forward<SignalTypesT>(value));
    return *this;
  }
  inline Node& AddSignalTypes(Signal value) {
    m_signalTypesHasBeenSet = true;
    m_signalTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The discovery sources that contributed this node.</p>
   */
  inline const Aws::Vector<Source>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Source>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Source>>
  Node& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  inline Node& AddSources(Source value) {
    m_sourcesHasBeenSet = true;
    m_sources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Descriptive metadata about the node. Present only when the request sets
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
  Node& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this node was first observed (UTC), at minute granularity. For a node
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
  Node& WithFirstObservedAt(FirstObservedAtT&& value) {
    SetFirstObservedAt(std::forward<FirstObservedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this node was most recently observed (UTC), at minute granularity. For a
   * node that merged across sources, this is the latest value any source
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
  Node& WithLastObservedAt(LastObservedAtT&& value) {
    SetLastObservedAt(std::forward<LastObservedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Outbound edges originating from this node. Each edge carries its
   * <code>from</code>.</p>
   */
  inline const Aws::Vector<Edge>& GetEdges() const { return m_edges; }
  inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
  template <typename EdgesT = Aws::Vector<Edge>>
  void SetEdges(EdgesT&& value) {
    m_edgesHasBeenSet = true;
    m_edges = std::forward<EdgesT>(value);
  }
  template <typename EdgesT = Aws::Vector<Edge>>
  Node& WithEdges(EdgesT&& value) {
    SetEdges(std::forward<EdgesT>(value));
    return *this;
  }
  template <typename EdgesT = Edge>
  Node& AddEdges(EdgesT&& value) {
    m_edgesHasBeenSet = true;
    m_edges.emplace_back(std::forward<EdgesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeId;

  NodeType m_nodeType{NodeType::NOT_SET};

  Aws::String m_name;

  Aws::Vector<Aws::String> m_alternateNames;

  Aws::Map<Aws::String, Aws::String> m_tags;

  NodeProperties m_nodeProperties;

  Aws::Map<Aws::String, Aws::String> m_telemetryAttributes;

  Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, Aws::String>>> m_operationDetails;

  Aws::Vector<Signal> m_signalTypes;

  Aws::Vector<Source> m_sources;

  Metadata m_metadata;

  Aws::Utils::DateTime m_firstObservedAt{};

  Aws::Utils::DateTime m_lastObservedAt{};

  Aws::Vector<Edge> m_edges;
  bool m_nodeIdHasBeenSet = false;
  bool m_nodeTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_alternateNamesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_nodePropertiesHasBeenSet = false;
  bool m_telemetryAttributesHasBeenSet = false;
  bool m_operationDetailsHasBeenSet = false;
  bool m_signalTypesHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_firstObservedAtHasBeenSet = false;
  bool m_lastObservedAtHasBeenSet = false;
  bool m_edgesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
