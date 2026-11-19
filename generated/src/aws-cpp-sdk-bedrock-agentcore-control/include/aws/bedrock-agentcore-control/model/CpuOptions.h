/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/NestedVirtualization.h>

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
 * <p>The CPU configuration for capacity provider instances, including nested
 * virtualization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CpuOptions">AWS
 * API Reference</a></p>
 */
class CpuOptions {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CpuOptions() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CpuOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CpuOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether your agents can use hardware virtualization on their
   * instances. The following values are possible:</p> <ul> <li> <p>
   * <code>ENABLED</code> – Your agents can use hardware virtualization on their
   * instances. To use this value, choose the <code>LINUX_X86_64</code> operating
   * system and instance types that support nested virtualization.</p> </li> <li> <p>
   * <code>DISABLED</code> – Your agents can't use hardware virtualization on their
   * instances. This is the default.</p> </li> </ul>
   */
  inline NestedVirtualization GetNestedVirtualization() const { return m_nestedVirtualization; }
  inline bool NestedVirtualizationHasBeenSet() const { return m_nestedVirtualizationHasBeenSet; }
  inline void SetNestedVirtualization(NestedVirtualization value) {
    m_nestedVirtualizationHasBeenSet = true;
    m_nestedVirtualization = value;
  }
  inline CpuOptions& WithNestedVirtualization(NestedVirtualization value) {
    SetNestedVirtualization(value);
    return *this;
  }
  ///@}
 private:
  NestedVirtualization m_nestedVirtualization{NestedVirtualization::NOT_SET};
  bool m_nestedVirtualizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
