/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents a connection between two nodes in a dependency graph, showing how
 * services or components interact with each other.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/Edge">AWS
 * API Reference</a></p>
 */
class Edge {
 public:
  AWS_APPLICATIONSIGNALS_API Edge() = default;
  AWS_APPLICATIONSIGNALS_API Edge(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the source node in the dependency relationship.</p>
   */
  inline const Aws::String& GetSourceNodeId() const { return m_sourceNodeId; }
  inline bool SourceNodeIdHasBeenSet() const { return m_sourceNodeIdHasBeenSet; }
  template <typename SourceNodeIdT = Aws::String>
  void SetSourceNodeId(SourceNodeIdT&& value) {
    m_sourceNodeIdHasBeenSet = true;
    m_sourceNodeId = std::forward<SourceNodeIdT>(value);
  }
  template <typename SourceNodeIdT = Aws::String>
  Edge& WithSourceNodeId(SourceNodeIdT&& value) {
    SetSourceNodeId(std::forward<SourceNodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the destination node in the dependency relationship.</p>
   */
  inline const Aws::String& GetDestinationNodeId() const { return m_destinationNodeId; }
  inline bool DestinationNodeIdHasBeenSet() const { return m_destinationNodeIdHasBeenSet; }
  template <typename DestinationNodeIdT = Aws::String>
  void SetDestinationNodeId(DestinationNodeIdT&& value) {
    m_destinationNodeIdHasBeenSet = true;
    m_destinationNodeId = std::forward<DestinationNodeIdT>(value);
  }
  template <typename DestinationNodeIdT = Aws::String>
  Edge& WithDestinationNodeId(DestinationNodeIdT&& value) {
    SetDestinationNodeId(std::forward<DestinationNodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typical duration or latency of interactions along this edge, measured in
   * milliseconds.</p>
   */
  inline double GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(double value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline Edge& WithDuration(double value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of connection between the nodes, such as "HTTP", "Database",
   * "Queue", or "Internal".</p>
   */
  inline ConnectionType GetConnectionType() const { return m_connectionType; }
  inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
  inline void SetConnectionType(ConnectionType value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = value;
  }
  inline Edge& WithConnectionType(ConnectionType value) {
    SetConnectionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceNodeId;
  bool m_sourceNodeIdHasBeenSet = false;

  Aws::String m_destinationNodeId;
  bool m_destinationNodeIdHasBeenSet = false;

  double m_duration{0.0};
  bool m_durationHasBeenSet = false;

  ConnectionType m_connectionType{ConnectionType::NOT_SET};
  bool m_connectionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
