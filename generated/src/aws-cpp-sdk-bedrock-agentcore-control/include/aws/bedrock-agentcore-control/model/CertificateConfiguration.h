/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/S3CertificateConfiguration.h>
#include <aws/bedrock-agentcore-control/model/SecretsManagerCertificateConfiguration.h>

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
 * <p>A reference to a private certificate authority (CA) certificate that the
 * gateway uses to verify TLS connections to the target endpoint. Use this when the
 * target presents a certificate issued by a private CA that is not trusted by
 * default. Specify exactly one certificate source. The configuration is a
 * reference only and never contains the certificate content.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CertificateConfiguration">AWS
 * API Reference</a></p>
 */
class CertificateConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CertificateConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location of the PEM-encoded private CA certificate.</p>
   */
  inline const S3CertificateConfiguration& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3CertificateConfiguration>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3CertificateConfiguration>
  CertificateConfiguration& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Secrets Manager location of the PEM-encoded private
   * CA certificate.</p>
   */
  inline const SecretsManagerCertificateConfiguration& GetSecretsManager() const { return m_secretsManager; }
  inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
  template <typename SecretsManagerT = SecretsManagerCertificateConfiguration>
  void SetSecretsManager(SecretsManagerT&& value) {
    m_secretsManagerHasBeenSet = true;
    m_secretsManager = std::forward<SecretsManagerT>(value);
  }
  template <typename SecretsManagerT = SecretsManagerCertificateConfiguration>
  CertificateConfiguration& WithSecretsManager(SecretsManagerT&& value) {
    SetSecretsManager(std::forward<SecretsManagerT>(value));
    return *this;
  }
  ///@}
 private:
  S3CertificateConfiguration m_s3;

  SecretsManagerCertificateConfiguration m_secretsManager;
  bool m_s3HasBeenSet = false;
  bool m_secretsManagerHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
