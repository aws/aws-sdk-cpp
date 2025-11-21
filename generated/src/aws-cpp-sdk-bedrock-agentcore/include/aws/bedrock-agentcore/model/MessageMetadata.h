/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Metadata information associated with this message.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MessageMetadata">AWS
 * API Reference</a></p>
 */
class MessageMetadata {
 public:
  AWS_BEDROCKAGENTCORE_API MessageMetadata() = default;
  AWS_BEDROCKAGENTCORE_API MessageMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MessageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the event associated with this message.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  MessageMetadata& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The position of this message within that event’s ordered list of
   * messages.</p>
   */
  inline int GetMessageIndex() const { return m_messageIndex; }
  inline bool MessageIndexHasBeenSet() const { return m_messageIndexHasBeenSet; }
  inline void SetMessageIndex(int value) {
    m_messageIndexHasBeenSet = true;
    m_messageIndex = value;
  }
  inline MessageMetadata& WithMessageIndex(int value) {
    SetMessageIndex(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;
  bool m_eventIdHasBeenSet = false;

  int m_messageIndex{0};
  bool m_messageIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
