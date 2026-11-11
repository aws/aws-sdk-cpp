/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/DataSync_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DataSync {
namespace Model {

/**
 * <p>Specifies configuration information for a DataSync-managed secret, such as an
 * authentication token or set of credentials that DataSync uses to access a
 * specific transfer location. DataSync uses the default Amazon Web
 * Services-managed KMS key to encrypt this secret in Secrets
 * Manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ManagedSecretConfig">AWS
 * API Reference</a></p>
 */
class ManagedSecretConfig {
 public:
  AWS_DATASYNC_API ManagedSecretConfig() = default;
  AWS_DATASYNC_API ManagedSecretConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API ManagedSecretConfig& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specifies the ARN for an Secrets Manager secret.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  ManagedSecretConfig& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
