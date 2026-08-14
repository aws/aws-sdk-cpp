/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The AI agent that participates in the contact, including its
 * identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AiAgentInput">AWS
 * API Reference</a></p>
 */
class AiAgentInput {
 public:
  AWS_CONNECT_API AiAgentInput() = default;
  AWS_CONNECT_API AiAgentInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AiAgentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the AI agent that participates in the contact.</p>
   */
  inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
  inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
  template <typename AiAgentIdT = Aws::String>
  void SetAiAgentId(AiAgentIdT&& value) {
    m_aiAgentIdHasBeenSet = true;
    m_aiAgentId = std::forward<AiAgentIdT>(value);
  }
  template <typename AiAgentIdT = Aws::String>
  AiAgentInput& WithAiAgentId(AiAgentIdT&& value) {
    SetAiAgentId(std::forward<AiAgentIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aiAgentId;
  bool m_aiAgentIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
