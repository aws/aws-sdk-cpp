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
   * uses the default CMK of the AWS account. If you specify an empty string for the
   * KMS key ID, the access preview uses the default CMK of the AWS account. For more
   * information about secret policy limits, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_limits.html">Quotas
   * for AWS Secrets Manager.</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SecretsManagerSecretConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API SecretsManagerSecretConfiguration
  {
  public:
    SecretsManagerSecretConfiguration();
    SecretsManagerSecretConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SecretsManagerSecretConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline SecretsManagerSecretConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline SecretsManagerSecretConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The proposed ARN, key ID, or alias of the AWS KMS customer master key
     * (CMK).</p>
     */
    inline SecretsManagerSecretConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline const Aws::String& GetSecretPolicy() const{ return m_secretPolicy; }

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline bool SecretPolicyHasBeenSet() const { return m_secretPolicyHasBeenSet; }

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline void SetSecretPolicy(const Aws::String& value) { m_secretPolicyHasBeenSet = true; m_secretPolicy = value; }

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline void SetSecretPolicy(Aws::String&& value) { m_secretPolicyHasBeenSet = true; m_secretPolicy = std::move(value); }

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline void SetSecretPolicy(const char* value) { m_secretPolicyHasBeenSet = true; m_secretPolicy.assign(value); }

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline SecretsManagerSecretConfiguration& WithSecretPolicy(const Aws::String& value) { SetSecretPolicy(value); return *this;}

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline SecretsManagerSecretConfiguration& WithSecretPolicy(Aws::String&& value) { SetSecretPolicy(std::move(value)); return *this;}

    /**
     * <p>The proposed resource policy defining who can access or manage the
     * secret.</p>
     */
    inline SecretsManagerSecretConfiguration& WithSecretPolicy(const char* value) { SetSecretPolicy(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_secretPolicy;
    bool m_secretPolicyHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
