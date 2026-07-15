/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AgentInputMessageType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Represents a message sent to the agent during chat-based profile
 * customization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/AgentInputMessage">AWS
 * API Reference</a></p>
 */
class AgentInputMessage {
 public:
  AWS_HEALTHLAKE_API AgentInputMessage() = default;
  AWS_HEALTHLAKE_API AgentInputMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API AgentInputMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text of your message to the agent.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  AgentInputMessage& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of input message, which determines how the agent processes your
   * request. Valid values:</p> <ul> <li> <p> <code>normal</code>: A regular message
   * to the agent.</p> </li> <li> <p> <code>confirmation_response</code>: A response
   * to a confirmation request from the agent.</p> </li> </ul>
   */
  inline AgentInputMessageType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AgentInputMessageType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AgentInputMessage& WithType(AgentInputMessageType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_body;

  AgentInputMessageType m_type{AgentInputMessageType::NOT_SET};
  bool m_bodyHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
