/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreMemoryRetrievalConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Configuration for AgentCore Memory integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessAgentCoreMemoryConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreMemoryConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreMemoryConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreMemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreMemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the AgentCore Memory resource.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  HarnessAgentCoreMemoryConfiguration& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor ID for memory operations.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  HarnessAgentCoreMemoryConfiguration& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of messages to retrieve from memory.</p>
   */
  inline int GetMessagesCount() const { return m_messagesCount; }
  inline bool MessagesCountHasBeenSet() const { return m_messagesCountHasBeenSet; }
  inline void SetMessagesCount(int value) {
    m_messagesCountHasBeenSet = true;
    m_messagesCount = value;
  }
  inline HarnessAgentCoreMemoryConfiguration& WithMessagesCount(int value) {
    SetMessagesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retrieval configuration for long-term memory, mapping namespace path
   * templates to retrieval settings.</p>
   */
  inline const Aws::Map<Aws::String, HarnessAgentCoreMemoryRetrievalConfig>& GetRetrievalConfig() const { return m_retrievalConfig; }
  inline bool RetrievalConfigHasBeenSet() const { return m_retrievalConfigHasBeenSet; }
  template <typename RetrievalConfigT = Aws::Map<Aws::String, HarnessAgentCoreMemoryRetrievalConfig>>
  void SetRetrievalConfig(RetrievalConfigT&& value) {
    m_retrievalConfigHasBeenSet = true;
    m_retrievalConfig = std::forward<RetrievalConfigT>(value);
  }
  template <typename RetrievalConfigT = Aws::Map<Aws::String, HarnessAgentCoreMemoryRetrievalConfig>>
  HarnessAgentCoreMemoryConfiguration& WithRetrievalConfig(RetrievalConfigT&& value) {
    SetRetrievalConfig(std::forward<RetrievalConfigT>(value));
    return *this;
  }
  template <typename RetrievalConfigKeyT = Aws::String, typename RetrievalConfigValueT = HarnessAgentCoreMemoryRetrievalConfig>
  HarnessAgentCoreMemoryConfiguration& AddRetrievalConfig(RetrievalConfigKeyT&& key, RetrievalConfigValueT&& value) {
    m_retrievalConfigHasBeenSet = true;
    m_retrievalConfig.emplace(std::forward<RetrievalConfigKeyT>(key), std::forward<RetrievalConfigValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_actorId;

  int m_messagesCount{0};

  Aws::Map<Aws::String, HarnessAgentCoreMemoryRetrievalConfig> m_retrievalConfig;
  bool m_arnHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_messagesCountHasBeenSet = false;
  bool m_retrievalConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
