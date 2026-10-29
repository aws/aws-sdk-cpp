/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>An inclusive range of ports. The value of <code>from</code> must be less than
 * or equal to the value of <code>to</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PortRange">AWS
 * API Reference</a></p>
 */
class PortRange {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PortRange() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PortRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The first port in the inclusive range.</p>
   */
  inline int GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  inline void SetFrom(int value) {
    m_fromHasBeenSet = true;
    m_from = value;
  }
  inline PortRange& WithFrom(int value) {
    SetFrom(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last port in the inclusive range.</p>
   */
  inline int GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  inline void SetTo(int value) {
    m_toHasBeenSet = true;
    m_to = value;
  }
  inline PortRange& WithTo(int value) {
    SetTo(value);
    return *this;
  }
  ///@}
 private:
  int m_from{0};

  int m_to{0};
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
