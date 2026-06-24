/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessManagedMemoryStrategyType.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for managed memory creation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessManagedMemoryConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessManagedMemoryConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessManagedMemoryConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessManagedMemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessManagedMemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the managed AgentCore Memory resource. Read-only on Get, ignored
   * on Create/Update input.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  HarnessManagedMemoryConfiguration& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Strategy types to enable. Defaults to [SEMANTIC, SUMMARIZATION].</p>
   */
  inline const Aws::Vector<HarnessManagedMemoryStrategyType>& GetStrategies() const { return m_strategies; }
  inline bool StrategiesHasBeenSet() const { return m_strategiesHasBeenSet; }
  template <typename StrategiesT = Aws::Vector<HarnessManagedMemoryStrategyType>>
  void SetStrategies(StrategiesT&& value) {
    m_strategiesHasBeenSet = true;
    m_strategies = std::forward<StrategiesT>(value);
  }
  template <typename StrategiesT = Aws::Vector<HarnessManagedMemoryStrategyType>>
  HarnessManagedMemoryConfiguration& WithStrategies(StrategiesT&& value) {
    SetStrategies(std::forward<StrategiesT>(value));
    return *this;
  }
  inline HarnessManagedMemoryConfiguration& AddStrategies(HarnessManagedMemoryStrategyType value) {
    m_strategiesHasBeenSet = true;
    m_strategies.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event retention in days. Defaults to 30.</p>
   */
  inline int GetEventExpiryDuration() const { return m_eventExpiryDuration; }
  inline bool EventExpiryDurationHasBeenSet() const { return m_eventExpiryDurationHasBeenSet; }
  inline void SetEventExpiryDuration(int value) {
    m_eventExpiryDurationHasBeenSet = true;
    m_eventExpiryDuration = value;
  }
  inline HarnessManagedMemoryConfiguration& WithEventExpiryDuration(int value) {
    SetEventExpiryDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-managed KMS key. Defaults to AWS-owned key. Not updatable after
   * creation.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  HarnessManagedMemoryConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<HarnessManagedMemoryStrategyType> m_strategies;

  int m_eventExpiryDuration{0};

  Aws::String m_encryptionKeyArn;
  bool m_arnHasBeenSet = false;
  bool m_strategiesHasBeenSet = false;
  bool m_eventExpiryDurationHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
