/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SecretsManagerLocation.h>

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
 * <p>The location from which to retrieve a certificate.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CertificateLocation">AWS
 * API Reference</a></p>
 */
class CertificateLocation {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CertificateLocation() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CertificateLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CertificateLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Secrets Manager location of the certificate.</p>
   */
  inline const SecretsManagerLocation& GetSecretsManager() const { return m_secretsManager; }
  inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
  template <typename SecretsManagerT = SecretsManagerLocation>
  void SetSecretsManager(SecretsManagerT&& value) {
    m_secretsManagerHasBeenSet = true;
    m_secretsManager = std::forward<SecretsManagerT>(value);
  }
  template <typename SecretsManagerT = SecretsManagerLocation>
  CertificateLocation& WithSecretsManager(SecretsManagerT&& value) {
    SetSecretsManager(std::forward<SecretsManagerT>(value));
    return *this;
  }
  ///@}
 private:
  SecretsManagerLocation m_secretsManager;
  bool m_secretsManagerHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
