/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The requirements for Amazon EC2 instance types in a capacity
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InstanceRequirements">AWS
 * API Reference</a></p>
 */
class InstanceRequirements {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InstanceRequirements() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InstanceRequirements(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InstanceRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of allowed instance types. You can specify up to 30 instance
   * types.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const { return m_allowedInstanceTypes; }
  inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }
  template <typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
  void SetAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    m_allowedInstanceTypesHasBeenSet = true;
    m_allowedInstanceTypes = std::forward<AllowedInstanceTypesT>(value);
  }
  template <typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
  InstanceRequirements& WithAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    SetAllowedInstanceTypes(std::forward<AllowedInstanceTypesT>(value));
    return *this;
  }
  template <typename AllowedInstanceTypesT = Aws::String>
  InstanceRequirements& AddAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    m_allowedInstanceTypesHasBeenSet = true;
    m_allowedInstanceTypes.emplace_back(std::forward<AllowedInstanceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedInstanceTypes;
  bool m_allowedInstanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
