/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>The configuration metadata for a proxy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ConfigurationMetadata">AWS
 * API Reference</a></p>
 */
class ConfigurationMetadata {
 public:
  AWS_ELBPROXY_API ConfigurationMetadata() = default;
  AWS_ELBPROXY_API ConfigurationMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ConfigurationMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The SHA-256 hash of the configuration file.</p>
   */
  inline const Aws::String& GetConfigFileHash() const { return m_configFileHash; }
  inline bool ConfigFileHashHasBeenSet() const { return m_configFileHashHasBeenSet; }
  template <typename ConfigFileHashT = Aws::String>
  void SetConfigFileHash(ConfigFileHashT&& value) {
    m_configFileHashHasBeenSet = true;
    m_configFileHash = std::forward<ConfigFileHashT>(value);
  }
  template <typename ConfigFileHashT = Aws::String>
  ConfigurationMetadata& WithConfigFileHash(ConfigFileHashT&& value) {
    SetConfigFileHash(std::forward<ConfigFileHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA-256 hash of the configuration archive. This value is absent when the
   * proxy does not have a configuration archive.</p>
   */
  inline const Aws::String& GetConfigArchiveHash() const { return m_configArchiveHash; }
  inline bool ConfigArchiveHashHasBeenSet() const { return m_configArchiveHashHasBeenSet; }
  template <typename ConfigArchiveHashT = Aws::String>
  void SetConfigArchiveHash(ConfigArchiveHashT&& value) {
    m_configArchiveHashHasBeenSet = true;
    m_configArchiveHash = std::forward<ConfigArchiveHashT>(value);
  }
  template <typename ConfigArchiveHashT = Aws::String>
  ConfigurationMetadata& WithConfigArchiveHash(ConfigArchiveHashT&& value) {
    SetConfigArchiveHash(std::forward<ConfigArchiveHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the configuration file was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetConfigFileLastUpdatedAt() const { return m_configFileLastUpdatedAt; }
  inline bool ConfigFileLastUpdatedAtHasBeenSet() const { return m_configFileLastUpdatedAtHasBeenSet; }
  template <typename ConfigFileLastUpdatedAtT = Aws::Utils::DateTime>
  void SetConfigFileLastUpdatedAt(ConfigFileLastUpdatedAtT&& value) {
    m_configFileLastUpdatedAtHasBeenSet = true;
    m_configFileLastUpdatedAt = std::forward<ConfigFileLastUpdatedAtT>(value);
  }
  template <typename ConfigFileLastUpdatedAtT = Aws::Utils::DateTime>
  ConfigurationMetadata& WithConfigFileLastUpdatedAt(ConfigFileLastUpdatedAtT&& value) {
    SetConfigFileLastUpdatedAt(std::forward<ConfigFileLastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the configuration archive was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetConfigArchiveLastUpdatedAt() const { return m_configArchiveLastUpdatedAt; }
  inline bool ConfigArchiveLastUpdatedAtHasBeenSet() const { return m_configArchiveLastUpdatedAtHasBeenSet; }
  template <typename ConfigArchiveLastUpdatedAtT = Aws::Utils::DateTime>
  void SetConfigArchiveLastUpdatedAt(ConfigArchiveLastUpdatedAtT&& value) {
    m_configArchiveLastUpdatedAtHasBeenSet = true;
    m_configArchiveLastUpdatedAt = std::forward<ConfigArchiveLastUpdatedAtT>(value);
  }
  template <typename ConfigArchiveLastUpdatedAtT = Aws::Utils::DateTime>
  ConfigurationMetadata& WithConfigArchiveLastUpdatedAt(ConfigArchiveLastUpdatedAtT&& value) {
    SetConfigArchiveLastUpdatedAt(std::forward<ConfigArchiveLastUpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_configFileHash;

  Aws::String m_configArchiveHash;

  Aws::Utils::DateTime m_configFileLastUpdatedAt{};

  Aws::Utils::DateTime m_configArchiveLastUpdatedAt{};
  bool m_configFileHashHasBeenSet = false;
  bool m_configArchiveHashHasBeenSet = false;
  bool m_configFileLastUpdatedAtHasBeenSet = false;
  bool m_configArchiveLastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
