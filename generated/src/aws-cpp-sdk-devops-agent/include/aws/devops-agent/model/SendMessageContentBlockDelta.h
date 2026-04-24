/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SendMessageJsonDelta.h>
#include <aws/devops-agent/model/SendMessageTextDelta.h>

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
 * <p>Union of possible delta payloads within a content block delta
 * event</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageContentBlockDelta">AWS
 * API Reference</a></p>
 */
class SendMessageContentBlockDelta {
 public:
  AWS_DEVOPSAGENT_API SendMessageContentBlockDelta() = default;
  AWS_DEVOPSAGENT_API SendMessageContentBlockDelta(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageContentBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Text delta for text-based content blocks</p>
   */
  inline const SendMessageTextDelta& GetTextDelta() const { return m_textDelta; }
  inline bool TextDeltaHasBeenSet() const { return m_textDeltaHasBeenSet; }
  template <typename TextDeltaT = SendMessageTextDelta>
  void SetTextDelta(TextDeltaT&& value) {
    m_textDeltaHasBeenSet = true;
    m_textDelta = std::forward<TextDeltaT>(value);
  }
  template <typename TextDeltaT = SendMessageTextDelta>
  SendMessageContentBlockDelta& WithTextDelta(TextDeltaT&& value) {
    SetTextDelta(std::forward<TextDeltaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>JSON delta for structured content blocks</p>
   */
  inline const SendMessageJsonDelta& GetJsonDelta() const { return m_jsonDelta; }
  inline bool JsonDeltaHasBeenSet() const { return m_jsonDeltaHasBeenSet; }
  template <typename JsonDeltaT = SendMessageJsonDelta>
  void SetJsonDelta(JsonDeltaT&& value) {
    m_jsonDeltaHasBeenSet = true;
    m_jsonDelta = std::forward<JsonDeltaT>(value);
  }
  template <typename JsonDeltaT = SendMessageJsonDelta>
  SendMessageContentBlockDelta& WithJsonDelta(JsonDeltaT&& value) {
    SetJsonDelta(std::forward<JsonDeltaT>(value));
    return *this;
  }
  ///@}
 private:
  SendMessageTextDelta m_textDelta;

  SendMessageJsonDelta m_jsonDelta;
  bool m_textDeltaHasBeenSet = false;
  bool m_jsonDeltaHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
