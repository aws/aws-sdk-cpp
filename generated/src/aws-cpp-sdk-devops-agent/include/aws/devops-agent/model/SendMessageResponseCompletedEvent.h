/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SendMessageUsageInfo.h>

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
 * <p>Event emitted when the response completes successfully</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageResponseCompletedEvent">AWS
 * API Reference</a></p>
 */
class SendMessageResponseCompletedEvent {
 public:
  AWS_DEVOPSAGENT_API SendMessageResponseCompletedEvent() = default;
  AWS_DEVOPSAGENT_API SendMessageResponseCompletedEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageResponseCompletedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SendMessageResponseCompletedEvent& WithResponseId(ResponseIdT&& value) {
    SetResponseId(std::forward<ResponseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token usage information</p>
   */
  inline const SendMessageUsageInfo& GetUsage() const { return m_usage; }
  inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
  template <typename UsageT = SendMessageUsageInfo>
  void SetUsage(UsageT&& value) {
    m_usageHasBeenSet = true;
    m_usage = std::forward<UsageT>(value);
  }
  template <typename UsageT = SendMessageUsageInfo>
  SendMessageResponseCompletedEvent& WithUsage(UsageT&& value) {
    SetUsage(std::forward<UsageT>(value));
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
  inline SendMessageResponseCompletedEvent& WithSequenceNumber(int value) {
    SetSequenceNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_responseId;

  SendMessageUsageInfo m_usage;

  int m_sequenceNumber{0};
  bool m_responseIdHasBeenSet = false;
  bool m_usageHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
