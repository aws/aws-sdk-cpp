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
 * <p>The configuration for a browser profile in Amazon Bedrock AgentCore. A
 * browser profile contains persistent browser data such as cookies and local
 * storage that can be saved from one browser session and reused in subsequent
 * sessions. Browser profiles enable continuity for tasks that require
 * authentication, maintain user preferences, or depend on previously stored
 * browser state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BrowserProfileConfiguration">AWS
 * API Reference</a></p>
 */
class BrowserProfileConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API BrowserProfileConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API BrowserProfileConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API BrowserProfileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the browser profile. This identifier is used to
   * reference the profile when starting new browser sessions or saving session data
   * to the profile.</p>
   */
  inline const Aws::String& GetProfileIdentifier() const { return m_profileIdentifier; }
  inline bool ProfileIdentifierHasBeenSet() const { return m_profileIdentifierHasBeenSet; }
  template <typename ProfileIdentifierT = Aws::String>
  void SetProfileIdentifier(ProfileIdentifierT&& value) {
    m_profileIdentifierHasBeenSet = true;
    m_profileIdentifier = std::forward<ProfileIdentifierT>(value);
  }
  template <typename ProfileIdentifierT = Aws::String>
  BrowserProfileConfiguration& WithProfileIdentifier(ProfileIdentifierT&& value) {
    SetProfileIdentifier(std::forward<ProfileIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileIdentifier;
  bool m_profileIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
