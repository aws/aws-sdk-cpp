/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/IndexedKey.h>
#include <aws/bedrock-agentcore-control/model/ModifyMemoryStrategies.h>
#include <aws/bedrock-agentcore-control/model/NamespaceKeyEntry.h>
#include <aws/bedrock-agentcore-control/model/StreamDeliveryResources.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateMemoryRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateMemoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMemory"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A client token is used for keeping track of idempotent requests. It can
   * contain a session id which can be around 250 chars, combined with a unique AWS
   * identifier.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateMemoryRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the memory to update.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  UpdateMemoryRequest& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the AgentCore Memory resource.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateMemoryRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days after which memory events will expire, between 7 and 365
   * days.</p>
   */
  inline int GetEventExpiryDuration() const { return m_eventExpiryDuration; }
  inline bool EventExpiryDurationHasBeenSet() const { return m_eventExpiryDurationHasBeenSet; }
  inline void SetEventExpiryDuration(int value) {
    m_eventExpiryDurationHasBeenSet = true;
    m_eventExpiryDuration = value;
  }
  inline UpdateMemoryRequest& WithEventExpiryDuration(int value) {
    SetEventExpiryDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that provides permissions for the AgentCore Memory
   * resource.</p>
   */
  inline const Aws::String& GetMemoryExecutionRoleArn() const { return m_memoryExecutionRoleArn; }
  inline bool MemoryExecutionRoleArnHasBeenSet() const { return m_memoryExecutionRoleArnHasBeenSet; }
  template <typename MemoryExecutionRoleArnT = Aws::String>
  void SetMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) {
    m_memoryExecutionRoleArnHasBeenSet = true;
    m_memoryExecutionRoleArn = std::forward<MemoryExecutionRoleArnT>(value);
  }
  template <typename MemoryExecutionRoleArnT = Aws::String>
  UpdateMemoryRequest& WithMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) {
    SetMemoryExecutionRoleArn(std::forward<MemoryExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory strategies to add, modify, or delete.</p>
   */
  inline const ModifyMemoryStrategies& GetMemoryStrategies() const { return m_memoryStrategies; }
  inline bool MemoryStrategiesHasBeenSet() const { return m_memoryStrategiesHasBeenSet; }
  template <typename MemoryStrategiesT = ModifyMemoryStrategies>
  void SetMemoryStrategies(MemoryStrategiesT&& value) {
    m_memoryStrategiesHasBeenSet = true;
    m_memoryStrategies = std::forward<MemoryStrategiesT>(value);
  }
  template <typename MemoryStrategiesT = ModifyMemoryStrategies>
  UpdateMemoryRequest& WithMemoryStrategies(MemoryStrategiesT&& value) {
    SetMemoryStrategies(std::forward<MemoryStrategiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional metadata keys to index. Previously indexed keys cannot be
   * removed.</p>
   */
  inline const Aws::Vector<IndexedKey>& GetAddIndexedKeys() const { return m_addIndexedKeys; }
  inline bool AddIndexedKeysHasBeenSet() const { return m_addIndexedKeysHasBeenSet; }
  template <typename AddIndexedKeysT = Aws::Vector<IndexedKey>>
  void SetAddIndexedKeys(AddIndexedKeysT&& value) {
    m_addIndexedKeysHasBeenSet = true;
    m_addIndexedKeys = std::forward<AddIndexedKeysT>(value);
  }
  template <typename AddIndexedKeysT = Aws::Vector<IndexedKey>>
  UpdateMemoryRequest& WithAddIndexedKeys(AddIndexedKeysT&& value) {
    SetAddIndexedKeys(std::forward<AddIndexedKeysT>(value));
    return *this;
  }
  template <typename AddIndexedKeysT = IndexedKey>
  UpdateMemoryRequest& AddAddIndexedKeys(AddIndexedKeysT&& value) {
    m_addIndexedKeysHasBeenSet = true;
    m_addIndexedKeys.emplace_back(std::forward<AddIndexedKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace variable key definitions with validation rules for this memory.
   * This value fully replaces the existing set — any key you omit is removed. Any
   * referenced <code>namespaceKey</code> omission will throw
   * ValidationException.</p>
   */
  inline const Aws::Vector<NamespaceKeyEntry>& GetNamespaceKeys() const { return m_namespaceKeys; }
  inline bool NamespaceKeysHasBeenSet() const { return m_namespaceKeysHasBeenSet; }
  template <typename NamespaceKeysT = Aws::Vector<NamespaceKeyEntry>>
  void SetNamespaceKeys(NamespaceKeysT&& value) {
    m_namespaceKeysHasBeenSet = true;
    m_namespaceKeys = std::forward<NamespaceKeysT>(value);
  }
  template <typename NamespaceKeysT = Aws::Vector<NamespaceKeyEntry>>
  UpdateMemoryRequest& WithNamespaceKeys(NamespaceKeysT&& value) {
    SetNamespaceKeys(std::forward<NamespaceKeysT>(value));
    return *this;
  }
  template <typename NamespaceKeysT = NamespaceKeyEntry>
  UpdateMemoryRequest& AddNamespaceKeys(NamespaceKeysT&& value) {
    m_namespaceKeysHasBeenSet = true;
    m_namespaceKeys.emplace_back(std::forward<NamespaceKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for streaming memory record data to external resources.</p>
   */
  inline const StreamDeliveryResources& GetStreamDeliveryResources() const { return m_streamDeliveryResources; }
  inline bool StreamDeliveryResourcesHasBeenSet() const { return m_streamDeliveryResourcesHasBeenSet; }
  template <typename StreamDeliveryResourcesT = StreamDeliveryResources>
  void SetStreamDeliveryResources(StreamDeliveryResourcesT&& value) {
    m_streamDeliveryResourcesHasBeenSet = true;
    m_streamDeliveryResources = std::forward<StreamDeliveryResourcesT>(value);
  }
  template <typename StreamDeliveryResourcesT = StreamDeliveryResources>
  UpdateMemoryRequest& WithStreamDeliveryResources(StreamDeliveryResourcesT&& value) {
    SetStreamDeliveryResources(std::forward<StreamDeliveryResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_memoryId;

  Aws::String m_description;

  int m_eventExpiryDuration{0};

  Aws::String m_memoryExecutionRoleArn;

  ModifyMemoryStrategies m_memoryStrategies;

  Aws::Vector<IndexedKey> m_addIndexedKeys;

  Aws::Vector<NamespaceKeyEntry> m_namespaceKeys;

  StreamDeliveryResources m_streamDeliveryResources;
  bool m_clientTokenHasBeenSet = true;
  bool m_memoryIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_eventExpiryDurationHasBeenSet = false;
  bool m_memoryExecutionRoleArnHasBeenSet = false;
  bool m_memoryStrategiesHasBeenSet = false;
  bool m_addIndexedKeysHasBeenSet = false;
  bool m_namespaceKeysHasBeenSet = false;
  bool m_streamDeliveryResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
