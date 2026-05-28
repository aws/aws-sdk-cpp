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
 * <p>An S3 source for a skill.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessSkillS3Source">AWS
 * API Reference</a></p>
 */
class HarnessSkillS3Source {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillS3Source() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillS3Source(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillS3Source& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 URI pointing to the skill directory (e.g.,
   * s3://bucket/skills/my-skill/).</p>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  HarnessSkillS3Source& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uri;
  bool m_uriHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
