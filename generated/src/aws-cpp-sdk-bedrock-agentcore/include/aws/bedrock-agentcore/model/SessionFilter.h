/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EventFilterCondition.h>

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
 * <p>Contains filter criteria for listing sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SessionFilter">AWS
 * API Reference</a></p>
 */
class SessionFilter {
 public:
  AWS_BEDROCKAGENTCORE_API SessionFilter() = default;
  AWS_BEDROCKAGENTCORE_API SessionFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SessionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The event filter condition to apply. Use this to filter sessions based on
   * event presence.</p>
   */
  inline EventFilterCondition GetEventFilter() const { return m_eventFilter; }
  inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
  inline void SetEventFilter(EventFilterCondition value) {
    m_eventFilterHasBeenSet = true;
    m_eventFilter = value;
  }
  inline SessionFilter& WithEventFilter(EventFilterCondition value) {
    SetEventFilter(value);
    return *this;
  }
  ///@}
 private:
  EventFilterCondition m_eventFilter{EventFilterCondition::NOT_SET};
  bool m_eventFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
