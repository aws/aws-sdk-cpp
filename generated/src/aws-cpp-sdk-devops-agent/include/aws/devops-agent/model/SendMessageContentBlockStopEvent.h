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
 * <p>Event emitted when a content block is complete</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageContentBlockStopEvent">AWS
 * API Reference</a></p>
 */
class SendMessageContentBlockStopEvent {
 public:
  AWS_DEVOPSAGENT_API SendMessageContentBlockStopEvent() = default;
  AWS_DEVOPSAGENT_API SendMessageContentBlockStopEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageContentBlockStopEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline SendMessageContentBlockStopEvent& WithIndex(int value) {
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
  SendMessageContentBlockStopEvent& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accumulated complete content text</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  SendMessageContentBlockStopEvent& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether this is the final content block in the response</p>
   */
  inline bool GetLast() const { return m_last; }
  inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }
  inline void SetLast(bool value) {
    m_lastHasBeenSet = true;
    m_last = value;
  }
  inline SendMessageContentBlockStopEvent& WithLast(bool value) {
    SetLast(value);
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
  inline SendMessageContentBlockStopEvent& WithSequenceNumber(int value) {
    SetSequenceNumber(value);
    return *this;
  }
  ///@}
 private:
  int m_index{0};

  Aws::String m_type;

  Aws::String m_text;

  bool m_last{false};

  int m_sequenceNumber{0};
  bool m_indexHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_lastHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
