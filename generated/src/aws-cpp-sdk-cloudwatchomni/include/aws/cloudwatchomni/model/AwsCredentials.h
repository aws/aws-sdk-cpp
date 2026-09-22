/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>A set of temporary AWS credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AwsCredentials">AWS
 * API Reference</a></p>
 */
class AwsCredentials {
 public:
  AWS_CLOUDWATCHOMNI_API AwsCredentials() = default;
  AWS_CLOUDWATCHOMNI_API AwsCredentials(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AwsCredentials& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The AWS access key ID.</p>
   */
  inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
  inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
  template <typename AccessKeyIdT = Aws::String>
  void SetAccessKeyId(AccessKeyIdT&& value) {
    m_accessKeyIdHasBeenSet = true;
    m_accessKeyId = std::forward<AccessKeyIdT>(value);
  }
  template <typename AccessKeyIdT = Aws::String>
  AwsCredentials& WithAccessKeyId(AccessKeyIdT&& value) {
    SetAccessKeyId(std::forward<AccessKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS secret access key.</p>
   */
  inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
  inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
  template <typename SecretAccessKeyT = Aws::String>
  void SetSecretAccessKey(SecretAccessKeyT&& value) {
    m_secretAccessKeyHasBeenSet = true;
    m_secretAccessKey = std::forward<SecretAccessKeyT>(value);
  }
  template <typename SecretAccessKeyT = Aws::String>
  AwsCredentials& WithSecretAccessKey(SecretAccessKeyT&& value) {
    SetSecretAccessKey(std::forward<SecretAccessKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS session token.</p>
   */
  inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
  inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
  template <typename SessionTokenT = Aws::String>
  void SetSessionToken(SessionTokenT&& value) {
    m_sessionTokenHasBeenSet = true;
    m_sessionToken = std::forward<SessionTokenT>(value);
  }
  template <typename SessionTokenT = Aws::String>
  AwsCredentials& WithSessionToken(SessionTokenT&& value) {
    SetSessionToken(std::forward<SessionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the credentials expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
  inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
  template <typename ExpirationT = Aws::Utils::DateTime>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Aws::Utils::DateTime>
  AwsCredentials& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessKeyId;

  Aws::String m_secretAccessKey;

  Aws::String m_sessionToken;

  Aws::Utils::DateTime m_expiration{};
  bool m_accessKeyIdHasBeenSet = false;
  bool m_secretAccessKeyHasBeenSet = false;
  bool m_sessionTokenHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
