/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/EncryptionKeyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>Specifies the key configuration for a user pool. Contains settings for
 * encryption keys used to secure user pool data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/KeyConfigurationType">AWS
 * API Reference</a></p>
 */
class KeyConfigurationType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API KeyConfigurationType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API KeyConfigurationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API KeyConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of encryption key used for the user pool.</p> <dl>
   * <dt>AWS_OWNED_KEY</dt> <dd> <p>A key owned by Amazon Web Services in Key
   * Management Service.</p> </dd> <dt>CUSTOMER_MANAGED_KEY</dt> <dd> <p>A key
   * managed by the customer in Key Management Service. You must use a multi-region
   * key to enable multi-region replication for a user pool.</p> </dd> </dl>
   */
  inline EncryptionKeyType GetKeyType() const { return m_keyType; }
  inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
  inline void SetKeyType(EncryptionKeyType value) {
    m_keyTypeHasBeenSet = true;
    m_keyType = value;
  }
  inline KeyConfigurationType& WithKeyType(EncryptionKeyType value) {
    SetKeyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used for encryption. If not
   * specified, Amazon Web Services managed keys are used.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  KeyConfigurationType& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionKeyType m_keyType{EncryptionKeyType::NOT_SET};

  Aws::String m_kmsKeyArn;
  bool m_keyTypeHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
