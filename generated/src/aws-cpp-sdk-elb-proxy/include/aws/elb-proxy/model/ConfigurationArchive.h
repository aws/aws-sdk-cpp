/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

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
 * <p>The configuration archive for a proxy. This is a bundle of the files
 * referenced by the configuration file.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ConfigurationArchive">AWS
 * API Reference</a></p>
 */
class ConfigurationArchive {
 public:
  AWS_ELBPROXY_API ConfigurationArchive() = default;
  AWS_ELBPROXY_API ConfigurationArchive(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ConfigurationArchive& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The contents of the configuration archive.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetConfigurationBytes() const { return m_configurationBytes; }
  inline bool ConfigurationBytesHasBeenSet() const { return m_configurationBytesHasBeenSet; }
  template <typename ConfigurationBytesT = Aws::Utils::CryptoBuffer>
  void SetConfigurationBytes(ConfigurationBytesT&& value) {
    m_configurationBytesHasBeenSet = true;
    m_configurationBytes = std::forward<ConfigurationBytesT>(value);
  }
  template <typename ConfigurationBytesT = Aws::Utils::CryptoBuffer>
  ConfigurationArchive& WithConfigurationBytes(ConfigurationBytesT&& value) {
    SetConfigurationBytes(std::forward<ConfigurationBytesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::CryptoBuffer m_configurationBytes{};
  bool m_configurationBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
