/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/SecretManagerAuthConfig.h>

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
 * <p>The authentication configuration for connecting to the source during
 * migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/SourceAuthenticationConfiguration">AWS
 * API Reference</a></p>
 */
class SourceAuthenticationConfiguration {
 public:
  AWS_ELASTICACHE_API SourceAuthenticationConfiguration() = default;
  AWS_ELASTICACHE_API SourceAuthenticationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICACHE_API SourceAuthenticationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Secrets Manager configuration used for authenticating with the source
   * during migration.</p>
   */
  inline const SecretManagerAuthConfig& GetSecretManagerConfig() const { return m_secretManagerConfig; }
  inline bool SecretManagerConfigHasBeenSet() const { return m_secretManagerConfigHasBeenSet; }
  template <typename SecretManagerConfigT = SecretManagerAuthConfig>
  void SetSecretManagerConfig(SecretManagerConfigT&& value) {
    m_secretManagerConfigHasBeenSet = true;
    m_secretManagerConfig = std::forward<SecretManagerConfigT>(value);
  }
  template <typename SecretManagerConfigT = SecretManagerAuthConfig>
  SourceAuthenticationConfiguration& WithSecretManagerConfig(SecretManagerConfigT&& value) {
    SetSecretManagerConfig(std::forward<SecretManagerConfigT>(value));
    return *this;
  }
  ///@}
 private:
  SecretManagerAuthConfig m_secretManagerConfig;
  bool m_secretManagerConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
