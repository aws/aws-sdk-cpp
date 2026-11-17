/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEncryptionMode.h>
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
 * <p>Contains the encryption mode and key configuration used to encrypt new Agent
 * Insights in an Agent Insight Store.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentInsightStoreEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class AgentInsightStoreEncryptionConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreEncryptionConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the encryption mode used to protect new Agent Insights.</p>
   */
  inline AgentInsightStoreEncryptionMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(AgentInsightStoreEncryptionMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline AgentInsightStoreEncryptionConfiguration& WithMode(AgentInsightStoreEncryptionMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon Resource Name (ARN) of the customer managed AWS KMS key
   * that you use to encrypt new Agent Insights. This field is required when
   * <code>mode</code> is <code>CUSTOMER_MANAGED_KMS</code> and cannot be specified
   * when <code>mode</code> is <code>AWS_OWNED_KMS_KEY</code>.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  AgentInsightStoreEncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  AgentInsightStoreEncryptionMode m_mode{AgentInsightStoreEncryptionMode::NOT_SET};

  Aws::String m_kmsKeyArn;
  bool m_modeHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
