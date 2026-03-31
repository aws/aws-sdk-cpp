/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Message.h>

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
 * <p>Represents a pending message in an agent execution.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PendingMessage">AWS
 * API Reference</a></p>
 */
class PendingMessage {
 public:
  AWS_DEVOPSAGENT_API PendingMessage() = default;
  AWS_DEVOPSAGENT_API PendingMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PendingMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this pending message.</p>
   */
  inline const Aws::String& GetMessageId() const { return m_messageId; }
  inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
  template <typename MessageIdT = Aws::String>
  void SetMessageId(MessageIdT&& value) {
    m_messageIdHasBeenSet = true;
    m_messageId = std::forward<MessageIdT>(value);
  }
  template <typename MessageIdT = Aws::String>
  PendingMessage& WithMessageId(MessageIdT&& value) {
    SetMessageId(std::forward<MessageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message content.</p>
   */
  inline const Message& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Message>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Message>
  PendingMessage& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageId;

  Message m_message;
  bool m_messageIdHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
