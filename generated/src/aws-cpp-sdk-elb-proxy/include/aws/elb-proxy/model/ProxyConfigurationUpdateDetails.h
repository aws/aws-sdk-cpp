/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ConfigurationMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>Details about an update to a proxy's configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyConfigurationUpdateDetails">AWS
 * API Reference</a></p>
 */
class ProxyConfigurationUpdateDetails {
 public:
  AWS_ELBPROXY_API ProxyConfigurationUpdateDetails() = default;
  AWS_ELBPROXY_API ProxyConfigurationUpdateDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyConfigurationUpdateDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The configuration metadata for the configuration that was submitted with this
   * update.</p>
   */
  inline const ConfigurationMetadata& GetNewConfigurationMetadata() const { return m_newConfigurationMetadata; }
  inline bool NewConfigurationMetadataHasBeenSet() const { return m_newConfigurationMetadataHasBeenSet; }
  template <typename NewConfigurationMetadataT = ConfigurationMetadata>
  void SetNewConfigurationMetadata(NewConfigurationMetadataT&& value) {
    m_newConfigurationMetadataHasBeenSet = true;
    m_newConfigurationMetadata = std::forward<NewConfigurationMetadataT>(value);
  }
  template <typename NewConfigurationMetadataT = ConfigurationMetadata>
  ProxyConfigurationUpdateDetails& WithNewConfigurationMetadata(NewConfigurationMetadataT&& value) {
    SetNewConfigurationMetadata(std::forward<NewConfigurationMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  ConfigurationMetadata m_newConfigurationMetadata;
  bool m_newConfigurationMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
