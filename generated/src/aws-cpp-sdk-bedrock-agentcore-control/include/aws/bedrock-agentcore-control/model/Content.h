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
 * <p>Represents content input for policy generation operations. This structure
 * encapsulates the natural language descriptions or other content formats that are
 * used as input for AI-powered policy generation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Content">AWS
 * API Reference</a></p>
 */
class Content {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Content() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Content(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Content& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The raw text content containing natural language descriptions of desired
   * policy behavior. This text is processed by AI to generate corresponding Cedar
   * policy statements that match the described intent.</p>
   */
  inline const Aws::String& GetRawText() const { return m_rawText; }
  inline bool RawTextHasBeenSet() const { return m_rawTextHasBeenSet; }
  template <typename RawTextT = Aws::String>
  void SetRawText(RawTextT&& value) {
    m_rawTextHasBeenSet = true;
    m_rawText = std::forward<RawTextT>(value);
  }
  template <typename RawTextT = Aws::String>
  Content& WithRawText(RawTextT&& value) {
    SetRawText(std::forward<RawTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rawText;
  bool m_rawTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
