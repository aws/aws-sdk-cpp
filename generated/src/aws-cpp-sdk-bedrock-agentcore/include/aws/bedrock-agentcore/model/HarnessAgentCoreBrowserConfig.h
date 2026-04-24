/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for AgentCore Browser.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessAgentCoreBrowserConfig">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreBrowserConfig {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessAgentCoreBrowserConfig() = default;
  AWS_BEDROCKAGENTCORE_API HarnessAgentCoreBrowserConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessAgentCoreBrowserConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>If not populated, the built-in Browser ARN is used.</p>
   */
  inline const Aws::String& GetBrowserArn() const { return m_browserArn; }
  inline bool BrowserArnHasBeenSet() const { return m_browserArnHasBeenSet; }
  template <typename BrowserArnT = Aws::String>
  void SetBrowserArn(BrowserArnT&& value) {
    m_browserArnHasBeenSet = true;
    m_browserArn = std::forward<BrowserArnT>(value);
  }
  template <typename BrowserArnT = Aws::String>
  HarnessAgentCoreBrowserConfig& WithBrowserArn(BrowserArnT&& value) {
    SetBrowserArn(std::forward<BrowserArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_browserArn;
  bool m_browserArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
