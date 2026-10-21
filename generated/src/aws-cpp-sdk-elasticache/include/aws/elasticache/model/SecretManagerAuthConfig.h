/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>

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
 * <p>Configuration for authenticating with the source using Secrets Manager during
 * migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/SecretManagerAuthConfig">AWS
 * API Reference</a></p>
 */
class SecretManagerAuthConfig {
 public:
  AWS_ELASTICACHE_API SecretManagerAuthConfig() = default;
  AWS_ELASTICACHE_API SecretManagerAuthConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICACHE_API SecretManagerAuthConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ARN of the secret in AWS Secrets Manager that contains the credentials
   * for authenticating with the source.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  SecretManagerAuthConfig& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
