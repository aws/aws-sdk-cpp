/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryPersistenceMode.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryRetrievalConfig.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemorySessionBinding.h>
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
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Specifies an AgentCore Memory resource and how this retrieval uses it. Set
 * sessionBinding to restore and continue a session. Set retrievalConfigs to let
 * the agent retrieve from long-term memory. You must specify at least one of the
 * two.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryConfiguration">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the AgentCore Memory resource to use. The resource must
   * exist in your account and be in the ACTIVE state.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  AgenticRetrieveMemoryConfiguration& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the agent-generated answer is written back to the given
   * short-term memory session, and applies only when sessionBinding is set. Valid
   * values:</p> <ul> <li> <p> <code>DEFAULT</code> (default) – Specifies that the
   * question and the agent-generated answer are persisted to the session as a single
   * event. This value requires generateResponse to be true.</p> </li> <li> <p>
   * <code>NONE</code> – Specifies that the session is left unchanged.</p> </li>
   * </ul>
   */
  inline AgenticRetrieveMemoryPersistenceMode GetPersistenceMode() const { return m_persistenceMode; }
  inline bool PersistenceModeHasBeenSet() const { return m_persistenceModeHasBeenSet; }
  inline void SetPersistenceMode(AgenticRetrieveMemoryPersistenceMode value) {
    m_persistenceModeHasBeenSet = true;
    m_persistenceMode = value;
  }
  inline AgenticRetrieveMemoryConfiguration& WithPersistenceMode(AgenticRetrieveMemoryPersistenceMode value) {
    SetPersistenceMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the long-term memory configuration the agent can retrieve from. The
   * agent decides whether to retrieve and composes its own query. This field
   * currently accepts at most one entry.</p>
   */
  inline const Aws::Vector<AgenticRetrieveMemoryRetrievalConfig>& GetRetrievalConfigs() const { return m_retrievalConfigs; }
  inline bool RetrievalConfigsHasBeenSet() const { return m_retrievalConfigsHasBeenSet; }
  template <typename RetrievalConfigsT = Aws::Vector<AgenticRetrieveMemoryRetrievalConfig>>
  void SetRetrievalConfigs(RetrievalConfigsT&& value) {
    m_retrievalConfigsHasBeenSet = true;
    m_retrievalConfigs = std::forward<RetrievalConfigsT>(value);
  }
  template <typename RetrievalConfigsT = Aws::Vector<AgenticRetrieveMemoryRetrievalConfig>>
  AgenticRetrieveMemoryConfiguration& WithRetrievalConfigs(RetrievalConfigsT&& value) {
    SetRetrievalConfigs(std::forward<RetrievalConfigsT>(value));
    return *this;
  }
  template <typename RetrievalConfigsT = AgenticRetrieveMemoryRetrievalConfig>
  AgenticRetrieveMemoryConfiguration& AddRetrievalConfigs(RetrievalConfigsT&& value) {
    m_retrievalConfigsHasBeenSet = true;
    m_retrievalConfigs.emplace_back(std::forward<RetrievalConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The short-term memory session whose history is restored for this retrieval.
   * To persist the agent-generated answer to the session, omit persistenceMode or
   * set it to DEFAULT. To leave the session unchanged, set persistenceMode to NONE.
   * Supply session history through the existing messages parameter or through
   * short-term memory, but not both.</p>
   */
  inline const AgenticRetrieveMemorySessionBinding& GetSessionBinding() const { return m_sessionBinding; }
  inline bool SessionBindingHasBeenSet() const { return m_sessionBindingHasBeenSet; }
  template <typename SessionBindingT = AgenticRetrieveMemorySessionBinding>
  void SetSessionBinding(SessionBindingT&& value) {
    m_sessionBindingHasBeenSet = true;
    m_sessionBinding = std::forward<SessionBindingT>(value);
  }
  template <typename SessionBindingT = AgenticRetrieveMemorySessionBinding>
  AgenticRetrieveMemoryConfiguration& WithSessionBinding(SessionBindingT&& value) {
    SetSessionBinding(std::forward<SessionBindingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  AgenticRetrieveMemoryPersistenceMode m_persistenceMode{AgenticRetrieveMemoryPersistenceMode::NOT_SET};

  Aws::Vector<AgenticRetrieveMemoryRetrievalConfig> m_retrievalConfigs;

  AgenticRetrieveMemorySessionBinding m_sessionBinding;
  bool m_memoryIdHasBeenSet = false;
  bool m_persistenceModeHasBeenSet = false;
  bool m_retrievalConfigsHasBeenSet = false;
  bool m_sessionBindingHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
