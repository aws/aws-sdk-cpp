/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/KmsKeySourceType.h>

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
 * <p>Contains the private key source configuration for a JWT client
 * assertion.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PrivateKeySource">AWS
 * API Reference</a></p>
 */
class PrivateKeySource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PrivateKeySource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PrivateKeySource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PrivateKeySource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The KMS key source for the JWT client assertion.</p>
   */
  inline const KmsKeySourceType& GetKmsKeySource() const { return m_kmsKeySource; }
  inline bool KmsKeySourceHasBeenSet() const { return m_kmsKeySourceHasBeenSet; }
  template <typename KmsKeySourceT = KmsKeySourceType>
  void SetKmsKeySource(KmsKeySourceT&& value) {
    m_kmsKeySourceHasBeenSet = true;
    m_kmsKeySource = std::forward<KmsKeySourceT>(value);
  }
  template <typename KmsKeySourceT = KmsKeySourceType>
  PrivateKeySource& WithKmsKeySource(KmsKeySourceT&& value) {
    SetKmsKeySource(std::forward<KmsKeySourceT>(value));
    return *this;
  }
  ///@}
 private:
  KmsKeySourceType m_kmsKeySource;
  bool m_kmsKeySourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
