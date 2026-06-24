/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The configuration for session-sticky routing to a target. Session stickiness
 * routes requests that share a session identifier to the same
 * target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StickinessConfiguration">AWS
 * API Reference</a></p>
 */
class StickinessConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StickinessConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StickinessConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StickinessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expression that identifies where to extract the session identifier from
   * the request (for example, <code>$context.header.x-session-id</code>).</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  StickinessConfiguration& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session stickiness timeout, in seconds. After this duration of
   * inactivity, the session affinity expires. Valid values range from 1 to
   * 86400.</p>
   */
  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline StickinessConfiguration& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  int m_timeout{0};
  bool m_identifierHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
