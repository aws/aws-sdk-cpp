/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SynchronizationType.h>

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
 * <p>Wrapper for updating the synchronization type with PATCH semantics. Must be
 * matched with <code>UpdatedSynchronizationConfiguration</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdatedSynchronizationType">AWS
 * API Reference</a></p>
 */
class UpdatedSynchronizationType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedSynchronizationType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedSynchronizationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API UpdatedSynchronizationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated synchronization type value.</p>
   */
  inline SynchronizationType GetOptionalValue() const { return m_optionalValue; }
  inline bool OptionalValueHasBeenSet() const { return m_optionalValueHasBeenSet; }
  inline void SetOptionalValue(SynchronizationType value) {
    m_optionalValueHasBeenSet = true;
    m_optionalValue = value;
  }
  inline UpdatedSynchronizationType& WithOptionalValue(SynchronizationType value) {
    SetOptionalValue(value);
    return *this;
  }
  ///@}
 private:
  SynchronizationType m_optionalValue{SynchronizationType::NOT_SET};
  bool m_optionalValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
