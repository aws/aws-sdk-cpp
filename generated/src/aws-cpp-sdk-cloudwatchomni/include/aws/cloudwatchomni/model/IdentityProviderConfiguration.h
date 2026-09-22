/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IdentityCenterConfiguration.h>
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
 * <p>Identity provider configuration for domain authentication. Contains
 * provider-specific configuration blocks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/IdentityProviderConfiguration">AWS
 * API Reference</a></p>
 */
class IdentityProviderConfiguration {
 public:
  AWS_CLOUDWATCHOMNI_API IdentityProviderConfiguration() = default;
  AWS_CLOUDWATCHOMNI_API IdentityProviderConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API IdentityProviderConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Identity Center configuration. Required when identityProviders includes
   * IDC.</p>
   */
  inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
  inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
  template <typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
  void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) {
    m_identityCenterConfigurationHasBeenSet = true;
    m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value);
  }
  template <typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
  IdentityProviderConfiguration& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) {
    SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  IdentityCenterConfiguration m_identityCenterConfiguration;
  bool m_identityCenterConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
