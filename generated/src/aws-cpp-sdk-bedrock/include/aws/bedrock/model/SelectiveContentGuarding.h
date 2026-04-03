/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/SelectiveGuardingMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Selective content guarding controls for enforced guardrails.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/SelectiveContentGuarding">AWS
 * API Reference</a></p>
 */
class SelectiveContentGuarding {
 public:
  AWS_BEDROCK_API SelectiveContentGuarding() = default;
  AWS_BEDROCK_API SelectiveContentGuarding(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API SelectiveContentGuarding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Selective guarding mode for system prompts."</p>
   */
  inline SelectiveGuardingMode GetSystem() const { return m_system; }
  inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
  inline void SetSystem(SelectiveGuardingMode value) {
    m_systemHasBeenSet = true;
    m_system = value;
  }
  inline SelectiveContentGuarding& WithSystem(SelectiveGuardingMode value) {
    SetSystem(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Selective guarding mode for user messages.</p>
   */
  inline SelectiveGuardingMode GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  inline void SetMessages(SelectiveGuardingMode value) {
    m_messagesHasBeenSet = true;
    m_messages = value;
  }
  inline SelectiveContentGuarding& WithMessages(SelectiveGuardingMode value) {
    SetMessages(value);
    return *this;
  }
  ///@}
 private:
  SelectiveGuardingMode m_system{SelectiveGuardingMode::NOT_SET};

  SelectiveGuardingMode m_messages{SelectiveGuardingMode::NOT_SET};
  bool m_systemHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
