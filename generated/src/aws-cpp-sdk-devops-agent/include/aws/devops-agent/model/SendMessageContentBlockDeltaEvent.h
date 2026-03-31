/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SendMessageContentBlockDelta.h>

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
 * <p>Event emitted for each incremental content delta within a content
 * block</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageContentBlockDeltaEvent">AWS
 * API Reference</a></p>
 */
class SendMessageContentBlockDeltaEvent {
 public:
  AWS_DEVOPSAGENT_API SendMessageContentBlockDeltaEvent() = default;
  AWS_DEVOPSAGENT_API SendMessageContentBlockDeltaEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageContentBlockDeltaEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline SendMessageContentBlockDeltaEvent& WithIndex(int value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The incremental content delta</p>
   */
  inline const SendMessageContentBlockDelta& GetDelta() const { return m_delta; }
  inline bool DeltaHasBeenSet() const { return m_deltaHasBeenSet; }
  template <typename DeltaT = SendMessageContentBlockDelta>
  void SetDelta(DeltaT&& value) {
    m_deltaHasBeenSet = true;
    m_delta = std::forward<DeltaT>(value);
  }
  template <typename DeltaT = SendMessageContentBlockDelta>
  SendMessageContentBlockDeltaEvent& WithDelta(DeltaT&& value) {
    SetDelta(std::forward<DeltaT>(value));
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
  inline SendMessageContentBlockDeltaEvent& WithSequenceNumber(int value) {
    SetSequenceNumber(value);
    return *this;
  }
  ///@}
 private:
  int m_index{0};

  SendMessageContentBlockDelta m_delta;

  int m_sequenceNumber{0};
  bool m_indexHasBeenSet = false;
  bool m_deltaHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
