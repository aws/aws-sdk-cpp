/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/TrustStore.h>

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
 * <p>The mutual TLS authentication configuration for an ingress
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/TlsAuthConfiguration">AWS
 * API Reference</a></p>
 */
class TlsAuthConfiguration {
 public:
  AWS_MAILMANAGER_API TlsAuthConfiguration() = default;
  AWS_MAILMANAGER_API TlsAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API TlsAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The trust store configuration for mutual TLS authentication.</p>
   */
  inline const TrustStore& GetTrustStore() const { return m_trustStore; }
  inline bool TrustStoreHasBeenSet() const { return m_trustStoreHasBeenSet; }
  template <typename TrustStoreT = TrustStore>
  void SetTrustStore(TrustStoreT&& value) {
    m_trustStoreHasBeenSet = true;
    m_trustStore = std::forward<TrustStoreT>(value);
  }
  template <typename TrustStoreT = TrustStore>
  TlsAuthConfiguration& WithTrustStore(TrustStoreT&& value) {
    SetTrustStore(std::forward<TrustStoreT>(value));
    return *this;
  }
  ///@}
 private:
  TrustStore m_trustStore;
  bool m_trustStoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
