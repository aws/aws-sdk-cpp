/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>A structure that represents a node in a dependency graph, containing
 * information about a service, resource, or other entity and its
 * characteristics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/Node">AWS
 * API Reference</a></p>
 */
class Node {
 public:
  AWS_APPLICATIONSIGNALS_API Node() = default;
  AWS_APPLICATIONSIGNALS_API Node(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key attributes that identify this node, including Type, Name, and
   * Environment information.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const { return m_keyAttributes; }
  inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
  template <typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetKeyAttributes(KeyAttributesT&& value) {
    m_keyAttributesHasBeenSet = true;
    m_keyAttributes = std::forward<KeyAttributesT>(value);
  }
  template <typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
  Node& WithKeyAttributes(KeyAttributesT&& value) {
    SetKeyAttributes(std::forward<KeyAttributesT>(value));
    return *this;
  }
  template <typename KeyAttributesKeyT = Aws::String, typename KeyAttributesValueT = Aws::String>
  Node& AddKeyAttributes(KeyAttributesKeyT&& key, KeyAttributesValueT&& value) {
    m_keyAttributesHasBeenSet = true;
    m_keyAttributes.emplace(std::forward<KeyAttributesKeyT>(key), std::forward<KeyAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the entity represented by this node.</p>
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
   * <p>A unique identifier for this node within the dependency graph.</p>
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
   * <p>The operation associated with this node, if applicable.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  Node& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of entity represented by this node, such as <code>Service</code> or
   * <code>Resource</code>.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Node& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration or processing time associated with this node, if applicable.</p>
   */
  inline double GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(double value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline Node& WithDuration(double value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the entity represented by this node.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  Node& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_keyAttributes;
  bool m_keyAttributesHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_nodeId;
  bool m_nodeIdHasBeenSet = false;

  Aws::String m_operation;
  bool m_operationHasBeenSet = false;

  Aws::String m_type;
  bool m_typeHasBeenSet = false;

  double m_duration{0.0};
  bool m_durationHasBeenSet = false;

  Aws::String m_status;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
