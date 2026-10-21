/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/TlsMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElastiCache {
namespace Model {

/**
 * <p>The TLS configuration for connecting to the source during
 * migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/SourceTlsConfiguration">AWS
 * API Reference</a></p>
 */
class SourceTlsConfiguration {
 public:
  AWS_ELASTICACHE_API SourceTlsConfiguration() = default;
  AWS_ELASTICACHE_API SourceTlsConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICACHE_API SourceTlsConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The TLS mode to use when connecting to the source. Valid values are
   * <code>none</code> and <code>verify-ca</code>.</p>
   */
  inline TlsMode GetSourceTlsMode() const { return m_sourceTlsMode; }
  inline bool SourceTlsModeHasBeenSet() const { return m_sourceTlsModeHasBeenSet; }
  inline void SetSourceTlsMode(TlsMode value) {
    m_sourceTlsModeHasBeenSet = true;
    m_sourceTlsMode = value;
  }
  inline SourceTlsConfiguration& WithSourceTlsMode(TlsMode value) {
    SetSourceTlsMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS certificate used to verify the identity of the source during
   * migration.</p>
   */
  inline const Aws::String& GetSourceTlsCertificate() const { return m_sourceTlsCertificate; }
  inline bool SourceTlsCertificateHasBeenSet() const { return m_sourceTlsCertificateHasBeenSet; }
  template <typename SourceTlsCertificateT = Aws::String>
  void SetSourceTlsCertificate(SourceTlsCertificateT&& value) {
    m_sourceTlsCertificateHasBeenSet = true;
    m_sourceTlsCertificate = std::forward<SourceTlsCertificateT>(value);
  }
  template <typename SourceTlsCertificateT = Aws::String>
  SourceTlsConfiguration& WithSourceTlsCertificate(SourceTlsCertificateT&& value) {
    SetSourceTlsCertificate(std::forward<SourceTlsCertificateT>(value));
    return *this;
  }
  ///@}
 private:
  TlsMode m_sourceTlsMode{TlsMode::NOT_SET};

  Aws::String m_sourceTlsCertificate;
  bool m_sourceTlsModeHasBeenSet = false;
  bool m_sourceTlsCertificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
