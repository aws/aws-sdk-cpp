/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>The trust store used for mutual TLS authentication. It contains the
 * certificate authority (CA) certificates and optional certificate revocation list
 * (CRL).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/TrustStore">AWS
 * API Reference</a></p>
 */
class TrustStore {
 public:
  AWS_MAILMANAGER_API TrustStore() = default;
  AWS_MAILMANAGER_API TrustStore(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API TrustStore& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The PEM-encoded certificate authority (CA) certificates bundle for the trust
   * store.</p>
   */
  inline const Aws::String& GetCAContent() const { return m_cAContent; }
  inline bool CAContentHasBeenSet() const { return m_cAContentHasBeenSet; }
  template <typename CAContentT = Aws::String>
  void SetCAContent(CAContentT&& value) {
    m_cAContentHasBeenSet = true;
    m_cAContent = std::forward<CAContentT>(value);
  }
  template <typename CAContentT = Aws::String>
  TrustStore& WithCAContent(CAContentT&& value) {
    SetCAContent(std::forward<CAContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PEM-encoded certificate revocation lists (CRLs) for the trust store.
   * There can be one CRL per certificate authority (CA) in the trust store.</p>
   */
  inline const Aws::String& GetCrlContent() const { return m_crlContent; }
  inline bool CrlContentHasBeenSet() const { return m_crlContentHasBeenSet; }
  template <typename CrlContentT = Aws::String>
  void SetCrlContent(CrlContentT&& value) {
    m_crlContentHasBeenSet = true;
    m_crlContent = std::forward<CrlContentT>(value);
  }
  template <typename CrlContentT = Aws::String>
  TrustStore& WithCrlContent(CrlContentT&& value) {
    SetCrlContent(std::forward<CrlContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the trust store
   * contents.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  TrustStore& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cAContent;

  Aws::String m_crlContent;

  Aws::String m_kmsKeyArn;
  bool m_cAContentHasBeenSet = false;
  bool m_crlContentHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
