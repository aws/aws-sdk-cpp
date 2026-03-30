/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Event emitted when a new content block starts</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageContentBlockStartEvent">AWS
 * API Reference</a></p>
 */
class SendMessageContentBlockStartEvent {
 public:
  AWS_DEVOPSAGENT_API SendMessageContentBlockStartEvent() = default;
  AWS_DEVOPSAGENT_API SendMessageContentBlockStartEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageContentBlockStartEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Zero-based index of the content block</p>
   */
  inline int GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline SendMessageContentBlockStartEvent& WithIndex(int value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of content in this block</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  SendMessageContentBlockStartEvent& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Block identifier</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SendMessageContentBlockStartEvent& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional parent block ID for nested content blocks (e.g. subagent tool
   * calls)</p>
   */
  inline const Aws::String& GetParentId() const { return m_parentId; }
  inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
  template <typename ParentIdT = Aws::String>
  void SetParentId(ParentIdT&& value) {
    m_parentIdHasBeenSet = true;
    m_parentId = std::forward<ParentIdT>(value);
  }
  template <typename ParentIdT = Aws::String>
  SendMessageContentBlockStartEvent& WithParentId(ParentIdT&& value) {
    SetParentId(std::forward<ParentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event sequence number</p>
   */
  inline int GetSequenceNumber() const { return m_sequenceNumber; }
  inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
  inline void SetSequenceNumber(int value) {
    m_sequenceNumberHasBeenSet = true;
    m_sequenceNumber = value;
  }
  inline SendMessageContentBlockStartEvent& WithSequenceNumber(int value) {
    SetSequenceNumber(value);
    return *this;
  }
  ///@}
 private:
  int m_index{0};

  Aws::String m_type;

  Aws::String m_id;

  Aws::String m_parentId;

  int m_sequenceNumber{0};
  bool m_indexHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_parentIdHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
