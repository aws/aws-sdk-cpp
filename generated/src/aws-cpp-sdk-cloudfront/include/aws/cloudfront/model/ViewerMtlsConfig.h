/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/TrustStoreConfig.h>
#include <aws/cloudfront/model/ViewerMtlsMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>A viewer mTLS configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ViewerMtlsConfig">AWS
 * API Reference</a></p>
 */
class ViewerMtlsConfig {
 public:
  AWS_CLOUDFRONT_API ViewerMtlsConfig() = default;
  AWS_CLOUDFRONT_API ViewerMtlsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API ViewerMtlsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The viewer mTLS mode.</p>
   */
  inline ViewerMtlsMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(ViewerMtlsMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline ViewerMtlsConfig& WithMode(ViewerMtlsMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store configuration associated with the viewer mTLS
   * configuration.</p>
   */
  inline const TrustStoreConfig& GetTrustStoreConfig() const { return m_trustStoreConfig; }
  inline bool TrustStoreConfigHasBeenSet() const { return m_trustStoreConfigHasBeenSet; }
  template <typename TrustStoreConfigT = TrustStoreConfig>
  void SetTrustStoreConfig(TrustStoreConfigT&& value) {
    m_trustStoreConfigHasBeenSet = true;
    m_trustStoreConfig = std::forward<TrustStoreConfigT>(value);
  }
  template <typename TrustStoreConfigT = TrustStoreConfig>
  ViewerMtlsConfig& WithTrustStoreConfig(TrustStoreConfigT&& value) {
    SetTrustStoreConfig(std::forward<TrustStoreConfigT>(value));
    return *this;
  }
  ///@}
 private:
  ViewerMtlsMode m_mode{ViewerMtlsMode::NOT_SET};
  bool m_modeHasBeenSet = false;

  TrustStoreConfig m_trustStoreConfig;
  bool m_trustStoreConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
