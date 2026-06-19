/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InterceptorPayloadExclusion.h>

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
 * <p>A selector that identifies a payload field to exclude from the interceptor
 * input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InterceptorPayloadExclusionSelector">AWS
 * API Reference</a></p>
 */
class InterceptorPayloadExclusionSelector {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadExclusionSelector() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadExclusionSelector(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadExclusionSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to exclude from the interceptor input.</p>
   */
  inline InterceptorPayloadExclusion GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  inline void SetField(InterceptorPayloadExclusion value) {
    m_fieldHasBeenSet = true;
    m_field = value;
  }
  inline InterceptorPayloadExclusionSelector& WithField(InterceptorPayloadExclusion value) {
    SetField(value);
    return *this;
  }
  ///@}
 private:
  InterceptorPayloadExclusion m_field{InterceptorPayloadExclusion::NOT_SET};
  bool m_fieldHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
