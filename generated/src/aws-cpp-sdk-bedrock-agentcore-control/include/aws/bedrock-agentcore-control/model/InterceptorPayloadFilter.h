/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InterceptorPayloadExclusionSelector.h>
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
 * <p>The filter that controls which fields of the request or response payload are
 * included in the input to the interceptor.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InterceptorPayloadFilter">AWS
 * API Reference</a></p>
 */
class InterceptorPayloadFilter {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadFilter() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InterceptorPayloadFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of selectors that identify payload fields to exclude from the
   * interceptor input.</p>
   */
  inline const Aws::Vector<InterceptorPayloadExclusionSelector>& GetExclude() const { return m_exclude; }
  inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
  template <typename ExcludeT = Aws::Vector<InterceptorPayloadExclusionSelector>>
  void SetExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude = std::forward<ExcludeT>(value);
  }
  template <typename ExcludeT = Aws::Vector<InterceptorPayloadExclusionSelector>>
  InterceptorPayloadFilter& WithExclude(ExcludeT&& value) {
    SetExclude(std::forward<ExcludeT>(value));
    return *this;
  }
  template <typename ExcludeT = InterceptorPayloadExclusionSelector>
  InterceptorPayloadFilter& AddExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude.emplace_back(std::forward<ExcludeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<InterceptorPayloadExclusionSelector> m_exclude;
  bool m_excludeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
