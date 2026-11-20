/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/BotCategory.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistry {
namespace Model {

/**
 * <p>The additional data for a signature agent card descriptor, such as the bot
 * category of the web bot.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/SignatureAgentCardAdditionalData">AWS
 * API Reference</a></p>
 */
class SignatureAgentCardAdditionalData {
 public:
  AWS_AGENTREGISTRY_API SignatureAgentCardAdditionalData() = default;
  AWS_AGENTREGISTRY_API SignatureAgentCardAdditionalData(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API SignatureAgentCardAdditionalData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The bot category that describes the purpose of the web bot identified by the
   * signature agent card descriptor.</p>
   */
  inline BotCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(BotCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline SignatureAgentCardAdditionalData& WithCategory(BotCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}
 private:
  BotCategory m_category{BotCategory::NOT_SET};
  bool m_categoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
