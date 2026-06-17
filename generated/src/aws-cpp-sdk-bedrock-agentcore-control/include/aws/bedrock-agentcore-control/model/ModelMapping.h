/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ProviderPrefix.h>

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
 * <p>The configuration that translates model IDs between client-facing names and
 * provider model IDs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModelMapping">AWS
 * API Reference</a></p>
 */
class ModelMapping {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ModelMapping() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ModelMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ModelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The provider prefix configuration used for model ID translation.</p>
   */
  inline const ProviderPrefix& GetProviderPrefix() const { return m_providerPrefix; }
  inline bool ProviderPrefixHasBeenSet() const { return m_providerPrefixHasBeenSet; }
  template <typename ProviderPrefixT = ProviderPrefix>
  void SetProviderPrefix(ProviderPrefixT&& value) {
    m_providerPrefixHasBeenSet = true;
    m_providerPrefix = std::forward<ProviderPrefixT>(value);
  }
  template <typename ProviderPrefixT = ProviderPrefix>
  ModelMapping& WithProviderPrefix(ProviderPrefixT&& value) {
    SetProviderPrefix(std::forward<ProviderPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  ProviderPrefix m_providerPrefix;
  bool m_providerPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
