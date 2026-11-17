/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ConflictExceptionReason.h>

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
 * <p>The request conflicts with the current state of the resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ConflictException">AWS
 * API Reference</a></p>
 */
class ConflictException {
 public:
  AWS_DEVOPSAGENT_API ConflictException() = default;
  AWS_DEVOPSAGENT_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Detailed error message describing the conflict.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ConflictException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A machine-readable reason code that explains why the request conflicted with
   * the current state of the resource. For example, <code>CHAT_ARCHIVED</code>
   * indicates that the request acted on a chat that is archived. This field is
   * absent when no specific reason applies.</p>
   */
  inline ConflictExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ConflictExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ConflictException& WithReason(ConflictExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ConflictExceptionReason m_reason{ConflictExceptionReason::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
