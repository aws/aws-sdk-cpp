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
 * <p>Event emitted when the response is created</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageResponseCreatedEvent">AWS
 * API Reference</a></p>
 */
class SendMessageResponseCreatedEvent {
 public:
  AWS_DEVOPSAGENT_API SendMessageResponseCreatedEvent() = default;
  AWS_DEVOPSAGENT_API SendMessageResponseCreatedEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageResponseCreatedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The response ID</p>
   */
  inline const Aws::String& GetResponseId() const { return m_responseId; }
  inline bool ResponseIdHasBeenSet() const { return m_responseIdHasBeenSet; }
  template <typename ResponseIdT = Aws::String>
  void SetResponseId(ResponseIdT&& value) {
    m_responseIdHasBeenSet = true;
    m_responseId = std::forward<ResponseIdT>(value);
  }
  template <typename ResponseIdT = Aws::String>
  SendMessageResponseCreatedEvent& WithResponseId(ResponseIdT&& value) {
    SetResponseId(std::forward<ResponseIdT>(value));
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
  inline SendMessageResponseCreatedEvent& WithSequenceNumber(int value) {
    SetSequenceNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_responseId;

  int m_sequenceNumber{0};
  bool m_responseIdHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
