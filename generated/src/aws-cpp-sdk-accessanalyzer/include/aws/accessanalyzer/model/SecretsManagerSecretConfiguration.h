/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The configuration for a Secrets Manager secret. For more information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_CreateSecret.html">CreateSecret</a>.</p>
   * <p>You can propose a configuration for a new secret or an existing secret that
   * you own by specifying the secret policy and optional KMS encryption key. If the
   * configuration is for an existing secret and you do not specify the secret
   * policy, the access preview uses the existing policy for the secret. If the
   * access preview is for a new resource and you do not specify the policy, the
   * access preview assumes a secret without a policy. To propose deletion of an
   * existing policy, you can specify an empty string. If the proposed configuration
   * is for a new secret and you do not specify the KMS key ID, the access preview
   * uses the Amazon Web Services managed key <code>aws/secretsmanager</code>. If you
   * specify an empty string for the KMS key ID, the access preview uses the Amazon
   * Web Services managed key of the Amazon Web Services account. For more
   * information about secret policy limits, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_limits.html">Quotas
   * for Secrets Manager.</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SecretsManagerSecretConfiguration">AWS
   * API Reference</a></p>
   */
  class SecretsManagerSecretConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API SecretsManagerSecretConfiguration() = default;
    AWS_ACCESSANALYZER_API SecretsManagerSecretConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API SecretsManagerSecretConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proposed ARN, key ID, or alias of the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    SecretsManagerSecretConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline const Aws::String& GetSecretPolicy() const { return m_secretPolicy; }
    inline bool SecretPolicyHasBeenSet() const { return m_secretPolicyHasBeenSet; }
    template<typename SecretPolicyT = Aws::String>
    void SetSecretPolicy(SecretPolicyT&& value) { m_secretPolicyHasBeenSet = true; m_secretPolicy = std::forward<SecretPolicyT>(value); }
    template<typename SecretPolicyT = Aws::String>
    SecretsManagerSecretConfiguration& WithSecretPolicy(SecretPolicyT&& value) { SetSecretPolicy(std::forward<SecretPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_secretPolicy;
    bool m_secretPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
