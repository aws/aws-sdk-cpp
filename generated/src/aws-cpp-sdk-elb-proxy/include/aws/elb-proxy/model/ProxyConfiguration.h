/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ConfigurationArchive.h>
#include <aws/elb-proxy/model/ConfigurationFile.h>

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
 * <p>The configuration for a proxy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyConfiguration">AWS
 * API Reference</a></p>
 */
class ProxyConfiguration {
 public:
  AWS_ELBPROXY_API ProxyConfiguration() = default;
  AWS_ELBPROXY_API ProxyConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The configuration file for the proxy.</p>
   */
  inline const ConfigurationFile& GetConfigurationFile() const { return m_configurationFile; }
  inline bool ConfigurationFileHasBeenSet() const { return m_configurationFileHasBeenSet; }
  template <typename ConfigurationFileT = ConfigurationFile>
  void SetConfigurationFile(ConfigurationFileT&& value) {
    m_configurationFileHasBeenSet = true;
    m_configurationFile = std::forward<ConfigurationFileT>(value);
  }
  template <typename ConfigurationFileT = ConfigurationFile>
  ProxyConfiguration& WithConfigurationFile(ConfigurationFileT&& value) {
    SetConfigurationFile(std::forward<ConfigurationFileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration archive for the proxy. This is a bundle of the files
   * referenced by the configuration file.</p>
   */
  inline const ConfigurationArchive& GetConfigurationArchive() const { return m_configurationArchive; }
  inline bool ConfigurationArchiveHasBeenSet() const { return m_configurationArchiveHasBeenSet; }
  template <typename ConfigurationArchiveT = ConfigurationArchive>
  void SetConfigurationArchive(ConfigurationArchiveT&& value) {
    m_configurationArchiveHasBeenSet = true;
    m_configurationArchive = std::forward<ConfigurationArchiveT>(value);
  }
  template <typename ConfigurationArchiveT = ConfigurationArchive>
  ProxyConfiguration& WithConfigurationArchive(ConfigurationArchiveT&& value) {
    SetConfigurationArchive(std::forward<ConfigurationArchiveT>(value));
    return *this;
  }
  ///@}
 private:
  ConfigurationFile m_configurationFile;

  ConfigurationArchive m_configurationArchive;
  bool m_configurationFileHasBeenSet = false;
  bool m_configurationArchiveHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
