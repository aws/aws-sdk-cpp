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
 * <p>System-managed metadata for rules created by automated processes such as A/B
 * tests.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SystemManagedBlock">AWS
 * API Reference</a></p>
 */
class SystemManagedBlock {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SystemManagedBlock() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SystemManagedBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SystemManagedBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the system or process that manages this rule.</p>
   */
  inline const Aws::String& GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  template <typename ManagedByT = Aws::String>
  void SetManagedBy(ManagedByT&& value) {
    m_managedByHasBeenSet = true;
    m_managedBy = std::forward<ManagedByT>(value);
  }
  template <typename ManagedByT = Aws::String>
  SystemManagedBlock& WithManagedBy(ManagedByT&& value) {
    SetManagedBy(std::forward<ManagedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedBy;
  bool m_managedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
