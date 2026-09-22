/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/EdgeType.h>
#include <aws/cloudwatchomni/model/KeyFilter.h>
#include <aws/cloudwatchomni/model/Source.h>
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
 * <p>Criteria for filtering edges in a context graph query.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/EdgeFilters">AWS
 * API Reference</a></p>
 */
class EdgeFilters {
 public:
  AWS_CLOUDWATCHOMNI_API EdgeFilters() = default;
  AWS_CLOUDWATCHOMNI_API EdgeFilters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API EdgeFilters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Match only the edge with this identifier.</p>
   */
  inline const Aws::String& GetEdgeId() const { return m_edgeId; }
  inline bool EdgeIdHasBeenSet() const { return m_edgeIdHasBeenSet; }
  template <typename EdgeIdT = Aws::String>
  void SetEdgeId(EdgeIdT&& value) {
    m_edgeIdHasBeenSet = true;
    m_edgeId = std::forward<EdgeIdT>(value);
  }
  template <typename EdgeIdT = Aws::String>
  EdgeFilters& WithEdgeId(EdgeIdT&& value) {
    SetEdgeId(std::forward<EdgeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match only edges originating from this node identifier.</p>
   */
  inline const Aws::String& GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  template <typename FromT = Aws::String>
  void SetFrom(FromT&& value) {
    m_fromHasBeenSet = true;
    m_from = std::forward<FromT>(value);
  }
  template <typename FromT = Aws::String>
  EdgeFilters& WithFrom(FromT&& value) {
    SetFrom(std::forward<FromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match only edges pointing to this node identifier.</p>
   */
  inline const Aws::String& GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  template <typename ToT = Aws::String>
  void SetTo(ToT&& value) {
    m_toHasBeenSet = true;
    m_to = std::forward<ToT>(value);
  }
  template <typename ToT = Aws::String>
  EdgeFilters& WithTo(ToT&& value) {
    SetTo(std::forward<ToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match only edges of this relationship kind.</p>
   */
  inline EdgeType GetEdgeType() const { return m_edgeType; }
  inline bool EdgeTypeHasBeenSet() const { return m_edgeTypeHasBeenSet; }
  inline void SetEdgeType(EdgeType value) {
    m_edgeTypeHasBeenSet = true;
    m_edgeType = value;
  }
  inline EdgeFilters& WithEdgeType(EdgeType value) {
    SetEdgeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match edges carrying any of these operations.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOperations() const { return m_operations; }
  inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
  template <typename OperationsT = Aws::Vector<Aws::String>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<Aws::String>>
  EdgeFilters& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = Aws::String>
  EdgeFilters& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match edges by their OpenTelemetry (OTel) telemetry attributes. Not yet
   * enforced: currently accepted but ignored (does not filter), matching
   * nodeFilters.telemetryAttributes.</p>
   */
  inline const Aws::Vector<KeyFilter>& GetTelemetryAttributes() const { return m_telemetryAttributes; }
  inline bool TelemetryAttributesHasBeenSet() const { return m_telemetryAttributesHasBeenSet; }
  template <typename TelemetryAttributesT = Aws::Vector<KeyFilter>>
  void SetTelemetryAttributes(TelemetryAttributesT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes = std::forward<TelemetryAttributesT>(value);
  }
  template <typename TelemetryAttributesT = Aws::Vector<KeyFilter>>
  EdgeFilters& WithTelemetryAttributes(TelemetryAttributesT&& value) {
    SetTelemetryAttributes(std::forward<TelemetryAttributesT>(value));
    return *this;
  }
  template <typename TelemetryAttributesT = KeyFilter>
  EdgeFilters& AddTelemetryAttributes(TelemetryAttributesT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes.emplace_back(std::forward<TelemetryAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match edges contributed by any of these discovery sources.</p>
   */
  inline const Aws::Vector<Source>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Source>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Source>>
  EdgeFilters& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  inline EdgeFilters& AddSources(Source value) {
    m_sourcesHasBeenSet = true;
    m_sources.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_edgeId;

  Aws::String m_from;

  Aws::String m_to;

  EdgeType m_edgeType{EdgeType::NOT_SET};

  Aws::Vector<Aws::String> m_operations;

  Aws::Vector<KeyFilter> m_telemetryAttributes;

  Aws::Vector<Source> m_sources;
  bool m_edgeIdHasBeenSet = false;
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
  bool m_edgeTypeHasBeenSet = false;
  bool m_operationsHasBeenSet = false;
  bool m_telemetryAttributesHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
